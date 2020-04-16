#ifndef __POINT_H_
#define __POINT_H_

#define DEFAULT_FOOD_LOCATIONS                        \
  {                                                   \
    {18, 76}, {19, 66}, {89, 57}, {9, 71}, { 55, 38 } \
  }

#define DEFAULT_CURRENT_POINT \
  {                           \
    10, 94                    \
  }

#define DEFAULT_LENGTH 5

typedef struct
{
  int x;
  int y;
} Point;

double calculate_steps(Point, Point);

Point *get_closest_food(Point *, int, Point);

#endif
