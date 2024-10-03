#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>

using namespace std;

// utilities
vector<string> splitString(string file_record, char delimiter = ',')
{
    vector<string> v_str;
    stringstream ss(file_record);

    string s_id, s_name, s_price;

    getline(ss, s_id, delimiter);
    getline(ss, s_name, delimiter);
    getline(ss, s_price, '\n');

    v_str.push_back(s_id.c_str());
    v_str.push_back(s_name.c_str());
    v_str.push_back(s_price.c_str());

    return v_str;
}
//////////////////////////////////////////////////////////////////////
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
    void setName(string copy_name)
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
    friend ofstream &operator<<(ofstream &file, Book &b)
    {
        file << b.getId() << "," << b.getName() << "," << b.getPrice() << "\n";
        return file;
    }
    // // file in operator
    // friend ifstream &operator>>(ifstream &file,  Book &b)
    // {
    //     string row;
    //     file >> row;
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
    file.close();

    cout << "\n"
         << book.getName() << " Book " << "written successfully in " << file_name << "\n ";
}

void displayFile(string file_name)
{
    fstream file;
    string bookLine;
    vector<string> vec;
    Book b;

    file.open(file_name, ios::in);
    if (!file)
    {
        cout << "can't open " << file_name << "\n";
        exit(1);
    }

    while (!file.eof())
    {
        file >> bookLine;
        vec = splitString(bookLine);
        b.setId(stoi(vec[0]));
        b.setName(vec[1]);
        b.setPrice(stoi(vec[2]));

        /*
        fstream file_out;
        file_out.open("data", ios::app);
        file_out << b;
        */
        // cout << b;
        // cout << "vec: " << vec[0] << " " << vec[1] << " " << vec[2] << "\n";
        // cout << bookLine << "\n";
    }

    file.close();
}

bool Search_by_id(string file_name)
{
    fstream file;
    file.open(file_name, ios::in);
    if (!file)
    {
        cout << "failed to open file\n";
        exit(1);
    }

    int en_id;
    string line;
    vector<string> vec;
    cout << "Enter book id: ";
    cin >> en_id;
    while (!file.eof())
    {
        file >> line;
        vec = splitString(line);
        if (en_id == stoi(vec[0]))
        {
            cout << "Book found successfully\n";
            file.close();
            return true;
        }
    }
    cout << "Book Not found\n";
    file.close();
    return false;
}

void modify_id(string file_name)
{
    fstream file;
    int en_id, count = 0;
    Book bookArr[100];

    file.open(file_name, ios::in);
    if (!file)
    {
        cout << "failed to open file\n";
        exit(1);
    }
    cout << "Enter book id: ";
    cin >> en_id;
    string line;
    vector<string> vec;
    // fill the array with data file
    while (!file.eof())
    {
        file >> line;
        vec = splitString(line);
        if (en_id == stoi(vec[0]))
        {
            bookArr[count].setId(stoi(vec[0]));
            bookArr[count].setName(vec[1]);
            bookArr[count].setPrice(stoi(vec[2]));
            count++;
        }
    }
    file.close();
    // search
    for (int i = 0; i < count; i++)
    {
        if (bookArr[i].getId() == en_id)
        {
            cout << "\n Old book info: ";
            cout << bookArr[i];
            //
            cout << "\n Enter the new info: ";
            cin >> bookArr[i];
            break;
        }
    }
    // return to file and fill the new data
    file.open(file_name, ios::out); // oui to delete the old file data
    if (!file)
    {
        cout << "Can't open the file\n";
        exit(1);
    }

    // fill the file with array data
    for (int i = 0; i < count; i++)
    {
        file << bookArr[i];
    }
    file.close();
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

void run()
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
            displayFile("data_books.txt");
            break;
        case 3:
            Search_by_id("data_books.txt");
            break;
        case 4:
            modify_id("data_books.txt");
            break;
        case 5:
            //
            break;
        default:
            cout << "\nInvalid choice\n";
            break;
        }
    }
}
int main()
{
    run();
    // Book b;
    // vector<string> v;

    return 0;
}