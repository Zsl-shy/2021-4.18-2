#include <stdio.h>
#include <stdlib.h>

int main() {
	//下标移动
	char arr[]={'w','e','l','c','o','m','e',' ','t','o',' ','b','i','t','!','!','!','!','!'};
	char arr2[]={'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0,j=sz-1; i<=j; i++,j--){
		arr2[i]=arr[i];
		arr2[j]=arr[j];
		printf("%s\n",arr2);
		Sleep(1000);//休息一秒
		system("cls"); //执行系统命令的一个函数-cls-清空屏幕 
	}

	return 0;
}
