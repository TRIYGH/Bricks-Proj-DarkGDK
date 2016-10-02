//T. Robert Ward
//June 24, 2013

#include "DarkGDK.h"

void DarkGDK()
{
	int ScreenWidth = 640;
	int ScreenHeight = 480;

	int x1, x2, y1, y2, spacing, counter, offset;

	y1 = 2;
	y2 = 17;
	spacing = 2;
	counter = 0;
	offset = 1;

do
{
	x1 = 2;
	x2 = 42;
	if( offset == -1)
	{x1 = x1 + 20;
	x2 = x2 + 20;}
		
	for(int i=0; i < 15; i++)
	{
		dbBox(x1,y1,x2,y2);
		x1 = x1 + (40) + spacing;
		x2 = x2 + (40) + spacing;
	}

		y1 = y1 + (15) + spacing;
		y2 = y2 + (15) + spacing;
		offset = -offset;

		counter++;

}while(counter<=28);

	dbWaitKey();
}