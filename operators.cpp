//arithmetice oprators [+,-,*,/,%]
//### **Challenge:** Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

/*#include<iostream>
using namespace std;
int main()
{
 int cups;
 double pricepercups, totalprice, discountedprice;

 cout<<"Enter the number of cups:"<<endl;
 cin>>cups;
 cout<<"Enter the price per cup:"<<endl;
 cin>>pricepercups;

 totalprice = cups*pricepercups;

 //apply 5% dicount if total price is above 150.

 if (totalprice > 150)
 {
    discountedprice = totalprice - (totalprice*0.05);
    cout<<"Discounted price is:"<<discountedprice<<endl;
 } else {
    cout<<"Total price is:"<< totalprice<<endl;
 }
 
 return 0;
}*/

//assignment operator [+=,-=,*=,/=,%=]
// ### **Challenge:** Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.

/*#include<iostream>
using namespace std;
int main()
{
 int teabags;
 cout<<"Enter the teabags you have:"<<endl;
 cin>>teabags;

 if (teabags < 10)
 {
    // teabags = teabags + 5;
    teabags += 5;                   //assingment operator
 }
 cout<<"The total bags are:"<<teabags;
 return 0;
}*/

//relational operators [>=,<,<=]
// ### **Challenge:** A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

/*#include<iostream>
using namespace std;
int main()
{
 int cups;
 cout<<"Enter the cups you have:"<<endl;
 cin>>cups;
 
 if (cups >= 20)
 {
  cout<<"you will get a 'Gold' badge"<<endl;
 } else if(cups >= 10 && cups <=20) {               //logical operators
  cout<<"you will get a 'Silver' badge"<<endl;
 }else{
    cout<<"you are not elegible for the badge.";
 }
 
 return 0;
}*/

//Logical operators [&&,||]
// ### **Challenge:** Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.

/*#include<iostream>
using namespace std;
int main()
{
// condition check: isstudent or more than 15 cups.
 int cups;
 bool isStudent;
 cout<<"Are you a student or not [1 for Yes/0 for No]"<<endl;
 cin>>isStudent;

 cout<<"Enter the number of cups you have:"<<endl;
 cin>>cups;

 if (isStudent || cups >= 15)
 {
    cout<<"You are elegible for discount:"<<endl;
} else{
     cout<<"You are not elegible for discount:"<<endl;
 }
 
 return 0;
}*/

//Bitwise operators.

//------Practice Questions-----

// Q1. **Challenge 1: Arithmetic Operators**\
   Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

/*#include<iostream>
using namespace std;
int main()
{
   int teapacks;
 double priceperpack, totalprice, aftertaxFC;  //FC-final cost.

 cout<<"Enter the number of tea packs:"<<endl;
 cin>>teapacks;

 cout<<"The price of per pack:"<<endl;
 cin>>priceperpack;

 totalprice = teapacks*priceperpack;

 //apply 10% tax.
 aftertaxFC = totalprice + (totalprice*0.1);

cout<<"The final cost :"<<aftertaxFC<<endl;
 
 return 0;
}*/

// Q2. **Challenge 2: Assignment Operators**\
   Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the `+=` assignment operator. Display the updated total.

/*#include<iostream>
using namespace std;
int main()
{
   int teabags;

   cout<<"Enter the teabags you have:"<<endl;
   cin>>teabags;

   if (teabags <= 20)
   {
      teabags += 10;
      cout<<"The updated data is:"<<teabags<<endl;
   }
   else{
      cout<<teabags<<endl;
   }
 return 0;
}*/

//Q3. **Challenge 3: Relational and Logical Operators**\
   A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

/*#include<iostream>
using namespace std;
int main()
{
   int cups;
   cout<<"Enter the cups you have:"<<endl;
   cin>>cups;
   bool isMember;
   cout<<"Are you member for more then a year or not [1-yes,0-no]";
   cin>>isMember;

   if (cups >= 12 || isMember )
   {
      cout<<"You are elegible for subsciption."<<endl;
   } else {
      cout<<"Yow are not elegible for subscription."<<endl;
   }
 return 0;
}*/


