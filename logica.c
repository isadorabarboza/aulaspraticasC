#include <stdio.h>
struct aluno {
    float nota1;
    float nota2;
    float nota3;
    float media;
};

float mediaaluno(float n1, float n2, float n3){
float media;
media = (n1+n2+n3)/3;
return media;
}

int main (){
struct aluno aluno1, aluno2, aluno3;
aluno1.nota1 = 10;
aluno1.nota2 = 4;
aluno1.nota3 = 6;
aluno1.media = mediaaluno( aluno1.nota1, aluno1.nota2, aluno1.nota3);

aluno2.nota1 = 10;
aluno2.nota2 = 4;
aluno2.nota3 = 6;
aluno2.media = mediaaluno( aluno2.nota1, aluno2.nota2, aluno2.nota3);

aluno3.nota1 = 10;
aluno3.nota2 = 4;
aluno3.nota3 = 6;
aluno3.media = mediaaluno( aluno3.nota1, aluno3.nota2, aluno3.nota3);

printf("..........................................\n");
printf(" Insira a primeira nota do primeiro aluno:\n");
printf(" Insira a segunda nota do primeiro aluno:\n");
printf(" Insira a terceira nota do primeiro aluno:\n");
printf("nota 1: %f\n", aluno1.nota1);
printf("nota 2: %f\n", aluno1.nota1);
printf("nota 3: %f\n", aluno1.nota1);
printf("media: %f\n", aluno1.nota1);
printf("situação:%s\n", aluno1.media>=7.0?"aprovado!": "reprovado");
printf("..........................................\n");

printf("..........................................\n");
printf(" Insira a primeira nota do segundo aluno:\n");
printf(" Insira a segunda nota do segundoaluno:\n");
printf(" Insira a terceira nota do segundo aluno:\n");
printf("nota 1: %f\n", aluno2.nota1);
printf("nota 2: %f\n", aluno2.nota1);
printf("nota 3: %f\n", aluno2.nota1);
printf("media: %f\n",  aluno2.nota1);
printf("situação:%s\n", aluno2.media>=7.0?"aprovado!": "reprovado");
printf("..........................................\n");

printf("..........................................\n");
printf(" Insira a primeira nota do terceiro aluno:\n");
printf(" Insira a segunda nota do terceiro aluno:\n");
printf(" Insira a terceira nota do terceiro aluno:\n");
printf("nota 1: %f\n", aluno3.nota1);
printf("nota 2: %f\n", aluno3.nota1);
printf("nota 3: %f\n", aluno3.nota1);
printf("media: %f\n", aluno3.nota1);
printf("situação:%s\n",aluno3.media>=7.0?"aprovado!": "reprovado");
printf("..........................................\n");

}