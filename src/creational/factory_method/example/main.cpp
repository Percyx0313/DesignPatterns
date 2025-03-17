#include <iostream>
#include "factory_method.h"
using namespace std;

void clientCode(Dialog *dialog) {
    dialog->render();
}

int main(){
    cout << "[Factor Method]\n";
    cout << "Windows Dialog:\n";
    Dialog *dialog = new WindowsDialog();
    clientCode(dialog);
    delete dialog;

    cout << "Web Dialog:\n";
    dialog = new WebDialog();
    clientCode(dialog);
    delete dialog;
    return 0;
}