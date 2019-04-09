#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter:";
    cin >> hats;
    cout << "Enter:";
    cin >> heads;

    cout << "hats= " << hats << "; heads= " << heads << endl;
    cout << "hats+heads =" << hats + heads << endl;
    cout << "hats-heads =" << hats - heads << endl;
    cout << "hats*heads =" << hats * heads << endl;
    cout << "hats-heads =" << hats / heads << endl;

    system("pause");
    return 0;
}