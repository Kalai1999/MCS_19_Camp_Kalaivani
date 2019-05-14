int main()
{
  int n, f = 1, f1 = 2, num, i;
	printf("\t\tFibonacci series\t\t\n"); 
  printf("Enter the number of terms below 34\n");
  scanf("%d", &n);
 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (i = 1; i < n; i++)
  {
    if (i <= 2)
      num = i;
    else
    {
      num = f + f1;
      f = f1;
      f1 = num;
    }
    printf("%d\n", num);
  }
 
  return 0;
}
