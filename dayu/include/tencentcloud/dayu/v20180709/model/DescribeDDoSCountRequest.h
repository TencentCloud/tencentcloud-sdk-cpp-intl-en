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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSCOUNTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSCOUNTREQUEST_H_

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
                * DescribeDDoSCount request structure.
                */
                class DescribeDDoSCountRequest : public AbstractModel
                {
                public:
                    DescribeDDoSCountRequest();
                    ~DescribeDDoSCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Resource IP
                     * @return Ip Resource IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Resource IP
                     * @param _ip Resource IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Statistics start time
                     * @return StartTime Statistics start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Statistics start time
                     * @param _startTime Statistics start time
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
                     * 获取Statistics end time
                     * @return EndTime Statistics end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Statistics end time
                     * @param _endTime Statistics end time
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
                     * 获取Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     * @return MetricName Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     * @param _metricName Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Resource IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

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
                     * Metric. Valid values: [traffic (attack protocol traffic in KB), pkg (number of attack protocol packets), classnum (number of attack events)]
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSCOUNTREQUEST_H_
