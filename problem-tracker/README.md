# Programming Problem Tracker

This folder contains the published AC-labelled problem dataset and a separate, more recent export of my personal workbook tab. The two files serve different purposes and should not be merged without preserving their source statuses.

## 1. Published AC Tracker CSV

[problem-tracker.csv](./problem-tracker.csv)

| Platform | Rows in published CSV |
|---|---:|
| Beecrowd | 48 |
| Codeforces | 25 |
| HackerRank | 25 |
| **Total** | **98** |

- The 98 records contain **97 unique problem URLs**; one beecrowd URL appears twice and both source rows are retained.
- All 98 rows carry an `AC` label in this published CSV. These labels come from the earlier course-tracker dataset; they have not been independently re-verified against the online judges.
- The file now has exact `Source_File` paths for all 38 platform source files. The two Codeforces files `219158-U.c` and `219158-X.c` were mapped using exact problem URLs and the personal worksheet references `C20` and `C25`.
- The other 62 records have no exact source-file path recorded.

## 2. Personal C263065 Workbook Snapshot

[C263065-workbook-snapshot.csv](./C263065-workbook-snapshot.csv)

This CSV exports only the personal worksheet named `C263065` from the supplied 69-worksheet workbook. It does not publish the other students' worksheets. The two Google Docs references in the personal tab are excluded from this platform-link export.

| Platform | URL rows | Unique problem URLs | AC-marked rows | Unique AC URLs | Blank rows |
|---|---:|---:|---:|---:|---:|
| Beecrowd | 74 | 59 | 44 | 43 | 30 |
| Codeforces | 149 | 111 | 24 | 24 | 125 |
| HackerRank | 247 | 181 | 22 | 22 | 225 |
| **Total** | **470** | **351** | **90** | **89** | **380** |

The HackerRank rows also contain two distinct contest-page URLs, which are preserved in the snapshot but are not counted as problem URLs. Repeated URLs are retained as separate worksheet rows. The workbook tab contains 472 URL cells in total; two supplemental Google Docs references are not included in the CSV.

## 3. Cross-Check Between the Two Datasets

- All **97 unique URLs** in the published tracker CSV are present in the C263065 workbook snapshot.
- **89 unique URLs** are AC-marked in the latest workbook tab; all 89 are present in the published tracker CSV.
- The remaining **8 unique URLs** from the published tracker CSV have a blank status in the latest workbook tab.
- There are **254 unique problem URLs** in the workbook snapshot that are not in the published 97-URL tracker CSV. Their blank status is not interpreted as unsolved.

A blank cell means **no status was recorded in that worksheet row**. It does not establish an unsuccessful attempt or an unsolved problem. An AC label in either tracker is not a substitute for the online judge's actual submission record.

## 4. CSV Fields

### Published tracker CSV

- `Record`: sequential row number.
- `Platform`: platform identified from the problem URL.
- `Tracker_Reference`: reference label from the source sheet.
- `Problem_URL`: original problem link.
- `Verdict_in_Tracker`: verdict recorded in the source tracker.
- `Solve_Time_Minutes`, `Solve_Date`: recorded solve metadata.
- `Category`, `Rating`, `Comment`: optional source fields.
- `Programming_Language`: included where a language was identified for a supplied source.
- `Source_File`: repository-relative path where an exact source mapping is available.

### C263065 workbook snapshot

- `Workbook_Row`: original row number in the workbook.
- `Tracker_Serial`: serial or label recorded in the worksheet.
- `Platform`, `Record_Type`, `Problem_or_Contest_URL`: URL classification and link.
- `Track_Sheet_Status`: exact worksheet status; blank values remain blank.
- `Solve_Time`, `Date`, `Category`, `Rating`, `Comment`: values copied from the personal worksheet where present.

## 5. Source Code Mapping

- Codeforces: all 16 C source files are present and mapped in the published tracker CSV. The U and X mappings use exact problem URL matches from worksheet references `C20` and `C25`.
- HackerRank: 22 source files are present and mapped: 9 Conditions files reported as C++20 and 13 Loops files reported as C.
- Ten Loops export entries selected for the existing mapping have score 0.0 even though the course tracker labels their rows AC. Those source files are retained as exported attempts; they are not presented as independently verified accepted versions.
- Source availability, tracker status, and actual platform verdict are separate facts.

## Platform Accounts

- Beecrowd handle: `beecrowd65`
- [Codeforces](https://codeforces.com/profile/evan982)
- [HackerRank](https://www.hackerrank.com/profile/evankhan01)

This tracker records learning activity. Platform verdicts and submission IDs should be added only when they can be checked against actual platform records.
