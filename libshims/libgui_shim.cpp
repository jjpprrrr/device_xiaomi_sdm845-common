//#include <gui/SurfaceComposerClient.h>

namespace android {
    /* extern "C++" void _ZN7android21SurfaceComposerClient11Transaction20setDisplayProjectionERKNS_2spINS_7IBinderEEEjRKNS_4RectES9_(
        const sp<IBinder>& token,
        uint32_t orientation,
        const Rect& layerStackRect,
        const Rect& displayRect) {

        ui::Rotation r;
        switch (orientation) {
            case 0:
                r = ui::Rotation::Rotation0;
                break;
            case 1:
                r = ui::Rotation::Rotation90;
                break;
            case 2:
                r = ui::Rotation::Rotation180;
                break;
            case 3:
                r = ui::Rotation::Rotation270;
                break;
            default:
                r = ui::Rotation::Rotation0;
        }
            
        SurfaceComposerClient::Transaction t;
        t.setDisplayProjection(token, r, layerStackRect, displayRect);

    }*/
}

/*namespace android {
    extern "C++" sp<SurfaceControl> _ZN7android21SurfaceComposerClient13createSurface(
                                                        const String8& name, uint32_t w, uint32_t h,
                                                        PixelFormat format, uint32_t flags,
                                                        SurfaceControl* parent,
                                                        LayerMetadata metadata) {
        SurfaceComposerClient scc;
        return scc.createSurface(name, w, h, format, flags, parent, metadata, nullptr);
    }
}*/