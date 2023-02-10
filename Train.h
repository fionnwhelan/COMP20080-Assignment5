class Train : public Vehicle
{
private:
    int num_cars;

public:
    Train(int train_id);
    void set_num_cars(int in_num_cars);
    int ret_num_cars();
    void print_details();
};
