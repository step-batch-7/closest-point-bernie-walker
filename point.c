#include <math.h>
#include <stdlib.h>
#include "point.h"

Point_ptr get_default_locations(void)
{
  Point_ptr default_locations = malloc(sizeof(Point) * 5);
  Point locations[5] = DEFAULT_FOOD_LOCATIONS;

  for (int i = 0; i < 5; i++)
  {
    default_locations[i] = locations[i];
  }

  return default_locations;
}

double calculate_steps(Point src, Point dest)
{
  return hypot((src.x - dest.x), (src.y - dest.y));
}

Point_ptr get_closest_food(Point_ptr food_points, int points_length, Point current_location)
{
  Point_ptr closest_food_point = malloc(sizeof(Point));

  double steps = calculate_steps(current_location, food_points[0]);
  *closest_food_point = food_points[0];

  for (int i = 1; i < points_length; i++)
  {
    double current_steps = calculate_steps(current_location, food_points[i]);

    if (current_steps < steps)
    {
      steps = current_steps;
      *closest_food_point = food_points[i];
    }
  }

  return closest_food_point;
}
