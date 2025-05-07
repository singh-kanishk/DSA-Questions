#include <iostream>
using namespace std;
int check;
int recursion(){}
int squareRoot(int x) {
    int high=x/2,low=0;
    int mid=(high+low)/2;
   if(x==0||x==1){
    return x;
   }
   else if(x<0){
    cout<<"Not Defined";
   }
   else if(mid*mid==x){
    return mid;
   }
   else if(mid*mid>x){
    low= mid+1;
   }
{

}

}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "The square root of " << x << " is: " << squareRoot(x) << endl;

    return 0;
}
