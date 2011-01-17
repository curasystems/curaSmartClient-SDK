========================================================================
    DemoImageProcessor
========================================================================


The DemoImageProcessor shows an example implementation for
adding image processing to the curaSmartClient.

The implementation simply mirrors the image along the horizontal axis.

The function IP_GetName must be implemented and return a name for the effect.

The resulting dll must either be placed in the subfolder "imageProcessors" next to the exe 
or in the folder "%LOCALAPPDATA%\curaSystems\SmartClient\imageProcessors".

Image processors are registered by the name they return and should be unique, but processors
with the same name in the app location or in the local user data folder are allowed. the
local user version overwrites the one next to the app then. 


========================================================================
    DYNAMIC LINK LIBRARY : DemoImageProcessor Project Overview
========================================================================

AppWizard has created this DemoImageProcessor DLL for you.

This file contains a summary of what you will find in each of the files that
make up your DemoImageProcessor application.


DemoImageProcessor.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

DemoImageProcessor.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

DemoImageProcessor.cpp
    This is the main DLL source file.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named DemoImageProcessor.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
