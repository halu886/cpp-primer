#include <iostream>
int simon(int);
int main()
{
    using namespace std;
    simon(3);
    cout << "Pick an integer";
    int count;
    cin >> count;
    int pounds = simon(count);
    cout << "Done!"
         << "pounds" << endl;
    return 0;
}

int simon(int n)
{
    return 14 * n;
}