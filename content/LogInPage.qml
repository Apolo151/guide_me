
/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-UI-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Shapes 1.7
import QtQuick.Studio.Components 1.0

Item {
    width: 1920
    height: 1080

    GroupItem {
        id: logInGroup
        x: 0
        y: 0

        Image {
            id: logInPage
            x: 0
            y: 0
            source: "file:///d:/Programming/Projects/GuideMe/content/images/3- Log In Page/Log In Page.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: logInPanel
            x: 1208
            y: 321
            source: "file:///d:/Programming/Projects/GuideMe/content/images/3- Log In Page/LogInPanel.png"
            focus: false
            enabled: true
            smooth: true
            antialiasing: true
            fillMode: Image.PreserveAspectFit
        }

        Text {
            id: welcome
            x: 1324
            y: 265
            color: "#f0f1fa"
            text: qsTr("Nice to see you!")
            font.pixelSize: 30
            font.weight: Font.Bold
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: email
            x: 1270
            y: 384
            color: "#f0f1fa"
            text: qsTr("Email")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: emailInputPanel
            x: 1263
            y: 404
            opacity: 1
            source: "file:///d:/Programming/Projects/GuideMe/content/images/3- Log In Page/LogInField1.png"
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: emailInput
            x: 1263
            y: 405
            width: 355
            height: 55
            color: "#a0aec0"
            text: ""
            font.pixelSize: 14
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            wrapMode: Text.Wrap
            maximumLength: 38
            cursorVisible: false
            selectionColor: "#f0f1fa"
            selectedTextColor: "#0f122e"
            selectByMouse: true
            overwriteMode: true
            leftPadding: 23
            inputMask: ""
            font.family: "Plus Jakarta Sans"
            echoMode: TextInput.Normal
        }

        Text {
            id: password
            x: 1270
            y: 479
            color: "#f0f1fa"
            text: qsTr("Password")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: passwordInputPanel
            x: 1263
            y: 499
            opacity: 1
            source: "file:///d:/Programming/Projects/GuideMe/content/images/3- Log In Page/LogInField2.png"
            enabled: true
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: passwordInput
            x: 1263
            y: 500
            width: 355
            height: 55
            color: "#a0aec0"
            text: ""
            font.pixelSize: 12
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            wrapMode: Text.Wrap
            maximumLength: 27
            cursorVisible: false
            selectionColor: "#f0f1fa"
            selectedTextColor: "#0f122e"
            selectByMouse: true
            overwriteMode: true
            leftPadding: 23
            inputMask: ""
            font.family: "Plus Jakarta Sans"
            echoMode: TextInput.Password
        }

        Button {
            id: logIn
            x: 1263
            y: 580
            width: 355
            height: 70
            text: qsTr("LOG IN")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 8
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            background: Rectangle {
                opacity: 0.7
                color: logIn.down ? "#1A1F37" : "#0F122E"
                radius: 20
                border.width: 0
            }
        }

        Text {
            id: dontHaveAnAccount
            x: 1335
            y: 679
            color: "#a0aec0"
            text: qsTr("Don't have an account?")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: signUp
            x: 1493
            y: 679
            color: "#f0f1fa"
            text: qsTr("Sign Up")
            font.pixelSize: 14
            font.weight: Font.DemiBold
            font.family: "Plus Jakarta Sans"
        }

        Button {
            id: button
            x: 0
            y: 6
            width: 41
            height: 9
            opacity: 0
            text: qsTr("")
            flat: false
        }
    }
}
