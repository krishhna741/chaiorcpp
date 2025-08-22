//Data types

// #include<iostream>
// using namespace std;
// int main()
// {
//     int tea = 50.29;
//     float tearate = 90.578;
//     double teacost = 150.584688984799989;
//     char teavalue = 't';
//     bool isteaready = false ;

//     cout<< tea <<endl;
//     cout<< tearate <<endl;
//     cout<< teacost <<endl;
//     cout<<teavalue <<endl;
//     cout<< isteaready <<endl;
    
//     return 0;
// }



//Modifiers

// #include<iostream>
// using namespace std;
// int main()
// {
//    unsigned int pack = 150; //unsigned mean -ve value is not allow.
//    long storage = 100000000;//used to store long data.
   
//     cout<<pack<<endl;
//     cout<<storage<<endl;

    
//     return 0;
// }


//string

//    #include<iostream>
//    #include<string>
// using namespace std;
// int main()
// {
//      string teaname = "TATA";
//      cout<<teaname<<endl;
     
//     return 0;
// }


//User input

   #include<iostream>
   #include<string>
using namespace std;
int main()
{
    string user;
    int quantity;

    cout<<"what would you like to order?"<<endl;
    getline(cin,user);

    //ask for quantity.
    cout<<"How many quantity:"<<user<<endl;
    cin>>quantity;

    cout<<user<<endl;
    cout<<quantity<<endl;


     
    return 0;
}
