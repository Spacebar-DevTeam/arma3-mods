# A3 ZCP Exile

## Overview
A3 ZCP (Zupa Capture Points) is a mission script designed for **Arma 3 Exile servers**, providing **dynamic capture zones** where players fight for control to earn rewards. This repository contains the necessary files to set up and customize **ZCP for Exile**.

## Repository Structure
```
a3_zcp_exile/
├── x/
│   ├── addons/
│   │   ├── ZCP/                   # Main ZCP mission framework
│   │   │   ├── config.sqf         # Config file for settings
│   │   │   ├── init.sqf           # Initialization script
│   │   │   ├── zcp_functions.sqf  # Core functions for ZCP mechanics
│   │   │   ├── markers.sqf        # Capture point marker handling
│   │   │   ├── rewards.sqf        # Reward configuration for captures
│   │   │   ├── README.md          # Setup and customization guide
│   ├── scripts/
│   │   ├── server_init.sqf        # Server-side script initialization
│   │   ├── zcp_server.sqf         # Main server script handling ZCP logic
├── README.md                      # Main documentation for setting up A3 ZCP Exile
```

## Getting Started
### **1. Installing ZCP on Your Exile Server**
1. **Download the latest version** of A3 ZCP.
2. Place the `ZCP` folder inside your **`@ExileServer/addons/`** directory.
3. Add the following line to your `server.cfg` under `class Missions`:
   ```cpp
   execVM "x\addons\ZCP\init.sqf";
   ```
4. Restart the server and check for errors in the **RPT logs**.

### **2. Customizing Capture Points**
- Open `config.sqf` to modify:
  - **Number of active zones** (`ZCP_ActiveZones`)
  - **Rewards for capturing points** (`ZCP_RewardConfig`)
  - **AI difficulty and behavior** (`ZCP_AIConfig`)
  
### **3. Debugging & Logs**
- Use the **server RPT logs** to check for errors.
- Enable `ZCP_DebugMode = true;` in `config.sqf` to see debug messages in-game.

## Features
✅ **Dynamic capture points** with rotating locations.  
✅ **Custom rewards** for winning players.  
✅ **AI defenders** that scale based on difficulty settings.  
✅ **Marker system** to display active zones.

---

Need help? Submit an **Issue** or open a **Pull Request**. 🚀
