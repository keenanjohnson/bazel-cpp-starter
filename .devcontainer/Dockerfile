FROM mcr.microsoft.com/devcontainers/base:bullseye

ENV DEBIAN_FRONTEND=noninteractive  
ENV UDEV=1

# Install Packages
RUN apt-get update && apt-get install -y \
    automake \
    build-essential \
    doxygen \
    wget \
    && rm -rf /var/lib/apt/lists/*

# Install Bazel
RUN wget https://github.com/bazelbuild/bazelisk/releases/download/v1.16.0/bazelisk-linux-amd64 && \
    chmod 755 bazelisk-linux-amd64 && \
    mv bazelisk-linux-amd64 /usr/bin/bazel

CMD ["/bin/bash"]