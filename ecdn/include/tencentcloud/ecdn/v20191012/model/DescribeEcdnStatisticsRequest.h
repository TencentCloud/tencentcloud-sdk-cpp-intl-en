/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnStatistics request structure.
                */
                class DescribeEcdnStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeEcdnStatisticsRequest();
                    ~DescribeEcdnStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time, such as 2019-12-13 00:00:00
                     * @return StartTime Query start time, such as 2019-12-13 00:00:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time, such as 2019-12-13 00:00:00
                     * @param StartTime Query start time, such as 2019-12-13 00:00:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time, such as 2019-12-13 23:59:59
                     * @return EndTime Query end time, such as 2019-12-13 23:59:59
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time, such as 2019-12-13 23:59:59
                     * @param EndTime Query end time, such as 2019-12-13 23:59:59
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
2xx: returns the number of 2xx status codes or details of status codes starting with 2
3xx: returns the number of 3xx status codes or details of status codes starting with 3
4xx: returns the number of 4xx status codes or details of status codes starting with 4
5xx: returns the number of 5xx status codes or details of status codes starting with 5
                     * @return Metrics Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
2xx: returns the number of 2xx status codes or details of status codes starting with 2
3xx: returns the number of 3xx status codes or details of status codes starting with 3
4xx: returns the number of 4xx status codes or details of status codes starting with 4
5xx: returns the number of 5xx status codes or details of status codes starting with 5
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
2xx: returns the number of 2xx status codes or details of status codes starting with 2
3xx: returns the number of 3xx status codes or details of status codes starting with 3
4xx: returns the number of 4xx status codes or details of status codes starting with 4
5xx: returns the number of 5xx status codes or details of status codes starting with 5
                     * @param Metrics Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
2xx: returns the number of 2xx status codes or details of status codes starting with 2
3xx: returns the number of 3xx status codes or details of status codes starting with 3
4xx: returns the number of 4xx status codes or details of status codes starting with 4
5xx: returns the number of 5xx status codes or details of status codes starting with 5
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Time granularity, which can be:
1 day	 1, 5, 15, 30, 60, 120, 240, 1440 
2-3 days 15, 30, 60, 120, 240, 1440
4-7 days 30, 60, 120, 240, 1440
8-90 days	 60, 120, 240, 1440
                     * @return Interval Time granularity, which can be:
1 day	 1, 5, 15, 30, 60, 120, 240, 1440 
2-3 days 15, 30, 60, 120, 240, 1440
4-7 days 30, 60, 120, 240, 1440
8-90 days	 60, 120, 240, 1440
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Time granularity, which can be:
1 day	 1, 5, 15, 30, 60, 120, 240, 1440 
2-3 days 15, 30, 60, 120, 240, 1440
4-7 days 30, 60, 120, 240, 1440
8-90 days	 60, 120, 240, 1440
                     * @param Interval Time granularity, which can be:
1 day	 1, 5, 15, 30, 60, 120, 240, 1440 
2-3 days 15, 30, 60, 120, 240, 1440
4-7 days 30, 60, 120, 240, 1440
8-90 days	 60, 120, 240, 1440
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Specifies the list of domain names to be queried

Up to 30 acceleration domain names can be queried at a time.
                     * @return Domains Specifies the list of domain names to be queried

Up to 30 acceleration domain names can be queried at a time.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Specifies the list of domain names to be queried

Up to 30 acceleration domain names can be queried at a time.
                     * @param Domains Specifies the list of domain names to be queried

Up to 30 acceleration domain names can be queried at a time.
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
If no domain name is entered, the specified project will be queried; otherwise, the domain name will prevail
                     * @return Projects Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
If no domain name is entered, the specified project will be queried; otherwise, the domain name will prevail
                     */
                    std::vector<int64_t> GetProjects() const;

                    /**
                     * 设置Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
If no domain name is entered, the specified project will be queried; otherwise, the domain name will prevail
                     * @param Projects Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
If no domain name is entered, the specified project will be queried; otherwise, the domain name will prevail
                     */
                    void SetProjects(const std::vector<int64_t>& _projects);

                    /**
                     * 判断参数 Projects 是否已赋值
                     * @return Projects 是否已赋值
                     */
                    bool ProjectsHasBeenSet() const;

                    /**
                     * 获取Statistical areas:
mainland: Chinese mainland
oversea: outside the Chinese mainland
global: global
Default value: global
                     * @return Area Statistical areas:
mainland: Chinese mainland
oversea: outside the Chinese mainland
global: global
Default value: global
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Statistical areas:
mainland: Chinese mainland
oversea: outside the Chinese mainland
global: global
Default value: global
                     * @param Area Statistical areas:
mainland: Chinese mainland
oversea: outside the Chinese mainland
global: global
Default value: global
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Query start time, such as 2019-12-13 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, such as 2019-12-13 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
2xx: returns the number of 2xx status codes or details of status codes starting with 2
3xx: returns the number of 3xx status codes or details of status codes starting with 3
4xx: returns the number of 4xx status codes or details of status codes starting with 4
5xx: returns the number of 5xx status codes or details of status codes starting with 5
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Time granularity, which can be:
1 day	 1, 5, 15, 30, 60, 120, 240, 1440 
2-3 days 15, 30, 60, 120, 240, 1440
4-7 days 30, 60, 120, 240, 1440
8-90 days	 60, 120, 240, 1440
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Specifies the list of domain names to be queried

Up to 30 acceleration domain names can be queried at a time.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
If no domain name is entered, the specified project will be queried; otherwise, the domain name will prevail
                     */
                    std::vector<int64_t> m_projects;
                    bool m_projectsHasBeenSet;

                    /**
                     * Statistical areas:
mainland: Chinese mainland
oversea: outside the Chinese mainland
global: global
Default value: global
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSREQUEST_H_
