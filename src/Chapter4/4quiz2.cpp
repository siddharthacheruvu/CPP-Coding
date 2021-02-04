#include <iostream>
#include "myconstants.h"
#include <math.h>

double calculateHeight(double initial_height, int t_seconds)
{
    double distanceFallen{};
    distanceFallen = constants::gravity*pow(t_seconds,2)/2;
    return initial_height - distanceFallen;
} 
void printHeight(double cur_height, int t_seconds)
{
    if (cur_height > 0)
    {
        std::cout << "At " << t_seconds << " seconds, the ball is at a height: " <<  cur_height << " meters\n";
    }else
    {
        std::cout << "At " << t_seconds << " seconds, the ball is on the ground.\n";
    }  
}
void calculateAndPrintHeight(double initialHeight, int t_seconds)
{
    double currentHeight{calculateHeight(initialHeight, t_seconds)};
    printHeight(currentHeight, t_seconds);
}


int main()
{
    std::cout << "Enter the height of tower in meters: ";
    double height{};
    std::cin >> height;
    
    calculateAndPrintHeight(height,0);
    calculateAndPrintHeight(height,1);
    calculateAndPrintHeight(height,2);
    calculateAndPrintHeight(height,3);
    calculateAndPrintHeight(height,4);
    calculateAndPrintHeight(height,5);

}