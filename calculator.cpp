# include<iostream>
using namespace std;
int a;
int main(){
    
    cout<<"This cpp program for calculator"<<endl;
    cout<<"This program only does operation on two numbers"<<endl;
    cout<<"use the specific number as to the specific operation"<<endl;
    cout<<"[1] add\n[2]sub\n[3]multiply\n[4]divide\n";
    cin>>a; 
    if(a == 1){
        int x, y;
        cout<<"**********ADDITION************"<<endl;
        cout<<"1st number: "; cin>>x;
        cout<<endl;
        cout<<"2nd number: "; cin>>y;
        cout<<endl;
        long double z = x + y;
        cout<<"result: "<<z;
    }    
    else{
        if(a == 2){
        int x, y;
        cout<<"**********SUBTRACTION************"<<endl;
        cout<<"1st number: "; cin>>x;
        cout<<"2nd number: "; cin>>y;
        long double z = x - y;
        cout<<"result: "<<z;
        }
        else{
        if(a == 3){
        int x, y;
        cout<<"**********MULTIPLICATION************"<<endl;
        cout<<"1st number: "; cin>>x;
        cout<<"2nd number: "; cin>>y;
        long double z = x * y;
        cout<<"result: "<<z;
        }
        else{
        if(a == 4){
        int x, y;
        cout<<"**********DIVISION************"<<endl;
        cout<<"1st number: "; cin>>x;
        cout<<"2nd number: "; cin>>y;
        long double z = x / y;
        cout<<"result: "<<z;
        }
    }
    }
    }    
    system("pause");
    return 0;
}
