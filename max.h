int max(int* t)
{
	int i;
	int max = t[0];
	for(i = 1; i < 10; i++)
		if(t[i] > max) max = t[i];
		
	return max;
}