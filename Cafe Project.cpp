#include <iostream>

using namespace std;
const double small_coffee = 1.59;
const double medium_coffee = 2.20;
const double large_coffee = 4.35;
const double donut = .99;
const double muffin = 1.19;
double total_price;
int coffee_size;
int donuts_ordered;
int muffins_ordered;
char order_coffee;
char order_donut;
char order_muffin;
double total_muffin_price;
double total_coffee_price;
double totale_donut_price;

int main()
{
cout << "Do you want to order coffee?? please type y for yes or n for no" << endl;
cin >> order_coffee;
while ((order_coffee =='y') || (order_coffee == 'Y')) {
cout << "What size of coffee would you like to order, enter 1 for small, 2 for medium and 3 for large" << endl;
cin >> coffee_size;
switch(coffee_size) {
case 1 :
total_price += small_coffee;
total_coffee_price += small_coffee;
break;
case 2 :
total_price += medium_coffee;
total_coffee_price += medium_coffee;
break;
case 3 :
total_price += large_coffee;
total_coffee_price += large_coffee;
break;

default :
cout << "You did not order a valid coffee size, please try again" << endl;
}

cout << "Do you want to order another coffee?? please type y for yes or n for no" << endl;
cin >> order_coffee;

}

cout << "Do you want to order donuts? Enter y for yes and n for no" << endl;

cin >> order_donut;
if( order_donut == 'y' || order_donut == 'Y') {
cout << "How many donuts do you want to order " << endl;
cin >> donuts_ordered;
totale_donut_price = donut * donuts_ordered;
total_price = (donut * donuts_ordered) + total_price;

}
cout << "Do you want to order muffins? Enter y for yes or n for no" << endl;
cin >> order_muffin;
if (order_muffin == 'y' || order_muffin == 'Y'){
cout << "How many muffins do you want to order " << endl;
cin >> muffins_ordered;
total_muffin_price = muffin * muffins_ordered;
total_price = (muffin * muffins_ordered) + total_price;
}

cout << "Your total coffee price is: " << total_coffee_price << endl;
cout << "Your total donut price is: " << totale_donut_price << endl;
cout << "Your total muffin price is: " << total_muffin_price << endl;
cout << "Your total is: " << total_price;



return 0;
}
