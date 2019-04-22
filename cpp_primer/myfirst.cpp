#include <iostream>
#include <string>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable douque = {
        "weqrqe",
        0.25,
        132.43
	};
    cout << "price" << douque.name << endl;
    cout << douque.price << endl;

    inflatable choice = douque;
    cout << "price" << choice.name << endl;
    cout << choice.price << endl;
    system("pause");
    return 0;
}