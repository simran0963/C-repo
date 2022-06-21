#include<stdio.h>
int main(){
	printf("\n\n\n\n");
	printf("      GGGGGGGGGGGGGGG HHHHHHHHH     HHHHHHHHH IIIIIIIIII  SSSSSSSSSSSSSSSSS   SSSSSSSSSSSSSSSSS  UUUUUUUU     UUUUUUUU               CCCCCCCCCCCCCCCC                AAA                FFFFFFFFFFFFFFFFFFFFFF EEEEEEEEEEEEEEEEEEEEEE\n");
	printf("   GG:::::::::::::::G H:::::::H     H:::::::H I::::::::I S:::::SSSSSS::::::S S:::::SSSSSS::::::S U::::::U     U::::::U             CC:::::::::::::::C              A:::::A              F::::::::::::::::::::F E::::::::::::::::::::E\n");
	printf("  G:::::GGGGGGGG::::G HH::::::H     H::::::HH II::::::II S:::::S     SSSSSSS S:::::S     SSSSSSS UU:::::U     U:::::UU            C:::::CCCCCCCC::::C             A:::::::A             FF::::::FFFFFFFFF::::F EE::::::EEEEEEEEE::::E\n");
	printf("G:::::G       GGGGGG    H:::::H     H:::::H     I::::I   S:::::S             S:::::S              U:::::U     U:::::U            C:::::C       CCCCCC            A:::::::::A              F:::::F       FFFFFF   E:::::E             \n");
	printf("G:::::G                 H::::::HHHHH::::::H     I::::I    S::::SSSS           S::::SSSS           U:::::D     D:::::U           C:::::C                        A:::::A A:::::A            F::::::FFFFFFFFFF      E::::::EEEEEEEEEE   \n");
	printf("G:::::G    GGGGGGGGGG   H:::::::::::::::::H     I::::I     SS::::::SSSSS       SS::::::SSSSS      U:::::D     D:::::U           C:::::C                       A:::::A   A:::::A           F:::::::::::::::F      E:::::::::::::::E   \n");
	printf("G:::::G    GGGGG::::G   H::::::HHHHH::::::H     I::::I          SSSSSS::::S         SSSSSS::::S   U:::::D     D:::::U           C:::::C                     A:::::AAAAAAAAA:::::A         F::::::FFFFFFFFFF      E::::::EEEEEEEEEE   \n");
	printf("G:::::G        G::::G   H:::::H     H:::::H     I::::I               S:::::S             S:::::S  U:::::D     D:::::U           C:::::C                    A:::::::::::::::::::::A        F:::::F                E:::::E             \n");
	printf("  G:::::GGGGGGGG::::G HH::::::H     H::::::HH II::::::II SSSSSSS     S:::::S SSSSSSS     S:::::S  U:::::::UUU:::::::U             C:::::CCCCCCCC::::C    A:::::A             A:::::A    FF:::::::FF            EE::::::EEEEEEEE:::::E\n");
	printf("   GG:::::::::::::::G H:::::::H     H:::::::H I::::::::I S::::::SSSSSS:::::S S::::::SSSSSS:::::S   UU:::::::::::::UU               CC:::::::::::::::C   A:::::A               A:::::A   F::::::::FF            E::::::::::::::::::::E\n");
	printf("      GGGGGGGGGGGGGGG HHHHHHHHH     HHHHHHHHH IIIIIIIIII  SSSSSSSSSSSSSSS     SSSSSSSSSSSSSSS          UUUUUUUUU                        CCCCCCCCCCCCC AAAAAAA                   AAAAAAA FFFFFFFFFFF            EEEEEEEEEEEEEEEEEEEEEE\n");
    printf("\nSOUTH INDIAN MENU \n");
    int choice, qty, total=0;
    printf("\n\tPRODUCT\t\t\t\tPRICE\n\n6. PLAIN DOSA\t\t\t\tRs60\n7. MASALA DOSA\t\t\t\tRs90\n8. IDLI(2Pcs)\t\t\t\tRs40\n9. VADA\t\t\t\t\tRs50\n10. UTTAPAM\t\t\t\tRs40\n\nSELECT ANY : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 6:
        printf("PLAIN DOSA SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 60;
        printf("Total Amount For Pay : %d", total);
        break;
    case 7:
        printf("MASALA DOSA SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 90;
        printf("Total Amount For Pay : %d", total);
        break;
    case 8:
        printf("IDLI SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 40;
        printf("Total Amount For Pay : %d", total);
        break;
    case 9:
        printf("VADA SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 50;
        printf("Total Amount For Pay : %d", total);
        break;
    case 10:
        printf("UTTAPAM SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 40;
        printf("Total Amount For Pay : %d", total);
        break;
    
    default:
        printf("Invalid input!");
        break;
    }
    return 0;
}