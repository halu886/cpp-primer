#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    const int size = 15;
    char name1[size];
    char name2[size] = "testtesetaaaaa";

    cout << "asfdasdf " << name2;
    cout << "asdfsdafds?\n";
    cin >> name1;
    cout << "atweasdfdsfa " << name1 << "  ";
    cout << "stringlen" << strlen(name1) << endl;
    cout << "sizeOf(name)" << sizeof(name1) << endl;
    name2[3] = '\0';
    cout << name2;
    system("pause");
    return 0;
}