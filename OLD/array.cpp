#include<iostream>
using namespace std ;
void leftrotate(int arr[], int d, int n){

d=d%n ;

int temp[d];
 for (int i=0; i < d; i++)
temp[i]= arr[i];

for (int i= d; i < n; i++)

arr[i-d] =arr[i];


for (int i=n-d; i < n; i++)
{
    arr[i] = temp[i - (n-d)];
}
}
int main(){

    int n;
    cin>> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>> arr[i]
;
}
int d;

leftrotate(arr,d,n);

for(i=0;i<n;i++){
    cout<< arr[i];
}

return 0;
}