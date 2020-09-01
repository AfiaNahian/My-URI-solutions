#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)==4)
    {
        f=((a*2)+(b*3)+(c*4)+(d*1))/10;
        printf("Media: %.1lf\n",f);
        if(f>=7.0)
        {
            printf("Aluno aprovado.\n");
        }
        if((f>=5.0)&&(f<7.0))
        {
            printf("Aluno em exame.\n");
            scanf("%lf",&e);
            g=(f+e)/2.0;
            if(g>=5.0)
                {
                  printf("Nota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n",e,g);
                }
             if(g<5.0)
                {
                 printf("Nota do exame: %.1lf\nAluno reprovado.\nMedia final: %.1lf\n",e,g);
                }

        }
        if(f<5.0)
        {
            printf("Aluno reprovado.\n");
        }
    }
    return 0;
}
