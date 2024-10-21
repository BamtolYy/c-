#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque> //efficient for accessing ends
#include <fstream>

using namespace std;


template <typename T> // some type we will call T
void print(T collection, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << collection[i] << endl;
    }
}

template <typename T>
void print(T collection)
{
    print(collection, collection.size());
}

// void printCollection(string items[], int size)
// {
//     cout << items << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << items[i] << endl;
//     }
// }

// void printCollection(array<string, 5> items)
// {
//     printCollection(items.data(), items.size());
// }

// void printCollection(vector<string> items)
// {
//     printCollection(items.data(), items.size());
// }
// Arrays are statically sized.
// Vectors are dynamically sized.

class Food
{
public:
    string name;
    double cost;

    void print()
    {
        cout << name << " " << cost << endl;
    }
};

void printFoods(deque<Food> foods)
{
    for(Food food: foods)
    {
        food.print();
    }
}

int main()
{
    // string foods1[5] = {"tacos", "honey", "apples", "grapes", "pumpkin "};

    // array<string, 5> foods2 = {"tacos", "honey", "apples", "grapes", "pumpkin "};

    // vector<string> foods3 = {"tacos", "honey", "apples", "grapes", "pumpkin "};

    // deque<string> foods4 = {"tacos", "honey", "apples", "grapes", "pumpkin "};
    // foods4.push_front("lettuce");
    // foods4.push_back("cheese");
    // print(foods4);
    // cout << foods1 << endl;  // printout hexidecimal as memory location
    // cout << &foods1 << endl; // same thing as above

    // printCollection(foods1, sizeof(foods1) / sizeof(foods1[0]));
    // cout << &foods2 << endl; // array of outside value is different from inside of the function printSTDarray()
    // arrays are copied to a new location and used in the print function
    // changes in the function does nothing to the outside array
    // printCollection(foods2);
    // cout << &foods3 << endl; // same situation as array
    // printCollection(foods3); // Function overload

    // string foods[] = {"grapes", "carrots","lemons"};
    // array<string, 3> foods = {"grapes", "carrots", "lemons"};
    // vector<string> foods;

    // foods =  {"grapes", "carrots", "lemons"};
    // foods.push_back("tortillas");

    // print(foods1,5);
    // print(foods2, foods2.size());
    // print(foods3);

    // cout << "What did you eat?: ";
    // string food;
    // cin >> food;

    // ofstream file("foods.txt");
    // file << food;
    // file.close();
    // return 0;

    // ifstream file("foods.txt");
    // string food;
    // file >> food;
    // cout << "You ate " << food << endl;
    // file.close();

    // deque<string> foods = {"lemons", "cheesecake", "salmon"};
    // ofstream file("foods.txt");
    // for(string food:foods)
    // {
    //     file << food << endl;
    // }
    // file .close();

    // deque<string> foods;
    // ifstream file("foods.txt");

    // string food;
    // while(file >> food)
    // {
    //     foods.push_back(food);
    // }
    // print(foods);
    // file .close();

    deque<Food> foods;

    Food food;
    food.name = "bananas";
    food.cost = 20.41;
    // food.print();

    foods.push_back(food);


    Food food2;
    food2.name = "cheese";
    food2.cost = 274;
    // food2.print();
    foods.push_back(food2);


    // printFoods(foods);


    // ofstream file("foods.txt");
    // for (Food food: foods)
    // {
    //     file << food.name << " " << food.cost << endl;
    // }
    // file.close();
    deque<Food> saveFoods;
    ifstream file ("foods.txt");
    Food temp;
    while(file >> temp.name >> temp.cost)
    {
        saveFoods.push_back(temp);
    };
    
    printFoods(saveFoods);
    return 0;
}