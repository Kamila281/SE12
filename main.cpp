#include <iostream>
//��������� �������� �������
// �����: �������� ������
//������: ��-217
//���:2024

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int num1, num2;
    cout << "������� ������ ����� �����: ";
    cin >> num1;
    cout << "������� ������ ����� �����: ";
    cin >> num2;
    cout << "�� �����: " << num1 << " � " << num2 << endl;
    cout << "�����:" << (num1+num2) << endl;
    cout << "��������:" << (num1-num2) << endl;
    cout << "������������:" << (num1*num2) << endl;
        return 0;
}
