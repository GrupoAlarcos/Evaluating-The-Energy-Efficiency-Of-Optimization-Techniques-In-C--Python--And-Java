#!/bin/bash

SUCCESS_FILE="success.txt"
ERROR_FILE="error.txt"
INFO_FILE="info.txt"

> "$SUCCESS_FILE"
> "$ERROR_FILE"
> "$INFO_FILE"

for language in C Python Java; do
    [ -d "$language" ] || continue

    for folder in "$language"/*; do
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
            } >> ../../"$INFO_FILE" 2>&1

            if [ $CONFIG_STATUS -eq 0 ]; then
                echo "$folder" >> ../../"$SUCCESS_FILE"
            else
                echo "$folder" >> ../../"$ERROR_FILE"
            fi
        )
    done
done