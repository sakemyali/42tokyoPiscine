#!/bin/bash
ifconfig | awk '/^[[:space:]]*ether[[:space:]]/ { print $2}'
