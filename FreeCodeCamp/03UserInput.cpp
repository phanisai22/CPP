#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int age;
    cout << "Enter Your age: ";
    cin >> age;

    cout << "You are " << age << " Years old." << endl;

    string name;
    cout << "Enter your Name: ";
    // getline(cin, name);
    cin >> name;

    cout << "Hello " << name << endl;

    return 0;
}
