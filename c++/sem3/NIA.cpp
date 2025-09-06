// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <windows.h>
#include <sapi.h> // For Speech API
#include <string>
#include <stdlib.h>
#include <thread>
#include <chrono>

// Function to speak text using SAPI
void speak(const std::string& text) {
    ISpVoice *pVoice = nullptr;

    if (FAILED(::CoInitialize(nullptr)))
        return;

    HRESULT hr = ::CoCreateInstance(CLSID_SpVoice, nullptr, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
    if (SUCCEEDED(hr)) {
        std::wstring wideText(text.begin(), text.end());
        pVoice->Speak(wideText.c_str(), 0, nullptr);
        pVoice->Release();
        pVoice = nullptr;
    }
    ::CoUninitialize();
}

// Function to open applications
void openApp(const std::string& appName) {
    if (appName == "notepad") {
        system("start notepad.exe");
    } else if (appName == "calculator") {
        system("start calc.exe");
    }
    // Add more applications as needed
}

// Function to handle basic commands
void handleCommands(const std::string& command) {
    if (command.find("open notepad") != std::string::npos) {
        openApp("notepad");
    } else if (command.find("open calculator") != std::string::npos) {
        openApp("calculator");
    } else if (command.find("speak") != std::string::npos) {
        speak("Hello, how can I help you?");
    } else if (command.find("exit") != std::string::npos) {
        speak("Goodbye!");
        exit(0);
    } else {
        speak("Sorry, I didn't understand that command.");
    }
}

int main() {
    speak("Hi, I am your assistant.");

    std::string command;
    while (true) {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        handleCommands(command);
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Small delay to simulate processing
    }

    return 0;
}

