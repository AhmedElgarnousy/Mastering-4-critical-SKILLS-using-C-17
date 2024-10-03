#include <iostream>
#include <fstream>

using namespace std;
class Book
{
private:
    int id = 0;
    int price = 0;
    string name = "";

public:
    Book() = default;
    Book(int id, string name, int price) : id(id), name(name), price(price)
    {
    }
    // getters
    int getId() const
    {
        return id;
    }
    int getPrice() const
    {
        return price;
    }
    string getName() const
    {
        return name;
    }
    // setters
    void setId(int copy_id)
    {
        this->id = copy_id;
    }
    void setPrice(int copy_price)
    {
        price = copy_price;
    }
    void setName(int copy_name)
    {
        name = copy_name;
    }

    bool operator==(Book &b)
    {
        return ((this->id == b.id) && (this->name == b.name) && (this->price == b.price));
    }
    // console out operator
    friend ostream &operator<<(ostream &out, Book &b)
    {
        out << b.getId() << " " << b.getName() << " " << b.getPrice() << "\n";
    }
    // file out operator
    friend ofstream &operator<<(ofstream &out, Book &b)
    {
        out << b.getId() << " " << b.getName() << " " << b.getPrice() << "\n";
    }
};

int main()
{
    fstream file;
    Book b1(11, "math", 2289);
    Book b2(11, "math", 2289);
    file.clear();
    file << b1;

    // write in a file
    file.open("data.txt", ios::app);
    if (file.fail())
    {
        cout << "failed to open file\n";
        exit(1);
    }
    file << b1.getId() << "," << b1.getName() << "," << b1.getPrice() << "\n";
    // == operator
    if (b1 == b2)
    {
        cout << true << "\n";
    }
    else
    {
        cout << false << "\n";
    }

    // file << b;

    return 0;
}