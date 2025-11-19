#include <iostream>
              //ternary operator// 
    // ternary operator ?: =replacement to an if/else statement 
    // condition ? expression 1:expersion 2; (syntex)
int main(){
    int grade;
    std::cout <<"enter grade";
    std::cin >>grade;
    grade>=75? std::cout << "you did great":std::cout << "can do better";
    return 0; 
}
                     // find if no. is odd or even //
int main(){
    int num;
    double result;
    std::cout << "enter a number";
    std::cin >> num;
    result=num%2;
    result==1? std::cout <<"the number is odd ": std::cout << "the number is even";
    return 0;
}

 // boolean operator//

//A boolean (type bool) can only store two values:
//true (1)
//false (0)

int main(){
    bool hungry;
    std::cout <<"are you hungry?";
    std::cin >> hungry;
    hungry==true?std::cout <<"you are hungry" : std::cout <<"you are full";
    return 0;
}

          // LOGICAL OPERATOR //

    //&& operator-- check if two conditions are true
    // || operator-- check if atleast one of the two condition is true
    // ! operator-- reverses the logical state of its operand
        
          // AND(&&) //
    
    int main(){
        int temp;
        std::cout <<"enter temp";
        std::cin >> temp;
        if(30>temp && temp>0){
            std::cout <<"the temp is cold";
        }
        else{
            std::cout << "the temp is hot";
        }
    }
                  // OR //

        int main(){
        int temp;
        std::cout <<"enter temp";
        std::cin >> temp;
        temp>0 && temp<30 ? std::cout <<"temp is cold": std::cout <<"temp is hot";
        return 0;
    }  
    
       // OR (||) //

       int main(){
        int temp;
        std::cout << "enter temp";
        std::cin >> temp;
        temp>=0 || temp>=30 ?std::cout << "temp is cold":std::cout << "temp ishot";
        return 0;
       }

        // NOT(!) operator //

    int main(){
        int temp;
        bool sunny=true;
        std::cout <<"enter temp";
        std::cin >> temp;
        if(temp<=0 || temp>=30){
                std::cout<<"the temp is bad"<<'\n';
        }
        else{
                std::cout << "the temp is good" << '\n';
        }
        if(!sunny){           // !--this make condition reverse ,like now sunny is false//
                std::cout << "the temp is not sunny" << '\n';
        }
        else{
                std::cout << "the temp is sunny" << '\n';
        }
        return 0;

       }

       // string methods //

       // lenght-- tell us the no. of letters in a string //

    int main(){

    std::string name ;
    double a;

    std::cout << "enter your name";
    getline(std::cin,name);
    a=name.length();  // string.lenght()-- it tells the lenght of string//

    a >12? std::cout <<"name should be of 12 character ":std::cout <<"welcome "<<name;

    return 0;
}
      // empty method //

      int main(){

    std::string name;
    std::cout << "enter your name";
    getline(std::cin ,name);

    name.empty() ?std::cout <<"please enter your name":std::cout << "welcome" << name;

    return 0;
}
// value of a=string.empty()=1//
//Why does a = 1 when the string is empty?//
//this is Because empty() returned true, and when stored in a number, true = 1.//

int main(){
     int a;
     std::string name;
     std::cout << "enter name";  //If name is empty(true) → a = 1//
                                //If name is not empty(false) → a = 0//
     std::cin >> name;

     a=name.empty();

     std::cout <<name << '\n';
     std::cout << a << '\n'; // see that now the value of a is 0 because bool false//

     return 0;
}

      // name.clear//

      int main (){

    std::string name;
    std::cout <<"enter a name";
    std::cin >> name;

    name.clear();  //this method is used to clear the name //

    std::cout << "hello" << name;
    return 0;
}

   // append method [string.append("hello")] //

   int main(){
    std::string name;
    std::cout <<"enter your name";
    std::cin >> name;

    name.append("@gamil.com") ; // this is used to add a string in a existing string//
    std::cout << "your e-mail is " << name;

    return 0;
}

  // indexing of a string [s][a][m]s-0,a-2,m-2//
  // string.at(index postion)// 

  int main (){
    std::string name;
    std::cout <<"enter name";
    getline(std::cin,name);
    std::cout << name.at(2); // 2nd index letter will be displayed//
    return 0;
}

//inserting a letter in string(string .instert(0,"sam"))//

int main(){

    std::string name;
    std::cout << "enter your name";
    getline(std::cin,name);

    name.insert(7," yadav");// yadav starts from index 8//
    std::cout<< "your name is "<< name;

    return 0;
}

// to find char(letter) index in a string (string.space(' '))//

int main(){
    std::string name;
    std::cout <<"enter your name";
    getline(std::cin,name);

    std::cout << name.find(' '); // here we give letter and we get its index//

    return 0;
}

   // string.erase(o,3)//

   //case-1//

   int main(){
    std::string name;
    std::cout << "enter name" ;
    getline(std::cin,name);
    name.erase(0,3);  // int this case 3 is not included //
    std::cout << "name is " << name;
    return 0;
}

   //case-2//

   int main(){
    std::string name;
    std::cout << "enter name" ;
    getline(std::cin,name);
    name.erase(1,3); // in this case 3 is included //
    std::cout << "name is " << name;
    return 0;
}
  
  

  












     