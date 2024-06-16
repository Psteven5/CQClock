c,g,h,i,m,s,x,y,n[]={33080895,5116063,32570911,
32570431,18414625,33061951,33062463,32540804,//
33095231,33094719,131200},a[8]={[2]=10,[5]=10};
asm("f:.incbin \""__FILE__"\",0\n.byte 0");main
(){for(;;){time(&c);struct tm*t=localtime(&c);h
=t->tm_hour;m=t->tm_min;s=t->tm_sec;*a=h/10;a[1
]=h%10;a[3]=m/10;a[4]=m%10;a[6]=s/10;a[7]=s%10;
extern char f[];char*g=f;printf("\033[35m");for
(y=5;y>0;--y){for(i=0;i<8;++i,++g){for(x=5;x>0;
--x,++g)if((n[a[i]]>>((x-1)+5*(y-1)))&1)printf(
"\033[46m%c\033[40m",*g);else printf("%c",*g)//
;if(13^*g)printf("%c",*g);}}printf("\033[34m%s"
,g);printf("\033[0m\033[13A");sleep(1);}}//////
