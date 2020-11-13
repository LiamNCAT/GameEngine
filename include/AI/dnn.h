class DNN{
private:
	struct Options{
		int num_concurrent_sessions;
		int num_concurrent_steps;
		int num_iterations;
		bool use_gpu;
	}

	Options* ops;
	
public:
	DNN();
	~DNN();
	void init(int*);
	void load_model(string);
	void save_model(string);
	void fit(double**);
	int* predict(double**);
}