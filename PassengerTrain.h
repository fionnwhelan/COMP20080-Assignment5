class PassengerTrain : public Train
{
private:
    int pas_cap;
    int pas_cap_per_car;

public:
    PassengerTrain(int id, int in_pas_cap_per_car);
    void cap_calc();
    int operator-(PassengerTrain pt);
    void print_details();
};
