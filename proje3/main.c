#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct sehir2{
//struct sehir1 *k;
int plakakomsu;
struct sehir2 *next2;

};
typedef struct sehir2 sehir2;
struct sehir1{
int plaka;
int komsusayisi;
char sehirismi[15];
char bolge[5];
struct sehir1 *next;
struct sehir1 *prev;
struct sehir2 *komsu;
};
struct sehir1 *first=NULL;
struct sehir2 *point;


void komsuolustur(struct sehir1** ilk,int komsuplaka){

struct sehir1 *s=(*ilk);

//printf("\n");
//printf(s->sehirismi);
//printf("%d",komsuplaka);

/*struct sehir2 *komsutemp=malloc(sizeof(struct sehir2));
komsutemp->plakakomsu=komsuplaka;
komsutemp->next2=NULL;


if((*ilk)->komsu==NULL){

(*ilk)->komsu=komsutemp;
//printf(ilk->sehirismi);

}
else{

(*ilk)->komsu->next2=komsutemp;

(*ilk)->komsu=komsutemp;

}*/
if(s != NULL) {


            sehir2* new = (sehir2*)malloc(sizeof(sehir2));
            new->plakakomsu = komsuplaka;
            new->next2 = NULL;



           if(s->komsu==NULL){

              s->komsu=new;
              new->next2=NULL;

              }
                else{
            struct sehir2* tmp = s->komsu;
            s->komsu = new;
            new->next2 = tmp;
        }

        }
}
void komsuolustur2(struct sehir1** ilk,int komsuplaka,char komsuisim[]){

struct sehir1 *s=(*ilk);
//printf("buraya girito");
//printf(komsuisim);
//printf(s->sehirismi);
 while(strcmp(s->sehirismi,komsuisim) != 0){
            s = s->next;
            }
            if(strcmp(s->sehirismi,komsuisim)==0){
                s->komsusayisi=s->komsusayisi+1;

            }

//printf("\n jdkjskffsglfs");

if(s != NULL) {


            sehir2* new = (sehir2*)malloc(sizeof(sehir2));
            new->plakakomsu = komsuplaka;
            new->next2 = NULL;

           if(s->komsu==NULL){

              s->komsu=new;
              new->next2=NULL;

              }
                else{
            struct sehir2* tmp = s->komsu;
            s->komsu = new;
            new->next2 = tmp;
        }

        }
}
void olustur(struct sehir1** root,int plaka4,char sehirismi4[],char bolge4[],int sayac6){

struct sehir1 *temp=malloc(sizeof(struct sehir1));

temp->plaka=plaka4;
strncpy(temp->sehirismi,sehirismi4,15);
strncpy(temp->bolge,bolge4,5);
temp->komsusayisi=sayac6;
temp->prev=NULL;
temp->next=NULL;
if(*root==NULL){
    (*root)=temp;
}
else
{
    (*root)->next=temp;
    temp->prev=(*root);
    (*root)=temp;
}
}
int isimara(char *aranacak,struct sehir1* ilk9){
       // struct sehir1*arama=ilk;

        struct sehir1*arama2=degistir(ilk9);
while(arama2!=NULL){
    if(strstr(arama2->sehirismi,aranacak)!=NULL){
       // printf("bip=%d bip=%s",arama2->plaka,arama2->sehirismi);
        return(arama2->plaka);
    break;
    }
    else{
       // printf("");
    }
    arama2=arama2->next;
}}
int degistir(struct sehir1* root){
struct sehir1*temp1=root;
while(temp1->prev!=NULL){
    temp1=temp1->prev;}
 return(temp1);
}
int degistir2(struct sehir1* root,char sehir[]){
struct sehir1*temp1=root;
printf(sehir);
while(temp1->prev!=NULL){
        if(strcmp(temp1->sehirismi,sehir)==0){
            printf(temp1->sehirismi);
           return(temp1);
        }
    temp1=temp1->prev;}

}
int degistir3(struct sehir1* root,char sehir[]){
struct sehir1*temp1=root;
printf(sehir);
while(temp1->next!=NULL){
        if(strcmp(temp1->sehirismi,sehir)==0){
           // printf(temp1->sehirismi);
           return(temp1);
        }
    temp1=temp1->next;}

}
void yazdir2(struct sehir1* root){
struct sehir1*temp1=root;
while(temp1->prev!=NULL){
   temp1=temp1->prev;}
 while(temp1!=NULL){
     printf("\n plaka=%d",temp1->plaka);
    printf(" sehirismi=");
    printf(temp1->sehirismi);
    printf(" bolge=");
    printf(temp1->bolge);
    printf(" komsu sayisi=%d",temp1->komsusayisi);
    printf("\n");
    temp1=temp1->next;
 }
}
void yazdir3(struct sehir1* root,int n,int n2){
struct sehir1*temp1=root;
while(temp1->prev!=NULL){
   temp1=temp1->prev;}
 while(temp1!=NULL){
        if(n<temp1->komsusayisi && n2>temp1->komsusayisi){
     printf("\n plaka=%d",temp1->plaka);
    printf(" sehirismi=");
    printf(temp1->sehirismi);
    printf(" bolge=");
    printf(temp1->bolge);
    printf(" komsu sayisi=%d",temp1->komsusayisi);
    printf("\n");}
    temp1=temp1->next;
 }
}

void siraliyazdir(struct sehir1* root,FILE *output){
struct sehir1*q=root;
while(q->prev!=NULL){
   q=q->prev;}
   int j;
   for(j=0;j<100;j++){
    sehirsirala(q);
    }

/*struct sehir1*nextnode;
struct sehir1*tmp;
int i;
while(temp1->prev!=NULL){
   temp1=temp1->prev;}
printf(temp1->sehirismi);
while(temp1!=NULL){
     printf("\n plaka=%d",temp1->plaka);
    printf(" sehirismi=");

    printf(temp1->sehirismi);
    for(i=0;i=temp1->komsusayisi;i++){
     //   printf("komsu plakasi=%d",temp1->komsu->plakakomsu);
        temp1->komsu=temp1->komsu->next2;

    }
    printf(" bolge=");
    printf(temp1->bolge);
    printf(" komsu sayisi=%d",temp1->komsusayisi);
    printf("\n");
    temp1=temp1->next;
 }*/

int i;
 /*if(q->komsu==NULL){
        while(q != NULL){
        printf(" %d ",q->plaka);
        printf("%s ", q->sehirismi);
        printf("%s -> ", q->bolge);
        printf("breakliyor\n");
        q=q->next;
        }
        printf("\n");
            }*/

    while(q != NULL) {

            sehir2 *q2=q->komsu;

            if(q->komsu==NULL){

        fprintf(output,"%d.",q->plaka);
        fprintf(output,"%s.", q->sehirismi);
        fprintf(output,"%d.",q->komsusayisi);
        fprintf(output,"%s->", q->bolge);

        fprintf(output,"komsusu yok");}
else{
       fprintf(output," --------------- ");
         fprintf(output,"\n| %d.",q->plaka);
        fprintf(output,"%s.", q->sehirismi);
        fprintf(output,"%d.",q->komsusayisi);
        fprintf(output,"%s |", q->bolge);

        for(i=0;i<q->komsusayisi;i++){
        komsusirala(q2);}
       for(i=0;i<q->komsusayisi;i++) {
            fprintf(output,"->%d", q2->plakakomsu);
            q2 = q2->next2;
        }}
fprintf(output,"\n ---------------");
        fprintf(output,"\n        ↑↓");
     fprintf(output,"\n");
        q= q->next;
}
}
void sehirsilme(char silinecek[],struct sehir1* head){
 // struct sehir1*arama=head;

while(head!=NULL){

    if(strstr(head->sehirismi,silinecek)!=NULL){
            if(head->next==NULL){

    head->prev->next=NULL;
    free(head);
    break;
}
if(head->prev==NULL){
        struct sehir1*arama=head;
    arama->next->prev==NULL;
     head=arama->next;
     printf(head->sehirismi);
     free(arama);
    break;


}
     head->next->prev=head->prev;
        head->prev->next=head->next;
        printf(head->sehirismi);
      free(head);
    }
    head=head->next;
}

}
void komsusil(int silinecek,struct sehir2* head){
    struct sehir2 *temp=head;
    struct sehir2 *prev;

    if(temp!=NULL&&temp->plakakomsu==silinecek){

        head=temp->next2;
        free(temp);
        return;
    }
    while(temp->next2!=NULL&&temp->plakakomsu!=silinecek){

        prev=temp;
        temp=temp->next2;
    }
    if(temp==NULL){
        return;}
    printf("");
    prev->next2=temp->next2;
    free(temp);
    }
int sehirarama(struct sehir1 *root,char aranan[],int varmi){

  struct sehir1*arama=root;
while(arama!=NULL){

    if(strstr(arama->sehirismi,aranan)!=NULL){
        //printf("sehir listede mevcuttur");
        printf(" ");
        varmi=1;
        return varmi;
        // printf("degeri=%d",varmi);
        break;}
        else{
            printf("");
        }
    arama=arama->next;
}}

void aynibolge(struct sehir1 *root,char arananbolge[]){
struct sehir1*arama=root;
while(arama!=NULL){

    if(strstr(arama->bolge,arananbolge)!=NULL){
        printf("plaka=%d ",arama->plaka);
        printf(arama->sehirismi);
         printf(" komsu sayisi=%d",arama->komsusayisi);
         printf("\n");

    }
arama=arama->next;

}}
int komsusirala(struct sehir2 *ptr2){
    struct sehir2 *ptr=ptr2;
    int t,i;
  for(i=0;i<1;i++){
  while(ptr->next2!=NULL){
        if(ptr->plakakomsu>ptr->next2->plakakomsu){
    t=ptr->plakakomsu;
    ptr->plakakomsu=ptr->next2->plakakomsu;
    ptr->next2->plakakomsu=t;
    }
    ptr=ptr->next2;
    } }
return ptr2;
   // while(ptr2->next2!=NULL){
       // printf("%d",ptr2->plakakomsu);
      //  ptr2=ptr2->next2;
    //}

}
int sehirsirala(struct sehir1 *ptr2){


    struct sehir1 *ptr=ptr2;


    int t,i,y;
    char isim[15];
    char bolg[5];
  for(i=0;i<1;i++){
  while(ptr->next!=NULL){
        if(ptr->plaka>ptr->next->plaka){
    t=ptr->plaka;
    strcpy(bolg,ptr->bolge);
    y=ptr->komsusayisi;
    strcpy(isim,ptr->sehirismi);
    ptr->plaka=ptr->next->plaka;
    strcpy(ptr->bolge,ptr->next->bolge);
     strcpy(ptr->sehirismi,ptr->next->sehirismi);
       ptr->komsusayisi=ptr->next->komsusayisi;
    ptr->next->plaka=t;
     strcpy(ptr->next->bolge,bolg);
      strcpy(ptr->next->sehirismi,isim);
       ptr->next->komsusayisi=y;
    }
    ptr=ptr->next;
    } }
return ptr2;
   // while(ptr2->next2!=NULL){
       // printf("%d",ptr2->plakakomsu);
      //  ptr2=ptr2->next2;
    //}

}
int sehirplakaarama(struct sehir1*root,int arananplaka,int varmi){
struct sehir1*arama=root;
//printf("  %d  ",arananplaka);
//printf(arama->sehirismi);
while(arama!=NULL){

    if(arama->plaka==arananplaka){
        printf("plaka=%d ",arama->plaka);
        printf(arama->sehirismi);
         printf(" komsu sayisi=%d",arama->komsusayisi);
         printf("\n");
         varmi=2;
         return varmi;
         printf("degeri=%d",varmi);
         break;}
arama=arama->next;
}
return varmi;
}
/*void sonradanolustur(struct sehir1** root,int plaka4,char sehirismi4[],char bolge4[],int sayac6){
struct sehir1*arama=(*root);
while(arama->prev!=NULL){
   arama=arama->prev;}
struct sehir1 *temp=malloc(sizeof(struct sehir1));

while(arama!=NULL){
printf("gitirriieiicsdc");
    if(strstr(arama->plaka,plaka4)!=NULL){
        printf("sehir bulundu");
        //varmi++;
        // printf("degeri=%d",varmi);
        break;}
        else{
            printf("");
        }
    arama=arama->next;
}

temp->plaka=plaka4;
strncpy(temp->sehirismi,sehirismi4,15);
strncpy(temp->bolge,bolge4,5);
temp->komsusayisi=sayac6;
temp->prev=NULL;
temp->next=NULL;
if(*root==NULL){
    (*root)=temp;
}
else
{
    (*root)->next=temp;
    temp->prev=(*root);
    (*root)=temp;
}
}*/
int main()
{
    struct sehir1 *head=NULL;
    int plaka2;
    int gercekplaka;
    char sehirismi2[15];
    char bolge2[5];
    FILE *dosya;
    dosya=fopen("sehirler.txt","r");
    char *str,*str2,*str3,*str4;
    char m[100];
    int sayac1=0;
    int sayac2;
    int j;
    int i;
    str=fgets(m,100,dosya);

    //printf(str);
    while(str!=NULL){
            j=strlen(str);
    for(i=0;i<j;i++){
        if(str[i]==','){
            sayac1++;
        }

    }
    sayac2=sayac1-2;

     str2=strtok(str,",");
    sscanf(str2,"%d",&plaka2);
    str2=strtok(NULL,",");
    sscanf(str2,"%s",&sehirismi2);
    str2=strtok(NULL,",");
    sscanf(str2,"%s",&bolge2);

    str2=strtok(NULL, "\n");
    str=fgets(m,100,dosya);
    sayac1=0;
    // printf("%d\n",plaka2);
   // printf(sehirismi2);
    //printf(bolge2);
    olustur(&head,plaka2,sehirismi2,bolge2,sayac2);
    }
     struct sehir1 *ilk=degistir(head);
    //yazdir2(ilk);


    //printf(str);
     FILE *dosya2;
    dosya2=fopen("sehirler.txt","r");
   /* */str3=fgets(m,100,dosya2);
    while(str3!=NULL){
        j=strlen(str3);
    for(i=0;i<j;i++){
        if(str3[i]==','){
            sayac1++;}}
    sayac2=sayac1-2;
str4=strtok(str3,",");

str4=strtok(NULL,",");

str4=strtok(NULL,",");

//printf("%d",sayac2);
ilk->komsu=NULL;
struct sehir1 *ilk9=degistir(head);
 for(i=0;i<sayac2-1;i++){
    str4=strtok(NULL,",");
   // printf("\n");
  //  printf(str4);
    gercekplaka=isimara(str4,ilk9);
 // printf("komsu=%s komsuplaka=%d\n",str4,gercekplaka);
   // printf("qqqqqqqqqqqqqq");
    komsuolustur(&ilk,gercekplaka);
   // printf("komsupalakası=%d",ilk->komsu->plakakomsu);
 }
str4=strtok(NULL,"\n");
//printf("\n");
   // printf(str4);
 gercekplaka=isimara(str4,ilk);
 komsuolustur(&ilk,gercekplaka);
   // printf("komsupalakası=%d",ilk->komsu->plakakomsu);
//printf("sonraki");
    str3=fgets(m,100,dosya2);
    sayac1=0;
      ilk=ilk->next;
    }
   // printf("qqqqq%d\n",ilk->plaka);
     // struct sehir1 *ilk2=degistir(head);

   //printf("llllkomsupalakası=%d",ilk2->komsu->next2->plakakomsu);
    int eklenecekplaka;
    char eklenecekisim[15];
    char eklenecekbolge[5];
    char silineceksehir[15];
    char aranansehir[15];
    char arananbolge[5];
    int aranansehirplakasi;
    int n,n2;
     int varmisayac=0;
     int eklenecekkomsusayisi;
     int eklenecekkomsuplaka;
     char komsueklesehir[15];

    // for(i=0;i<ilk2->komsusayisi;i++){
         // f=komsusirala(f);
     //printf("\n");
    // }




     //if(ilk2->komsu->next2->next2->next2->next2->next2->next2==NULL){
          //  printf("%d",ilk2->komsu->plakakomsu);
     //printf("%d",ilk2->komsu->next2->plakakomsu);
    // printf("%d",ilk2->komsu->next2->next2->plakakomsu);
     //printf("%d",ilk2->komsu->next2->next2->next2->plakakomsu);
     //printf("%d",ilk2->komsu->next2->next2->next2->next2->plakakomsu);
     //printf("%d",ilk2->komsu->next2->next2->next2->next2->next2->plakakomsu);
       // printf("nullllldurrr");
    // }
    // else{
     //   printf("null degildit");
    // }
while(1){
        varmisayac=0;
    printf("\nseciminizi giriniz\n1:Sehir ekle\n2:Sehir sil\n3:Sehir listele\n4:Komsu sayisina gore sehir listele\n5:Ismi ile sehir ara\n6:Plaka ile sehir arama\n7:Bolgeye gore sehir listele\n8:Diyagrami yazdir\n9:Komsuluk ekle\n10:Komsu sil\n11:Menuden cik\n");
    int secim;
    scanf("%d",&secim);
    switch(secim){
case 1:
    printf("");
  //  struct sehir1 *ilk5=degistir(head);
    printf("eklemek istediginiz sehrin plakasini ismini ve bulundugu bolgeyi giriniz:\n");

    scanf("%d %s %s",&eklenecekplaka,&eklenecekisim,&eklenecekbolge);
    printf("eklemek istediginiz sehrin kac komsusu var?\n");
    scanf("%d",&eklenecekkomsusayisi);
    olustur(&head,eklenecekplaka,eklenecekisim,eklenecekbolge,eklenecekkomsusayisi);
   // for(i=0;i<eklenecekkomsusayisi;i++){
     //       printf("%d.komsu plakasını giriniz",i+1);
   // scanf("%d",eklenecekkomsuplaka);
     //   komsuolustur(&head,eklenecekkomsuplaka);

   // }
     //sehirarama(ilk5,eklenecekisim,varmisayac);
    //sehirplakaarama(ilk5,eklenecekplaka,varmisayac);
   // if(varmisayac>0){
     //   printf("calisitor");
    //}
   // printf(head->sehirismi);
   // varmisayac=0;
    break;
case 2:
    printf("");
    struct sehir1 *ilk6=degistir(head);
    printf("silmek istediginiz sehrin ismini yaziniz:\n");
    scanf("%s",silineceksehir);
    sehirsilme(silineceksehir,ilk6);
  break;
case 3:
    printf("");
    yazdir2(head);
break;
case 4:
    printf("");
    printf("Komsu sayi araligini giriniz:\nEn az=");
    scanf("%d",&n);
    printf("\nEn fazla=");
    scanf("%d",&n2);
    yazdir3(head,n-1,n2+1);
break;
case 5:
     varmisayac=0;
   // printf("%d",varmisayac);
    struct sehir1 *ilk2=degistir(head);
printf("aramak istediginiz sehri giriniz:\n");
    scanf("%s",&aranansehir);
   varmisayac=sehirarama(ilk2,aranansehir,varmisayac);
    //printf("%d",varmisayac);
   if(varmisayac==1){
    printf("sehir listede mevcuttur");
   }
   else{
    printf("sehir listede mevcut degildir.eklemek isterseniz 1e basin\n");
   }
   // printf("sehir arandi");

    break;
case 6:
    printf("");
     struct sehir1 *ilk4=degistir(head);
     printf("aramak istediginiz sehrin plakasini giriniz:\n");
    scanf("%d",&aranansehirplakasi);
   varmisayac=sehirplakaarama(ilk4,aranansehirplakasi,varmisayac);
   if(varmisayac==2){
    printf("sehir listede mevcuttur");
   }
   else{
    printf("sehir listede mevcut degildir.eklemek isterseniz 1e basin\n");
   }
break;
case 7:
    printf("");
     struct sehir1 *ilk3=degistir(head);
     printf("bolgeyi giriniz:\n");
     scanf("%s",&arananbolge);
     aynibolge(ilk3,arananbolge);
     break;
case 8:
    printf("");
   FILE *output;
    printf("");
   output=fopen("cikti.txt","w");
   printf("\n");
    struct sehir1 *ilk7=degistir(head);
    siraliyazdir(ilk7,output);
    fclose(output);
   break;
case 9:
    printf("");
    struct sehir1 *ilk10=degistir(head);

    printf("komsu eklemek istediginiz sehri giriniz:\n");
   scanf("%s",&komsueklesehir);
   // struct sehir1 *ilk10=degistir2(head,komsueklesehir);
    //printf(ilk10->sehirismi);
    printf("eklemek istediginiz komsunun plakasini giriniz:\n");
    scanf("%d",&eklenecekkomsuplaka);
    komsuolustur2(&ilk10,eklenecekkomsuplaka,komsueklesehir);
    break;
case 10:
    printf("");
    char komsususilinecek[15];
    int silinecekplaka;
    struct sehir1 *ilk12=degistir(head);
     //  printf(ilk12->next->sehirismi);
      printf("komsusunu silmek istediginiz sehri giriniz:\n");
      scanf("%s",komsususilinecek);
     struct sehir1 *ilk13=degistir3(ilk12,komsususilinecek);
     // printf(ilk13->next->sehirismi);
     sehir2 *f=ilk13->komsu;
      printf("silmek istediginiz komsunun plakasini giriniz:\n");
      scanf("%d",&silinecekplaka);
      komsusil(silinecekplaka,f);
    ilk13->komsusayisi--;
break;
case 11:
    return 0;
    }


}

    return 0;
}
