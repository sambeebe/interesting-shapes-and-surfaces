int makeTri(vector posA,posB,posC){
    int ptA = addpoint(0,posA);
    int ptB = addpoint(0,posB);
    int ptC = addpoint(0,posC);
    
    int prm = addprim(0,"poly",ptA,ptB,ptC);
    return prm;
}
