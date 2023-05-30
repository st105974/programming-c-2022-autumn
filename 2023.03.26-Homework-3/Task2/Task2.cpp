#include <iostream>
#include <string>
struct Student
{
private:
	int math;
	int phys;
	int inf;
	std::string name;
	std::string surname;
public:
	Student(std::string name = "name", std::string surname = "surname", int math = 1, int phys = 1, int inf = 1) : name(name), surname(surname), math(math), phys(phys), inf(inf) {}

	~Student() {}

	Student(Student& st)
	{
		name = st.name;
		surname = st.surname;
		inf = st.inf;
		phys = st.phys;
		math = st.math;
	}
	float mean()
	{
		return (math + phys + inf) / 3;
	}
	void printInf()
	{
		std::cout << surname << " " << name << std::endl;
	}

};
void bubbleSort(int n, Student*& student)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++i)
		{
			if (student[i].mean() < student[i - 1].mean())
			{
				Student st = student[i];
				student[i] = student[i - 1];
				student[i - 1] = st;
			}
		}
	}
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	Student* student = new Student[n];
	for (int i = 0; i < n; ++i)
	{
		std::string name;
		std::string surname;
		int math;
		int phys;
		int inf;

		std::cin >> name;
		std::cin >> surname;
		std::cin >> math;
		std::cin >> phys;
		std::cin >> inf;
		student[i] = Student(name, surname, math, phys, inf);
	}
	bubbleSort(n, student);
	for (int i = 0; i < n; ++i)
	{
		student[i].printInf();
	}
	return EXIT_SUCCESS;
}
