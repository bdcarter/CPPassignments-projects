/***********************************************
 * Author:			Brianna Carter
 * Date Created:		2/17/15
 * Date modified:		2/17/15
 *
 * This file contains the declarations for 
 * the class ShopCart. The methods are 
 * addItem, listContents, and totalPrice. 
 * The main function displays a menu
 * that allows the user to add an item, 
 * list cart contents, and calculate the 
 * total cost of the cart. 
 * *****************************************/
#include <vector> 
#include <string>
#include "Item.hpp"
#include "ShopCart.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************
 *add item function: adds the item to the vector
 ************************************************/
void ShoppingCart::addItem(Item product)
{
	cout << "In addItem" << endl;
	contents.push_back(product);
cout << "size" << contents.size() << endl;
}

/***************************************************
 * list contents function lists the name, price, and 
 * quantity for all items in the vector.
 * *************************************************/

void  ShoppingCart::listContents()
{
	int count;
	cout << "In list" << endl;
	for(count = 0; count < contents.size(); count++)
	{
	cout << fixed << setprecision(2) << endl;
	cout << "Name: " << contents[count].getName() << endl;
	cout << "Price: " << contents[count].getPrice() << endl;
	cout << "Quantity: " << contents[count].getQuantity() << endl;
	}
}

/***********************************************
 * total price: adds the price for each item in 
 * the cart.
 * ********************************************/
	
double ShoppingCart::totalPrice()
{
cout << "getting price" << endl;
double total;
int x;
	for(x=0; x < contents.size(); x++)
	 {total += (contents[x].getPrice() * contents[x].getQuantity());}
	return total;
}


/******************
 * main
 * ***************/

int main()
{
Item product;
int choice;
string nameIn;
double priceIn;
int quantityIn;
ShoppingCart cart;


do{

	cout << "Please choose an action: " << endl;
	cout << "1. Add item" << endl;
	cout << "2. List contents" << endl;
	cout << "3. Get total price" << endl;
	cout << "4. Quit" << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "What is the name of the item?" << endl;
		cin >> nameIn;

		cout << "What is the price of the item?" << endl;
		cin >> priceIn;
				
		cout << "What is the quantity?" << endl;
		cin >> quantityIn;
 

		product.setName(nameIn);
		product.setPrice(priceIn);
		product.setQuantity(quantityIn);


		cart.addItem(product);
	}
	 
	if(choice == 2)
	{ cart.listContents();}

	if(choice == 3)
	{cout << fixed << setprecision(2) << endl;
	cout << "Total: " <<  cart.totalPrice() << endl;}


}while(choice != 4);

return 0;
}
