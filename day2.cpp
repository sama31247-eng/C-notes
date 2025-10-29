#include<iostream>
int main (){
    //chaar//
    char grade='A';
    char sec='b';              //this data type is ussed to store only single character// 
    std::cout << grade <<'\n';
    std::cout << sec <<'\n';
    
    // bool//
    bool student =true;
    bool power = false;    //this data type is used for boolen (true or false)//
    bool sale =true;       //the output will be in the form of 1 or 2//
    std::cout << student <<'\n';
    
    //string//

    std::string name="sambhav";
    std::string zodic="leo";
    std::cout << name <<'\n';
    std::cout << zodic<<'\n';

    // const//

    /*the const keyword specifies that a varible's value is constant.tells the compiler to prevent anything from modifying  
    (read only)*/
    
    const double PI=3.14;
    const int HEIGHT=180;     // while using const data type write varible in capital//
    const int WEIGHT=54;
    return 0; 
 }

