#ifndef CUBE_H
#define CUBE_H

#include <string>
using namespace std;

class Cube
{
public:
    Cube(char c0='Y', char c1='R', char c2='W', char c3='O', char c4='G', char c5='B');
    ~Cube();
    char cube[6][9];
    void rotate(const string str);
    void rotateSurface(int rs);
    void rotateCircle(int rc);
    void rotateCircleTransform(int i1, int i2, int i3, int i4,
                               int i11, int i12, int i13,
                               int i21, int i22, int i23,
                               int i31, int i32, int i33,
                               int i41, int i42, int i43);
    char temp0[9];
    char temp1[3];
};

#endif // CUBE_H
