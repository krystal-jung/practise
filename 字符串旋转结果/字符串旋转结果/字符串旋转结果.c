//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = ABCD��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
int isLevoclination(char str1[], char str2[])
{

	int len = strlen(str1);
	for (int k = 0; k <= len; k++){
		int tmp = str1[0];
		for (int i = 0; i < len - 1; i++){
			str1[i] = str1[i + 1];
		}
		str1[len - 1] = tmp;
		if (strcmp(str1, str2) == 0){
			return 1;
		}
	}
	return 0;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	if (isLevoclination(s1, s2) == 1){
		printf("s1Ϊs2��ת����ַ���!\n");
	}
	else{
		printf("s1����s2��ת����ַ���!\n");
	}
	system("pause");
	return 0;
}