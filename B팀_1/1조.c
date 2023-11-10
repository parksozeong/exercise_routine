#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_RESET    "\x1b[0m"


int main() {
    char name[10];
    int height, weight;
    float fatness;      //�񸸵�


    //1. ����� ���� �Է¹ޱ�
    printf("\n*******************\n");            //���м�
    printf("�ȳ��ϼ���!\n�ϻ� � ��ƾ ��õ ���α׷��� �̿����ּż� �����մϴ�.\n");
    printf("������� �̸��� �Է����ּ���. : ");
    scanf("%s", name);

    //1-1. ��ü ���� �Է�(Ű, ������)
    printf("\n*******************\n");            //���м�
    printf("�ݰ����ϴ�, %s��!\n", name);            //ȯ������
    printf("��ü ������ �Է����ּ���.\n");

    printf("Ű�� ���Դϱ�?(cm) : ");
    scanf("%d", &height);

    printf("�����Դ� ���Դϱ�?(kg) : ");
    scanf("%d", &weight);


    //1-2. ����ϱ�(�ؽ�Ʈ ���Ϸ� �����ϱ�  <-- ���߿� �ҷ��;��� ��)

    //----------------------------------------------------------------------------
    //2. � ��ƾ ��õ�ϱ�
    // --> �񸸵� ���

    //ī���� ������ ������ "�񸸵�" = ü��(kg) / (����(m) * ����(m))
    fatness = (float)weight / ((float)height * 0.01 * (float)height * 0.01);   //���Ͱ��� �������� �ϱ� ������ Ű�� ���� 0.01�� ������.

    //18.5 ���� ��ü��, 18.5~23.0 ����, 23.0~25.0 ��ü��, 25.0~30.0 ��, 30.0 �̻� ��
    if (fatness < 18.5) {
        printf(ANSI_COLOR_YELLOW "..........����\n");
        printf("........������\n");
        printf("........������\n");
        printf("..........����\n");
        printf("........������\n");
        printf("......��������\n");
        printf("....����������\n");
        printf("...�����������\n");
        printf("..���  ������  ���\n");
        printf("........������\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf(".........<��ü���Դϴ�.�ǰ��� �������ּ���.>\n" ANSI_COLOR_RESET);
    }
    else if (fatness < 23.0) {
        printf(ANSI_COLOR_GREEN "..........����\n");
        printf("........������\n");
        printf("........������\n");
        printf("..........����\n");
        printf("........������\n");
        printf("......��������\n");
        printf("....����������\n");
        printf("...�����������\n");
        printf("..���  ������  ���\n");
        printf("........������\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf(".........<����ü���Դϴ�>\n" ANSI_COLOR_RESET );
    }
    else if (fatness < 25.0) {
        printf(ANSI_COLOR_BLUE "..........����\n");
        printf("........������\n");
        printf("........������\n");
        printf("..........����\n");
        printf("........������\n");
        printf("......��������\n");
        printf("....����������\n");
        printf("...�����������\n");
        printf("..���  ������  ���\n");
        printf("........������\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf(".........<��ü���Դϴ�. �ǰ��� �������ּ���.>\n" ANSI_COLOR_RESET);
    }
    else if (fatness < 30.0) {
        printf(ANSI_COLOR_MAGENTA "..........����\n");
        printf("........������\n");
        printf("........������\n");
        printf("..........����\n");
        printf("........������\n");
        printf("......��������\n");
        printf("....����������\n");
        printf("...�����������\n");
        printf("..���  ������  ���\n");
        printf("........������\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf(".........<���Դϴ�. �ǰ��� �������ּ���.>\n" ANSI_COLOR_RESET);
    }
    else {
        printf(ANSI_COLOR_RED "..........����\n");
        printf("........������\n");
        printf("........������\n");
        printf("..........����\n");
        printf("........������\n");
        printf("......��������\n");
        printf("....����������\n");
        printf("...�����������\n");
        printf("..���  ������  ���\n");
        printf("........������\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf("........���  ���\n");
        printf(".........<�����Դϴ�. �ǰ��� �������ּ���.>\n" ANSI_COLOR_RESET);
    }

    return 0;
}