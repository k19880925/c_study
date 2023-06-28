#include <iostream>

int main(void) 
{
    int a = 0;
    int b = 0;
    int c= 0;

    std::cin >> a >> b;
    std::cout << "덧셈:" << a+b << " 뺄셈:" << a-b << " 나눗셈:" << a/b << "곱셈:" << a*b << std::endl;
    return 0;

}