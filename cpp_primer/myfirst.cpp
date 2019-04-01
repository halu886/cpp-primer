#include <iostream>
int main() {
	using namespace std;
	/*cout << "Come up and C++ me some time,";
	cout << endl;
	cout << "You won`t regret it!" << endl;
	cin.get();
	return 0;*/
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}