#include "tests.h"

int	main(void)
{
	int		ret;

	ret = 0;
	ret = strlen_launcher();
	ret += isupper_launcher();
	ret += tolower_launcher();
	ret += memset_launcher();
	ret += atoi_launcher();
	ret += strchr_launcher();
	ret += 	strdup_launcher();
	ret += 	strstr_launcher();
	if (ret == 0)
		return (0);
	else
		return (-1);
}
