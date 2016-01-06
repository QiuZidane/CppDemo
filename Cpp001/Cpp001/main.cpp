//
//  main.cpp
//  Cpp001
//
//  Created by QiuZidane on 16/1/6.
//  Copyright © 2016年 QiuZidane. All rights reserved.
//

#include <iostream>
#include "Header.h"

#define NEWLINE '\n'
const char NLINE = '\n';

using namespace std;
typedef int newint;
enum color {A=5,B,C} D ;
extern char abc = 'z';

//float f;
int func();

int main(int argc, const char * argv[]) {
    
//    color cc;
//    f = 123.456;
//    cc=C;
//    char namechar = 'h';    // 注意，char必须用单引号
//    string name = "zidane";
//    
//    D = B;
//    std::cout << "Hello, World!\n";
//    cout << "Iam Zidane!\n";
//    cout << "d :" << D <<endl;
//    cout << "CC :" << cc << std:: endl;
//    cout << "namechar : " << namechar << NLINE;
//    cout << "name : " << name << NEWLINE;
//    cout << "abc : " << abc << '\n';
//    cout << "f = " << f << endl;
    
    int  var;
    int  *ptr;
    int  val;
    int  *var1;
    
    var = 3000;
    
    // 获取 var 的地址
    ptr = &var;
    
    // 获取 ptr 的值
    val = *ptr;
    
    
    
    
    
    cout << "Value of var :" << var << endl;
    cout << "Value of ptr :" << ptr << endl;
    cout << "Value of val :" << val << endl;
    
    
    
    return 0;
}
