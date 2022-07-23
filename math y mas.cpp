#include<iostream>
#include<math.h>
#include<stdio.h>
#include<fstream>
int main (){
FILE * pArch;
pArch = fopen("suma.txt","r+");
int jorge, sumaPos=0, sumaNeg=0;
while(!feof(pArch)){
 fscanf(pArch,"%d", &jorge);
if(jorge>=0) sumaPos+=jorge;
else sumaNeg+=jorge;
}
printf("la suma es %d:", sumaPos);
printf("suma nega %d:", sumaNeg);




return 0;


}
