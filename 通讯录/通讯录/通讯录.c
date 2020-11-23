#define _CRT_SECURE_NO_WARNINGS
#define MAX_PERSON 1000
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct Person{
	char name[1024];
	char tel[1024];
}Person;

typedef struct AddressBook {
	Person persons[MAX_PERSON];
	int size;
}AddressBook;
void init(AddressBook* addressbook) {
	addressbook->size = 0;
}
void addPerson(AddressBook* addressbook){
	printf("新增联系人\n");
	int cursize = addressbook->size;
	if (cursize >= MAX_PERSON){
		printf("通讯录已满，增加失败！\n");
	}
	Person* p = &addressbook->persons[cursize];
	printf("请输入联系人姓名：");
	scanf("%s", p->name);
	printf("请输入联系人电话：");
	scanf("%s", p->tel);
	printf("新增联系人成功!\n");
	addressbook->size++;
}
void findPerson(AddressBook* addressbook){
	printf("按照姓名查找联系人\n");
	printf("请输入要查找的姓名: ");
	char name[1024] = { 0 };
	scanf("%s", name);

	for (int i = 0; i < addressbook->size; i++) {
		Person* p = &addressbook->persons[i];
		if (strcmp(name, p->name) == 0) {
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
		}
	}
	printf("查找联系人完成!\n");
}
void delPerson(AddressBook* addressbook){
	printf("删除联系人\n");
	printf("请输入要删除的联系人的编号: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size) {
		printf("您输入的编号有误!\n");
		return;
	}
	if (id == addressbook->size - 1){
		addressbook->size--;
		printf("删除成功!\n");
		return;
	}
	addressbook->persons[id] = addressbook->persons[addressbook->size - 1];
	addressbook->size--;
	printf("删除成功!\n");
}
void updatePerson(AddressBook* addressbook){
	printf("更新联系人\n");
	printf("请输入要更新的联系人的编号: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size) {
		printf("您输入的编号有误!\n");
		return;
	}
	Person* p = &addressbook->persons[id];
	printf("请输入联系人姓名：");
	scanf("%s", p->name);
	printf("请输入联系人电话：");
	scanf("%s", p->tel);
	printf("更新联系人成功!\n");
	
}
void printPerson(AddressBook* addressbook){
	printf("查所有联系人：\n");
	for (int i = 0; i < addressbook->size; i++) {
		Person* p = &addressbook->persons[i];
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
	}
	printf("共计 [%d] 条记录\n", addressbook->size);
}
void clearPerson(AddressBook* addressbook){
	for (int i = 0; i < addressbook->size; i++) {
		addressbook->size--;
		if (addressbook->size == 0){
			break;
		}
	}
	printf("清空成功\n");
}


void sortPerson(AddressBook* addressbook){
	if (addressbook->size <= 0){
		printf("通讯录中没有联系人，请添加!\n");
	}
	int i = 0;
	int j = 0;
	for (i = 0; i<addressbook->size - 1; i++)
	{
		for (j = 0; j<addressbook->size - i - 1; j++)
		{
			if (strcmp(addressbook->persons[j].name, (addressbook->persons[j + 1]).name)>0)
			{
				Person tmp = addressbook->persons[j];
				addressbook->persons[j] = addressbook->persons[j + 1];
				addressbook->persons[j + 1] = tmp;
			}
		}
		printf("排序成功！\n");
	}
}
int menu(){
	printf("=====================\n");
	printf(" 1. 新增联系人\n");
	printf(" 2. 查找联系人\n");
	printf(" 3. 删除联系人\n");
	printf(" 4. 修改联系人\n");    
	printf(" 5. 查看所有联系人\n");
	printf(" 6. 清空所有联系人\n"); 
	printf(" 7. 以名字排序所有联系人\n"); 
	printf(" 0. 退出\n");
	printf("=====================\n");
	printf(" 请输入您的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
typedef void(*Func)(AddressBook*);
AddressBook addressbook;
int main()
{
	Func funcs[] = {
		NULL,
		addPerson,
		findPerson,
		delPerson,
		updatePerson,
		printPerson,
		clearPerson,
		sortPerson,
	
	};
	init(&addressbook);
	
	while (1){
		int choice = menu();
		if (choice == 0){
			printf("GoodBye!!!");
			break;
		}
		if (choice<0 || choice>sizeof(funcs) / sizeof(funcs[0])){
			printf("您的输入无效!\n");
			continue;
		}
		funcs[choice](&addressbook);
	}
	system("pause");
	return 0;
}