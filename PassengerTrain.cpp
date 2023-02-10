#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Train.h"
#include "PassengerTrain.h"

PassengerTrain::PassengerTrain(int train_id, int in_pas_cap_per_car) : Train(train_id)
{
    pas_cap_per_car = in_pas_cap_per_car;
}

void PassengerTrain::cap_calc()
{
    pas_cap = pas_cap_per_car*ret_num_cars();
}

int PassengerTrain::operator-(PassengerTrain pt)
{
    int temp = pas_cap - pt.pas_cap;
    return temp;
}

void PassengerTrain::print_details()
{
    cout << "The ID of this train is: " << get_vehicle_id() << endl;
    cout << "The passenger capacity of the train is: " << pas_cap << endl;
    if (get_v_registered())
        {
            cout << "This train has been registered.\n" << endl;
        }
        else
        {
            cout << "This train has not been registered.\n" << endl;
        }
}
