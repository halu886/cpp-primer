#include <iostream>
#include <string>
using namespace std;

int main()
{
    using namespace std;
    int inti = 1000;

    int *pi = new int;
    *pi = 1001;

    cout << "v " << inti << " l " << &inti << endl;
    cout << "v " << *pi << " l " << pi << endl;

    double *pd = new double;
    *pd = 1000000001.0;

    cout << "v " << *pd << " l " << pd << endl;
    cout << "vl " << &pd << endl;

    cout << "sizeof pt" << sizeof(pi) << endl;
    cout << "sizeof *pt" << sizeof(*pi) << endl;
    cout << "sizeof pd" << sizeof(pd) << endl;
    cout << "sizeof *pd" << sizeof(*pd) << endl;
    system("pause");
    return 0;
}