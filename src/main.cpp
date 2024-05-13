// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "app_environment.h"
#include "import_qml_components_plugins.h"
#include "import_qml_plugins.h"

#include <iostream>

#include "account.h"
#include "data_manager.h"
#include "map.h"
#include "all_paths.h"

// Set Global Variables
string DATA_PATH = "D:\\University\\2nd Year\\DS\\Project\\GuideMe\\content\\data.txt";
string ADMIN_NAME = "admin";
string ADMIN_PASSWORD = "adminAdmin";
using namespace std;

// initialize static Map members
unordered_map<string, unordered_map<string, Route>> Map::adjList;
// list<Route> Map::routes;

int main(int argc, char *argv[])
{
    // setup entities
    DataManager dataManager = DataManager();
    dataManager.readData(DATA_PATH);
    Account account;

    set_qt_environment();

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/qt/qml/Main/main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.addImportPath(QCoreApplication::applicationDirPath() + "/qml");
    engine.addImportPath(":/");

    engine.load(url);

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
