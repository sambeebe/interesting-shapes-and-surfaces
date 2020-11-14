#include <math.h>
#include "shapeUtil.h"

vector diniPnt(float U, V, a, b){  //dini surface
    float x = a*cos(U) * sin(V);
    float y = a*(cos(V) + log(tan(V/2)+0.0001)) + b*U;
    float z = a*sin(U) * sin(V);
    
    return set(x,y,z);
}

/* dini function mapper, temporarily stored here
float TWOPI = PI*2;
float FOURPI = PI*4;
float A = chf("A");
float B = chf("B");
float uMul = chf("U_Max") * FOURPI;
float vMul = chf("V_Max") * FOURPI;
int divs = chi("Divisions");

float U = uMul/divs;
float V = vMul/divs;

for(int i = 0; i < divs; i++){
    for(int j = 0; j < divs; j++){
        float u0 = U*i;
        float v0 = V*j;
        float u1 = U*(i+1);
        float v1 = V*(j+1);
        
        vector p1 = getPnt(u0,v0,A,B);
        vector p2 = getPnt(u1,v0,A,B);
        vector p3 = getPnt(u1,v1,A,B);
        vector p4 = getPnt(u0,v1,A,B);
        
        makeTri(p1,p2,p3);
        makeTri(p4,p1,p3);
     }
}
*/
vector saddlePnt(float x,y,xPow,yPow){ //saddle surface
    float z = 1. - (pow(x,xPow) + pow(y,yPow));
    return set(x,y,z);
}

/* saddle function mapper, temporarily here as a comment
int divs = chi("Divisions");

float xMin = chf("xMin");
float xMax = chf("xMax");
float yMin = chf("yMin");
float yMax = chf("yMax");
float xInc = (xMax - xMin)/divs;
float yInc = (xMax - xMin)/divs;

float xPow = chf("xPow");
float yPow = chf("yPow");

for(int i = 0; i < divs; i++){
    for(int j = 0; j < divs; j++){
                
        float x0 = xMin + xInc*i;
        float y0 = yMin + yInc*j;
        float x1 = xMin + xInc*(i+1);
        float y1 = yMin + yInc*(j+1);
        
        vector p1 = zSurf(x0,y0,xPow,yPow);
        vector p2 = zSurf(x1,y0,xPow,yPow);
        vector p3 = zSurf(x1,y1,xPow,yPow);
        vector p4 = zSurf(x0,y1,xPow,yPow);
        
        makeTri(p1,p2,p3);
        makeTri(p4,p1,p3);
     }
}
*/
