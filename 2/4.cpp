/*
아래 빛의 도착 시간(분)을 구하는 프로그램을 작성하라.
	- 태양에서 오는 빛이 몇 분만에 지구에 도착하는 지를
	컴퓨터로 계산해보고자 한다.
	- 빛의 속도는 1초에 30만 km를 이동한다.
	- 태양과 지구 사이의 거리는 약 1억 4960만 km이다.
*/

#include <iostream>

using namespace std;

int main()
{
    float speed = 300000;
    float distance = 149600000;

    float time;
    time = (distance / speed) / 60;
    cout << time << "분\n";
}