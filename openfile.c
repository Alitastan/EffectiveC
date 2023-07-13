enum fail {FailMalloc = -3, Failf1, Failf2};

int do_something(void)
{
	
	FILE *file1, *file2;
	object_t* obj;

	int ret_val = 0; // initially assume a succesful return value

	file1 = fopen("a_file", "w");
	if (file1 == NULL)
	{
		ret_val = Failf1;
		goto FAIL_FILE1;
	}

	file2 = fopen("another_file", "w");
	if (file2 == NULL)
	{
		ret_val = Failf2;
		goto FAIL_FILE2;
	}

	obj = malloc(sizeof(object_t));
	if (obj == NULL)
	{
		ret_val = FailMalloc;
		goto FAIL_OBJ;
	}

	// Operate on allocated resources

	// Clean up everything
	free(obj);

FAIL_OBJ: //Otherwise, close only the resource we opened.
	fclose(file2);
	return ret_val;
FAIL_FILE2:
	fclose(file1);
	return ret_val;
FAIL_FILE1:
	return ret_val;

}