#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    // Finding the widest gap between cars in a multi-lane road.
    // | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|
    // [-----CAR1------]
    //     [--CAR2-]           [-CAR5--]
    //     [---CAR3----]
    //         [---CAR4----]<->
    //                       ^Largest Gap
    
    int n = 10;
    vector <int> rear = {1, 2, 2, 3, 7};
    vector <int> front = {4, 3, 4, 5, 8};
    int maxgap = 0;
    int currFront = front[0];
    int i = 0;

    while (i < rear.size()){
        if (rear[i] <= currFront)
        {
            currFront = max(currFront, front[i]);
            i++;
        } else {
            maxgap = max(maxgap, rear[i] - currFront - 1);
            currFront = front[i];
            i++;
        }
    }

    cout << "The widest gap is: " << maxgap << endl;
    return 0;
}