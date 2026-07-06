#!/bin/bash

BASE_DIR="$(pwd)"

for language in C Python Java; do
    [ -d "$language" ] || continue

    SUCCESS_FILE="$BASE_DIR/$language/success.txt"
    ERROR_FILE="$BASE_DIR/$language/error.txt"
    INFO_FILE="$BASE_DIR/$language/info.txt"

    > "$SUCCESS_FILE"
    > "$ERROR_FILE"
    > "$INFO_FILE"

    for folder in "$language"/code/*; do
        [ -d "$folder" ] || continue

        echo "[PROCESSING]: $folder"

        (
            cd "$folder" || exit 1

            {
                echo "===== $folder ====="
                make config
                CONFIG_STATUS=$?
                make end
                echo "Exit code: $CONFIG_STATUS"
                echo
            } >> "$INFO_FILE" 2>&1

            if [ "$CONFIG_STATUS" = "0" ]; then
                echo "$folder" >> "$SUCCESS_FILE"
            else
                echo "$folder" >> "$ERROR_FILE"
            fi
        )
    done

done