#include<iostream>  
using namespace std;  
class test
{
    public:
    static int a;
};
int test::a;
int main()
{
    cout<<test::a;
    return 0;
}

output:  0