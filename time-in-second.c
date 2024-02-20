int main (){
    int a;
    printf ("enter the value of time insecond : ");
    scanf ("%d",&a);
    printf ("the time is in 'Hour : Minute : Second' is  : ");
    printf ("%d:%d:%d", (a/3600),(a%3600)/60, (a%3600)%60);
    return 0;
}
