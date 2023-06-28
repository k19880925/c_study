#include <iostream> // c++ 입출력 기본 함수 시스템 내부 라이브러리 대문자 꺽세
//#include "불러올헤더" // 만든거 불러오기    xxx.h 로 끝남 (객체 )

//using namespace std; // std 매번 붙이기 싫으면 

// '' : 문자 한개 , " " : 문자열

int main(void) 
{
    int n1,n2 ;
    // newline 필요한 경우 endl 붙이기
    // c++ 의 printf 같은 것 
    std::cout << n1 << n2 << std::endl;//475619880
    std::cout << n1 << n2;
    std::cout << n1 << n2 << std::endl; //475619880475619880 ( 개행 문자가 없어서, 한줄로 써짐 )
    std::string test= "test"; //string 
    std::cout << test <<std::endl;
    
    //@ 입력 받기
    int m1 =0;
    std::cin >> m1;
    std::cout<< m1 <<std::endl;

    //@ if 문
    if(n2 ==0)
    {
        std::cout << "n3 = 0"<< std :: endl;
    }
        else
    {
        std::cout << "n3 is not  0"<< std :: endl;
    }
    //@while 문
    while (m1==0)
    {
        std::cout<< "test" << std::endl;
    }

    do{
        std::cout<<"1"<<std::endl;
    }while (m1==0);
    {
     std::cout<< "test" << std::endl;
    } 

    //@ for문 
    for(int i=0 ; i<10;i++){
        std::cout<<i<<std::endl;
    }
 return 0;
}

