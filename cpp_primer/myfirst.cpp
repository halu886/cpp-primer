#include <iostream>
#include <string>
using namespace std;
int main()
{
    using namespace std;

    string s1 = "asfasdfasdf";
    string s2, s3;

    cout << "=\n";
    s2 = s1;

    cout << "s1:" << s1 << "s2:" << s2 << endl;

    s2 = "buuuuuuu";

    cout << "s2: " << s2;

    s3 = s1 + s2;

    cout << "s3: " << s3;

    cout << "+=\n";

    s1 += s2;

    cout << "s1: "<< s1;

    s2 += "for a day";

    cout << "s2" << s2 << endl;
    system("pause");
    return 0;
}