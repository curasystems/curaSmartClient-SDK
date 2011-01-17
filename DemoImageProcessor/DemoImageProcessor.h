// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DEMOIMAGEPROCESSOR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DEMOIMAGEPROCESSOR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DEMOIMAGEPROCESSOR_EXPORTS
#define DEMOIMAGEPROCESSOR_API extern "C" __declspec(dllexport)
#else
#define DEMOIMAGEPROCESSOR_API __declspec(dllimport)
#endif

DEMOIMAGEPROCESSOR_API wchar_t* IP_GetName(void);
DEMOIMAGEPROCESSOR_API wchar_t* IP_GetDescription(void);
DEMOIMAGEPROCESSOR_API void IP_ProcessRawData(
            int width, int height, int samplesPerPixel, int bitsAllocated, int bitsStored, int stride,
            void* buffer);

