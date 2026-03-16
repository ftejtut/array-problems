#include<iostream>
using namespace std;

int main(){

int sum=0;
int size;
cout<<"enter the number of employees"<<endl;
cin>>size;

int arr[size];
cout<<"enter the salaries of the employees"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
    arr[i]=arr[i]*1.1;
    sum+=arr[i];
}
sum=sum/size;
cout<<"The average salary is: "<<sum<<endl;

}
