#include <iostream>
#include <vector>
using namespace std;

/*
// Homework 8: Car Specs Search

- This code is working well
- However, it is badly  designed. Why?
*/

/*
// Answer:
1- Above code violates encapsulation concept by forcing
other to think how to compare to objects.

the right way, carSpecs provides is_equal functionalility

2- Also from code change perspective, every time we change
data member in carSpecs (e.g. details of exterior shape)
we will have to change AutoTrader class (2 classes changed).

If carSpecs provides is_equal functionalility, other users won't
need to do/care about changes
as they are still handled

3- On the other side, the code didi not follow this nice tip:
"Don't ask for the information to do the work";
ask the object that has the information
to do the work for you."Allen Holub

we asked for all the gets to do the comparison !
this should be the class responsibility
*/

class CarSpecs
{
private:
    string trim;
    string engine_type;
    pair<int, int> horsepower;
    string steering_ratio;
    // and more
public:
    string &GetEngineType()
    {
        return engine_type;
    }
    void SetEngineType(string engineType)
    {
        this->engine_type = engineType;
    }

    pair<int, int> GetHorsePower()
    {
        return horsepower;
    }
    void SetHorsePower(pair<int, int> horsepower)
    {
        this->horsepower = horsepower;
    }

    string &GetSteeringRation()
    {
        return steering_ratio;
    }
    void SetSteeringRatio(string steeringRatio)
    {
        this->steering_ratio = steering_ratio;
    }
    string &GetTrim()
    {
        return trim;
    }
    void SetTrim(string trim)
    {
        this->trim = trim;
    }
};

class AutoTrader
{
private:
    vector<CarSpecs> current_cars_vec;

public:
    void LoadDatabase()
    {
        // fill current_cars_vec
    }
    bool search_match(CarSpecs &query_car)
    {
        for (auto available_car : current_cars_vec)
        {
            if (available_car.GetEngineType() != query_car.GetEngineType())
                continue;
            if (available_car.GetHorsePower() != query_car.GetHorsePower())
                continue;
            if (available_car.GetSteeringRation() != query_car.GetSteeringRation())
                continue;
            if (available_car.GetTrim() != query_car.GetTrim())
                continue;
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}