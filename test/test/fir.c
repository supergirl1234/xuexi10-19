//1.写一个函数返回参数二进制中1 的个数 
//比如：15 0000 1111 4 个1 
//程序原型： 
//int count_one_bits(unsigned int value) 
//{ 
//// 返回1的位数 
//} 

////十进制转换为二进制，用除以取余数的方法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int num){
//
//	int count=0;
//	while(num>0){
//	    if(num%2==1){//余数为不加，余数为则加
//          count++;
//	    }
//		num=num/2;
//	}
//	return count;
//}
//
//int main(){
//int num=0;
//printf("请输入一个数：");
//scanf("%d",&num);
//printf("该数中1的个数为：%d\n",count_one_bits(num));
//system("pause");
//return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。 


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Bit(int n){
	int arr[32]={0};
	int i=0;
	for(i=31;i>=0,n>0;i--){
			if(n%2==0){
				arr[i]=0;
			}
			else{
				arr[i]=1;
			}
		n=n/2;
			 
	}
	for(i=0;i<32;i++){
      printf("%d",arr[i]);//输出一个数的二进制序列
		
    }
	printf("\n");
	for(i=1;i<32;){
      printf("%d",arr[i]);//输出一个数的奇数位的二进制序列
		i=i+2;
    }
	printf("\n");
	for(i=0;i<32;){
      printf("%d",arr[i]);//输出一个数的偶数位得二进制序列
		i=i+2;
    }
}
int main(){
  int num=0;
  int arr[32]={0};
  printf("请输入一个整数：");
  scanf("%d",&num);
  Bit(num);
 
  system("pause");
  return 0;
}

//3. 输出一个整数的每一位。 

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void Signal(int n){
//	while(n>0){//倒序输出
//	   int x=0;
//	   x=n%10;
//	   printf("%d,",x);
//	   n=n/10;
//	}
//
//}
//int main(){
//int num=0;
//printf("请输入一个整数：");
//scanf("%d",&num);
//Signal(num);
//system("pause");
//return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void Signal(int n){
//    //正序输出每一个数字
//	if(n<10){
//	    printf("%d,",n);
//	}else{                //要用else，否则会出错。
//       Signal(n/10);
//       printf("%d,",n%10);
//	}
//  
//}
//int main(){
//int num=0;
//printf("请输入一个整数：");
//scanf("%d",&num);
//Signal(num);
//  system("pause");
//  return 0;
//}







//4. 编写一个函数 reverse_string(char * string)（递归实现） 实现：将参数字符串中的字符反向排列。 要求：不能使用C函数库中的字符串操作函数。 
//abcdef
//先求字符串的长度
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Strlen(char* str){
	int count=0;
	if(*str!='\0'){
	 count++;
	 str++;
	}
return count;    
}

 void reverse_string(char* str){
    char temp;
	int len=0;
	int i=0;
	len=Strlen(str);
	if(*str!='\0'){

	 temp=str[0];
	 str[0]=str[len-1];
	 str[len-1]='\0';
     reverse_string(str+1);
	 str[len-1]=temp;
	}
	for(i=0;i<len;i++){
	  printf("%c",str[i]);
	}
	
 }
 int main(){
   char ch[]=" ";
   printf("请输入一个字符串;");
   scanf("%s",&ch);
   reverse_string(ch);
   system("pause");
   return 0;
}

