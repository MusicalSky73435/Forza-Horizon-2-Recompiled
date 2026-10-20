// ReXGlue Static Recompilation - template main
#include "FH2_init.h"
#include <rex/rex_app.h>
#include <rex/input/input_system.h>
#include <rex/system/xthread.h>
#include <memory>

class GameApp : public rex::ReXApp {
public:
    using rex::ReXApp::ReXApp;
    static std::unique_ptr<rex::ui::WindowedApp> Create(rex::ui::WindowedAppContext& ctx) {
        return std::unique_ptr<GameApp>(
            new GameApp(ctx, "FH2", PPCImageConfig));
    }
protected:
    void OnPostSetup() override {
        // Keyboard/mouse handled by the SDK's built-in MnkInputDriver (cvar mnk_mode = true).
    }
};
REX_DEFINE_APP(FH2, GameApp::Create)
