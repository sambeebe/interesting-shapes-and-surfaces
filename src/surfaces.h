#include <math.h>
#include "shapeUtil.h"

vector diniPnt(float U, V, a, b){  //dini surface
    float x = a*cos(U) * sin(V);
    float y = a*(cos(V) + log(tan(V/2)+0.0001)) + b*U;
    float z = a*sin(U) * sin(V);
    
    return set(x,y,z);
}

vector saddlePnt(float x,y,xPow,yPow){
    float z = 1. - (pow(x,xPow) + pow(y,yPow));
    return set(x,y,z);
}
