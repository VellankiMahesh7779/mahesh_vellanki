# Use an official GCC image to compile and run the C++ code
FROM gcc:13

# Set working directory in the container
WORKDIR /maheshapp

# Copy the C++ source file to the container
COPY example_docker.cpp .

# Compile the C++ source code
RUN g++ -o example_docker example_docker.cpp

# Command to run the compiled program
CMD ["./example_docker"]

