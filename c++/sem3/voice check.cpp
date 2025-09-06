// Name: Soumya kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <sapi.h>
using namespace std;




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

int main() {
    speak("Hello, how can I help you?");
    return 0;
}