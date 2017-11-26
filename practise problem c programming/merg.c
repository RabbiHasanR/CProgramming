#include <stdio.h>
 int main(){
int a[100],i,j,k=-1,b[100],m=-1,c[100],n=-1,d[100],y=-1,x=-1;
printf("enter the value\n");
for (;;)
{
 scanf("%d",&j);
 if(j==-1)
        break;
 else{
    k++;
    a[k]=j;
 }
}
printf("show the result\n");
for(i=0;i<=k;i++) {
printf("position %d:",i);
printf("%8d\n",a[i]);

}
for(i=0;i<=k;i++){
  if(a[i]%2==0){
   m++;
  b[m]=a[i];
  }
  else{
   n++;
  c[n]=a[i];
  }
}
printf("odd\n");
for(i=0;i<=n;i++){
        printf("%d\n",c[i]);
}
printf("even\n");
for(i=0;i<=m;i++){
        printf("%d\n",b[i]);
}

    for(i=0;i<=m+n+1;i++){
        if(i<=m){
      y++;
      d[y]=b[i];
        }
        else{
          x++;
        y++;
        d[y]=c[x];
        }
}
printf("merge data\n");
for(i=0;i<=m+n+1;i++){
        printf("%d\n",d[i]);
}
return 0;
 }

