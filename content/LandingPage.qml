import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick 6.2
import QtQuick.Controls 6.2
import GuideMe
import QtQuick.Layouts
import QtQuick.Studio.Components

Rectangle {
    id: startingPages
    width: Constants.width
    height: Constants.height
    color: Constants.backgroundColor
    state: "LandingPage"


    Rectangle {
        id: bg
        x: 0
        y: 0
        width: 1920
        height: 1080
        color: "#1a1f37"
    }

    GroupItem {
        id: landingPageGroup
        x: 0
        y: 0

        Image {
            id: homePage
            x: 0
            y: 0
            source: "file:///d:/Programming/Projects/GuideMe/content/images/1- Home Page/Home Page.png"
            fillMode: Image.PreserveAspectFit
        }

        Button {
            id: getStarted
            x: 685
            y: 559
            width: 550
            height: 67
            text: qsTr("GET STARTED")
            highlighted: true
            display: AbstractButton.TextOnly
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            background: Rectangle {
                color: getStarted.down ? "#1A1F37" : "#0F122E"
                radius: 20
                border.width: 0
                opacity: 0.7
            }
            Connections {
                target: getStarted
                onClicked: startingPages.state = "SignUp"
            }
        }
    }

    GroupItem {
        id: signUpGroup
        x: 0
        y: 0

        Image {
            id: signUpPage
            x: 0
            y: 0
            source: "file:///d:/Programming/Projects/GuideMe/content/images/2- Sign Up Page/Sign Up Page.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: signUpPanel
            x: 1208
            y: 297
            source: "file:///d:/Programming/Projects/GuideMe/content/images/2- Sign Up Page/SignUpPanel.png"
            focus: false
            enabled: true
            smooth: true
            antialiasing: true
            fillMode: Image.PreserveAspectFit
        }

        Text {
            id: welcome
            x: 1365
            y: 241
            color: "#f0f1fa"
            text: qsTr("Welcome!")
            font.pixelSize: 30
            font.weight: Font.Bold
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: name
            x: 1270
            y: 346
            color: "#f0f1fa"
            text: qsTr("Name")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: nameInputPanel
            x: 1263
            y: 366
            source: "file:///d:/Programming/Projects/GuideMe/content/images/2- Sign Up Page/SignUpField1.png"
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: nameInput
            x: 1263
            y: 367
            width: 355
            height: 55
            color: "#a0aec0"
            text: ""
            font.pixelSize: 14
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            wrapMode: Text.Wrap
            maximumLength: 38
            echoMode: TextInput.Normal
            inputMask: ""
            selectedTextColor: "#0f122e"
            selectionColor: "#f0f1fa"
            selectByMouse: true
            overwriteMode: true
            leftPadding: 23
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: email
            x: 1270
            y: 441
            color: "#f0f1fa"
            text: qsTr("Email")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: emailInputPanel
            x: 1263
            y: 461
            opacity: 1
            source: "file:///d:/Programming/Projects/GuideMe/content/images/2- Sign Up Page/SignUpField2.png"
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: emailInput
            x: 1263
            y: 462
            width: 355
            height: 55
            color: "#a0aec0"
            text: ""
            font.pixelSize: 14
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            wrapMode: Text.Wrap
            maximumLength: 38
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
            y: 536
            color: "#f0f1fa"
            text: qsTr("Password")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: passwordInputPanel
            x: 1263
            y: 556
            opacity: 1
            source: "file:///d:/Programming/Projects/GuideMe/content/images/2- Sign Up Page/SignUpField3.png"
            enabled: true
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: passwordInput
            x: 1263
            y: 556
            width: 355
            height: 55
            color: "#a0aec0"
            text: ""
            font.pixelSize: 14
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            wrapMode: Text.Wrap
            selectionColor: "#f0f1fa"
            selectedTextColor: "#0f122e"
            selectByMouse: true
            overwriteMode: true
            maximumLength: 23
            leftPadding: 23
            inputMask: ""
            font.family: "Plus Jakarta Sans"
            echoMode: TextInput.Password
        }

        Button {
            id: signUp
            x: 1263
            y: 641
            width: 355
            height: 70
            text: qsTr("SIGN UP")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 8
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            background: Rectangle {
                opacity: 0.7
                color: signUp.down ? "#1A1F37" : "#0F122E"
                radius: 20
                border.width: 0
            }
        }

        Text {
            id: alreadyHaveAnAccount
            x: 1335
            y: 736
            color: "#a0aec0"
            text: qsTr("Already have an account?")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: logIn
            x: 1505
            y: 736
            color: "#f0f1fa"
            text: qsTr("Log in")
            font.pixelSize: 14
            font.weight: Font.DemiBold
            font.family: "Plus Jakarta Sans"
        }

        Button {
            id: button
            x: 1503
            y: 737
            width: 45
            height: 20
            opacity: 0
            text: qsTr("")
            flat: false

            Connections {
                target: button
                onClicked: startingPages.state = "LogIn"
            }
        }

    }

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
            smooth: true
            focus: false
            fillMode: Image.PreserveAspectFit
            enabled: true
            antialiasing: true
        }

        Text {
            id: welcome1
            x: 1324
            y: 265
            color: "#f0f1fa"
            text: qsTr("Nice to see you!")
            font.pixelSize: 30
            font.weight: Font.Bold
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: email1
            x: 1270
            y: 384
            color: "#f0f1fa"
            text: qsTr("Email")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: emailInputPanel1
            x: 1263
            y: 404
            opacity: 1
            source: "file:///d:/Programming/Projects/GuideMe/content/images/3- Log In Page/LogInField1.png"
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: emailInput1
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
            selectionColor: "#f0f1fa"
            selectedTextColor: "#0f122e"
            selectByMouse: true
            overwriteMode: true
            maximumLength: 38
            leftPadding: 23
            inputMask: ""
            font.family: "Plus Jakarta Sans"
            echoMode: TextInput.Normal
            cursorVisible: false
        }

        Text {
            id: password1
            x: 1270
            y: 479
            color: "#f0f1fa"
            text: qsTr("Password")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: passwordInputPanel1
            x: 1263
            y: 499
            opacity: 1
            source: "file:///d:/Programming/Projects/GuideMe/content/images/3- Log In Page/LogInField2.png"
            fillMode: Image.PreserveAspectFit
            enabled: true
        }

        TextInput {
            id: passwordInput1
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
            selectionColor: "#f0f1fa"
            selectedTextColor: "#0f122e"
            selectByMouse: true
            overwriteMode: true
            maximumLength: 27
            leftPadding: 23
            inputMask: ""
            font.family: "Plus Jakarta Sans"
            echoMode: TextInput.Password
            cursorVisible: false
        }

        Button {
            id: logIn1
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
                color: logIn1.down ? "#1A1F37" : "#0F122E"
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
            id: signUp1
            x: 1493
            y: 679
            color: "#f0f1fa"
            text: qsTr("Sign Up")
            font.pixelSize: 14
            font.weight: Font.DemiBold
            font.family: "Plus Jakarta Sans"
        }

        Button {
            id: button1
            x: 1492
            y: 681
            width: 55
            height: 17
            opacity: 0
            text: qsTr("")
            flat: false

            Connections {
                target: button1
                onClicked: startingPages.state = "SignUp"
            }
        }
    }




    states: [
        State {
            name: "LandingPage"

            PropertyChanges {
                target: signUpGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: logInGroup
                opacity: 0
                enabled: false
            }
        },

        State {
            name: "SignUp"

            PropertyChanges {
                target: logInGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: landingPageGroup
                opacity: 0
                enabled: false
            }
        },
        State {
            name: "LogIn"

            PropertyChanges {
                target: signUpGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: landingPageGroup
                opacity: 0
                enabled: false
            }
        }    ]
    transitions: [
        Transition {
            id: signUpToFromLogIn
            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: signUpGroup
                        property: "opacity"
                        duration: 200
                    }
                }
            }

            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 50
                    }

                    PropertyAnimation {
                        target: logInGroup
                        property: "opacity"
                        duration: 200
                    }
                }
            }
            to: "SignUp,LogIn"
            from: "SignUp,LogIn"
        },
        Transition {
                id: landingPageToSignUp
                ParallelAnimation {
                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: signUpGroup
                            property: "opacity"
                            duration: 200
                        }
                    }
                }
                to: "LandingPage,SignUp"
                from: "LandingPage,SignUp"
        }
    ]

}
