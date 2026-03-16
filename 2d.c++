#include<iostream>
using namespace std;
int main(){
int d1,d2;
cout<<"enter the number of the rows and columns of the array"<<endl;
cin>>d1>>d2;
int arr[d1][d2];
for(int i=0; i<d1; i++){
    for(int j=0; j<d2; j++){
        cin>>arr[i][j];
    }
}

int max=arr[0][0];
for(int i=0; i<d1; i++){
    for(int j=0; j<d2; j++){
        if(max<arr[i][j]){
            max=arr[i][j];
        }
    }
}
cout<<"the max element is "<<max<<endl;
return 0;
}





