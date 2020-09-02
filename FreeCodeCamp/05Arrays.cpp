#include <iostream>

using namespace std;

void poem()
{
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a Plural Noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {22, 23, 45, -1, 0, 9, 504};

    cout << arr << endl;

    poem();
    return 0;
}
