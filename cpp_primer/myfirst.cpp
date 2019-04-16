#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "the package with" << yams[1] << "yams costs";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is" << total << "test\n";
    cout << "size of" << sizeof yams;
    cout << "bytes\n";
    cout << "size of[0]" << yams[0] << "bytes";
    system("pause");
    return 0;
}