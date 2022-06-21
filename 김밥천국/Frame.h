
#include <time.h>
#include <Windows.h>
//���⼭ �� �������� ���ư�
using namespace std;

clock_t startFrame, endFrame; // 1/1000 ������ �ð��� ���ڷ� ǥ�����ִ� �ڷ���
int processTime, delayframe, nowframe;
//�� �������� ���� �ð��� ���ð��� ����
void myFrame(int frameSpeed)
{
		//���� �ð��� ����
		startFrame = clock();
		//�� �ð� ����
		endFrame = clock();
		processTime = endFrame - startFrame;

		//1 ��/30 - ���ð� + ���۽ð�
		delayframe = 1000 /frameSpeed - processTime ;

		++nowframe;
		if (nowframe > frameSpeed)
		{
			nowframe = 0;
		}
		Sleep(delayframe);
}