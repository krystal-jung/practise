//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#include <stdio.h>
int main()
{  
	int murder = 0;
	for (murder = 'A'; murder <= 'D'; murder++){
		if ((murder != 'A' + murder != 'B' + murder != 'C' + murder != 'D') == 3){
			printf("������%c", murder);
		}
	}
	system("pause");
	return 0;
}