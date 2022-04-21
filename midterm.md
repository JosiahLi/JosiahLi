```C++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	cout << "Number of rooms, number of persons: ";
	int rooms{ 0 }, persons{ 0 };
	cin >> rooms >> persons;
	srand(rooms);

	int loops = 1, id = 1;
	while (loops <= rooms && id <= persons)
	{
		int per{ 0 };
		cout << "per: ";;
		cin >> per;

		int seat1{ 0 }, seat2{ 0 }, seat3{ 0 }, seat4{ 0 }, seat5{ 0 }, seat6{ 0 }, seat7{ 0 }, seat8{ 0 };
		for (int i = 1; i <= per; ++i, ++id)
		{
			bool flag = true;
			while (flag)
			{
				int seat = rand() % 8 + 1;

				if (seat == 1 && seat1 == 0) seat1 = id, flag = false;
				else if (seat == 2 && seat2 == 0) seat2 = id, flag = false;
				else if (seat == 3 && seat3 == 0) seat3 = id, flag = false;
				else if (seat == 4 && seat4 == 0) seat4 = id, flag = false;
				else if (seat == 5 && seat5 == 0) seat5 = id, flag = false;
				else if (seat == 6 && seat6 == 0) seat6 = id, flag = false;
				else if (seat == 7 && seat7 == 0) seat7 = id, flag = false;
				else if (seat == 8 && seat8 == 0) seat8 = id, flag = false;
			}
		}

		cout << "Rooms #" << loops << endl;
		if (seat1 == 0) cout << "Seat1: -----------" << endl;
		else cout << "Seat1: Applicants " << seat1 << endl;
		if (seat2 == 0) cout << "Seat2: -----------" << endl;
		else cout << "Seat2: Applicants " << seat2 << endl;
		if (seat3 == 0) cout << "Seat3: -----------" << endl;
		else cout << "Seat3: Applicants " << seat3 << endl;
		if (seat4 == 0) cout << "Seat4: -----------" << endl;
		else cout << "Seat4: Applicants " << seat4 << endl;
		if (seat5 == 0) cout << "Seat5: -----------" << endl;
		else cout << "Seat5: Applicants " << seat5 << endl;
		if (seat6 == 0) cout << "Seat6: -----------" << endl;
		else cout << "Seat6: Applicants " << seat6 << endl;
		if (seat7 == 0) cout << "Seat7: -----------" << endl;
		else cout << "Seat7: Applicants " << seat7 << endl;
		if (seat8 == 0) cout << "Seat8: -----------" << endl;
		else cout << "Seat8: Applicants " << seat8 << endl;

		++loops;
	}

	return 0;

}


```
