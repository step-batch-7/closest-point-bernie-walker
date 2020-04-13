#include <math.h>
#include "point.h"

double calculate_steps(Point src, Point dest)
{
  return hypot((src.x - dest.x), (src.y - dest.y));
}

void get_closest_food(Point *food_points, int points_length, Point current_location, Point *closest_food_location)
{
  double steps = calculate_steps(current_location, food_points[0]);
  *closest_food_location = food_points[0];

  for (int i = 1; i < points_length; i++)
  {
    double current_steps = calculate_steps(current_location, food_points[i]);

    if (current_steps < steps)
    {
      steps = current_steps;
      *closest_food_location = food_points[i];
    }
  }
}
