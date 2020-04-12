#include "point.h"

int find_distance(int point1, int point2)
{
  return point1 > point2 ? (point1 - point2) : (point2 - point2);
}

int calculate_steps(Point *src, Point *dest)
{
  return find_distace(src->x, dest->x) + find_distace(src->y, dest->y);
}
