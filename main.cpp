#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 ,sum =0;
    char c ;
    cout<<"Enter first number : ";
   cin >> n1 ;

   cout<<"Enter second number : ";
   cin >> n2;
    cout<<endl;
   cout<<"choose operation : ";
   cin >>c;
   cout<<endl;

   switch (c)
   {

    case '+':
       {
           sum = n1 +n2;
           cout<<"The result = "<<sum<<endl;
           break;
       }
       case '-':
       {
           sum = n1 -n2;
           cout<<"The result = "<<sum<<endl;
           break;
       }
       case '*':
       {
           sum = n1 *n2;
           cout<<"The result = "<<sum<<endl;
           break;
       }
       case '/':
       {
           if(n2==0){
            cout<<"sorry, Can not process this operation..."<<endl;
           }
           else{
             sum = n1 / n2;
             cout<<"The result = "<<sum<<endl;
           }
           break;
       }

  }
    return 0;
}
