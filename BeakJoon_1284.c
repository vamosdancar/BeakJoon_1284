#include <stdio.h>

int main(void)
{
	int i = 0;
	int arr[1000] = { 0 };

	while (1)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
			break;

		i++;
	}

	for (int j = 0; j < i; j++)
	{
		int k = arr[j];

		int namo = 0;
		int mok = 0;
		int ct = 0;
		int num = 0;

		while (k > 0)
		{
			ct = ct + 1;
			mok = k / 10;
			namo = k % 10;

			k = mok;

			if (namo == 1)
			{
				num = num + 2;
			}

			else if (namo == 0)
			{
				num = num + 4;
			}

			else
				num = num + 3;
		}

		int tot = ct - 1 + num + 2;

		printf("%d\n", tot);
	}

	return 0;
}
