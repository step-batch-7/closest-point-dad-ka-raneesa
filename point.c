#include <math.h>
#include "point.h"

double distance_of_points(struct Point point1, struct Point point2)
{
  return 0;
}

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  double distance = 1000000.00;
  for (int i = 0; i < points_length; i++)
  {
    double distance_to_current_food = distance_of_points(current_location, food_points[i]);
    if (distance > distance_to_current_food)
    {
      distance = distance_to_current_food;
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
};
