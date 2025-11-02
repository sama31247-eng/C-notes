// name space //

    /*namespace provides a solution for preventing name conflicts in large projects .Each entity needs a unique name.A namespace
    allows for identical named entities as long as the namespaces are different.*/
#include <iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
    int x=3;
    std::cout << first::x<<'\n';     // to call the x from diff. name space write--std::cout <<first::x//
    std::cout <<second::x<<'\n';
    std::cout <<x;
    return 0;
}
    
    /*type def= reserved keyword used to create an additional name (alias) for another data type .
    new identifier for an existing type helps with readbility and reduces typos*/

    typedef std::string text_t;
    typedef int number_t;

    int main(){
        text_t name="sambhav";    // text can be used in place of std::string//
        number_t age= 21;
        std::cout << name << '\n';
        std::cout << age << '\n';
        return 0;
 }

        // using keyword//

        // typedef is know replaced by using key word as it works better foe templetes//

       
 using text=std::string ;
 using number=int;
 int main(){
    text name = "sambhav";
    number age= 21;
    std::cout << name << '\n';
    std::cout << age << '\n';
    return 0;
}

  // Arithmetic operators//

        // add //

  int main(){
    int student=21;
    student=student+1;
         //or//
    student++;  // this is type of adding is used in a lot of loops//     
    std::cout << student <<'\n';
    return 0;
}
    //substracting//
     int main(){
        int student=21;
        student=student-1;
        std::cout<< student;
        return 0;
    }

        // multi//
    int main(){
    int student =20;
    student= student*2;
    std::cout << student;
    return 0;    
}
     
        //division//
       
    int main(){
    int student=20;  // we will use int data type when no. is completely divisible // 
    student=student/2;
    std::cout << student;
    return 0;
}
    int main(){
    double student=21;  // we will use double data type when no. has a remainder // 
    student=student/2;
    std::cout << student;
    return 0;
}
    
     //remainder(modulus)// 

    int main(){
     int student=21;
     student=student%2;
     std::cout << student ;
     return 0;
 }
     // parenthesis//
     //multiplication & division//
     // addition & subtraction //
     
    int main(){
    int student=6-5+4*3/2;
    std::cout << student;
    return 0; 
}
     


     



        




   