/*method Overloading is defined as the process of having two or more function with the same name, but different in parameters is known as method overloading in C++. 
In method overloading, the function is redefined by using either different types of arguments or a different number of arguments. 
It is only through these differences compiler can differentiate between the functions.
return alues will not participate in method overloading.
The advantage of Function overloading is that it increases the readability of the program because you don't need to use different names for the same action.
The disadvantage of method overloading is that it increases the size of the code.*/

#include <iostream>    
using namespace std;    
class test {    
    public:    
static int add(int a,int b){      
        return a + b;      
    }      
static int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) {    
    test t;                                                  
    cout<<t.add(10, 20)<<endl;      
    cout<<t.add(12, 20, 23);     
   return 0;    
} 