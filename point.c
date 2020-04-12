#include "point.h"

int calculate_steps(int src, int dest)
{
  return src > dest ? (src - dest) : (dest - src);
}