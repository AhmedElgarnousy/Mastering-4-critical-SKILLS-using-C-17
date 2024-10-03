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
        return out;
    }
    // console in operator
    friend istream &operator>>(istream &in, Book &b)
    {
        in >> b.id >> b.name >> b.price;
        return in;
    }
    // file out operator
    friend ofstream &operator<<(ofstream &out, Book &b)
    {
        out << b.getId() << " " << b.getName() << " " << b.getPrice() << "\n";
        return out;
    }
    // file in operator
    // friend ifstream &operator>>(ifstream &in, Book &b)
    // {
    //     in >> b.id >> " " >> b.name >> " " >> b.price >> "\n";
    // }
};

void WriteBookRecord(string file_name)
{
    fstream file;
    Book book;

    cout << "Enter a book info: ";
    cin >> book;

    file.open(file_name, ios::app);
    if (!file)
    {
        cout << "failed to open file\n";
        exit(1);
    }
    file << book;
    cout << "\n"
         << book.getName() << " Book " << "written successfully in " << file_name << "\n ";
}

int menu()
{
    int copy_choice = 0;
    cout << "\nEnter 0: for Exit\n";
    cout << "Enter 1: Write a new book info\n";
    cout << "Enter 2: Display all books\n";
    cout << "Enter 3: Modify a Book\n";
    cout << "Enter 4: Delete a book\n";
    cout << "Enter 5: Search for a book\n";

    cout << "Enter your choice: ";
    cin >> copy_choice;
    return copy_choice;
}
int main()
{
    int choice;
    while (1)
    {
        choice = menu();
        switch (choice)
        {
        case 0:
            // WriteBookRecord("data_books.txt");
            break;
        case 1:
            WriteBookRecord("data_books.txt");
            break;
        case 2:
            //
            break;
        case 3:
            //
            break;
        case 4:
            //
            break;
        case 5:
            //
            break;
        default:
            cout << "\nInvalid choice\n";
            break;
        }
    }

    return 0;
}