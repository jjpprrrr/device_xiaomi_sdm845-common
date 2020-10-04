#include <stdint.h>
#include <array>
#include <utils/Timers.h>
//#include <input/Input.h>

namespace android {
    extern "C" void _ZN7android8KeyEvent10initializeEiijiNSt3__15arrayIhLm32EEEiiiiiill(int32_t id, int32_t deviceId, uint32_t source, int32_t displayId,
                                                                                        std::array<uint8_t, 32> hmac, int32_t action, int32_t flags,
                                                                                        int32_t keyCode, int32_t scanCode, int32_t metaState, int32_t repeatCount,
                                                                                        nsecs_t downTime, nsecs_t eventTime);

    /*void KeyEvent::initialize(int32_t id, int32_t deviceId, uint32_t source, int32_t displayId,
                            std::array<uint8_t, 32> hmac, int32_t action, int32_t flags, int32_t keyCode,
                            int32_t scanCode, int32_t metaState, int32_t repeatCount, nsecs_t downTime,
                            nsecs_t eventTime);*/

    extern "C" void _ZN7android8KeyEvent10initializeEiiiiiiiiill(
                                            int32_t deviceId,
                                            int32_t source,
                                            int32_t displayId,
                                            int32_t action,
                                            int32_t flags,
                                            int32_t keyCode,
                                            int32_t scanCode,
                                            int32_t metaState,
                                            int32_t repeatCount,
                                            nsecs_t downTime,
                                            nsecs_t eventTime) {
        constexpr std::array<uint8_t, 32> INVALID_HMAC = {0};
        _ZN7android8KeyEvent10initializeEiijiNSt3__15arrayIhLm32EEEiiiiiill(0, deviceId, source, displayId, INVALID_HMAC, action, flags, keyCode, scanCode, metaState, repeatCount, downTime, eventTime);
    }
}