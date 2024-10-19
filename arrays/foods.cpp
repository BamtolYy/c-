#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

void printCollection(string items[], int size)
{
    cout << items << endl;
    for (int i = 0; i < size; i++)
    {
        cout << items[i] << endl;
    }
}

void printCollection(array<string, 5> items)
{
    printCollection(items.data(), items.size());
}

void printCollection(vector<string> items)
{
    printCollection(items.data(), items.size());
}
// Arrays are statically sized.
// Vectors are dynamically sized.
int main()
{
    string foods1[5] = {"tacos", "honey", "apples", "grapes", "pumpkin "};

    array<string, 5> foods2 = {"tacos", "honey", "apples", "grapes", "pumpkin "};

    vector<string> foods3 = {"tacos", "honey", "apples", "grapes", "pumpkin "};

    cout << foods1 << endl;  // printout hexidecimal as memory location
    cout << &foods1 << endl; // same thing as above

    printCollection(foods1, sizeof(foods1) / sizeof(foods1[0]));
    cout << &foods2 << endl; // array of outside value is different from inside of the function printSTDarray()
                             // arrays are copied to a new location and used in the print function
                             // changes in the function does nothing to the outside array
    printCollection(foods2);
    cout << &foods3 << endl; // same situation as array
    printCollection(foods3); // Function overload

    // string foods[] = {"grapes", "carrots","lemons"};
    // array<string, 3> foods = {"grapes", "carrots", "lemons"};
    // vector<string> foods;

    // foods =  {"grapes", "carrots", "lemons"};
    // foods.push_back("tortillas");
    return 0;
}