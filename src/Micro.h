#pragma once
#include <cstdint>

class Micro {
private:
    // TODO: static uint8_t singleByteArr[1]; ?
    // Thread *thread = nullptr;
    int64_t goLoadingStep();
    void destroyApp(bool var1);
    void startApp();
    void pauseApp();

public:
    GameCanvas *gameCanvas;
    LevelLoader *levelLoader;
    GamePhysics *gamePhysics;
    MenuManager *menuManager;
    bool field_242 = false;
    int numPhysicsLoops = 2;
    int64_t timeMs = 0;
    int64_t gameTimeMs = 0;
    int64_t field_246 = 0;
    bool isInited = false;
    bool field_248 = false;
    static bool field_249;
    static bool isPaused;
    static bool isInGameMenu;
    static int gameLoadingStateStage;

    Micro();
    ~Micro();

    void gameToMenu();
    void menuToGame();
    void init();
    // NOTE: methods readBigFile, readByte, readFile skipped because unused
    void restart(bool var1);
    void run();
    void goalLoop();
    void setNumPhysicsLoops(int value);
    void setMode(int mode);
};