#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    char grade = 'A';
    string sentence = "Freecodecamp";
    int age = -50;
    double gpa = 3.3;
    bool isMale = true;

    cout << grade << endl;
    cout << sentence.length() << endl;
    cout << sentence[1] << endl;

    cout << sentence.substr(8, 3) << endl;
    cout << sentence.find("code") << endl;

    return 0;
}
