#include <iostream>
#include <list>
#include <string>
#include "English.h"
#include "English26.h"
#include "English10.h"
#include "pi7pi7.h"


int main()
{
   
    std::string x= "null";
    std::cout<<"Enter Gematria type: 1:English-10, 2:English-26, 3:English-X6, 4:pi7pi7"<<std::endl;
    std::cin>>x;
    
    if(!x.compare("1")){
    int n; 
    std::cout<<"Enter a number: ";
    std::list<int> a;
    std::cin >> n;
    
    //   d= {"a":1,"b":2,"c":3,"d":4,"e":5,"f":6,"g":7,"h":8,"i":9,
    //     "j":10,"k":20,"l":30,"m":40,"n":50,"o":60,"p":70,"q":80,"r":90,
    //     "s":100,"t":200,"u":300,"v":400,"w":500,"x":600,"y":700,"z":800,}
    
    a.push_back(600);
    for(int i=1 ;i<9;i++){a.push_back(i);}
    for(int i=1 ;i<9;i++){a.push_back(i*10);}
    for(int i=1 ;i<8;i++){a.push_back(i*100);}
    subset_sum_ten(a,n);
    
    std::cout<<"Enter another numnber? y/n"<<std::endl;
    std::cin>>x;
    if(!x.compare("y")){
        main();
    }else{return 0;}
    }
    
    if(!x.compare("2")){
    int n; 
    std::cout<<"Enter a number: ";
    std::cin >> n;
    std::list<int> a;
    a.push_back(24);
    for(int i=1;i<26;i++){
        a.push_back(i);
    }
    for(int i=1;i<26;i++){
        a.push_back(i);
    }
    subset_sum_num(a,n);
    std::cout<<"Enter another numnber? y/n"<<std::endl;
    std::cin>>x;
    if(!x.compare("y")){
        main();
    }else{return 0;}
    
    }
    
    if(!x.compare("3")){
    int n; 
    std::cout<<"Enter a number: ";
    std::list<int> a;
    std::cin >> n;
    
    a.push_back(144);
    for(int i=1;i<26;i++){
        a.push_back(i*6);
    }
    for(int i=1;i<26;i++){
        a.push_back(i*6);
    }
    subset_sum_eng(a,n);
    
    std::cout<<"Enter another numnber? y/n"<<std::endl;
    std::cin>>x;
    if(!x.compare("y")){
        main();
    }else{return 0;}
    }
    
    if(!x.compare("4")){
    int n; 
    std::cout<<"Enter a number: ";
    std::list<int> a;
    std::cin >> n;
    
    for(int i=1;i<=7;i++){
        a.push_back(i);
    }
    for(int i=1;i<=7;i++){
        a.push_back(i);
    }
    
    subset_sum_pi7(a,n);
    
    std::cout<<"Enter another numnber? y/n"<<std::endl;
    std::cin>>x;
    if(!x.compare("y")){
        main();
    }else{return 0;}
    }
}