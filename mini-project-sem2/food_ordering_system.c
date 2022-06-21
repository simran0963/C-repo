/*
 $$$$$$\   $$\      $$\  $$$$$$\   $$$$$$\    $$$$$$\         $$$$$$\    $$$$$$\   $$$$$$$$\  $$$$$$$$\ 
$$  __$$\  $$$\    $$$ | \_$$  _| $$  __$$\  $$  __$$\       $$  __$$\  $$  __$$\  $$  _____| $$  _____|
$$ /  $$ | $$$$\  $$$$ |   $$ |   $$ /  \__| $$ /  $$ |      $$ /  \__| $$ /  $$ | $$ |       $$ |      
$$$$$$$$ | $$\$$\$$ $$ |   $$ |   $$ |$$$$\  $$ |  $$ |      $$ |       $$$$$$$$ | $$$$$\     $$$$$\    
$$  __$$ | $$ \$$$  $$ |   $$ |   $$ |\_$$ | $$ |  $$ |      $$ |       $$  __$$ | $$  __|    $$  __|   
$$ |  $$ | $$ |\$  /$$ |   $$ |   $$ |  $$ | $$ |  $$ |      $$ |  $$\  $$ |  $$ | $$ |       $$ |      
$$ |  $$ | $$ | \_/ $$ | $$$$$$\  \$$$$$$  |  $$$$$$  |      \$$$$$$  | $$ |  $$ | $$ |       $$$$$$$$\ 
\__|  \__| \__|     \__| \______|  \______/   \______/        \______/  \__|  \__| \__|       \________|
                      har jgh jaha'\' hai wahan '\\' likhna pda wrna warning aari thi                                                                                                                                                                                               
*/                                                                                       
#include<stdio.h>
int main()
{
	printf(" $$$$$$\\   $$\\      $$\\  $$$$$$\\   $$$$$$\\    $$$$$$\\         $$$$$$\\    $$$$$$\\   $$$$$$$$\\  $$$$$$$$\\ \n");
	printf("$$  __$$\\  $$$\\    $$$ | \\_$$  _| $$  __$$\\  $$  __$$\\       $$  __$$\\  $$  __$$\\  $$  _____| $$  _____|\n");
	printf("$$ /  $$ | $$$$\\  $$$$ |   $$ |   $$ /  \\__| $$ /  $$ |      $$ /  \\__| $$ /  $$ | $$ |       $$ |     \n");
	printf("$$$$$$$$ | $$\\$$\\$$ $$ |   $$ |   $$ |$$$$\\  $$ |  $$ |      $$ |       $$$$$$$$ | $$$$$\\     $$$$$\\    \n");
	printf("$$  __$$ | $$ \\$$$  $$ |   $$ |   $$ |\\_$$ | $$ |  $$ |      $$ |       $$  __$$ | $$  __|    $$  __|   \n");
	printf("$$ |  $$ | $$ |\\$  /$$ |   $$ |   $$ |  $$ | $$ |  $$ |      $$ |  $$\\  $$ |  $$ | $$ |       $$ |      \n");
	printf("$$ |  $$ | $$ | \\_/ $$ | $$$$$$\\  \\$$$$$$  |  $$$$$$  |      \\$$$$$$  | $$ |  $$ | $$ |       $$$$$$$$\\ \n");
	printf("\\__|  \\__| \\__|      \\__|\\______|  \\______/   \\______/        \\______/  \\__|   \\__|\\__|       \\________|\n");
	printf("\n\t\t\t\t** WELCOME TO RESTAURANT **\n\n");
    printf("\nMENU CARD\n");
    int choice=-1, qty, total=0,ch,sum=0,amt[100],i=0,ans;
    printf("\n\tPRODUCT\t\t\t\t\tPRICE\n\n1. NOODLES\t\t\t\t\t50/90Rs.\n2. MUNCHOORIAN(DRY/GRAVY)\t\t\t60/80Rs.\n3. VEG MOMOS\t\t\t\t\t30/60Rs.\n4. CHICKEN MOMOS\t\t\t\t40/80Rs.\n5. SPRING ROLLS\t\t\t\t\t40/80Rs.\n6. PLAIN DOSA\t\t\t\t\t60Rs.\n7. MASALA DOSA\t\t\t\t\t90Rs.\n8. IDLI(2Pcs)\t\t\t\t\t40Rs.\n9. VADA\t\t\t\t\t\t50Rs.\n10. UTTAPAM\t\t\t\t\t40Rs.\n11. PARATHA(ALOO/PANEER)\t\t\t50/60Rs.\n12. KADHAI PANEER\t\t\t\t100Rs.\n13. BIRYANI\t\t\t\t\t80/100Rs.\n14. CHOLE BHATURE\t\t\t\t60Rs.\n15. BUTTER CHICKEN\t\t\t\t140Rs.\n16. COFFEE/TEA\t\t\t\t\t20/15Rs.\n17. LEMONADE\t\t\t\t\t90Rs.\n18. COKE/PEPSI\t\t\t\t\t30Rs.\n19. OREO/KIT-KAT\t\t\t\t50Rs.\n20. FRUIT PUNCH\t\t\t\t\t40Rs.\n21. ROTI\t\t\t\t\t10Rs.\n22. NAAN\t\t\t\t\t12Rs.\n\n");	
	printf("\nEnter '0' for stop giving order \n");   
    //-------------------------------------------->input
    while(choice!=0)
    {
    	printf("\n");
    	printf("Please Enter your order : ");
    	scanf("%d",&choice);
 		switch (choice)
   		{
   			case 0: printf("Thanks for ordering !\n");
   				break;
   				
		    case 1:
		        printf("NOODLES SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				printf("PLEASE! CHOOSE :\n1. HALF\t2.FULL \n");
				scanf("%d",&ch);
				if(ch==1)
				{
					total = qty * 50;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 90;
					sum+=total;
				}  
				else
				{
					printf("We are Sorry, for this....\n");
				} 
		        printf(" Amount : %d", total);
		        break;
		        
		    case 2:
			    printf("MUNCHOORIAN SELECTED, PLEASE! Enter the Quantity : ");
			    scanf("%d", &qty);
				printf("PLEASE! CHOOSE :\n1. DRY\t2.GRAVY \n");
				scanf("%d",&ch);
			    if(ch==1)
				{
					total = qty * 60;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 80;
					sum+=total;
				}
				else
				{
					printf("We are Sorry, for this....\n");
				} 
				printf(" Amount : %d", total);
			
		        break;
		        
		    case 3:
		        printf("VEG MOMOS SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				printf("PLEASE! CHOOSE :\n1. HALF\t2.FULL \n");
				scanf("%d",&ch);
			        if(ch==1)
				{
					total = qty * 30;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 60;
					sum+=total;
				}
				else
				{
					printf("We are Sorry, for this....\n");
				} 
				printf(" Amount : %d", total);
		        break;
		        
		    case 4:
		        printf("CHICKEN MOMOS SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				printf("PLEASE! CHOOSE :\n1. HALF\t2.FULL \n");
				scanf("%d",&ch);
		        if(ch==1)
				{
					total = qty * 40;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 80;
					sum+=total;
				}
				else
				{
					printf("We are Sorry, for this....\n");
				} 
				printf(" Amount : %d", total);
			    break;
		        
		    case 5:
		        printf("SPRING ROLLS SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        printf("PLEASE! CHOOSE :\n1. HALF\t2.FULL \n");
				scanf("%d",&ch);
		        if(ch==1)
				{
					total = qty * 40;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 80;
					sum+=total;
				}
				else
				{
					printf("We are Sorry, for this....\n");
				} 
				printf(" Amount : %d", total);
		        break;
		        
		     case 6:
		        printf("PLAIN DOSA SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 60;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 7:
		        printf("MASALA DOSA SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 90;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 8:
		        printf("IDLI SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 40;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 9:
		        printf("VADA SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 50;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 10:
		        printf("UTTAPAM SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 40;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		       case 11:
		        printf("PARATHA SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				printf("PLEASE! CHOOSE :\n1. ALOO\t2.  PANEER \n");
				scanf("%d",&ch);
				if(ch==1)
				{
					total = qty * 50;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 60;
					sum+=total;
				} 
				else
				{
					printf("We are Sorry, for this....\n");
				} 
				printf(" Amount : %d", total);
		        break;
		        
		    case 12:
		        printf("KADHAI PANEER SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				total = qty * 100;
				sum+=total;
				printf(" Amount : %d", total);
		        break;
		        
		    case 13:
		        printf("BIRYANI SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				printf("PLEASE! CHOOSE :\n1. HALF\t2.FULL \n");
				scanf("%d",&ch);
		        if(ch==1)
				{
					total = qty * 80;
					sum+=total;
				}
				else if(ch==2)
				{
					total = qty * 100;
					sum+=total;
				}
				else
				{
					printf("We are Sorry, for this....\n");
				} 
				printf(" Amount : %d", total);
		        break;
		        
		    case 14:
		        printf("CHOLE BHATURE SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				total = qty * 60;
				sum+=total;
				printf(" Amount : %d", total);
		        break;
		        
		    case 15:
		        printf("BUTTER CHICKEN SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
				total = qty * 140;
				sum+=total;
				printf(" Amount : %d", total);
		        break;
		        
		    case 16:
		        printf("COFFEE/TEA SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        printf("PLEASE! CHOOSE :\n1. COFFEE\t2.TEA \n");
		        if(ch==1)
		        {
		        	 total = qty * 20;
		             sum+=total;
				}
				 else if(ch==2)
		        {
		        	 total = qty * 15;
		             sum+=total;
				}
				else
				{
					printf("We are Sorry, for this....\n");
				} 
		       printf(" Amount : %d", total);
		        break;
		        
		    case 17:
		        printf("LEMONADE SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 20;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 18:
		        printf("COKE/PEPSI SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 30;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 19:
		        printf("OREO/KIT-KAT SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 50;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 20:
		        printf("FRUIT PUNCH SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 50;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 21:
		        printf("ROTI SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 10;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    case 22:
		        printf("NAAN SELECTED, PLEASE! Enter the Quantity : ");
		        scanf("%d", &qty);
		        total = qty * 12;
		        sum+=total;
		        printf(" Amount : %d", total);
		        break;
		        
		    default:
		        printf("We are Sorry, for this....");
		        break;
   		}
	}
	printf("\n --------------------------------BILL---------------------------------------- ");
	printf("\n                        You need to pay : %d Rs.                              ",sum);
	printf("\n ---------------------------------------------------------------------------   ");
    printf("\nDid you enjoy our service?\n1.YES\t2.NO\n");
    scanf("%d",&ans);
    if(ans==1)
    {
    	printf("*******THANK YOU AND VISIT US AGAIN!***********");
	}
	else if(ans==2)
    {
    	printf("WE ARE SORRY FOR YOUR INCONVENIENCE ! WE WILL IMPROVE OUR SERVICE.");
    	printf("\n***********THANK YOU AND VISIT US AGAIN!***********");
	}
	getch();
	return 0;
}
