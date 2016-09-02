# Overview
Lua LifeAI is a Lua binding for the LifeAI open-source C++ library for AI decision-making.

> LifeAI is an open source C++ library for Artificial Intelligence decision-making. It can be integrated in video games, robotics, or anything that requires simulated intelligence.
 
> Entities and actions are created in C++ and text files with LifeAI's syntax. Entities have characteristics that describe them called "stats". They consider their value of the stats and how much they are modified to assess the "pros" and "cons" of an action. They also consider their value of other entities involved in the action and how it affects them. They can then determine an overall value for performing the action.
 
> As stats in the simulation change, LifeAI updates the best action options for the entities. The actions can then be implemented as needed in a simulation.

Demo will be recreated in Lua after some time. You can download the pre-built binaries in Releases page.

# Example
```lua
local lai = require "lifeai"

lai.Reset()                      -- Reset data to defaults
lai.Load("lai_load.txt")         -- Load a file
lai.UpdateAll()
lai.SetSave(lai.best, true)      -- Best action data is not saved by default, so set to save
lai.Save("lai_save.txt")         -- Save a file
```

# License

> Copyright (c) 2016 by Orlando Hutapea
 
> Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
> The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.