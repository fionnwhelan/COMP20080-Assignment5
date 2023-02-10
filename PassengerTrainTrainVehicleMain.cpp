#include <fstream>
#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Train.h"
#include "PassengerTrain.h"

int main() {

    ifstream input;

    input.open("comp20080-autumn2022-Asst5-data.txt");

    int data[8];

    for (int i = 0; i < 8; i++)
    {
        input >> data[i];
    }
    Train t1(data[0]);
    PassengerTrain t2(data[1], data[2]), t3(data[3], data[4]);
    t1.print_details();
    t2.print_details();
    t3.print_details();
    t1.register_vehicle();
    t2.register_vehicle();
    t3.register_vehicle();
    t1.set_num_cars(data[5]);
    t2.set_num_cars(data[6]);
    t3.set_num_cars(data[7]);
    t2.cap_calc();
    t3.cap_calc();
    t1.print_details();
    t2.print_details();
    t3.print_details();
    cout << "The result of subtracting the second passenger train from the first is: " << t2 - t3 << endl;


}
