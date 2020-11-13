/* 10_8.cpp : This file contains the 'main' function. Program execution begins and ends there.

Create 1 array of colors red,blue,green,oragne,yellow, brown
Array 2 distance 7, 25, 20,10,15
Randomly select one of the above, then give a friend or foe signal then a random delay then continue

*/


#include <iostream>
#include <cstdlib>
#include <time.h> // for rand()

#include<thread> // for sleep()
#include<chrono>// chrono::seconds



using namespace std;

const string color[6] = { "red", "blue", "green", "orange", "yellow", "brown" };
const int distance[5] = { 7,25,20,10,15 };

void random_function()
{
    // you must assign your variables each time
    int rand_num = rand();
    int rand_color = rand() % 6; // should output color
    int rand_distance = rand() % 5; // should output distance

    if (rand_num % 2)
    {
        cout << color[rand_color] << endl;  // output also a space so make it readable
                                           // the :: before distance is needed because
                                           // distance is member of the std namespace
                                           // and you have using namespace std;
    }
    else
    {
        cout << ::distance[rand_distance] << endl;   // output also a space so make it readable
    }
}

int main()
{
    for (int i = 1; i < 30; i++)
    {
        random_function();
        
        this_thread::sleep_for(chrono::seconds(5));

    }
    return 0;
}
