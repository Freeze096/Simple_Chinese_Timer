#include<iostream>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main(){
	int a;
	cout<<"�����뵹��ʱʱ�䣨��λ���룩��";
	cin>>a;
	MessageBox(0,"�Ƿ�ʼ������ʼ��ȷ����","�Ի���",MB_OK);
	for(int i=a;i>=1;i--){
		
		cout<<"��ʣ"<<i<<"��"<<endl; 
		sleep(1);
	} 
	MessageBox(0,"��ʱ����","��ʾ",MB_OK);
} 
