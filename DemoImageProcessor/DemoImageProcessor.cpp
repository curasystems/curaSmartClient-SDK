// DemoImageProcessor.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DemoImageProcessor.h"


// This is an example of an exported function.
DEMOIMAGEPROCESSOR_API wchar_t* IP_GetName(void)
{
	return L"Demo Processor";
}

DEMOIMAGEPROCESSOR_API wchar_t* IP_GetDescription(void)
{
	return L"This is a demo image processor which does not do much";
}

DEMOIMAGEPROCESSOR_API void IP_ProcessRawData(
            int width, int height, int samplesPerPixel, int bitsAllocatedPerSample, int bitsStoredPerSample, int stride,
            void* buffer)
{
	if( height<=1 ) 
		return;

	int bytesPerPixel = ( (bitsAllocatedPerSample+7)/8 ) * samplesPerPixel;
	int bytesPerRow = width * bytesPerPixel;

	unsigned char* row = (unsigned char*) buffer;
	unsigned char* row2 = (unsigned char*) buffer;
	row2 += (height-1)*stride;
	
	unsigned char* temp = new unsigned char [ bytesPerRow ];

	int y=0;
	
	for( y=0; y<height/2; y++, row += stride, row2 -= stride )
	{
		if( row == row2 )
			continue;
		
		memcpy( temp, row, bytesPerRow );
		memcpy( row, row2, bytesPerRow );
		memcpy( row2, temp, bytesPerRow );
	}

	delete [] temp;
}
