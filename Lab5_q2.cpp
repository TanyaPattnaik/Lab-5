#include <iostream>
using namespace std; 

int large(int a[],int s,int l){
for(int i=1;i<s;i++){
if(a[i]>l)
l=a[i];
}
return l;
}

int small(int a[],int s,int sm){
for(int i=1;i<s;i++){
if(a[i]<sm){
sm=a[i];
}
}
return sm;
}

double mean(int a[],int s){
int sum=0;
for(int i=0;i<s;i++){
sum=sum+a[i];
}
double m=(double)sum/s;
return m;
}

double median(int a[],int s){
if(s%2==0){
double m=double((a[s/2]+a[(s/2)+1])/2);
return m;
}
else
{
double m=a[(s+1)/2];
return m;
}
}

int

int main(){
int size;
cout<<"Enter size of array\n";
cin>>size;
int ar[size];
cout<<"Enter elements of array\n";
for(int j=0;j<size;j++){
cin>>ar[j];
}


int n=ar[0];
cout<<"Largest element is "<<large(ar,size,n)<<"\n";
cout<<"Smallest integer is "<<small(ar,size,n)<<"\n";
cout<<"Mean of the elements is "<<mean(ar,size)<<"\n";
cout<<"Median of the elements is "<<median(ar,size)<<"\n";
}
