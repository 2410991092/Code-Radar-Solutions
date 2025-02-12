int main(){
    int choice;
    printf("Ent choice(jan,feb,mar,ap,may,june,aug,sep,oct,nov ,dec)= ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("31");
        break;
        case 2:
        printf("28");
        break;
        case 3:
        printf("31");
        break;
        case 4:
        printf("30");
        break;
        case 5:
        printf("31");
        break;
        case 6:
        printf("30");
        break;
        case 7:
        printf("31");
        break;
        default:
        printf("wrong choice");
    }
}
