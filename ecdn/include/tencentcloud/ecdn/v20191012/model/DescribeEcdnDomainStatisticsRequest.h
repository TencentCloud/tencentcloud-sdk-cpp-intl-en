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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINSTATISTICSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINSTATISTICSREQUEST_H_

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
                * DescribeEcdnDomainStatistics request structure.
                */
                class DescribeEcdnDomainStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeEcdnDomainStatisticsRequest();
                    ~DescribeEcdnDomainStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time, such as 2019-12-13 00:00:00.
The time span cannot exceed 90 days.
                     * @return StartTime Query start time, such as 2019-12-13 00:00:00.
The time span cannot exceed 90 days.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time, such as 2019-12-13 00:00:00.
The time span cannot exceed 90 days.
                     * @param StartTime Query start time, such as 2019-12-13 00:00:00.
The time span cannot exceed 90 days.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time, such as 2019-12-13 23:59:59.
The time span cannot exceed 90 days.
                     * @return EndTime Query end time, such as 2019-12-13 23:59:59.
The time span cannot exceed 90 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time, such as 2019-12-13 23:59:59.
The time span cannot exceed 90 days.
                     * @param EndTime Query end time, such as 2019-12-13 23:59:59.
The time span cannot exceed 90 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Statistical metric names:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
                     * @return Metrics Statistical metric names:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置Statistical metric names:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
                     * @param Metrics Statistical metric names:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Specifies the list of domain names to be queried
                     * @return Domains Specifies the list of domain names to be queried
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Specifies the list of domain names to be queried
                     * @param Domains Specifies the list of domain names to be queried
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
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param Offset Pagination offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Default value: 1000. Maximum value: 3,000.
                     * @return Limit Number of entries per page. Default value: 1000. Maximum value: 3,000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 1000. Maximum value: 3,000.
                     * @param Limit Number of entries per page. Default value: 1000. Maximum value: 3,000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

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
                     * Query start time, such as 2019-12-13 00:00:00.
The time span cannot exceed 90 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, such as 2019-12-13 23:59:59.
The time span cannot exceed 90 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistical metric names:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Specifies the list of domain names to be queried
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
                     * Pagination offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 1000. Maximum value: 3,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

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

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINSTATISTICSREQUEST_H_
