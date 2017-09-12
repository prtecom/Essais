// Programme C de test 
// Imprimer nfois le même caractère 
// ft_nputchar 
// ft_putchar
//
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void) 
{
	int c, d, u;

	c = 0;
	d = 1;
	u = 2;
	
	while(c <= 7) 
	{
		while(d <= 8) 
		{
			while(u <= 9) 
			{
	            if(c != d && d != u) 
                {
				    ft_putchar('0'+ c);
				    ft_putchar('0'+ d);
				    ft_putchar('0'+ u);
		            if (c != 7 && d != 8 && u != 9) 
                    {   
				        write(1, ", ", 2);
		    	    }
                    else 
                    {
                        write(1, "\n", 1);
                    }
               } 
			u++;
			}
        u = 0;
		d++; 
		}
//	ft_putchar('\n');
	 d = 0;
     c++;
	} 
//	return(0);
}

void my_aff_comb() {
  char n1, n2, n3;
  n1 = '0';
  n2 = '1';
  n3 = '2';
 
  while(n1 <= '7') {
    while(n2 <= '8') {
      while(n3 <= '9') {
        if(n1 <= n2 && n2 <= n3) {
	        if(n1 != n2 && n2 != n3) {
    		    write(1, &n1, 1);
		        write(1, &n2, 1);
		        write(1, &n3, 1);
		        if (n1 == '7' && n2 == '8' && n3 == '9') 
		        {
//			    	write(0, ", ", 2);
		    	}
		    	else {
				write(1, ", ", 2);
		    	}
	    	}
    	}
        n3 = n3 + 1;
//        write(1, "\n", 1);
      }
      n3 = '0';
      n2 = n2 + 1;
//    write(1, "\n", 1);
    }
    n2 = '0';
    n1 = n1 + 1;
  }
//write(0, "\n", 1);
}

int	main()
{
	ft_print_comb();
//	my_aff_comb();
	ft_putchar('\n');
	return(0);
}
