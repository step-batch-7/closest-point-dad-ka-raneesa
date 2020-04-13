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

struct Point
{
  int x;
  int y;
};

#define FOOD_POINTS {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}}
#define ORGANISM_LOCATIONS {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}}
#define LENGTH 5

double distance_of_points(struct Point point1, struct Point point2);
void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location);
