# Use official GCC image
FROM gcc:13

# Set working directory inside container
WORKDIR /maheshapp

# Copy only the required C++ file into container
COPY functionoverload.cpp ./

# Compile the C++ source file
RUN g++ functionoverload.cpp -o functionoverload

# Run the compiled program
CMD ["./functionoverload"]

# -------------------------------
# Steps to build and run this Dockerfile:
#
# 1. Build the Docker image:
#    docker build -t functionoverload .
#
# 2. Run the container:
#    docker run functionoverload
#
# 3. Run in interactive mode (if input is needed):
#    docker run -it functionoverload
# -------------------------------
#
# Explanation of each instruction:
#
# FROM gcc:13
# → Uses the official GCC image which already contains the C++ compiler.
#
# WORKDIR /maheshapp
# → Sets the working directory inside the container where all commands will run.
#
# COPY functionoverload.cpp ./
# → Copies the C++ source file from host system into the container directory.
#
# RUN g++ functionoverload.cpp -o functionoverload
# → Compiles the C++ program and generates an executable named 'functionoverload'.
#
# CMD ["./functionoverload"]
# → Runs the compiled program when the container starts.
#
# -------------------------------

# Explanation of each instruction:
#
# FROM gcc:13
# → Uses the official GCC image which already contains the C++ compiler.
#
# WORKDIR /maheshapp
# → Sets the working directory inside the container where all commands will run.
#
# COPY functionoverload.cpp ./
# → Copies the C++ source file from host system into the container directory.
#
# RUN g++ functionoverload.cpp -o functionoverload
# → Compiles the C++ program and generates an executable named 'functionoverload'.
#
# CMD ["./functionoverload"]
# → Runs the compiled program when the container starts.
#
# -------------------------------
