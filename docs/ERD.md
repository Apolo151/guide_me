## Input and Output Scenarios

### Admin Functionality

#### Scenario 1: Add City

**Input:**
```bash
What do you want to do? 
1.Add Road 
Enter the source city name: Cairo
Enter the destination city name: Giza
Enter the tranportation mean: Bus
Enter the tranportation cost: 300
```
**Output**
```bash
New road between Cairo and Giza added.
```

#### Scenario 2: Update City

**Input:**

```bash
What do you want to do? 
2.Update City 
Cairo 
New Name: NewCairo
```
**Output:**
```bash
City Cairo updated to NewCairo successfully.
```

#### Scenario 3: Delete City

**Input:**
```bash
What do you want to do?
3.Delete City
Cairo
```
**Output:**
```bash
City Cairo deleted successfully.
```

### User Functionality
#### Scenario 1: Traverse Map

**Input:**
```bash
What do you want to do?
1.Traverse Map
```

**Output:**
```bash
List of cities visited:
1. Cairo
2. Alexandria
3. Luxor
...

```

#### Scenario 2: Check Map State

**Input:**

```bash
What do you want to do?
2.Check Map State
```

**Output:**
```bash
The Map is connected.
The Map is not complete.
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