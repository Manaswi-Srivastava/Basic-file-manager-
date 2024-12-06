
#include <iostream>
#include <string>

class Project {
public:
    std::string name;
    std::string description;

    Project(std::string name, std::string description) {
        this->name = name;
        this->description = description;
    }
};

class Portfolio {
public:
    std::string name;
    std::string bio;
    Project projects[10];
    int projectCount;

    Portfolio(std::string name, std::string bio) {
        this->name = name;
        this->bio = bio;
        projectCount = 0;
    }

    void addProject(Project project) {
        projects[projectCount] = project;
        projectCount++;
    }

    void displayPortfolio() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Bio: " << bio << std::endl;
        std::cout << "Projects:" << std::endl;
        for (int i = 0; i < projectCount; i++) {
            std::cout << "Project " << i + 1 << ":" << std::endl;
            std::cout << "Name: " << projects[i].name << std::endl;
            std::cout << "Description: " << projects[i].description << std::endl;
            std::cout << std::endl;
        }
    }
};

int main() {
    Portfolio portfolio("John Doe", "Software Developer");

    Project project1("Project 1", "This is project 1");
    Project project2("Project 2", "This is project 2");

    portfolio.addProject(project1);
    portfolio.addProject(project2);

    portfolio.displayPortfolio();

    return 0;
}
