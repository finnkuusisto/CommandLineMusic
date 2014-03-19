main(i)
{
  for(i=0;;i++)
  {
    putchar(((i*(i>>3|i>>11)&43&i>>8))^(i&i>>12|i>>4));
  }
}
