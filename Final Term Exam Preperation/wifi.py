# hotspots.py

import csv
from collections import Counter

def process_hotspots(file):
    def most_common_provider(file_obj):
        hotspots = []
        with file_obj as csv_file:
            content = csv.DictReader(csv_file)

            for row in content:
                hotspots.append(row["Provider"])

        counter = Counter(hotspots)
        print(
            f"There are {len(hotspots)} Wi-Fi hotspots in NYC.\n"
            f"{counter.most_common(1)[0][0]} has the most with "
            f"{counter.most_common(1)[0][1]}."
        )

    if isinstance(file, str):
        # Got a string-based filepath
        file_obj = open(file, "r")
        most_common_provider(file_obj)
    else:
        # Got a file object
        most_common_provider(file)
file_obj = open("filename.csv", "r")
print(process_hotspots(file_obj))
# process_hotspots("filename.csv")