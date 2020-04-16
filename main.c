#include <stdio.h>
#include "point.h"

int main(void)
{
  Point_ptr food_locations = get_default_locations();
  Point current_point = DEFAULT_CURRENT_POINT;

  Point_ptr closest_point = get_closest_food(food_locations, DEFAULT_LENGTH, current_point);
  printf("Closet point is (%d, %d)\n", closest_point->x, closest_point->y);

  return 0;
}