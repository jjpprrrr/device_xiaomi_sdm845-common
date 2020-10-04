#include <include/core/SkImageInfo.h>

namespace android {
    

    extern "C" int _ZNK11SkImageInfo13bytesPerPixelEv() {
        SkColorInfo info;
        return info.bytesPerPixel();
    }
}