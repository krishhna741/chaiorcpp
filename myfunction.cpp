//Functions...
/* returntype funtionName(parameters)      basic syntax..
    {
       //    funtion body;
    } */


/*

    #include<iostream>
using namespace std;

int checktemperature(int temp){
    return temp;
}

// decleration of function...
void servechai(int cups);

void servechai(string typechai){
    cout<<"serving"<<typechai<<endl;
}

void makingchai(){
    cout<<" Boiling water, Adding tea leaves, Suggar..."<<endl;
}

int main()
{
 int temp = checktemperature(50);
  cout<<temp;
  makingchai();
  servechai(3);  //function call.
  servechai("lemon tea");     //function call.

return 0;
}

//defination of funtion...
void servechai(int cups){
    cout<<" serving "<< cups <<" of chai "<<endl;
}

*/


// call by value...in function.

/*

#include<iostream>
using namespace std;
void pourchai(int cups){               //cups store the value 2 ---cups are        placeholder so we taks any type of name.
    cups = cups+5;                        // cups= 2+5--7
    cout<<"poured chai:"<<cups<<endl;    //thwy run 7.
}

int main()
{
int cups = 2;  //they pass the copy to another.
pourchai(cups);
cout<<" Total cups are: "<<cups<<endl;

return 0;
}

*/

//call by reference 
/*

#include<iostream>
using namespace std;
void pourchai(int &cups){               //&--- scope of the variable.
    cups = cups+5;                        
    cout<<"poured chai:"<<cups<<endl;   
}

int main()
{
int cups = 2;  //they pass the copy to another.
pourchai(cups);
cout<<" Total cups are: "<<cups<<endl;

return 0;
}

*/

//lambda functions....
#include<iostream>
using namespace std;



int main()
{
    //lambda
  auto preparedchai=[](int cups){
        cout<<"preparing "<<cups<<" cups of tea"<<endl;
  };
  preparedchai(4);
return 0;
}