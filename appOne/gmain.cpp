#include"libOne.h"
#include<time.h>
void gmain() {
    window(1080, 1080, 1);
    let x, y, deg;
    angleMode(DEGREES);
    time_t curTime;
    struct tm local;
    int hour, minute, second;
    while (notQuit) {
        //���A���A�b���擾
        curTime = time(NULL);//���ݎ������擾
        localtime_s(&local, &curTime);//���[�J��������
        hour = local.tm_hour;
        minute = local.tm_min;
        second = local.tm_sec;
        
        //�`��
        clear(0);
        mathAxis(1.8);
        //�~
        fill(160);
        stroke(128);
        strokeWeight(20);
        mathCircle(0, 0, 2.6);
        //��
        deg = (minute * 6) + 6 * (second / 60.0f);
        x = sin(deg);
        y = cos(deg);
        strokeWeight(20);
        stroke(60);
        mathLine(0, 0, x, y);
        //��
        deg = (hour * 30) + 30 * (minute / 60.0f);
        x = sin(deg) * 0.7;
        y = cos(deg) * 0.7;
        strokeWeight(25);
        stroke(0);
        mathLine(0, 0, x, y);
        //�b
        deg = second * 6;
        x = sin(deg);
        y = cos(deg);
        strokeWeight(5);
        stroke(120);
        mathLine(0, 0, x, y);
        //�b�j�̊�
        strokeWeight(30);
        mathPoint(0, 0);
    }
}
