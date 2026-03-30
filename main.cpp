//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;


    monster m1("Naruto Uzumaki",10,1);
    monster m2("lelouch"),m4("Cid Kagenou",30);
    monster m3;
    monster x[5]={{"Anos voldigoad",5},{"Monkey D Luffy",10,20}};
    p=new monster("Lulu",10,50);
    delete p;//destructor

    return 0;//destructor x,m4,m2,m1
}    