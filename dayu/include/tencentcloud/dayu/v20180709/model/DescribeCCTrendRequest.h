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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCTRENDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCTrend request structure.
                */
                class DescribeCCTrendRequest : public AbstractModel
                {
                public:
                    DescribeCCTrendRequest();
                    ~DescribeCCTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @param Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Resource IP
                     * @return Ip Resource IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Resource IP
                     * @param Ip Resource IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Metric. Valid values: [inqps (total requests peak), dropqps (attack requests peak)]
                     * @return MetricName Metric. Valid values: [inqps (total requests peak), dropqps (attack requests peak)]
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric. Valid values: [inqps (total requests peak), dropqps (attack requests peak)]
                     * @param MetricName Metric. Valid values: [inqps (total requests peak), dropqps (attack requests peak)]
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     * @return Period Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     * @param Period Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Statistics start time
                     * @return StartTime Statistics start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Statistics start time
                     * @param StartTime Statistics start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Statistics end time
                     * @return EndTime Statistics end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Statistics end time
                     * @param EndTime Statistics end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Resource instance ID. If `Business` is `basic`, this field is not required (because Anti-DDoS Basic has no resource instance)
                     * @return Id Resource instance ID. If `Business` is `basic`, this field is not required (because Anti-DDoS Basic has no resource instance)
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource instance ID. If `Business` is `basic`, this field is not required (because Anti-DDoS Basic has no resource instance)
                     * @param Id Resource instance ID. If `Business` is `basic`, this field is not required (because Anti-DDoS Basic has no resource instance)
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取(Optional) Domain name
                     * @return Domain (Optional) Domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置(Optional) Domain name
                     * @param Domain (Optional) Domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Resource IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Metric. Valid values: [inqps (total requests peak), dropqps (attack requests peak)]
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Statistics start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Statistics end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Resource instance ID. If `Business` is `basic`, this field is not required (because Anti-DDoS Basic has no resource instance)
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * (Optional) Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCTRENDREQUEST_H_
