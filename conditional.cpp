//1. **If Statement**
// ### **Challenge:** Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string teaOrder;
    cout<<"Enter the Tea order:";
    getline(cin, teaOrder);
    
    if (teaOrder == "green tea")
    {
     cout<<"Your order is confirmed"; 
    }

return 0;
}*/


//2. **If-Else Statement**
// ### **Challenge:** Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

/*#include<iostream>
using namespace std;
int main()
{
  float hour;
  cout<<"Enter the time in hour[1-24]:"<<endl;
  cin>>hour;

  if (hour>=8 && hour<=18)
  {
    cout<<"Tea shop is open!"<<endl;
} else {
    cout<<"Tea shop is closed!"<<endl;
  }
return 0;
}*/


// 3. **Nested If-Else**
//  ### **Challenge:** A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
// * Between 10 and 20 cups: 10% discount
// * Less than 10 cups: No discount

/*#include<iostream>
using namespace std;
int main()
{
    int cups;
    float pricepercup = 5;
    double totalprice, discountedprice;
    
    cout<<"Enter the number of cups you have:"<<endl;
    cin>>cups;

    totalprice = cups*pricepercup;

    if (cups >= 20)
    {
        discountedprice = totalprice-(totalprice*0.2);
        cout<<"Elegiable for 20% discount:"<<discountedprice<<endl;
        
    }else if (cups >= 10 && cups < 20){
        discountedprice = totalprice-(totalprice*0.1);
        cout<<"Elegiable for 10% discount."<<discountedprice<<endl;  
    } else {
        cout<<" Not elegiable for ciscount."<<endl;
    } 

return 0;
}*/

// 4. **Switch Case**
// ### **Challenge:** Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2,Black tea: $3,Oolong tea: $4.

/*#include<iostream>
using namespace std;
int main()
{
 int choice;
 double price;

 cout<<"Tea Menu\n";
 cout<<"1.Green Tea\n";
 cout<<"2.Black Tea\n";
 cout<<"3.Oolong Tea\n";
 cout<<"Enter the choice tea[In Number]:"<<endl;
 cin>>choice;

switch(choice)
{
   case 1:
   price = 2.0;
   cout<<"You selected Green Tea, Price:"<<price<<endl;
   break;
   
   case 2:
   price = 3.0;
   cout<<"You selected Black Tea, Price:"<<price<<endl;
   break;

   case 3:
   price = 4.0;
   cout<<"You selected Oolong Tea, Price:"<<price<<endl;
   break;

   default:
   cout<<"Invalid choice"<<endl;
}

return 0;
}*/

//------Practice Questions-----

// 1. **Challenge 1: If Statement**\
   Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"

   /*#include<iostream>
   #include<string>
   using namespace std;
   int main()
   {
    string choice;
    cout<<"What is your favorite Tea?"<<endl;
    getline(cin, choice);

    if (choice == "Oolong Tea")
    {
        cout<<"You have Excellent Taste!"<<endl;
    }
   return 0;
   }*/

   //2. **Challenge 2: If-Else Statement**\
    Create a program that asks the user for their age. If the user is older than 18, allow them to proceed with purchasing tea; otherwise, print a message saying they are too young to purchase.

    /*#include<iostream>
    using namespace std;
    int main()
    {
     int age;
     cout<<"Enter the age:"<<endl;
     cin>>age;

     if (age >= 18)
     {
        cout<<"You are elegiable for purchasing Tea!"<<endl;
    } else {
        cout<<"Sorry! You are too younger for purchasing Tea."<<endl;
     }
     
    return 0;
    }*/

    // 3. **Challenge 3: Nested If-Else**\
   Write a program that checks the temperature of tea water input by the user:
// - If the temperature is above 100°C, print "Too hot!"
// - If the temperature is between 80°C and 100°C, print "Perfect temperature."
// - If the temperature is below 80°C, print "Too cold!"

/*#include<iostream>
using namespace std;
int main()
{
 int temp;
 cout<<"Enter the Temperature of tea water[in celsius]!"<<endl;
 cin>>temp;

 if (temp > 100)
 {
    cout<<"Too hot!"<<endl;
} else if (temp>=80 && temp<=100)
{
     cout<<"Perfect temprature!"<<endl;
 }else {
     cout<<"Too cold!"<<endl;
 }

return 0;
}*/

// 4. **Challenge 4: Switch Case**\
   Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.

   #include<iostream>
   using namespace std;
   int main()
   {
    int methods;
    cout<<"Brewing Methods"<<endl;
    cout<<"1.For Boiling"<<endl;
    cout<<"2.For Steeping"<<endl;
    cout<<"3.For Iced tea"<<endl;
    cout<<"Enter your prefrence"<<endl;
    cin>>methods;

    switch (methods)
    {
    case 1:
        cout<<"Boiling Method:Bring water to a boil, add tea leaves, and boil for 3-5 minutes."<<endl;
        break;
        
        case 2:
            cout<<"steeping Method:Heat water to desired temperature, pour over tea bag or leaves, and steep for 3-4 minutes."<<endl;
            break;

        case 3:
            cout<<"Iced tea Method:Brew strong tea, let it cool, then pour over ice and add lemon or sweetener if desired."<<endl;
            break;
        
    default:
            cout<<"Invalide option.";
        break;
    }
   return 0;
   }