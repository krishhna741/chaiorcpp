//Pointer- Datatype which hold the address of another datatype.

/*
#include<iostream>
using namespace std;
int main()
{

 int a = 5;
 int* b = &a;  //where (*) dereference operator,(&)-->address of operator.

 cout<<a<<endl;
 cout<<*b<<endl;

return 0;
}
*/


/*
#include<iostream>
using namespace std;

int*prepareChaiOrders(int cups){
    int* orders = new int[cups]; //new--> dynamic type array.
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i+1)*10;
    }
    return orders;
    
}

int main()
{
  int cups = 5;
  int* chaiOrder=prepareChaiOrders(cups);

  for (int i = 0; i < cups; i++)
  {
    cout <<"cups:"<<i+1<<" has "<<chaiOrder[i]<<endl;
  }
  
return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
int [3][5chaisales] = {
 {10,20,30,40,50},   //shop 1 sales of 5 days.
 {20,30,40,50,60},   //shop 2 sales of 5 days.
 {30,40,50,60,70}    //shop 3 sales of 5 days.
 };

 for (int i = 0; i < 3; i++)
 {
  cout<<"I am at shop"<<endl;
  for (int j = 0; j < 5; j++)
  {
    cout<<chaisales[i][j]<<"cups"<<endl;
  }
 
}
return 0;
}