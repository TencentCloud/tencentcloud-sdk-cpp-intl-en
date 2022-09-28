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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBOTDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBOTDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeBotData request structure.
                */
                class DescribeBotDataRequest : public AbstractModel
                {
                public:
                    DescribeBotDataRequest();
                    ~DescribeBotDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time.
                     * @return StartTime The start time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param StartTime The start time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time.
                     * @return EndTime The end time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param EndTime The end time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取List of statistical metric. Values:
<li>`bot_interceptNum`: Blocked bot requests;</li>
<li>`bot_noneRequestNum`: Uncategorized bot requests;</li>
<li>`bot_maliciousRequestNum`: Malicious bot requests;</li>
<li>`bot_suspectedRequestNum`: Suspected bot requests;</li>
<li>`bot_friendlyRequestNum`: Friendly bot requests;</li>
<li>`bot_normalRequestNum`: Normal bot requests.</li>
                     * @return MetricNames List of statistical metric. Values:
<li>`bot_interceptNum`: Blocked bot requests;</li>
<li>`bot_noneRequestNum`: Uncategorized bot requests;</li>
<li>`bot_maliciousRequestNum`: Malicious bot requests;</li>
<li>`bot_suspectedRequestNum`: Suspected bot requests;</li>
<li>`bot_friendlyRequestNum`: Friendly bot requests;</li>
<li>`bot_normalRequestNum`: Normal bot requests.</li>
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置List of statistical metric. Values:
<li>`bot_interceptNum`: Blocked bot requests;</li>
<li>`bot_noneRequestNum`: Uncategorized bot requests;</li>
<li>`bot_maliciousRequestNum`: Malicious bot requests;</li>
<li>`bot_suspectedRequestNum`: Suspected bot requests;</li>
<li>`bot_friendlyRequestNum`: Friendly bot requests;</li>
<li>`bot_normalRequestNum`: Normal bot requests.</li>
                     * @param MetricNames List of statistical metric. Values:
<li>`bot_interceptNum`: Blocked bot requests;</li>
<li>`bot_noneRequestNum`: Uncategorized bot requests;</li>
<li>`bot_maliciousRequestNum`: Malicious bot requests;</li>
<li>`bot_suspectedRequestNum`: Suspected bot requests;</li>
<li>`bot_friendlyRequestNum`: Friendly bot requests;</li>
<li>`bot_normalRequestNum`: Normal bot requests.</li>
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * @return Domains List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * @param Domains List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Specifies sites by ID. All sites will be selected if this field is not specified.
                     * @return ZoneIds Specifies sites by ID. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Specifies sites by ID. All sites will be selected if this field is not specified.
                     * @param ZoneIds Specifies sites by ID. All sites will be selected if this field is not specified.
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * @return Interval The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * @param Interval The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`action`: The action;</li>
                     * @return QueryCondition The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`action`: The action;</li>
                     */
                    std::vector<QueryCondition> GetQueryCondition() const;

                    /**
                     * 设置The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`action`: The action;</li>
                     * @param QueryCondition The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`action`: The action;</li>
                     */
                    void SetQueryCondition(const std::vector<QueryCondition>& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     */
                    bool QueryConditionHasBeenSet() const;

                    /**
                     * 获取Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @return Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @param Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of statistical metric. Values:
<li>`bot_interceptNum`: Blocked bot requests;</li>
<li>`bot_noneRequestNum`: Uncategorized bot requests;</li>
<li>`bot_maliciousRequestNum`: Malicious bot requests;</li>
<li>`bot_suspectedRequestNum`: Suspected bot requests;</li>
<li>`bot_friendlyRequestNum`: Friendly bot requests;</li>
<li>`bot_normalRequestNum`: Normal bot requests.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Specifies sites by ID. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`action`: The action;</li>
                     */
                    std::vector<QueryCondition> m_queryCondition;
                    bool m_queryConditionHasBeenSet;

                    /**
                     * Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBOTDATAREQUEST_H_
