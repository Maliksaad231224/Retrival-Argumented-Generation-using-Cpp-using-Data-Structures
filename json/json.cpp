// json.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<json\json.h>
#include <fstream>
int main()
{
    Json::Value jsonData;

    jsonData["name"] = "John Doe";
    jsonData["age"] = 30;
    jsonData[" occupation"] = "Software Developer";

    // Create a JSON root object
    Json::Value jsonRoot;
    jsonRoot["person"] = jsonData;

    // Convert the JSON object to a string
    Json::FastWriter writer;
    std::string jsonString = writer.write(jsonRoot);

    // Write the JSON string to a file
    std::ofstream jsonFile("data.json");
    jsonFile << jsonString;
    jsonFile.close();
}
