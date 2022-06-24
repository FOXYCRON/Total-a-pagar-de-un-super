    /* Programa que obtiene el total a pagar en un super */
     #include<stdio.h>
     #include<conio.h>

     char art[25];
     int uni;
     float pre, tp;
     main()
     {
         printf(" Super Mercado \n \n");
         printf(" Art%cculo: ", 161); gets(art);
         printf("\n Unidades: "); scanf("%d", &uni);
         printf("\n Precio: "); scanf("%f", &pre);

         tp=uni*pre;

         /* Desplegar Datos */
         printf("\n \n Art%cculo: %s", 161, art);
         printf("\n Unidades: %d", uni);
         printf("\n Precio: %.2f", pre);
         printf("\n Total a pagar: %.2f", tp);


         getch();


     }