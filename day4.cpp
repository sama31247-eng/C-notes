#include <iostream>
int main(){
    /*type conversion = conversion of a value of one data type to another
    implicite=automatic
    ecplicite=precede value with new data type(int) x =(x is varible or value)*/

    double radius=(int)3.14;  // here int converts 3.14 to 3 then 3 is given to double.
    std::cout << radius;
    return 0; 
}
int main(){
    char x =100;  //this is an implacite// 
    std::cout << x;
    std:: cout << char(100);  // this is an explicite //
    return 0;
}
int main(){
    int correct=8;
    int question=10;
    std::cout << correct/(double)question *100 <<"%"; /* here question  has become a double so this has become
                                                       a double division*/  
     return 0; 
} 

  // how to use input//

  int main(){
    std::string name;
    int age;
    std::cout << "enter your name" <<'\n';     /*here string will not be read after a space like
                                                   in sam bro only sam will be read*/
    std::cin >> name ;
    std::cout <<"enter your age";    
    std::cin >> age;
    std::cout <<"your name is--"<< name <<'\n';
    std::cout << "your age is--"<< age;
    return 0;
}
     // how to read full string//

     int main(){
    std::string name;
    std::cout << "enter your name--";
    std::getline(std::cin, name);
    std::cout << " your name is--"<< name;
    return 0;
}

int main (){
    std::string name;
    int age;
    std::cout << "enter you name";   // now this project will work fine //
    std::getline(std::cin,name);     // but if we switch name and age line then we will pnly get age not name//
    std::cout << "enter your age" ;
    std::cin >> age;
    std::cout << "your name is --"<< name << '\n' ;
    std::cout << "your age is--"<< age;
    return 0;
}
int main (){
    std::string name;
    int age ;
    std::cout << "enter your age";    /*when in a program we use cin followed by getline then we use (>> std::ws) after cin in
                                       as there is a new line character after line 8 in input buffer and it is take in name*/

    std::cin >> age;  // line 8//
    std::cout <<"enter your name";
    std::getline(std::cin >>std::ws,name);
    std::cout <<"your name is--"<< name <<'\n';
    std::cout <<"your age is--"<< age;
    return 0;
}
     // maths relations//
     // min and max//

int main (){
    int x=3;
    int y=4;
    int z;
    int a;
  z= std::min(x,y);
  a=std::max(x,y);
    std::cout << "max value--"<<a <<'\n';
    std::cout << "min value--"<<z;
    return 0;
}
// power,square and square root//

#include<cmath>
int main (){
    double a;
    double b;
    double c;
    a=pow(2,4);
    b=sqrt(16);
    c=abs(-4);      // abs tell us how far is no. form 0//
    std::cout << a<<'\n';
    std::cout << b << '\n';
    std::cout << c;
    return 0;
}
// round off,round up and round down//

#include <cmath>
int main (){
    double a=3.14;
    double b=3.14;
    double c=3.99;
    double A;
    double B;
    double C;
    A=round(a);
    B=ceil (b); // to round up//
    C=floor(c); // to round down//
    std::cout<< A<<'\n';
    std::cout <<B <<'\n';
    std::cout <<C <<'\n';
    return 0;


}



    

