#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;
    cout << "Enter your Weight in pounds";
    cin >> lbs;

    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << "pounds are" << stone << "stone" << pounds << "pound(s).\n";
    system("pause");
    return 0;
}