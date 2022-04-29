#include<stdio.h>
#include<math.h> 

float f (float n){
    return pow(n, 2) -5;
}

main()
{
    float p1, p2, pm, valor1, valor2, valor_pm, erro=0.0001;
    int count=0, iteracao=0;

    p1 = 2;
    p2 = 3;

    valor1 = f(p1);
    valor2 = f(p2);

    while(p2 - p1 > erro){

        if(valor1*valor2<0){
            pm = (p1+p2)/2;
            valor_pm = f(pm);
            iteracao ++;
            printf("\n%f %f %d\n", pm, valor_pm, iteracao);
        }

        else{
            printf("O intervalo nao satisfaz o teorema.\n");
            break;
        }

        if(valor_pm == 0)
            break;

        if(valor1*valor_pm<0){
            valor2 = valor_pm;
            p2 = pm;
        }

        if(valor2*valor_pm<0){
            valor1 = valor_pm;
            p1 = pm;
        }
        
    }
    printf("\nPonto medio: %f\nf(pm): %f\nIteracoes: %d", pm, valor_pm, iteracao);
    
    return 0;
}
