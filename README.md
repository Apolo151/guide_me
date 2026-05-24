# Guide Me

CLI app that models a city transportation graph and helps users explore routes and graph properties.

## Features

- Role-based flows (Admin/User) with login
- Manage roads (add/update/delete) and inspect the graph
- Traverse the map (BFS/DFS) and check graph state (connected/complete)
- Find all routes between two cities within a budget

## Architecture

- `WorkFlow` orchestrates startup, login, and shutdown
- `DataManager` loads/saves the graph from `data/data.txt`
- `Map` holds the adjacency list and traversal/shortest-path utilities
- `Admin` and `User` implement role-specific menus
- `AllPaths` computes all feasible paths within a budget

## Requirements

- CMake 3.5+
- C++17 compiler (GCC, Clang, or MSVC)
- Ninja is optional (default in CMakeSettings.json)

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run

```bash
./build/main
```

Note: the app loads `data/data.txt` using a relative path defined in `WorkFlow::loadData`. If the file is not found, run the binary from the CMakeSettings output directory (e.g. `out/build/Debug`) or adjust the path.

## Credentials

- User: `user` / `user`
- Admin: `admin` / `admin`

## Data Format

`data/data.txt` encodes an undirected graph. The first line is the number of city pairs. Each subsequent line follows this pattern:

```
City1 - City2 Transport Cost [Transport Cost]...
```

Example:

```
3
Cairo - Giza Bus 50 Microbus 30
Giza - Dahab Bus 500
BeniSuef - Dahab Microbus 200
```

## Docs

- Scenarios and sample I/O: `docs/ERD.md`
- Design notes: `docs/design_doc.md`
