package reverse_integer;

public class solution {

	public int reverse(int x)
	{
		int y=0;
		int z=0;
		while(x!=0)
		{
			z=y*10+x%10;
			if((z-x%10)/10!=y)   //if overflow,the z will not equals to y
				return 0;
			else
			{
				y=z;
			}
			x=x/10;
		}
		System.out.println(y);
			return y;
	}
}
