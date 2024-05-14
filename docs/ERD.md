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
 [3] Logout
 [4] Exit
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
Dahab
BeniSuef
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

#### Scenario 3: Get Best Routes

**Input:**
```bash
What do you want to do?
3.Get best routes
Enter your start city: Cairo
Enter your End city: Aswan
```

**Output:**
```bash
Best routes:
1. Cairo -> Luxor -> Aswan (Cost: 800 EGP, Mode: Train)
2. Cairo -> Bani Seuf -> Aswan (Cost: 600 EGP, Mode: Bus)
```