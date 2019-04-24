#include <iostream>
#include <string>
using namespace std;

int main()
{
    using namespace std;
    char animal[20] = "asdfasdf";

    const char *bird = "rqwef";

    char *ps;

    cout << animal << " and ";
    cout << bird << "\n";

    cout << "enter a kind";
    cin >> animal;

    ps = animal;

    cout << ps << "\n";
    cout << animal << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1];

    strcpy_s(ps, animal);

    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    system("pause");
    return 0;
}