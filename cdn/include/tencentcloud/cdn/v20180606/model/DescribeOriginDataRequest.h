/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEORIGINDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEORIGINDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeOriginData request structure.
                */
                class DescribeOriginDataRequest : public AbstractModel
                {
                public:
                    DescribeOriginDataRequest();
                    ~DescribeOriginDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @return StartTime Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @param _startTime Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @return EndTime End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @param _endTime End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the metric to query, which can be:
`flux`: Origin-pull traffic (in bytes)
`bandwidth`: Origin-pull bandwidth (in bps)
`request`: Number of origin-pull requests
`failRequest`: Number of failed origin-pull requests
`failRate`: Origin-pull failure rate (in %)
`statusCode`: Origin-pull status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx origin-pull status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx origin-pull status codes and the data for origin-pull status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx origin-pull status codes and the data for origin-pull status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx origin-pull status codes and the data for origin-pull status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx origin-pull status codes and the data for origin-pull status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     * @return Metric Specifies the metric to query, which can be:
`flux`: Origin-pull traffic (in bytes)
`bandwidth`: Origin-pull bandwidth (in bps)
`request`: Number of origin-pull requests
`failRequest`: Number of failed origin-pull requests
`failRate`: Origin-pull failure rate (in %)
`statusCode`: Origin-pull status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx origin-pull status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx origin-pull status codes and the data for origin-pull status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx origin-pull status codes and the data for origin-pull status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx origin-pull status codes and the data for origin-pull status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx origin-pull status codes and the data for origin-pull status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Specifies the metric to query, which can be:
`flux`: Origin-pull traffic (in bytes)
`bandwidth`: Origin-pull bandwidth (in bps)
`request`: Number of origin-pull requests
`failRequest`: Number of failed origin-pull requests
`failRate`: Origin-pull failure rate (in %)
`statusCode`: Origin-pull status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx origin-pull status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx origin-pull status codes and the data for origin-pull status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx origin-pull status codes and the data for origin-pull status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx origin-pull status codes and the data for origin-pull status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx origin-pull status codes and the data for origin-pull status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     * @param _metric Specifies the metric to query, which can be:
`flux`: Origin-pull traffic (in bytes)
`bandwidth`: Origin-pull bandwidth (in bps)
`request`: Number of origin-pull requests
`failRequest`: Number of failed origin-pull requests
`failRate`: Origin-pull failure rate (in %)
`statusCode`: Origin-pull status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx origin-pull status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx origin-pull status codes and the data for origin-pull status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx origin-pull status codes and the data for origin-pull status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx origin-pull status codes and the data for origin-pull status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx origin-pull status codes and the data for origin-pull status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Specifies the list of domain names to query. You can query up to 30 domain names at a time.
                     * @return Domains Specifies the list of domain names to query. You can query up to 30 domain names at a time.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Specifies the list of domain names to query. You can query up to 30 domain names at a time.
                     * @param _domains Specifies the list of domain names to query. You can query up to 30 domain names at a time.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the domain name is not specified, the specified project will be queried. Up to 30 acceleration domain names can be queried at a time.
If the domain name information is specified, this parameter can be ignored.
                     * @return Project Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the domain name is not specified, the specified project will be queried. Up to 30 acceleration domain names can be queried at a time.
If the domain name information is specified, this parameter can be ignored.
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the domain name is not specified, the specified project will be queried. Up to 30 acceleration domain names can be queried at a time.
If the domain name information is specified, this parameter can be ignored.
                     * @param _project Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the domain name is not specified, the specified project will be queried. Up to 30 acceleration domain names can be queried at a time.
If the domain name information is specified, this parameter can be ignored.
                     * 
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Time granularity, which can be:
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * @return Interval Time granularity, which can be:
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity, which can be:
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * @param _interval Time granularity, which can be:
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取The aggregate data for multiple domain names is returned by default (false) when multiple `Domains` are passed in.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     * @return Detail The aggregate data for multiple domain names is returned by default (false) when multiple `Domains` are passed in.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     * 
                     */
                    bool GetDetail() const;

                    /**
                     * 设置The aggregate data for multiple domain names is returned by default (false) when multiple `Domains` are passed in.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     * @param _detail The aggregate data for multiple domain names is returned by default (false) when multiple `Domains` are passed in.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     * 
                     */
                    void SetDetail(const bool& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * @return Area Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * @param _area Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Specifies a time zone to query. The default time zone is UTC+08:00.
                     * @return TimeZone Specifies a time zone to query. The default time zone is UTC+08:00.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Specifies a time zone to query. The default time zone is UTC+08:00.
                     * @param _timeZone Specifies a time zone to query. The default time zone is UTC+08:00.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the metric to query, which can be:
`flux`: Origin-pull traffic (in bytes)
`bandwidth`: Origin-pull bandwidth (in bps)
`request`: Number of origin-pull requests
`failRequest`: Number of failed origin-pull requests
`failRate`: Origin-pull failure rate (in %)
`statusCode`: Origin-pull status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx origin-pull status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx origin-pull status codes and the data for origin-pull status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx origin-pull status codes and the data for origin-pull status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx origin-pull status codes and the data for origin-pull status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx origin-pull status codes and the data for origin-pull status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Specifies the list of domain names to query. You can query up to 30 domain names at a time.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the domain name is not specified, the specified project will be queried. Up to 30 acceleration domain names can be queried at a time.
If the domain name information is specified, this parameter can be ignored.
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Time granularity, which can be:
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * The aggregate data for multiple domain names is returned by default (false) when multiple `Domains` are passed in.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies a time zone to query. The default time zone is UTC+08:00.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEORIGINDATAREQUEST_H_
