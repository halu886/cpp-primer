#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "ascII" << ch << "is" << i << endl;

    cout << "add to code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "ascII" << ch << "is" << i << endl;
    cout << "Displaying char :";
    cout.put(ch);
    cout.put('|');
    system("pause");
    return 0;
}