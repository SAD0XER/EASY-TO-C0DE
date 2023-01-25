```
NOTE: To open a separate preview window, use the keyboard shortcut Ctrl+Shift+V
```


Text Styling:
1. **Bold**: ** ** or __ __ (use double asterisk or underscore)
2. _Italic_: * * or _ _ (use single asterisk or underscore)
3. ~~Strikethrough~~ : ~ ~ (use double tilde sign)
4. `Monospace`: ` ` (use sigle backtick [Acute, Grave Accent] sign)



Headings and Its Types:

# H1 heading

## H2 heading

### H3 heading

#### H4 heading

##### H5 heading

###### H6 heading



Links:
[Text](URL)



Image:
![Alternate_Txt](Image URL)



Image Link:
![[Alternate_Txt](Image URL)](URL)



List and Its Types:

Unordered list: There are 2 formatting styles, using "-" or "*".

Style 1:

- item 1
- item 2
    - sub-item 1
    - sub-item 2

Style 2:

* item 1
* item 2


Ordered list:

Style 1: Ordered list all using "n."

1. item 1
2. item 2
    - item 1
      * item 1
3. item 3
    1. sub-item 1
    2. sub-item 2

Style 2: Ordered list all using "1."

        1. item 1
        1. item 2
        1. item 3



Table:

| Column 1        | Column 2        | Column 3        |
| :-------------- | :-------------- | :-------------- |
| Row 1, Column 1 | Row 1, Column 2 | Row 1, Column 3 |
| Row 2, Column 1 | Row 2, Column 2 | Row 2, Column 3 |
| Row 3, Column 1 | Row 3, Column 2 | Row 3, Column 3 |

Html Table:

<table role="table">
    <thead>
        <tr>
            <th align="left">Column 1</th>
            <th align="left">Column 2</th>
            <th align="left">Column 3</th>
        </tr>
    </thead>
        <tbody>
            <tr>
                <td align="left">
                    <ul>
                        <li>Item 1</li>
                        <li>Item 2</li>
                    </ul>
                </td>
                <td align="left">Row 1, Column 2</td>
                <td align="left">Row 1, Column 3</td>
            </tr>
            <tr>
                <td align="left">Row 2, Column 1</td>
                <td align="left">Row 2, Column 2</td>
                <td align="left">Row 2, Column 3</td>
            </tr>
        </tbody>
</table>


Code:

Inline code: `code`

Code block:

```
Your code goes here;
```

Code highlighting:

```ts
String str = "Your code";
```

Code diff:

```diff
+ Added line (Add plus sign)
- Removed line (Add minus sign)
```


Quote:

> Use less than or right arrow '>' to add quote.


Checkbox:

[ ] this is Uncheked checkbox.

[x] this is Checked checkbox.


Comments:

<!-- This is comment in markdown. It is same as HTML comment -->


Add Collapsable section:
<details>
<summary>Click to expand!</summary>

- Add `open` Attribute in 'details' tag to keep open section by default.
- Add 'align=center' Attribute in tag to align section in center.

</details>


Widgets:

**Definition:**
_A widget is a reuseable component which allows you to perform a function and access a service. It gives the user changing information of a particular type in a small area of the page._ 

_In this case, we can pass it some parameters and it will fetch our data from GitHub and display the summary accordingly._

Github Actions:
>GitHub Actions makes it easy to automate all your software workflows, now with world-class CI/CD. Build, test, and deploy your code right from GitHub. Make code reviews, branch management, and issue triaging work the way you want.

**Definition:**
_GitHub Actions help you automate tasks within your software development life cycle._

_GitHub Actions are event-driven, meaning that you can run a series of commands after a specified event has occurred._
