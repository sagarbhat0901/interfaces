#pragma once
#include "aidl/android/hardware/fancontroller/BnFanSpeedControl.h"
namespace aidl{
    namespace android{
        namespace hardware {
            namespace fancontroller{
                class FanSpeedControl : public BnFanSpeedControl{
                public:
                    int fanSpeed=0;
                    bool isFanOn = false;

                    ndk::ScopedAStatus increaseFanSpeedHAL(std::bool* _aidl_return);
                    ndk::ScopedAStatus decreaseFanSpeedHAL(std::bool* _aidl_return);
                    ndk::ScopedAStatus turnFanOnHAL(std::bool* _aidl_return);
                    ndk::ScopedAStatus turnFanOffHal(std::bool* _aidl_return);
                    ndk::ScopedAStatus isFanOnHal(std::bool* _aidl_return);
                    ndk::ScopedAStatus getFanSpeedHal(std::int* _aidl_return);
                };
            }
        }
    }
}