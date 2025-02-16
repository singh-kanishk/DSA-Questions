#include <iostream>
#include <vector>

using namespace std;
int fibonacci(int n){
int a=0,b=1;
for(int i=0;i<n;i++){
    b=b+a;
    a=b-a;
}
return b;
}
int main() {
    cout<<fibonacci(6);
    return 0;
}