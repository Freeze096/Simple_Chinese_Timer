#include<iostream>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main(){
	int a;
	cout<<"请输入倒计时时间（单位：秒）：";
	cin>>a;
	MessageBox(0,"是否开始？（开始按确定）","对话框",MB_OK);
	for(int i=a;i>=1;i--){
		
		cout<<"还剩"<<i<<"秒"<<endl; 
		sleep(1);
	} 
	MessageBox(0,"计时结束","提示",MB_OK);
} 
