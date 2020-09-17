#include <stdio.h>
#include <string.h>
int main(){
	char bit[50],flag[100]= " 01111110 ",temp[100]=" 01111110 ",result[100];
	scanf("%s",bit);
	int i=0,count=1,j=0,len =strlen(bit);
	
	while(bit[i]!='\0'){
		 if(bit[i] == '1')
        {
            result[j]=bit[i];
           
		   
			 
            for(int k=i+1; bit[k]=='1' && k<=len && count<5 ; k++)
            {
                j++;
                result[j]=bit[k];
                count++;
                if(count==5)
                {
                    j++;
                    result[j]='0';
                    count =0;
                }
                i=k;
           
            }
        
        }
        else
        {
            result[j]=bit[i];
        }
        i++;
        j++;
	}

	printf("\n");
	
	strcat(flag,result);
    strcat(flag,temp);
    printf("%s",flag);
	
	return 0;
	
	
	
	
}
