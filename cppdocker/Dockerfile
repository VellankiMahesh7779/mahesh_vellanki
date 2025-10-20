FROM ubuntu:22.04

# Install g++
RUN apt-get update && apt-get install -y g++

WORKDIR /app
COPY . /app

# Compile all cpp files recursively
RUN g++ -std=c++17 $(find . -type f -name "*.cpp") -o app

# Run the binary
CMD ["./app"]
