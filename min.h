int min(int* t)
{
	int i;
	int min = t[0];
	for(i = 1; i < 10; i++)
		if(t[i] < min) min = t[i];
		
	return min;
}