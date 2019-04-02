#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int" << sizeof(int) << "bytes." << endl;
    cout << "short" << sizeof n_short << "bytes." << endl;
    cout << "long is" << sizeof n_long << "bytes." << endl;
    cout << "long long " << sizeof n_llong << "bytes." << endl;
    cout << endl;

    cout << n_int << endl;
    cout << n_short << endl;
    cout << n_long << endl;
    cout << n_llong << endl;
    cout << INT_MIN << endl;
    cout << CHAR_BIT << endl;
	system("pause");
    return 0;
}