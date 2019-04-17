#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int year;

    cin >> year;
    cout << "address";
    char address[80];
    cin.getline(address, 80);
    cout << "year" << year << "address" << address;
    system("pause");
    return 0;
}