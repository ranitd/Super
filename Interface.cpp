#include "Interface.h"
/*
Function name:Interface
The input: -
The ouput: -
The function operation: default constructor
*/
Interface::Interface()
{
	Basis *b;
	//our store
	Hanut hanut("SuperShop");
	hanut.setPublish(3);
	int choise = 1;
	while (choise > 0 && choise < 5)
	{
		cout << "what do you want to do next?" << endl << "Add product press 1" << endl << "Change publication factor press 2"
			<< endl << "Calculate total price press 3" << endl << "Print store details press 4" << endl;
		cin >> choise;
		switch (choise) {
		case 1:
			int type;
			cout << "enter type of product: 1- vegatable, 2- fruit, 3- package, 4- dairy drink, 5- yogurt, 6- cheese," 
				<< endl << "7- other dairy product " << endl;
			cin >> type;
			try {
				//add to array
				b = hanut.addProducts(type);
				b->set(type);
				hanut.increaseItems();
			}
			catch (const string errstr)
			{
				cout << errstr << endl;
			}
			break;
		case 2:
			double num;
			cout << "Enter new factor" << endl;
			cin >> num;
			try
			{
				//change the factor
				hanut.setPublish(num);
			}
			catch (const string errstr)
			{
				cout << errstr << endl;
			}
			break;
		case 3:
			//print the price
			cout << "Total price: " << hanut.getPrice() << endl;
			break;
		case 4:
			hanut.print();
			break;
		default:
			cout << "bad input, quiting" << endl;
		}
	}
}
/*
Function name:~Interface
The input: -
The ouput: -
The function operation: default distructor
*/
Interface::~Interface()
{
}
