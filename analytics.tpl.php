<google-signin client-id="846286205027-v9bq3rvmlg1sr2skpq0qhbj3k2m3l1kg.apps.googleusercontent.com"></google-signin>

<google-analytics-dashboard>

  <google-analytics-date-selector></google-analytics-date-selector>

  <google-analytics-chart
    ids="ga:3704377"
    type="line"
    metrics="ga:pageviews,ga:uniquePageviews"
    filters="ga:pagePath=~/<?php print $path ?>"
    dimensions="ga:date">
    <h3>Page Traffic</h3>
  </google-analytics-chart>

  <google-analytics-chart
    ids="ga:3704377"
    type="column"
    metrics="ga:pageviews,ga:uniquePageviews"
    filters="ga:pagePath=~/<?php print $path ?>"
    maxResults="5"
    sort="-ga:pageviews"
    dimensions="ga:socialNetwork">
    <h3>Social network referrals</h3>
  </google-analytics-chart>

  <google-analytics-chart
    ids="ga:3704377"
    type="geo"
    metrics="ga:pageviews"
    filters="ga:pagePath=~/<?php print $path ?>"
    dimensions="ga:country">
    <h3>Users by Country</h3>
  </google-analytics-chart>

</google-analytics-dashboard>
