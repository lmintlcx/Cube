#include "cube.h"

Cube::Cube(char c0, char c1, char c2, char c3, char c4, char c5)
    {
        for (int i = 0; i < 9; i++)
            {
                cube[0][i] = c0;
                cube[1][i] = c1;
                cube[2][i] = c2;
                cube[3][i] = c3;
                cube[4][i] = c4;
                cube[5][i] = c5;
            }

        for (int i = 0; i < 9; i++) temp0[i] = 'N';
        for (int i = 0; i < 3; i++) temp1[i] = 'N';
    }

Cube::~Cube()
    {
    }

void Cube::rotate(string str)
    {
        int movement = -1;

        if (str == "R") movement = 2;
        else if (str == "U") movement = 4;
        else if (str == "F") movement = 1;
        else if (str == "L") movement = 0;
        else if (str == "D") movement = 5;
        else if (str == "B") movement = 3;
        else if (str == "M") movement = 6;
        else if (str == "E") movement = 7;
        else if (str == "S") movement = 8;

        else if (str == "R\'") {for (int i = 0; i < 3; i++) this->rotate("R");}
        else if (str == "U\'") {for (int i = 0; i < 3; i++) this->rotate("U");}
        else if (str == "F\'") {for (int i = 0; i < 3; i++) this->rotate("F");}
        else if (str == "L\'") {for (int i = 0; i < 3; i++) this->rotate("L");}
        else if (str == "D\'") {for (int i = 0; i < 3; i++) this->rotate("D");}
        else if (str == "B\'") {for (int i = 0; i < 3; i++) this->rotate("B");}
        else if (str == "M\'") {for (int i = 0; i < 3; i++) this->rotate("M");}
        else if (str == "E\'") {for (int i = 0; i < 3; i++) this->rotate("E");}
        else if (str == "S\'") {for (int i = 0; i < 3; i++) this->rotate("S");}

        else if (str == "R2") {for (int i = 0; i < 2; i++) this->rotate("R");}
        else if (str == "U2") {for (int i = 0; i < 2; i++) this->rotate("U");}
        else if (str == "F2") {for (int i = 0; i < 2; i++) this->rotate("F");}
        else if (str == "L2") {for (int i = 0; i < 2; i++) this->rotate("L");}
        else if (str == "D2") {for (int i = 0; i < 2; i++) this->rotate("D");}
        else if (str == "B2") {for (int i = 0; i < 2; i++) this->rotate("B");}
        else if (str == "M2") {for (int i = 0; i < 2; i++) this->rotate("M");}
        else if (str == "E2") {for (int i = 0; i < 2; i++) this->rotate("E");}
        else if (str == "S2") {for (int i = 0; i < 2; i++) this->rotate("S");}

        else if (str == "r") {this->rotate("R"); this->rotate("M");}
        else if (str == "u") {this->rotate("U"); this->rotate("E");}
        else if (str == "f") {this->rotate("F"); this->rotate("S");}
        else if (str == "l") {this->rotate("L"); this->rotate("M\'");}
        else if (str == "d") {this->rotate("D"); this->rotate("E\'");}
        else if (str == "b") {this->rotate("B"); this->rotate("S\'");}
        else if (str == "x") {this->rotate("R"); this->rotate("M"); this->rotate("L\'");}
        else if (str == "y") {this->rotate("U"); this->rotate("E"); this->rotate("D\'");}
        else if (str == "z") {this->rotate("F"); this->rotate("S"); this->rotate("B\'");}

        else if (str == "r\'") {for (int i = 0; i < 3; i++) this->rotate("r");}
        else if (str == "u\'") {for (int i = 0; i < 3; i++) this->rotate("u");}
        else if (str == "f\'") {for (int i = 0; i < 3; i++) this->rotate("f");}
        else if (str == "l\'") {for (int i = 0; i < 3; i++) this->rotate("l");}
        else if (str == "d\'") {for (int i = 0; i < 3; i++) this->rotate("d");}
        else if (str == "b\'") {for (int i = 0; i < 3; i++) this->rotate("b");}
        else if (str == "x\'") {for (int i = 0; i < 3; i++) this->rotate("x");}
        else if (str == "y\'") {for (int i = 0; i < 3; i++) this->rotate("y");}
        else if (str == "z\'") {for (int i = 0; i < 3; i++) this->rotate("z");}

        else if (str == "r2") {for (int i = 0; i < 2; i++) this->rotate("r");}
        else if (str == "u2") {for (int i = 0; i < 2; i++) this->rotate("u");}
        else if (str == "f2") {for (int i = 0; i < 2; i++) this->rotate("f");}
        else if (str == "l2") {for (int i = 0; i < 2; i++) this->rotate("l");}
        else if (str == "d2") {for (int i = 0; i < 2; i++) this->rotate("d");}
        else if (str == "b2") {for (int i = 0; i < 2; i++) this->rotate("b");}
        else if (str == "x2") {for (int i = 0; i < 2; i++) this->rotate("x");}
        else if (str == "y2") {for (int i = 0; i < 2; i++) this->rotate("y");}
        else if (str == "z2") {for (int i = 0; i < 2; i++) this->rotate("z");}

        switch (movement)
            {
            case 0: {rotateSurface(0); rotateCircle(0);}break;
            case 1: {rotateSurface(1); rotateCircle(1);}break;
            case 2: {rotateSurface(2); rotateCircle(2);}break;
            case 3: {rotateSurface(3); rotateCircle(3);}break;
            case 4: {rotateSurface(4); rotateCircle(4);}break;
            case 5: {rotateSurface(5); rotateCircle(5);}break;
            case 6: {rotateCircle(6);}break;
            case 7: {rotateCircle(7);}break;
            case 8: {rotateCircle(8);}break;
            default: break;
            }
    }

void Cube::rotateSurface(int rs)
    {
        temp0[0] = this->cube[rs][6];
        temp0[1] = this->cube[rs][3];
        temp0[2] = this->cube[rs][0];
        temp0[3] = this->cube[rs][7];
        temp0[4] = this->cube[rs][4];
        temp0[5] = this->cube[rs][1];
        temp0[6] = this->cube[rs][8];
        temp0[7] = this->cube[rs][5];
        temp0[8] = this->cube[rs][2];

        cube[rs][0] = temp0[0];
        cube[rs][1] = temp0[1];
        cube[rs][2] = temp0[2];
        cube[rs][3] = temp0[3];
        cube[rs][4] = temp0[4];
        cube[rs][5] = temp0[5];
        cube[rs][6] = temp0[6];
        cube[rs][7] = temp0[7];
        cube[rs][8] = temp0[8];
    }

void Cube::rotateCircle(int rc)
    {
        switch (rc)
            {
            case 0: rotateCircleTransform(1, 5, 3, 4, 0, 3, 6, 0, 3, 6, 8, 5, 2, 0, 3, 6); break;
            case 1: rotateCircleTransform(0, 4, 2, 5, 8, 5, 2, 6, 7, 8, 0, 3, 6, 2, 1, 0); break;
            case 2: rotateCircleTransform(1, 4, 3, 5, 8, 5, 2, 8, 5, 2, 0, 3, 6, 8, 5, 2); break;
            case 3: rotateCircleTransform(0, 5, 2, 4, 0, 3, 6, 6, 7, 8, 8, 5, 2, 2, 1, 0); break;
            case 4: rotateCircleTransform(0, 3, 2, 1, 2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1, 0); break;
            case 5: rotateCircleTransform(0, 1, 2, 3, 6, 7, 8, 6, 7, 8, 6, 7, 8, 6, 7, 8); break;
            case 6: rotateCircleTransform(1, 4, 3, 5, 7, 4, 1, 7, 4, 1, 1, 4, 7, 7, 4, 1); break;
            case 7: rotateCircleTransform(0, 3, 2, 1, 5, 4, 3, 5, 4, 3, 5, 4, 3, 5, 4, 3); break;
            case 8: rotateCircleTransform(0, 4, 2, 5, 7, 4, 1, 3, 4, 5, 1, 4, 7, 5, 4, 3); break;
            }
    }

void Cube::rotateCircleTransform(int i1, int i2, int i3, int i4,
                                 int i11, int i12, int i13,
                                 int i21, int i22, int i23,
                                 int i31, int i32, int i33,
                                 int i41, int i42, int i43)
    {
        temp1[1] = this->cube[i4][i41];
        temp1[2] = this->cube[i4][i42];
        temp1[3] = this->cube[i4][i43];

        cube[i4][i41] = cube[i3][i31];
        cube[i4][i42] = cube[i3][i32];
        cube[i4][i43] = cube[i3][i33];
        cube[i3][i31] = cube[i2][i21];
        cube[i3][i32] = cube[i2][i22];
        cube[i3][i33] = cube[i2][i23];
        cube[i2][i21] = cube[i1][i11];
        cube[i2][i22] = cube[i1][i12];
        cube[i2][i23] = cube[i1][i13];
        cube[i1][i11] = temp1[1];
        cube[i1][i12] = temp1[2];
        cube[i1][i13] = temp1[3];
    }
