//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = ABCD和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
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
		printf("s1为s2旋转后的字符串!\n");
	}
	else{
		printf("s1不是s2旋转后的字符串!\n");
	}
	system("pause");
	return 0;
}