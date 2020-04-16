#include <math.h>
#include <stdlib.h>
#include "point.h"

double calculate_steps(Point src, Point dest)
{
  return hypot((src.x - dest.x), (src.y - dest.y));
}

Point *get_closest_food(Point *food_points, int points_length, Point current_location)
{
  Point *closest_food_point = malloc(sizeof(Point));

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
