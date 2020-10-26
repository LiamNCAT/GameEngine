#include <include/math.h>
#define MAX_SOURCE_SIZE (0x100000)

double dot(double *a, double *b){
	int size = sizeof(a) / sizeof(double);
	double result = 0.0;
	
	#ifdef __GPU__
	    int ret;
		FILE *fp;
		fp = fopen("dot_prod.cl","r");
		char *source_str;
		size_t source_size;
		
		source_str = (char*)malloc(MAX_SOURCE_SIZE);
		source_size = fread( source_str, 1, MAX_SOURCE_SIZE, fp);
		fclose( fp );
		
		cl_device_id device_id = NULL;   
		cl_uint ret_num_devices;
		cl_uint ret_num_platforms;


		cl_int ret = clGetPlatformIDs(0, NULL, &ret_num_platforms);
		cl_platform_id *platforms = NULL;
		platforms = (cl_platform_id*)malloc(ret_num_platforms*sizeof(cl_platform_id));

		ret = clGetPlatformIDs(ret_num_platforms, platforms, NULL);
		ret = clGetDeviceIDs( platforms[1], CL_DEVICE_TYPE_ALL, 1, &device_id, &ret_num_devices);

		cl_context context = clCreateContext( NULL, 1, &device_id, NULL, NULL, &ret);
		cl_command_queue command_queue = clCreateCommandQueue(context, device_id, 0, &ret);

		
		
	#else
		for(int i = 0; i < size; i++){
			result+= a[i]*b[i];
		}
	
	#endif
	return result;
}

double** matAdd(double** a, double** b){
	int size;
	
	#ifdef __GPU__
	
	#else
		
	#endif
}