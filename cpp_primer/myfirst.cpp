#include <iostream>
#include <string>
using namespace std;
int main()
{
    using namespace std;
    char a[20];
    char d[20] = "afsd";

    string b;
    string c = "sadfasdf";

    cout << "a";
    cin >> a;

    cout << "b";
    cin >> b;

    cout << "a" << a << "b" << b << "c" << c << "d" << d;

    cout << "d[2] " << d[2];
    cout << "c[2] " << c[2];

    system("pause");
    return 0;
}