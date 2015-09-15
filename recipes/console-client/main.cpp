#include <recipes/common/log.h>
#include <recipes/console-client/consoleclient.h>
#include <recipes/console-client/logCategory.h>

#include <QCoreApplication>

Q_LOGGING_CATEGORY(CONSOLE_CLIENT, "recipe.consoleClient")

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	a.setApplicationName("Receipts console client");
	qInstallMessageHandler(RecipeLog::consoleMessageHandler);

	ConsoleClient cc(0);
	qCDebug(CONSOLE_CLIENT) << "Started" << QCoreApplication::applicationName();
	cc.start();

	return 0;//a.exec();
}
