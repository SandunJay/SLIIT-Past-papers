class Lab
{
private:
	char labID[20];
	int Capacity;

public:
	Lab();
	Lab(const char ID[], int capacity);
	void setDetails(const char ID[], int capacity);
	int getCapacity();
	~Lab();
};