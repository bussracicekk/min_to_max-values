#include "postgres.h"
#include "fmgr.h"

PG_MODULE_MAGIC;
PG_FUNCTION_INFO_V1(min_to_max);

Datum
min_to_max(PG_FUNCTION_ARGS)
{
	int  *array1 = PG_GETARG_ARRAYTYPE_P(0);
	int i;
	int min = array1[0];
	int max = array1[0];
	int length  = sizeof(array1)/sizeof(int);

	for(i = 0; i<=length; i++)
	{
		if(array1[i] < min)
		{
			min = array1[i];
		}
		if(array1[i] > max)
		{
			max = array1[i];
		}
	}
    PG_RETURN_TEXT( min+"->"+max);
}
