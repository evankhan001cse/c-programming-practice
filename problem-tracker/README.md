# Programming Problem Tracker

A record of programming problems marked **Accepted (AC)** in my university course tracker.

## Summary

| Platform | AC records |
|---|---:|
| Beecrowd | 48 |
| Codeforces | 25 |
| HackerRank | 25 |
| **Total** | **98** |

- **98** linked AC records are included.
- These records contain **97 unique problem URLs**; one URL appears twice in the original tracker and is intentionally retained as a separate record.
- The source sheet also contains three AC-labelled class exercises without external problem URLs. They are not included in this linked-problem dataset.
- Verdicts and solve details are transcribed from my course tracker. They have not been independently re-verified against each platform.
- The original sheet does not reliably specify the programming language for each submission, so this tracker makes no language claim.
- This repository contains problem links and tracking metadata, not source code or submitted solutions.

## CSV fields

- `Record`: sequential row number in this published dataset.
- `Platform`: platform identified from the problem URL.
- `Tracker_Reference`: reference label recorded in the source sheet.
- `Problem_URL`: original problem link.
- `Verdict_in_Tracker`: verdict recorded in the source sheet.
- `Solve_Time_Minutes`: solve time recorded in the source sheet.
- `Solve_Date`: date recorded in the source sheet.
- `Category`, `Rating`, `Comment`: optional fields copied when present.

## Platform accounts

- Beecrowd handle: `beecrowd65`
- [Codeforces](https://codeforces.com/profile/evan982)
- [HackerRank](https://www.hackerrank.com/profile/evankhan01)

This tracker is part of my ongoing learning and problem-solving journey as a CSE undergraduate.

## Source Code Mapping

The CSV now includes two additional columns:

- `Programming_Language`: filled only when the language is known for a supplied source file.
- `Source_File`: repository-relative path to the published source file.

At present, Codeforces contest 219158 problems C through T (excluding L through O and N, which are not part of this verified batch) have supplied C source files. Other rows remain blank until their source code and language are provided.
