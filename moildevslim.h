#ifndef MOILDEVSLIM_H
#define MOILDEVSLIM_H

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include "configdata.h"


#define PI 3.1415926
#define PCT_UNIT_WIDTH 1.27
#define PCT_UNIT_HEIGHT 1.27
#define FOCAL_LENGTH_FOR_ZOOM 250

using namespace std;

class  Moildevslim
{
public:
    class ConfigData* configData;

    Moildevslim();
    bool Config(string cameraName, double cameraSensorWidth, double cameraSensorHeight,
        double iCx, double iCy, double i_ratio,
        double imageWidth, double imageHeight, double calibrationRatio,
        double para0, double para1, double para2, double para3, double para4, double para5
        );
    double getImageHeight();
    double getImageWidth();
    double getiCy();
    ConfigData *getcd();

    double AnyPointM(float *mapX, float *mapY, int w, int h, double alphaOffset, double betaOffset, double zoom, double magnification);
    double PanoramaM(float *mapX, float *mapY, int w, int h, double magnification );

};

#endif
