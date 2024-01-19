/*#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char x;
    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;

    
    cout<<"Press a for Addition "<< endl;
    cout<<"Press s for Subtraction "<< endl;
    cout<<"Press m for Multiplication "<< endl;
    cout<<"Press d for Division "<< endl;
    cout<<"Press r for Remainder "<< endl;
    cin>>x;
    if(x== 'a'){
      cout<<"The sum = "<< num1 + num2 <<endl;
    }
    else if(x== 's'){
        cout<<"The subtracttion :"<< num1- num2<< endl;
    }
    else if(x== 'm'){
        cout<<"The multiplication = "<<num1*num2 <<endl;
    }
    else if(x== 'd'){
        cout<<"The division = "<<num1/num2 <<endl;
    }
    else if(x== 'r'){
        cout<<"the remainder = "<<num1 % num2 <<endl;
    }
    else{
        cout<<"Invalid operator" << endl;
    }
}*/

#include<iostream>
using namespace std;
int main(){
    char opt;
    float num1, num2,result = 0;
    cout<<"Enter the any operator like +,-,*,/:";
    cin>>opt;
    cout<<"Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    switch(opt){
        case '+': result = num1 + num2;
         break;
        case '-': result = num1 - num2;
         break;
        case '*': result = num1 * num2;
         break;
        case '/': result = num1 / num2;
         break;
        default: cout<<"Invalid Operator.";
    }
    cout<<"The value = "<<result;
    return 0;
}