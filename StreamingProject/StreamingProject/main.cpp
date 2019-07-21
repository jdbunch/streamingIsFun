#include <Mmsystem.h>
#include <mciapi.h>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")

int main() {

	mciSendString("open \"duck.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

	mciSendString("play mp3 wait", NULL, 0, NULL);

	return 0;
}

