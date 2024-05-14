## Input and Output Scenarios
### Login
```bash
Enter your username:
Enter your password:
```

##### user data
- username: user
- password: user

##### admin data
- username: admin
- password: admin

### Admin Functionality
```bash
 [1] Display All Roads
 [2] Add Road
 [3] Update Road
 [4] Delete Road
 [5] Logout
 [6] Exit
```

#### Scenario 1: Display All Roads
```bash
 The City => BeniSuef :


From: BeniSuef To: Dahab AND From: Dahab To: BeniSuef

BeniSuef - Dahab with Microbus, costs 200
BeniSuef - Dahab with Bus, costs 315


 The City => Giza :


From: Giza To: Dahab AND From: Dahab To: Giza

Giza - Dahab with Bus, costs 500
Giza - Dahab with Microbus, costs 345
```
#### Scenario 2: Add Road

**Input:**
```bash
Enter The Name Of The City1, City2, Cost, Transportation:
City1: Cairo
City2: Aswan
Cost: 300
Transportation (1 -> BUS, 2 -> MICROBUS, 3 -> TRAIN, 4 -> METRO, 5 -> UBER): 3
```
**Output**
```bash
Road added Successfully.
```

#### Scenario 2: Update Road

**Input:**

```bash
Enter The Name Of The City1, City2, Cost, Transportation:
City1: Cairo
City2: Aswan
Cost: 300
Transportation (1 -> BUS, 2 -> MICROBUS, 3 -> TRAIN, 4 -> METRO, 5 -> UBER): 3
Enter the new cost: 397
Enter the new Transportation (1 -> BUS, 2 -> MICROBUS, 3 -> TRAIN, 4 -> METRO, 5 -> UBER): 1
```
**Output:**
```bash
Road Updated Successfully.
```

#### Scenario 3: Delete Road

**Input:**
```bash
Enter The Name Of The City1, City2, Cost, Transportation:
City1: Cairo
City2: Aswan
Cost: 397
Transportation (1 -> BUS, 2 -> MICROBUS, 3 -> TRAIN, 4 -> METRO, 5 -> UBER): 1
```
**Output:**
```bash
Road deleted successfully.
```

### User Functionality

```bash
         User MainMenu

 [1] Traverse Graph
 [2] Check Graph State
 [4] Logout
 [5] Exit
```
#### Scenario 1: Traverse Map

**Input:**
```bash
How do you want to traverse?
1.BFS    2.DFS
Your choice: 1
Enter the source city: Giza
```

**Output:**
```bash
Visited cities (in order):
Giza
Cairo
Dahab
BeniSuef
Asyut
```

----

**Input:**
```bash
How do you want to traverse?
1.BFS    2.DFS
Your choice: 2
Enter the source city: Giza
```

**Output:**
```bash
Visited cities (in order):
Giza
Cairo
BeniSuef
Dahab
Asyut
```

#### Scenario 2: Check Map State

**Input:**

```bash
 [1] Check Graph Completion
 [2] Check Graph Connectivity

 Go To: 1
```

**Output:**
```bash
The graph is not complete.
```

-----

**Input:**

```bash
 [1] Check Graph Completion
 [2] Check Graph Connectivity

 Go To: 2
```

**Output:**
```bash
The graph is connected.
```

#### Scenario 3: Get Route Options

**Input:**
```bash
Enter the source city: Cairo
Enter the destination city: Dahab
Enter Your Budget: 400
```

**Output:**
```bash
         Paths
Path # 1
The cost is: 215
The route:
Cairo BeniSuef Bus 15
BeniSuef Dahab Microbus 200

Path # 2
The cost is: 220
The route:
Cairo BeniSuef Microbus 20
BeniSuef Dahab Microbus 200

Path # 3
The cost is: 330
The route:
Cairo BeniSuef Bus 15
BeniSuef Dahab Bus 315

Path # 4
The cost is: 335
The route:
Cairo BeniSuef Microbus 20
BeniSuef Dahab Bus 315

Path # 5
The cost is: 375
The route:
Cairo Giza Metro 30
Giza Dahab Microbus 345
```