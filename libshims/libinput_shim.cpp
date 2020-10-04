#include <input/Input.h>

namespace android {


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
        KeyEvent event;
        const int32_t id = InputEvent::nextId();

        event.initialize(id, deviceId, (uint32_t)source, displayId, INVALID_HMAC, action, flags, keyCode, scanCode, metaState, repeatCount, downTime, eventTime);
    }

    extern "C" void _ZN7android11MotionEvent10initializeEiiiiiiiiiNS_20MotionClassificationEffffllmPKNS_17PointerPropertiesEPKNS_13PointerCoordsE(
                                            int32_t deviceId,
                                            int32_t source,
                                            int32_t displayId,
                                            int32_t action,
                                            int32_t actionButton,
                                            int32_t flags,
                                            int32_t edgeFlags,
                                            int32_t metaState,
                                            int32_t buttonState,
                                            MotionClassification classification,
                                            float xOffset,
                                            float yOffset,
                                            float xPrecision,
                                            float yPrecision,
                                            nsecs_t downTime,
                                            nsecs_t eventTime,
                                            size_t pointerCount,
                                            const PointerProperties* pointerProperties,
                                            const PointerCoords* pointerCoords) {
        const int32_t id = InputEvent::nextId();
        MotionEvent event;

        event.initialize(id, deviceId, (uint32_t)source, displayId, INVALID_HMAC, action, actionButton, flags, edgeFlags, metaState, buttonState,
                        classification, 1 /* xScale */, 1 /* yScale */, xOffset, yOffset, xPrecision, yPrecision, AMOTION_EVENT_INVALID_CURSOR_POSITION,
                        AMOTION_EVENT_INVALID_CURSOR_POSITION, downTime, eventTime, pointerCount, pointerProperties, pointerCoords);
    }
}