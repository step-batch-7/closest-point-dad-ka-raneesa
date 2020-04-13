/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/
#include <stdio.h>

typedef struct
{
  int x;
  int y;
} Point;

#define FOOD_POINTS {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}}
#define ORGANISM_LOCATIONS {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}}
#define LENGTH 5
#define MAX_DISTANCE 1000000.00
#define FOR(start, limit) for (int i = start; i < limit; i++)

double distance_of_points(Point point1, Point point2);
void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
