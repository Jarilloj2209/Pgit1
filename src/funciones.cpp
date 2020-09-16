//
// Created by jarillo on 15/09/20.
//
//#include "/home/jarillo/Escritori…s/s5/untitled1/includes/funciones.h"
#include "C:\Users\aldos\CLionProjects\Pgit1\includes\funciones.h"
#include <iostream>

float compara(float x,float y ){
    if (x>y){
        return -1;
    }
    else if (x<y){
        return -1;
    }else{
        return 0;
    }
}

float factorial (int n){
    float fact, fac;
    if (n<0)fact=0;
    else if (n==0) fact=1;
    else {
        for (int i=1;i<=n;i++){
            fact=fact+i;
        }
        std::cout<<fac<<std::endl;
    }
}

float negacion (float z){
    std::cout<<(z*-1)<<std::endl;
}