#include <iostream>
// #include <stdexcept>

using namespace std;

class HospitalException : public exception
{
private:
    const char *err_str;
    const char *extra_info;

public:
    HospitalException(const char *err_str, const char *extra_info) : err_str(err_str), extra_info(extra_info)
    {
    }
    const char *what() const noexcept
    {
        return err_str;
    }
};
// fuction throws my custom exception
void go()
{
    throw HospitalException("Oooh", "main.cpp");
}

int main()
{
    try
    {
        go();
    }
    catch (HospitalException &e)
    {
        cout << e.what() << "\n";
    }
    return 0;
}