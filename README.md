# FidelityFx Super Resolution 2.0 for Red Dead Redemption 2

 This mod is a library for RDR2 which replaces Nvidia DLSS with AMD FidelityFX Super Resolution 2.0.

 This fork is intended for releases devoid of DRM.
 
 Tested on EMPRESS release version 1436.28.

 NOTE : Ultra-Quality option in-game DLSS setting is basically the AMD equivilent of DLAA and provides better-than-native image quality at the cost of performance
 
## Installation

* Download the latest release 
* Unzip the contents to your RDR2 executable directory
* Run RDR2

## Tips

  In the included file nvngx.ini you will find various parameters, mostly set to auto. I haven't spent much time tweaking this, but I've seen various posts suggesting a   few changes. 

    [View] 
    AutoExposure=true
    HDR=false
  
  Recommend playing around with the sharpness setting as well.


## Compilation

* Clone this repo including all submodules
* Download and install the Vulkan SDK [here](https://vulkan.lunarg.com/sdk/home) and ensure VULKAN_SDK environment variable is set
* Compile the FSR 2.0 submodule in external/FidelityFX-FSR2 like it is described in their Readme https://github.com/GPUOpen-Effects/FidelityFX-FSR2#quick-start-checklist. (be sure to build DX and VK!) Note: I used the GenerateSolutionsDLL.bat but I am sure static libraries will work fine too
* Open the CyberFSR.sln with Visual Studio 2022
* Compile the entire solution
* Copy the compiled DLLs (nvngx.dll & d3d11.dll), ffx_fsr2_api_dx12_x64.dll, ffx_fsr2_api_vk_x64.dll and ffx_fsr2_api_x64.dll from the FidelityFX Directory to your RDR2 executable directory
* Run the game and set the quality in the DLSS settings
* Play the game with FSR 2.0

## Advisory
* Like all mods for Rockstar games, please avoid using this online as I am unsure if you will get banned.

## Credits
* Thanks to GitHub users [PotatoOfDoom](https://github.com/PotatoOfDoom) and [RealIndica](https://github.com/RealIndica).
