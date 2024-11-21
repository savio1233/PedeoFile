#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,2,5};
    int size=5;
    int large = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    cout<<"the largest number is: "<<large;

    cout<<endl;
}
int mainbaranch(){
    int a=10;
}
int feature1branch(){
    int b=12;
}
//this is the feture1 branch