

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

    GroupItem {
        id: graphCompletionTestGroup
        x: 0
        y: 0

        Image {
            id: mainTemplate
            x: 0
            y: 0
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
            text: qsTr("Graph Completion Test")
            font.pixelSize: 12
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: pageName2
            x: 293
            y: 48
            color: "#f0f1fa"
            text: qsTr("Graph Completion Test")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: admin
            x: 1842
            y: 29
            color: "#f0f1fa"
            text: qsTr("Username")
            font.pixelSize: 12
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: headerProfileIcon
            x: 1819
            y: 29
            source: "file:///d:/Programming/Projects/GuideMe/content/images/Header/Profile.png"
            fillMode: Image.PreserveAspectFit
        }

        Button {
            id: startTesting
            x: 293
            y: 82
            width: 1607
            height: 110
            text: qsTr("START TESTING")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            background: Rectangle {
                opacity: 0.7
                color: startTesting.down ? "#1A1F37" : "#0F122E"
                radius: 20
                border.width: 0
            }
        }

        Image {
            id: graphCompletionTestPanel
            x: 293
            y: 207
            source: "file:///d:/Programming/Projects/GuideMe/content/images/7- Graph Completion Test Page/Graph Completion Test Panel.png"
            fillMode: Image.PreserveAspectFit
        }

        Text {
            id: result
            x: 317
            y: 229
            color: "#f0f1fa"
            text: qsTr("Start Testing to See The Results.")
            font.pixelSize: 40
            font.weight: Font.Bold
            font.family: "Plus Jakarta Sans"
        }
    }

    GroupItem {
        id: sidebar2
        x: 39
        y: 142
        Rectangle {
            id: selectionRectangle
            x: 0
            y: 106
            width: 216
            height: 50
            color: "#1a1f37"
            radius: 15
            border.width: 0
        }

        Button {
            id: servicePage
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
                id: serviceIconRectangle
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
                id: serviceText
                color: "#f0f1fa"
                text: qsTr("Service")
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
            id: graphTraversal
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
                id: graphTraversalIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: graphTraversalIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Graph Traversal.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: graphTraversalText
                color: "#f0f1fa"
                text: qsTr("Graph Traversal")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                anchors.verticalCenterOffset: 0
                font.family: "Plus Jakarta Sans"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: graphCompletionTest
            x: 8
            y: 120
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: graphCompletionTestIconRectangle
                x: 1
                y: -4
                width: 31
                height: 30
                color: "#7681d2"
                radius: 10
                border.width: 0
                Image {
                    id: graphCompletionTestIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Graph Completion Test Activated.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: graphCompletionTestText
                width: 126
                height: 36
                color: "#f0f1fa"
                text: qsTr("Graph Completion Test")
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 42
                font.pixelSize: 14
                lineHeight: 0.9
                lineHeightMode: Text.ProportionalHeight
                wrapMode: Text.WordWrap
                anchors.verticalCenterOffset: -9
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
            y: 188
            width: 120.35
            color: "#f0f1fa"
            text: qsTr("ACCOUNT PAGES")
            font.pixelSize: 14
            font.weight: Font.Bold
            font.family: "Plus Jakarta Sans"
        }

        Button {
            id: profile
            x: 8
            y: 221
            width: 119
            height: 42
            text: qsTr("")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            Rectangle {
                id: profileIconRectangle
                x: 1
                y: 6
                width: 31
                height: 30
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: profileIcon
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Profile.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.verticalCenterOffset: 1
                    anchors.horizontalCenterOffset: 0
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: profileText
                color: "#f0f1fa"
                text: qsTr("Profile")
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


