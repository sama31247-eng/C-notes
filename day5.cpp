#include<iostream>
#include<cmath>
// program to calculate hypotneuse //
int main (){
    double a;
    double b;
    double c;
    std::cout <<"enter the value of a";
    std::cin >> a;
    std::cout << "enter the vlaue of b";
    std::cin >> b;
    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
    // c=sqrt(pow(a,2)+pow(b,2)); thsi line can be used in place of above 3 lines //6
    std::cout <<"the value of hypotenuse is" << c;
    return 0;
}
 // condirional statement //

        // IF,ELSE and IF ELSE //

        // if statements= do something if a condition is true.
        //   if not , then don't do it .
 int main (){
    int age;
    std::cout << "enter your age";
    std::cin >> age;                     // rembember the order of your else and if statement does matter //
    if(age>=18){
        std::cout << "welcome to the site";
    }
    else{
        std::cout << "you are under age";
     }      
    }

   // find the grade of student //

   int main(){
    int marks;
    std::cout << "enter marks";
    std::cin >> marks;
    if(marks>=90){
        std::cout << "your grade is A";
    }   
      else if(marks>=60){
        std::cout << "your grade is B";
    }  
    else {
        std::cout << "your grade is c";
    }
    return 0;
    
}
           // SWITCH //
           
   // Switch =altternative to using many "else if " statements 
   //         compare one value against matching cases 
   
   int main(){

 int week;
    std::cout << "enter a number(1-7)";
    std::cin >> week;
    switch(week) {

        case 1:
          std::cout << "monday";
          break;
        
        case 2:
          std::cout << "tuesday";
          break;
        
        case 3:
        std::cout << "wednesday";
        break;

        case 4:
        std::cout <<"thursday";
        break;

        case 5:
        std::cout <<"friday";
        break;

        case 6:
        std::cout <<"saturday";
        break;

        case 7:
        std::cout <<"sunday";
        break;

        default:
        std::cout <<"please enter b/w(1-7)";
        break;        
    } 
    return 0;
}

      // Grade program //

    int main (){
    char grade;
    std::cout << "enter a grade(A-C)";
    std::cin >> grade;
    switch(grade){
        case 'A':
        std::cout << "you did great";
        break;
        case 'B':
        std::cout <<"you did good";
        break;
        case 'C':
        std::cout <<"can do better";
        break;
        default:
        std::cout <<"please enter grade b/w (A-B)";
        break;
    }
    
    return 0;
}

    // calculator program//

    int main (){
    std::cout <<"****************calculator*****************"<< '\n';
    char op;
    double num1;
    double num2;
    double result;
    std::cout <<"choose a operator(+,-,*,/)";
    std::cin >> op;
    std::cout << "enter a numbear1--";
    std::cin >> num1;
     std::cout << "enter a number2--";
    std::cin >> num2;
    switch(op){
        case'+':
        result =num1 +num2;
        std::cout << "result" << result <<'\n' ;
        break;

        case'-':
        result =num1-num2;
        std::cout << "result" << result <<'\n';
        break;

        case'*':
        result =num1*num2;
        std::cout << "result" << result <<'\n';
        break;

        case '/':
        result=num1/num2;
        std::cout <<"result" <<result <<'\n';
        break;

        default:
        std::cout << "enter a valif operator";
        break;
    }
    std::cout << "********************************************************";
    return 0;    
}
    
    
    
   


   

   



   

