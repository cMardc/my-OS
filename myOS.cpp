#include "myOS.h"
using namespace std;



int main()
{
	srand(time(NULL));
	bool OnMenu;
	OnMenu = true;
	int selected;
	int result;
	time_t now;

	if (OnMenu)
	{
	menu:
		printMenu();
		do
		{
			cout << "Enter App Number : ";
			cin >> selected;
			cout << endl;
			result = check(selected);
		} while (result == -1);

		if (result == 1)
		{
			calc();
			string anything;
			cout << "\n\nEnter Anything To Exit Menu.\n";
			cin.ignore();
			getline(cin, anything);
			goto menu;
		}
		else if (result == 2)
		{
			now = time(0);
			char* dt = ctime(&now);
			cout << endl << dt << endl;
			string anything;
			cout << "\n\nEnter Anything To Exit Menu.\n";
			cin.ignore();
			getline(cin, anything);
			goto menu;
		}
		else if (result == 3)
		{
			int a = random();
			cout << "\nRandom Number : " << a << endl;
			string anything;
			cout << "\n\nEnter Anything To Exit Menu.\n";
			cin.ignore();
			getline(cin, anything);
			goto menu;
		}
		else if (result == 4)
		{
			cout << "\nEnter A Color To Apply\n";
			string a;
			cin.ignore();
			getline(cin, a);
			string color = noSpace(a);
			setColor(color);
			string anything;
			cout << "\n\nEnter Anything To Exit Menu.\n";
			cin.ignore();
			getline(cin, anything);
			goto menu;
		}
	}
}


