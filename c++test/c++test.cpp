// c++test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void GetString(int width, bool inner = false);

int main()
{
    //cout << "Type width";
    //cin >> stoi(width);
    string strWidth = "5";
    int width = stoi(strWidth);
    //cout << "Type height";
    //cin >> stoi(height);
    string strHeight = "7";
    int height = stoi(strHeight);
    for (int i = 0; i < height; i++) {
        if (i == 0 || i == height - 1) {
            GetString(width);
        }
        else {
            GetString(width, true);
        }
    }
    /*// references
    string food = "Pizza";
    string &meal = food;
    meal = "Burger";
    cout << food << endl;
    
    // pointer
    string food = "Pizza";
    string* ptr = &food;
    // Output the value of food (Pizza)
    cout << food << "\n";
    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";
    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";
    // Change the value of the pointer
    *ptr = "Hamburger";
    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";
    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";*/
    
    return 0;
}

void GetString(int width, bool inner) {
    if (inner) {
        for (int i = 0; i < width; i++) {
            if (i == 0 || i == width - 1) {
                cout << 'A';
            }
            else {
                cout << 'B';
            }
            //(i == 0 || i == width - 1) ? cout << 'A' : cout << 'B';
        }
    }
    else {
        for (int i = 0; i < width; i++) {
            cout << 'A';
        }
    }
    cout << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
