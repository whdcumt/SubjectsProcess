// CBestThreshold.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "math.h"
int _tmain(int argc, _TCHAR* argv[])
{   
	double Threshold;
	for(Threshold=0.0;Threshold<255;Threshold=Threshold+0.1)
	{
		if(abs((1.946+(Threshold-30)*(Threshold-30)/1800-(Threshold-90)*(Threshold-90)/800))<0.005)
		//if(abs(((Threshold-30)*(Threshold-30)/1800-(Threshold-90)*(Threshold-90)/800))<0.001)
		printf("Threshold=%f\n",Threshold);
	}
	return 0;
}

