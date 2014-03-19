main(i)
{
  for(i=0;;i++)
  {
    putchar(((i^(i>>64|i>>11)&70&i>>8))*(i&i>>12|i>>4));
  }
}
