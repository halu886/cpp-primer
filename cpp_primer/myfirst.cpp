#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    using namespace std;
    double a1[4] = {1.2, 34.2, 53.2, 43.4};
    vector<double> a2(4);

    a2[0] = 1.0 / 4.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 6.0;
    a2[3] = 1.0 / 8.0;

    array<double, 4> a3 = {3.15, 4.23, 4.123, 1.43};
    array<double, 4> a4;
    a4 = a3;

    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    a1[-2] = 23.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    system("pause");
    return 0;
}