#include <iostream>
using namespace std;
 
int sum(int a[],int s){
int sum=0;
for(int i=0;i<s;i++){
sum=sum+a[i];
}
return sum;
}

int main(){
int size;
cout<<"Enter size of array\n";
cin>>size;
int ar[size];
cout<<"Enter elements of array\n";
for(int j=0;j<size;j++){
cin>>ar[j];
}
cout<<"Sum of elements of array="<<sum(ar,size)<<"\n";
}
