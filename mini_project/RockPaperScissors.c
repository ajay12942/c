#include <stdio.h>
#include<stdlib.h>

int main()
{
    int usr;
    int user=0;
    int comput=0;
    printf("the game will be 5 rounds\n\n\nillegal selection leads to computer win that round\n");
    printf("select your play form the following option\n1.rock\n2.paper\n3.scissor\n");
    for(int i=0;i<5;i++)
    {
        printf("round %d\n",i+1); 
        scanf("%d",&usr);
        int com=rand()%3;//generates random number form 0 to 2 total 3 number is generated
        if(usr==0 || usr>=4)
            {
                printf("illegal entry, points goes to computer\n");
                comput++;
            }
        else if((com+1)==usr)
            {
            com++;
            usr++;
            printf("this round is draw\n");
            }
        else
            {
                switch(usr)
    			{
    				case 1:
    					{
    						if((com+1)==3) 
    							comput++;
    						else
    							user++;
    						break;
    					}
    				case 2:
    				{
    					if((com+1)==1) 
    						comput++;
    					else
    						user++;
    					break;
    				}
    				case 3:
    					{
    					if((com+1)==2) 
    						comput++;
    					else
    						user++;
    					break;
    					}
    			}
            
         }
    }
    printf("final score board\nuser:%d\tcomputer:%d\n",user,comput);
    if(user>comput)
		printf("user won the match");
	else
		printf("computer won the match");
return 0;    

}


