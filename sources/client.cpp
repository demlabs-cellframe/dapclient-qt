#include <QCoreApplication>
#include "DapSession.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DapSession* session = DapSession::getInstance();
    session->setSaUri("localhost:56001");
    session->encryptInit();

    return a.exec();
}
