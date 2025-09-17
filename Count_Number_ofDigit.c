void main(){
int num,count=0;
printf("enter number\n");
scanf("%d",&num);

if(num==0)
{
    count=1;
}
else
{
    while(num>0)
    {
        count++;
        num=num/10;
    }
}
printf("number of digit=%d\n",count);
getch();
}
