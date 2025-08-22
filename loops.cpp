// 1. While Loop
//  Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

/*#include<iostream>
using namespace std;
int main()
{
 int teacups;
 cout<<"Enter the tea cups you serve:"<<endl;
 cin>>teacups;

 //while loop!
 while (teacups > 0)
 {
    // teacups = teacups-1;
    teacups--;
    cout<<"serve a cup of tea!"<<endl;
    cout<<"Remaining cups-"<<teacups<<endl;
 }
 cout<<"All cups are served!"<<endl;
 
return 0;
}*/

// 2. Do-While Loop
// Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.

/*#include<iostream>
using namespace std;
int main()
{
 string responce;
 do
 {
    cout<<"Do you want more Tea[yes/no]!"<<endl;
    // cin>>responce;
    getline(cin, responce);
 } while (responce != "no");
 
return 0;
}*/

// 3. For Loop
// Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.

/*#include<iostream>
using namespace std;
int main()
{
   int cups;
   cout<<"Enter the number of tea cups: "<<endl;
   cin>>cups;

   for (int i = 1; i <= cups; i++)
   {
     cout<<"Brewing" <<i<<"cup of tea"<<endl;
   }
   cout<<"Outside the loop!"<<endl;
   
return 0;
}*/

// 4. Break Keyword
// Challenge: Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.

/*#include<iostream>
using namespace std;
int main()
{
string responce;

while (true)   //using while loop!
{
    cout<<"Serving tea...!"<<endl;
    cout<<"do you want to more tea? type 'stop' to exit!"<<endl;
    getline(cin, responce);
    if (responce == "stop")
    {
        break;
    }
    
}
 cout<<"Okay, no more tea. Have a great day!"<<endl;
return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
string responce;

for (;;)   //using for loop!
{
    cout<<"Serving tea...!"<<endl;
    cout<<"do you want to more tea? type 'stop' to exit!"<<endl;
    getline(cin, responce);
    if (responce == "stop")
    {
        break;
    }
    
}
 cout<<"Okay, no more tea. Have a great day!"<<endl;
return 0;
}*/

// 5. Continue Keyword
// Challenge: Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.

/*#include<iostream>
using namespace std;
int main()
{
 string teatype[5]={"Oolong tea","Orange tea","Green tea","Black tea","lemon tea"};

 for (int i = 0; i < 5; i++)
 {
     if (teatype[i] == "Green tea")
     {
         continue;
         cout<<"skip the perticular tea!";
     }
    cout<<"browing "<<teatype[i]<<"..."<<endl;
    
 }
 
return 0;
}*/

// 6. Nested Loops
// Challenge: Write a program that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.

#include<iostream>
#include<string>
using namespace std;
int main()
{
  string teatypes[5]={"Oolong tea","Orange tea","Green tea","Black tea","lemon tea"};
  
  for (int i = 0; i < 5; i++)
  {
    cout<<"brewing"<<teatypes[i]<<"...."<<endl;
    for (int j = 0; j < 3; j++)
    {
        cout<<"brewing "<<j<<" cup of "<<teatypes[i]<<endl;
    }
    
  }
  
return 0;
}