#!/bin/bash

echo "Adding node..."
bgeo-cli addnode "54.180.25.64:5444" "add"

echo "Waiting for connection (10 seconds)..."
sleep 10

echo "Peer information:"
bgeo-cli getpeerinfo

echo "Network information:"
bgeo-cli getnetworkinfo

echo "Added node information:"
bgeo-cli getaddednodeinfo true

echo "Connection count:"
bgeo-cli getconnectioncount
