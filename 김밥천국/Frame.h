
#include <time.h>
#include <Windows.h>
//���⼭ �� �������� ���ư�
using namespace std;

clock_t startFrame, endFrame; // 1/1000 ������ �ð��� ���ڷ� ǥ�����ִ� �ڷ���
float processTime, delayframe, nowframe;
//�� �������� ���� �ð��� ���ð��� ����
void myFrame(float frameSpeed)
{
		//���� �ð��� ����
		startFrame = clock();
		//�� �ð� ����
		endFrame = clock();
		processTime = endFrame - startFrame;

		//1 ��/30 - ���ð� + ���۽ð�
		delayframe = 1000 /frameSpeed - processTime ;

		Sleep(delayframe);

		++nowframe;
		if (nowframe > frameSpeed)
		{
			nowframe = 0;
		}
}