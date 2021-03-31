#include <iostream>
#include "concatRemFunction.h"

int main()
{
    std::string s,t;
    int k;
    bool result;

    getData(s,t,k);

    result = ConcatRemove(s,t,k);


    if(result){
        std::cout<< "YES" << std::endl;
    }else{ std::cout<< "NO" << std::endl; }

    system("PAUSE");// used to pause console application

    return 0;
}
