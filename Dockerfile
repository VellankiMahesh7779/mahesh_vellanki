FROM ubuntu:22.04

# Install g++
RUN apt-get update && apt-get install -y g++

WORKDIR /app
COPY . /app

# Compile all cpp files into one binary
RUN g++ -std=c++17 *.cpp -o app

# Default command to run the binary
CMD ["./app"]
