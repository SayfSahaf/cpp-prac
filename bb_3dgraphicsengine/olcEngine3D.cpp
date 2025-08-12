#include "olcConsoleGameEngine.h"

class olcGameEngine3D : olcConsoleGameEngine {
    public:
        olcEngine3D() {}
    public:
        bool OnUserCreate() override {
            return true;
        }

        bool OnUserUpdate(float fElapsedTime) override {
            return true;
        }
};

int main() {
    olcEngine3D demo;

    return 0;
}
