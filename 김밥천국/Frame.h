
#include <time.h>
#include <Windows.h>
//여기서 매 프레임이 돌아감
using namespace std;

clock_t startFrame, endFrame; // 1/1000 단위로 시간을 숫자로 표시해주는 자료형
int processTime, delayframe, nowframe;
//매 프레임의 시작 시간과 끝시간을 측정
void myFrame(int frameSpeed)
{
		//시작 시간을 측정
		startFrame = clock();
		//끝 시간 측정
		endFrame = clock();
		processTime = endFrame - startFrame;

		//1 초/30 - 끝시간 + 시작시간
		delayframe = 1000 /frameSpeed - processTime ;

		++nowframe;
		if (nowframe > frameSpeed)
		{
			nowframe = 0;
		}
		Sleep(delayframe);
}