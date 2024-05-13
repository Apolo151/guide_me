

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
    id: userPages
    width: 1920
    height: 1080
    state: "ServicePage"

    Image {
        id: mainTemplate
        x: 0
        y: 0
        source: "file:///d:/Programming/Projects/GuideMe/content/images/Main Template.png"
        fillMode: Image.PreserveAspectFit
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

    GroupItem {
        id: serviceGroup
        x: 0
        y: 0

        Text {
            id: pageName
            x: 342
            y: 29
            color: "#f0f1fa"
            text: qsTr("Service")
            font.pixelSize: 12
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: pageName2
            x: 293
            y: 48
            color: "#f0f1fa"
            text: qsTr("Service")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: serviceField1
            x: 292
            y: 87
            source: "file:///d:/Programming/Projects/GuideMe/content/images/4- Service Page/ServiceField1.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: serviceField2
            x: 292
            y: 307
            source: "file:///d:/Programming/Projects/GuideMe/content/images/4- Service Page/ServiceField2.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: serviceField3
            x: 292
            y: 527
            source: "file:///d:/Programming/Projects/GuideMe/content/images/4- Service Page/ServiceField3.png"
            fillMode: Image.PreserveAspectFit
        }

        Button {
            id: confirm
            x: 293
            y: 742
            width: 1607
            height: 110
            text: qsTr("CONFIRM")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            background: Rectangle {
                opacity: 0.7
                color: confirm.down ? "#1A1F37" : "#0F122E"
                radius: 20
                border.width: 0
            }
        }

        TextInput {
            id: startingCity
            x: 372
            y: 211
            width: 1439
            height: 20
            opacity: 0.6
            color: "#f0f1fa"
            font.pixelSize: 14
            verticalAlignment: Text.AlignTop
            wrapMode: Text.NoWrap
            selectionColor: "#7681d2"
            selectedTextColor: "#f0f1fa"
            selectByMouse: true
            overwriteMode: true
            maximumLength: 160
            font.wordSpacing: 0
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
            cursorVisible: false
        }

        TextInput {
            id: destinationCity
            x: 372
            y: 431
            width: 1439
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
            maximumLength: 160
            font.wordSpacing: 0
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
            cursorVisible: false
        }

        TextInput {
            id: availableMoney
            x: 372
            y: 651
            width: 1439
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
            maximumLength: 160
            font.wordSpacing: 0
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
            cursorVisible: false
        }
    }



    GroupItem {
        id: graphTraversalPage
        x: 0
        y: 0
        Text {
            id: pageName4
            x: 342
            y: 29
            color: "#f0f1fa"
            text: qsTr("Graph Traversal")
            font.pixelSize: 12
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: pageName5
            x: 293
            y: 48
            color: "#f0f1fa"
            text: qsTr("Graph Traversal")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Image {
            id: graphTraversalEntry1
            x: 292
            y: 87
            source: "file:///d:/Programming/Projects/GuideMe/content/images/6- Graph Traversal Page/GraphTraversalEntry1.png"
            fillMode: Image.PreserveAspectFit
        }

        GroupItem {
            id: algorithms
            x: 316
            y: 157
            ButtonGroup {
                id: switchGroup
                exclusive: true
            }

            Switch {
                id: bfs
                x: 0
                y: 0
                width: 47
                height: 20
                visible: true
                padding: 0
                leftPadding: 0
                font.weight: Font.Bold
                font.pointSize: 10
                font.family: "Plus Jakarta Sans"
                display: AbstractButton.TextOnly
                autoExclusive: false
            }

            Text {
                id: bfsText
                x: 59
                y: 2
                color: "#f0f1fa"
                text: qsTr("Breadth-first Search")
                font.pixelSize: 12
                font.weight: Font.Bold
                font.family: "Plus Jakarta Sans"
            }

            Switch {
                id: dfs
                x: 700
                y: 0
                width: 47
                height: 20
                visible: true
                padding: 0
                leftPadding: 0
                font.weight: Font.Bold
                font.pointSize: 10
                font.family: "Plus Jakarta Sans"
                display: AbstractButton.TextOnly
                autoExclusive: false
            }

            Text {
                id: dfsText
                x: 759
                y: 2
                color: "#f0f1fa"
                text: qsTr("Depth-first Search")
                font.pixelSize: 12
                font.weight: Font.Bold
                font.family: "Plus Jakarta Sans"
            }

            Switch {
                id: dsa
                x: 1370
                y: 0
                width: 47
                height: 20
                visible: true
                padding: 0
                leftPadding: 0
                font.weight: Font.Bold
                font.pointSize: 10
                font.family: "Plus Jakarta Sans"
                display: AbstractButton.TextOnly
                autoExclusive: false
            }

            Text {
                id: dsaText
                x: 1429
                y: 2
                color: "#f0f1fa"
                text: qsTr("Dijkstra's Shortest Path")
                font.pixelSize: 12
                font.weight: Font.Bold
                font.family: "Plus Jakarta Sans"
            }
        }

        Image {
            id: graphTraversalEntry2
            x: 292
            y: 227
            source: "file:///d:/Programming/Projects/GuideMe/content/images/6- Graph Traversal Page/GraphTraversalEntry2.png"
            fillMode: Image.PreserveAspectFit
        }

        TextInput {
            id: startingCity1
            x: 365
            y: 314
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
            id: destinationCity1
            x: 1178
            y: 314
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
            id: startTesting1
            x: 293
            y: 387
            width: 1607
            height: 110
            text: qsTr("  START TRAVERSAL")
            highlighted: true
            font.weight: Font.Bold
            font.pointSize: 12
            font.family: "Plus Jakarta Sans"
            display: AbstractButton.TextOnly
            background: Rectangle {
                opacity: 0.7
                color: startTesting1.down ? "#1A1F37" : "#0F122E"
                radius: 20
                border.width: 0
            }
        }
    }

    GroupItem {
        id: graphCompletionTestGroup
        x: 0
        y: 0

        Text {
            id: pageName1
            x: 342
            y: 29
            color: "#f0f1fa"
            text: qsTr("Graph Completion Test")
            font.pixelSize: 12
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
        }

        Text {
            id: pageName3
            x: 293
            y: 48
            color: "#f0f1fa"
            text: qsTr("Graph Completion Test")
            font.pixelSize: 14
            font.weight: Font.Medium
            font.family: "Plus Jakarta Sans"
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

    states: [
        State {
            name: "ServicePage"

            PropertyChanges {
                target: graphCompletionTestGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: homePageD
                opacity: 0
            }

            PropertyChanges {
                target: graphCompletionTestA
                opacity: 0
            }

            PropertyChanges {
                target: graphCompletionTest
                x: 8
                y: 130
                width: 168
                height: 42
            }

            PropertyChanges {
                target: graphTraversalPage
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: graphTraversalA
                opacity: 0
            }
        },
        State {
            name: "GraphTraversalPage"

            PropertyChanges {
                target: serviceGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: graphTraversalPage
                opacity: 1
                enabled: true
            }

            PropertyChanges {
                target: graphCompletionTestGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: servicePage
                x: 8
                y: 0
            }

            PropertyChanges {
                target: homePageA
                opacity: 0
            }

            PropertyChanges {
                target: serviceIconRectangle
                color: "#1a1f37"
            }

            PropertyChanges {
                target: graphTraversal
                x: 8
                y: 60
            }

            PropertyChanges {
                target: graphTraversalIconRectangle
                color: "#7681d2"
            }

            PropertyChanges {
                target: graphTraversalD
                opacity: 0
            }

            PropertyChanges {
                target: selectionRectangle
                x: 0
                y: 56
            }

            PropertyChanges {
                target: graphCompletionTestA
                opacity: 0
            }
        },

        State {
            name: "GraphCompletionTestPage"

            PropertyChanges {
                target: serviceGroup
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: selectionRectangle
                x: 0
                y: 106
            }

            PropertyChanges {
                target: servicePage
                x: 8
                y: 0
            }

            PropertyChanges {
                target: serviceIconRectangle
                color: "#1a1f37"
            }

            PropertyChanges {
                target: homePageA
                opacity: 0
            }

            PropertyChanges {
                target: graphTraversal
                x: 8
                y: 50
            }

            PropertyChanges {
                target: graphCompletionTest
                x: 8
                y: 120
            }

            PropertyChanges {
                target: graphCompletionTestD
                opacity: 0
            }

            PropertyChanges {
                target: graphCompletionTestIconRectangle
                color: "#7681d2"
            }

            PropertyChanges {
                target: graphTraversalPage
                opacity: 0
                enabled: false
            }

            PropertyChanges {
                target: graphTraversalA
                opacity: 0
            }

            PropertyChanges {
                target: graphTraversalD
                opacity: 1
            }
        }    ]
    transitions: [
            Transition {
                id: transition
                ParallelAnimation {
                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: graphCompletionTest
                            property: "height"
                            duration: 200
                        }
                    }

                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: graphCompletionTest
                            property: "width"
                            duration: 200
                        }
                    }

                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: graphCompletionTest
                            property: "x"
                            duration: 200
                        }
                    }

                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: graphCompletionTest
                            property: "y"
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
                            target: selectionRectangle
                            property: "x"
                            duration: 200
                        }
                    }

                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: selectionRectangle
                            property: "y"
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
                            target: graphTraversal
                            property: "x"
                            duration: 200
                        }
                    }

                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: graphTraversal
                            property: "y"
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
                            target: graphTraversalIconRectangle
                            property: "color"
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
                            target: serviceIconRectangle
                            property: "color"
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
                            target: graphCompletionTestGroup
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
                            target: graphTraversalD
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
                            target: serviceGroup
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
                            target: homePageA
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
                            target: graphCompletionTestIconRectangle
                            property: "color"
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
                            target: servicePage
                            property: "x"
                            duration: 200
                        }
                    }

                    SequentialAnimation {
                        PauseAnimation {
                            duration: 50
                        }

                        PropertyAnimation {
                            target: servicePage
                            property: "y"
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
                            target: graphCompletionTestD
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
                            target: homePageD
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
                            target: graphCompletionTestA
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
                            target: graphTraversalPage
                            property: "opacity"
                            duration: 200
                        }
                    }
                }
                to: "*"
                from: "*"
            }
        ]




    GroupItem {
        id: sidebar
        x: 39
        y: 142
        Rectangle {
            id: selectionRectangle
            x: 0
            y: 6
            width: 216
            height: 50
            color: "#1a1f37"
            radius: 15
            border.width: 0
        }

        Button {
            id: servicePage
            x: 8
            y: 10
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
                color: "#7681d2"
                radius: 10
                border.width: 0
                Image {
                    id: homePageA
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Home Activated.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Image {
                    id: homePageD
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Home.png"
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

            Connections {
                target: servicePage
                onClicked: userPages.state = "ServicePage"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: graphTraversal
            x: 8
            y: 70
            width: 147
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
                    id: graphTraversalD
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Graph Traversal.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Image {
                    id: graphTraversalA
                    anchors.verticalCenter: parent.verticalCenter
                    source: "images/User Sidebar/Graph Traversal Activated.png"
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

            Connections {
                target: graphTraversal
                onClicked: userPages.state = "GraphTraversalPage"
            }
            background: Rectangle {
                opacity: 0
                border.width: 0
            }
        }

        Button {
            id: graphCompletionTest
            x: 8
            y: 130
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
                color: "#1a1f37"
                radius: 10
                border.width: 0
                Image {
                    id: graphCompletionTestD
                    anchors.verticalCenter: parent.verticalCenter
                    source: "file:///d:/Programming/Projects/GuideMe/content/images/User Sidebar/Graph Completion Test.png"
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Image {
                    id: graphCompletionTestA
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

            Connections {
                target: graphCompletionTest
                onClicked: userPages.state = "GraphCompletionTestPage"
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






/*##^##
Designer {
    D{i:0}D{i:73;transitionDuration:2000}
}
##^##*/
