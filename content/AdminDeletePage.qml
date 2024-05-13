

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Studio.Components 1.0

Item {
    width: 1920
    height: 1080

    Image {
        id: mainTemplate
        source: "file:///d:/Programming/Projects/GuideMe/content/images/Main Template.png"
        fillMode: Image.PreserveAspectFit
    }

    Text {
        id: pages
        x: 293
        y: 29
        color: "#a0aec0"
        text: qsTr("Pages")
        font.pixelSize: 12
        font.weight: Font.Normal
        font.family: "Plus Jakarta Sans"
    }

    Text {
        id: slash
        x: 333
        y: 29
        color: "#f0f1fa"
        text: qsTr("/")
        font.pixelSize: 12
        font.weight: Font.Normal
        font.family: "Plus Jakarta Sans"
    }

    Text {
        id: pageName
        x: 342
        y: 29
        color: "#f0f1fa"
        text: qsTr("Delete an Existing Graph")
        font.pixelSize: 12
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
    }

    Text {
        id: pageName2
        x: 293
        y: 48
        color: "#f0f1fa"
        text: qsTr("Delete an Existing Graph")
        font.pixelSize: 14
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
    }

    Text {
        id: admin
        x: 1864
        y: 29
        color: "#f0f1fa"
        text: qsTr("Admin")
        font.pixelSize: 12
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
    }

    Image {
        id: headerProfileIcon
        x: 1841
        y: 29
        source: "file:///d:/Programming/Projects/GuideMe/content/images/Header/Profile.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: deletePanel
        x: 293
        y: 87
        source: "file:///d:/Programming/Projects/GuideMe/content/images/11- Admin Delete Page/DeletePanel.png"
        fillMode: Image.PreserveAspectFit
    }

    TextInput {
        id: startingCity
        x: 368
        y: 174
        width: 638
        height: 20
        opacity: 0.6
        color: "#f0f1fa"
        text: qsTr("")
        font.pixelSize: 14
        verticalAlignment: Text.AlignTop
        wrapMode: Text.NoWrap
        selectionColor: "#7681d2"
        selectedTextColor: "#f0f1fa"
        selectByMouse: true
        overwriteMode: true
        maximumLength: 70
        font.wordSpacing: 0
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
        cursorVisible: false
    }

    TextInput {
        id: destinationCity
        x: 1181
        y: 174
        width: 638
        height: 20
        opacity: 0.6
        color: "#f0f1fa"
        text: qsTr("")
        font.pixelSize: 14
        verticalAlignment: Text.AlignTop
        wrapMode: Text.NoWrap
        selectionColor: "#7681d2"
        selectedTextColor: "#f0f1fa"
        selectByMouse: true
        overwriteMode: true
        maximumLength: 70
        font.wordSpacing: 0
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
        cursorVisible: false
    }

    TextInput {
        id: budget
        x: 368
        y: 319
        width: 638
        height: 20
        opacity: 0.6
        color: "#f0f1fa"
        text: qsTr("")
        font.pixelSize: 14
        verticalAlignment: Text.AlignTop
        wrapMode: Text.NoWrap
        selectionColor: "#7681d2"
        selectedTextColor: "#f0f1fa"
        selectByMouse: true
        overwriteMode: true
        maximumLength: 70
        font.wordSpacing: 0
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
        cursorVisible: false
    }

    TextInput {
        id: ride
        x: 1181
        y: 319
        width: 638
        height: 20
        opacity: 0.6
        color: "#f0f1fa"
        text: qsTr("")
        font.pixelSize: 14
        verticalAlignment: Text.AlignTop
        wrapMode: Text.NoWrap
        selectionColor: "#7681d2"
        selectedTextColor: "#f0f1fa"
        selectByMouse: true
        overwriteMode: true
        maximumLength: 70
        font.wordSpacing: 0
        font.weight: Font.Medium
        font.family: "Plus Jakarta Sans"
        cursorVisible: false
    }

    Button {
        id: deleteGraph
        x: 293
        y: 392
        width: 1607
        height: 110
        text: qsTr("DELETE")
        highlighted: true
        font.weight: Font.Bold
        font.pointSize: 12
        font.family: "Plus Jakarta Sans"
        display: AbstractButton.TextOnly
        background: Rectangle {
            opacity: 0.7
            color: deleteGraph.down ? "#1A1F37" : "#0F122E"
            radius: 20
            border.width: 0
        }
    }

    GroupItem {
        id: sidebar
        x: 39
        y: 142
        Rectangle {
            id: selectionRectangle
            x: 0
            y: 156
            width: 216
            height: 50
            color: "#1a1f37"
            radius: 15
            border.width: 0
        }

        Button {
            id: homePage
            x: 8
            y: 0
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: homePageIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: homePageIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/Admin Sidebar/Home.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: homePageText
                color: "#f0f1fa"
                text: qsTr("Home Page")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: update
            x: 8
            y: 50
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: updateIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: updateIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/Admin Sidebar/Update.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: updateText
                color: "#f0f1fa"
                text: qsTr("Update")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: add
            x: 8
            y: 100
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: addIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: addIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/Admin Sidebar/Add.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: addText
                color: "#f0f1fa"
                text: qsTr("Add")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: deleteb
            x: 8
            y: 160
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: deleteIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#7681d2"
                radius: 10
                border.width: 0
                Image {
                    id: deleteIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/Admin Sidebar/Delete Activated.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: deleteText
                color: "#f0f1fa"
                text: qsTr("Delete")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Text {
            id: accountPages
            x: 10
            y: 237
            width: 120.35
            color: "#f0f1fa"
            text: qsTr("ACCOUNT PAGES")
            font.pixelSize: 14
            font.weight: Font.Bold
            font.family: "Plus Jakarta Sans"
        }

        Button {
            id: logIn
            x: 8
            y: 271
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: logInIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: logInIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/Admin Sidebar/Log In.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.verticalCenterOffset: 1
                    anchors.horizontalCenterOffset: 0
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: logInText
                color: "#f0f1fa"
                text: qsTr("Log In")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: signUp
            x: 8
            y: 321
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: signUpIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: signUpIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/Admin Sidebar/Sign Up.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.verticalCenterOffset: 1
                    anchors.horizontalCenterOffset: 0
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: signUpText
                color: "#f0f1fa"
                text: qsTr("Sign Up")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }
    }
}

/*##^##
Designer {
    D{i:0}D{i:16;invisible:true}
}
##^##*/

