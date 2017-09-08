#include <stdio.h>

int main(void)
{
	char hours="0",minutes="0";
	
	char nums[59];
	nums[0]="zero";
	nums[1]="one";
	nums[2]="two";
	nums[3]="three";
	nums[4]="four";
	nums[5]="five";
	nums[6]="six";
	nums[7]="seven";
	nums[8]="eight";
	nums[9]="nine";
	nums[10]="ten";
	nums[11]="eleven";
	nums[12]="twelve";
	nums[13]="thirteeen";
	nums[14]="fourteen";
	nums[15]="fifteen";
	nums[16]="sixteen";
	nums[17]="seventeen";
	nums[18]="eighteen";
	nums[19]="nineteen";
	nums[20]="twenty";
	nums[21]="twenty-one";
	nums[22]="twenty-two";
	nums[23]="twenty-three";
	nums[24]="twenty-four";
	nums[25]="twenty-five";
	nums[26]="twenty-six";
	nums[27]="twenty-seven";
	nums[28]="twenty-eight";
	nums[29]="twenty-nine";
	nums[30]="thirty";
	nums[31]="thirty-one";
	nums[32]="thirty-two";
	nums[33]="thirty-three";
	nums[34]="thirty-four";
	nums[35]="thirty-five";
	nums[36]="thirty-six";
	nums[37]="thirty-seven";
	nums[38]="thirty-eight";
	nums[39]="thirty-nine";
	nums[40]="fourty";
	nums[41]="fourty-one";
	nums[42]="fourty-two";
	nums[43]="fourty-three";
	nums[44]="fourty-four";
	nums[45]="fourty-five";
	nums[46]="fourty-six";
	nums[47]="fourty-seven";
	nums[48]="fourty-eight";
	nums[49]="fourty-nine";
	nums[50]="fifty";
	nums[51]="fifty-one";
	nums[52]="fifty-two";
	nums[53]="fifty-three";
	nums[54]="fifty-four";
	nums[55]="fifty-five";
	nums[56]="fifty-six";
	nums[57]="fifty-seven";
	nums[58]="fifty-eight";
	nums[59]="fifty-nine";
	
	printf("What time is it? (HH:MM) ex. 05:01\n");
	scanf("%d:%d",&hours,&minutes);
	
	if (hours==1){
		printf("The time is %d hour and %d minutes.",nums[hours],nums[minutes]);
	else if (hours==1 || minutes=1)
		printf("The time is %d hour and %d minute.",nums[hours],nums[minutes]);
	else
		printf("The time is %d hours and %d minutes.",nums[hours],nums[minutes]);
	}
	
	return 0;
}
