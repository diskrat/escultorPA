#include <iostream>
#include "sculptor.hpp"

///@brief create a disk
int main() {
    /*
    Sculptor trono(10,10,10);
    trono.setColor(0,0,1,1);
    trono.putBox(0,9,0,9,0,9);
    trono.cutBox(1,8,1,9,1,9);
    trono.writeOFF("trono.off");


    Sculptor e1(31,31,51);
    e1.setColor(0,1,0,1);
    e1.putEllipsoid(15,15,15,10,10,15);
    e1.setColor(0,1,1,0.3);
    e1.putEllipsoid(15,15,15,9,9,14);
    e1.cutEllipsoid(15,15,15,8,8,13);
    e1.cutBox(0,30,0,30,0,5);
    e1.writeOFF("vaso.off");

    Sculptor e2(31,31,31);
    e2.setColor(1,1,0,1);
    e2.putSphere(0,0,0,10);
    e2.putVoxel(30,30,30);
    e2.writeOFF("sol.off");
    */

   Sculptor disco(20,20,20);
   disco.setColor(0,1,1,1);
   disco.putEllipsoid(5,1,5,5,1,5);
   disco.writeOFF("disco.off");



    return 0;
}