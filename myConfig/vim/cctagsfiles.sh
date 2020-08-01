#!/bin/bash
fileTypeList="-name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"" 
#find ./vendor/qcom/proprietary/chi-cdk/ $fileTypeList | tee chi-cdk.txt 
#find ./vendor/qcom/proprietary/camx/ $fileTypeList | tee camx.txt 
#find ./vendor/vivo/source/hardware/interfaces/camera $fileTypeList | tee vivohardwarecamera.txt 
#find ./vendor/vivo/source/hardware/interfaces/camera3rd $fileTypeList | tee vivohardwarecamera3rd.txt 
#find ./frameworks/av/camera/ $fileTypeList | tee avcamera.txt 
#find ./frameworks/av/include/camera/ $fileTypeList | tee avincludecamera.txt 
#find ./frameworks/av/services/camera/libcameraservice/ $fileTypeList | tee libcameraservice.txt 
#find ./hardware/libhardware/include/hardware/ $fileTypeList | tee libhardware.txt 
#find ./system/core/include/system/ $fileTypeList | tee system.txt 
#find ./vendor/vivo/common/vivoCameraThirdpartyAlgo/ $fileTypeList | tee vivoCameraThirdpartyAlgo.txt 
find ./vendor/qcom/proprietary/chi-cdk/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./vendor/qcom/proprietary/camx/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./vendor/vivo/source/hardware/interfaces/camera -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./vendor/vivo/source/hardware/interfaces/camera3rd -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./frameworks/av/camera/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./frameworks/av/include/camera/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./frameworks/av/services/camera/libcameraservice/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./hardware/libhardware/include/hardware/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./system/core/include/system/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
find ./vendor/vivo/common/vivoCameraThirdpartyAlgo/ -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc"
