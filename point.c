#include "point.h"

int find_distance(int point1, int point2)
{
  return point1 > point2 ? (point1 - point2) : (point2 - point2);
}

int calculate_steps(Point *src, Point *dest)
{
  return find_distace(src->x, dest->x) + find_distace(src->y, dest->y);
}

void get_closest_food(Point *food_points, int points_length, Point current_location, Point *closest_food_location)
{
  int steps = calculate_steps(&current_location, &food_points[0]);
  *closest_food_location = food_points[0];

  for (int i = 1; i < points_length; i++)
  {
    int current_steps = calculate_steps(&current_location, &food_points[i]);

    if (current_steps > steps)
    {
      steps = current_steps;
      *closest_food_location = food_points[i];
    }
  }
}
