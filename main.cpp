#include <iostream>
using namespace std;

class Ingredients {
private:
	float cheeseKg = 0;
	float tomatoesKg = 0;
	float basilKg = 0;
	float doughKg = 0;
	float salamiKg = 0;
	float mushroomsKg = 0;
public:
	friend ostream& operator<<(ostream& ost, Ingredients& ing) {
		ost << "\n----- Currently available quantities (in Kg) are: ------\n";
		ost << "Cheese: " << ing.cheeseKg << "\nTomatoes: " << ing.tomatoesKg << "\nBasil: " << ing.basilKg << "\nDough: " << ing.doughKg << "\nSalami: " << ing.salamiKg << "\nMushrooms: " << ing.mushroomsKg;
		ost << "\n";
		return ost;
	}
};

class Storeroom {
private:
	Ingredients ingredientStocks;
	Ingredients* pastOrders = nullptr;
	int nrPastOrders = 0;
public:
	Storeroom() {}
	~Storeroom() {
		if (nrPastOrders != 0 && pastOrders != nullptr) {
			delete[] pastOrders;
		}
	}
	void printStocks() {
		cout << ingredientStocks;
	}
};

int main() {
	Ingredients ing;
	cout << "ok";
	cout  << "Ingredients prints as: " << ing;
	Storeroom stores;
	cout  << "Stores prints as: ";
	stores.printStocks();
	return 0;
}