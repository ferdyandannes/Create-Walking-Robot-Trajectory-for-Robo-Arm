#include "stdio.h"
#include "iostream"
#include "conio.h"
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <math.h>

int i, j, k, l;
float px[100], py[100];
float t21[100], t22[100], tfix[100], teta2[100];
float tan1[100], tan2atas[100], tan2bawah[100], tan2[100], hasiltan1[100], hasiltan2[100], teta1[100], teta3[100];
float qx[100], qy[100], tetaa[100];
using namespace std;


int main()
{
	qy[1] = 6.4;
	qy[2] = 6.35;
	qy[3] = 6.37;
	qy[4] = 6.5;
	qy[5] = 6.6;
	qy[6] = 6.65;
	qy[7] = 6.25;
	qy[8] = 6.15;
	qy[9] = 6.2;
	qy[10] = 6.2;
	qy[11] = 6.35;
	qy[12] = 6.45;
	qy[13] = 6.25;
	qy[14] = 6;
	qy[15] = 5.6;
	qy[16] = 6.15;
	qy[17] = 6.5;
	qy[18] = 6.45;
	qy[19] = 6.6;
	qy[20] = 6.65;
	qy[21] = 6.6;
	qy[22] = 6.45;

	qx[1] = 0;
	qx[2] = -0.6;
	qx[3] = -1.1;
	qx[4] = -1.8;
	qx[5] = -2.7;
	qx[6] = -3.3;
	qx[7] = -2.9;
	qx[8] = -1.7;
	qx[9] = -1.2;
	qx[10] = 0.1;
	qx[11] = 1.5;
	qx[12] = 2.7;
	qx[13] = 3.6;
	qx[14] = 4.2;
	qx[15] = 5;
	qx[16] = 4.9;
	qx[17] = 4.5;
	qx[18] = 3.6;
	qx[19] = 3.2;
	qx[20] = 1.9;
	qx[21] = 1.5;
	qx[22] = 0.6;

	tetaa[1] = 170;
	tetaa[2] = 175;
	tetaa[3] = 165;
	tetaa[4] = 155;
	tetaa[5] = 130;
	tetaa[6] = 100;
	tetaa[7] = 95;
	tetaa[8] = 105;
	tetaa[9] = 110;
	tetaa[10] = 135;
	tetaa[11] = 155;
	tetaa[12] = 160;
	tetaa[13] = 180;
	tetaa[14] = 190;
	tetaa[15] = 200;
	tetaa[16] = 190;
	tetaa[17] = 175;
	tetaa[18] = 170;
	tetaa[19] = 170;
	tetaa[20] = 165;
	tetaa[21] = 160;
	tetaa[22] = 165;
	

	//MENGHITUNG NILAI PX DAN PY
	for (k = 1; k <= 22; k++)
	{
		px[k] = qx[k] - (1 * cos(tetaa[k] * M_PI / 180));
		cout << px[k] << " ";
		cout << endl;
		py[k] = qy[k] - (1 * sin(tetaa[k] * M_PI / 180));
		cout << py[k] << " ";
		cout << endl;
	}

	cout << "Nilai teta 2" << endl;
	for (i = 1; i <= 22; i++)
	{
		t21[i] = (((px[i] * px[i]) + (py[i] * py[i])) - 41);
		t22[i] = 40;
		tfix[i] = t21[i] / t22[i];
		teta2[i] = acos(tfix[i]) * 180.0 / M_PI;
		cout << teta2[i] << " ";
		cout << endl;
	}

	cout << "Nilai teta 1" << endl;
	for (j = 1; j <= 22; j++)
	{
		tan1[j] = px[j] / py[j];
		tan2atas[j] = 4*sin(teta2[j] * M_PI/180);
		tan2bawah[j] = 5+(4*cos(teta2[j] * M_PI / 180));
		tan2[j] = tan2atas[j] / tan2bawah[j];
		hasiltan1[j] = atan(tan1[j]) * 180.0 / M_PI;
		hasiltan2[j] = atan(tan2[j]) * 180.0 / M_PI;
		teta1[j] = hasiltan1[j] - hasiltan2[j];
		cout << teta1[j] << " ";
		cout << endl;
	}

	cout << "Nilai teta 3" << endl;
	for (l = 1; l <= 22; l++)
	{
		teta3[l] = tetaa[l] - teta1[l] - teta2[l];
		cout << teta3[l] << " ";
		cout << endl;
	}
	system("pause");
}
