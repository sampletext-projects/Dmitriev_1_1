#include <iostream>
#include <conio.h>

using namespace std;

class Product
{
	double first;
	int second;

public:
	Product()
	{
		first = 0;
		second = 0;
	}

	Product(double first_, int second_)
	{
		first = first_;
		second = second_;
	}


	double cost()
	{
		double price = first * second;
		return price;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	double price;
	cout << "Введите цену товара: ";
	cin >> price;
	int quantity;
	cout << "Введите количество товаров: ";
	cin >> quantity;
	Product product(price, quantity);
	cout << "Стоимость товара " << product.cost() << endl;
	_getch();
}
