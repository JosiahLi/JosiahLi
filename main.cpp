#include <iostream>
#include "BookData.h"
#include "BookDataManager.h"
#include <iomanip>

using namespace std;

void BookDataManager::addBook()
{
	int id, stock;
	string title;
	float price;

	cin >> id >> title >> price >> stock;

	books[size++] = new BookData(id, title, price, stock);

}
void BookDataManager::deleteBook()
{
	int id, temp = 0;
	cin >> id;

	for (int i = 0; i < size; ++i)
		if (this->books[i]->getID() == id)
		{
			delete[] books[i];
			temp = i;
			--size;
			break;
		}

	for (int i = temp + 1; i < size; ++i) {
		this->books[i - 1] = this->books[i];
	}


	cout << "Book #" << id << "deleted." << endl;
}
void BookDataManager::createTextFile()
{
	ofstream ofs("BookLists.txt");

	if (!ofs)
	{
		cout << "Can not open list.txt" << endl;
		exit(1);
	}

	cout << fixed;
	for (int i = 0; i < size; ++i)
	{
		int id = this->books[i]->getID();
		string title = this->books[i]->getTitle();
		float price = this->books[i]->getPrice();
		int stock = this->books[i]->getStock();

		ofs << setw(6) << id << setw(21) << title << setw(10) <<
			setprecision(2) << price << setw(4)  << stock << endl;
	}
}

int main()
{
	BookDataManager bookDataManager;

	char input;

	while (true) {
		cout << "N: add a new book\tD: delete a book" << endl
			<< "? ";
		cin >> input;

		switch (input) {
		case 'N':
			bookDataManager.addBook();
			break;
		case 'D':
			bookDataManager.deleteBook();
			break;
		default:
			bookDataManager.createTextFile();
			return 0;
		}
	}

	return 0;
}