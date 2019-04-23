#include <iostream>
#include <string>
using namespace std;

int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "higgens " << higgens
         << " &higgens " << &higgens;

    cout << "pt" << pt
         << " *pt" << *pt;
    system("pause");
    return 0;
}