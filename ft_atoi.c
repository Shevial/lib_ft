#include <stdio.h> 

int ft_atoi(const char *str)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13 )
        i++;
    while(str[i] == '+' || str[i] == '-')
	{
        if (str[i] == '-')
            sign = -1;
		i++;
	}
    
    while (str[i] >= '0' && str[i] <= '9') 
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}

/*
int main()
{
    char *str = "42"; 
    
    printf("%d", ft_atoi(str)); 
    return 0; 
}
*/