 #include <stdio.h>
    int main()
    {

        int i, j, a, n,s=0,m=0,v=0;
        scanf("%d", &n);
        int number[n];
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
         // Sorting numbers
        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] < number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

       for(i=0;i<n;i++){
            s+=number[i];
            for(j=i+1;j<n;j++){
                m+=number[j];
            }
            v=m;
            m=0;
            if(s>v) {
                    printf("%d\n",i+1);
                     return 0;
            }
            else continue;
       }

return 0;
       }


