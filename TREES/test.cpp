for(int i=0;i<4;i++)
{
	if(a[i]<0)
	{
		return i;
	}
	else if(a[i]==0)
	{
		return 0;
	}
	else
	{
		sort(a,4);
		return 1;
	}

}
