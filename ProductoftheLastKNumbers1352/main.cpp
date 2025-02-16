#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class ProductOfNumbers
{
    vector<int> vec;

public:
    ProductOfNumbers()
    {
    }

    void add(int num)
    {
        vec.push_back(num);
    }

    int getProduct(int k)
    {
        if(k==0){
            return 0;
        }
        int length=vec.size();
        int ans=1;
        for(int i=length-1;i>length-k-1;i--){
            ans*=vec.at(i);
        }
        
        cout<<ans<<endl;
        return ans;
    }
};

int main()
{
    ProductOfNumbers productOfNumbers;
    productOfNumbers.add(3);        // [3]
    productOfNumbers.add(0);        // [3,0]
    productOfNumbers.add(2);        // [3,0,2]
    productOfNumbers.add(5);        // [3,0,2,5]
    productOfNumbers.add(4);        // [3,0,2,5,4]
    productOfNumbers.getProduct(2); // return 20. The product of the last 2 numbers is 5 * 4 = 20
    productOfNumbers.getProduct(3); // return 40. The product of the last 3 numbers is 2 * 5 * 4 = 40
    productOfNumbers.getProduct(4); // return 0. The product of the last 4 numbers is 0 * 2 * 5 * 4 = 0
    productOfNumbers.add(8);        // [3,0,2,5,4,8]
    productOfNumbers.getProduct(2); // return 32. The product of the last 2 numbers is 4 * 8 = 32
}