    #include<stdio.h>
    #include<conio.h>
    #include<windows.h>
    main()
    {
        int m=0, s=0, h=0;
        while(1)
        {
            if(s<=60)
            {
                s=0;
                m++;
                if(m<=60)
                {
                    m=0;
                    h++;
                }
            }
            system("cls");
            printf("%d:%d:%d",s,m,h);
            s++;
            }
            getch();
        }
