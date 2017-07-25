### CarND-Controls-PID (self-driving car project)
### Author: Cuiqing Li
### Time: July 2017
---
### Description of This Project:
The man idea of this project is used to apply PID controller to make cars controll themselves more smoothly when the cars need to change directions by themselves. Using PID controller can make cars drive from one destination to another destination smoothly! More details can be checked in this [link](http://students.iitk.ac.in/roboclub/lectures/PID.pdf).

Also, here is a good [demonstration](https://www.reddit.com/r/robotics/comments/3eb7ca/controlling_self_driving_cars_pid_explained/) why we need to use PID controller in the self-driving car. In this project, I am doing similiar thing. In other words, trying to use PID controller algorithm to make self-driving car drive by itself. 

### Final Result of This Project:

### Dependencies of This Project:

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

### Instructions of Building this Project

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 


