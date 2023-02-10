#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Train.h"

Train::Train(int train_id) : Vehicle(train_id)
{
    num_cars = 10;
}

void Train::set_num_cars(int in_num_cars)
{
    num_cars = in_num_cars;
}

int Train::ret_num_cars()
{
    return num_cars;
}

void Train::print_details()
{
    cout << "The ID of this train is: " << get_vehicle_id() << endl;
    cout << "The number of railway cars on this train is: " << ret_num_cars() << endl;
    if (get_v_registered())
    {
        cout << "This train has been registered.\n" << endl;
    }
    else
    {
        cout << "This train has not been registered.\n" << endl;
    }

}
