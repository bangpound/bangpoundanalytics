<header class="google-analytics">
  <google-signin client-id="<?php print $client_id; ?>"></google-signin>
</header>

<google-analytics-dashboard>

  <google-analytics-date-selector></google-analytics-date-selector>

  <google-analytics-chart
    ids="<?php print $ids; ?>"
    type="line"
    metrics="ga:pageviews,ga:uniquePageviews"
    filters="ga:pagePath=~/<?php print $path ?>"
    dimensions="ga:date">
    <h3>Page Traffic</h3>
  </google-analytics-chart>

  <google-analytics-chart
    ids="<?php print $ids; ?>"
    type="column"
    metrics="ga:pageviews,ga:uniquePageviews"
    filters="ga:pagePath=~/<?php print $path ?>"
    maxResults="5"
    sort="-ga:pageviews"
    dimensions="ga:socialNetwork">
    <h3>Social network referrals</h3>
  </google-analytics-chart>

  <google-analytics-chart
    ids="<?php print $ids; ?>"
    type="geo"
    metrics="ga:pageviews,ga:uniquePageviews"
    filters="ga:pagePath=~/<?php print $path ?>"
    dimensions="ga:country">
    <h3>Page views by Country</h3>
  </google-analytics-chart>

</google-analytics-dashboard>
