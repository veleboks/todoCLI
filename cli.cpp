#include "cli.h"


void CLI::run()
{
    Service * s = new Service();
    string cmd = "getAll";
    while(1) {
        if (cmd == "q") break;
        else if (cmd == "add") {
            cout << "Write text for task >> ";
            cin.ignore();
            getline(cin, cmd);
            s->add(cmd);
            cout << "Done!" << endl;
        } else if (cmd == "getAll") {
            list<Task> received = s->getAll();
            for (auto it : received) {
                cout << it.getID() << " " << it.getTask() << endl;
            }
        } else if (cmd == "get") {
            int id;
            cout << "Write id >> ";
            cin >> id;
            cout << s->getByID(id).getTask() << endl;
        } else if (cmd == "delete") {
            int id;
            cout << "Write id >> ";
            cin >> id;
            s->deleteByID(id);
            cout << "Done!" << endl;
        } else {
            cout << "I do not know this command!" << endl;
        }
        cin >> cmd;
    }
}
