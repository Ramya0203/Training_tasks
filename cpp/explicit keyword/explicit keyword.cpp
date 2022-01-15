/*Explicit Keyword in C++ is used to mark constructors to not implicitly convert types in C++.*/

#include <iostream>
class Base
{
int b_var;
public:
Base() {}
explicit Base(int var) : b_var(var){}
void print()
{
std::cout<<b_var<<std::endl;
}
};
void fun(Base b){
b.print();
}
int main() {
Base obj1(5);  //normal call
Base obj2=10;  //implicit call
fun(obj1);     //normal call
fun(20);       //implicit call
return 0;
}
