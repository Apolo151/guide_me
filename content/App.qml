// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

import QtQuick 6.2
import GuideMe
import QtQuick.Controls 6.2

Window {
    width: 1920
    height: 1080
    id: mainWindow
    visible: true
    title: "Guide Me"

    Loader {
        source: "LandingPage.qml"
    }

    LandingPage {
        id: landingPage
        visible: false
    }

    SignUpPage{
        id: signUpPage
        visible: false
    }

    LogInPage{
        id: logInPage
        visible: false
    }

    ServicePage{
        id: servicePage
        visible: false
    }

    ServiceResultsPage{
        id: serviceResultsPage
        visible: false
    }

    GraphTraversalPage{
        id: graphTraversalPage
        visible: false
    }

    GraphCompletionTestPage{
        id: graphCompletionTestPage
        visible: false
    }

    AdminWelcomePage{
        id: adminWelcomePage
        visible: false
    }

    AdminUpdatePage{
        id: adminUpdatePage
        visible: false
    }

    AdminAddPage{
        id: adminAddPage
        visible: false
    }

    AdminDeletePage{
        id: adminDeletePage
        visible: false
    }

}

