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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSALARMTHRESHOLDREQUEST_H_

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
                * ModifyDDoSAlarmThreshold request structure.
                */
                class ModifyDDoSAlarmThresholdRequest : public AbstractModel
                {
                public:
                    ModifyDDoSAlarmThresholdRequest();
                    ~ModifyDDoSAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`shield`: Chess Shield, `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate)
                     * @return Business Anti-DDoS service type (`shield`: Chess Shield, `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`shield`: Chess Shield, `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate)
                     * @param _business Anti-DDoS service type (`shield`: Chess Shield, `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate)
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
                     * @return RsId Anti-DDoS instance ID
                     * 
                     */
                    std::string GetRsId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _rsId Anti-DDoS instance ID
                     * 
                     */
                    void SetRsId(const std::string& _rsId);

                    /**
                     * 判断参数 RsId 是否已赋值
                     * @return RsId 是否已赋值
                     * 
                     */
                    bool RsIdHasBeenSet() const;

                    /**
                     * 获取Alarm threshold type. 0: not set, 1: inbound traffic, 2: cleansed traffic
                     * @return AlarmType Alarm threshold type. 0: not set, 1: inbound traffic, 2: cleansed traffic
                     * 
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 设置Alarm threshold type. 0: not set, 1: inbound traffic, 2: cleansed traffic
                     * @param _alarmType Alarm threshold type. 0: not set, 1: inbound traffic, 2: cleansed traffic
                     * 
                     */
                    void SetAlarmType(const uint64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold, which should be greater than 0 (currently scheduled value)
                     * @return AlarmThreshold Alarm threshold, which should be greater than 0 (currently scheduled value)
                     * 
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置Alarm threshold, which should be greater than 0 (currently scheduled value)
                     * @param _alarmThreshold Alarm threshold, which should be greater than 0 (currently scheduled value)
                     * 
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     * 
                     */
                    bool AlarmThresholdHasBeenSet() const;

                    /**
                     * 获取List of IPs associated with resource. If no Anti-DDoS Pro instance is bound, pass in an empty array. For Anti-DDoS Ultimate, pass in multiple IPs
                     * @return IpList List of IPs associated with resource. If no Anti-DDoS Pro instance is bound, pass in an empty array. For Anti-DDoS Ultimate, pass in multiple IPs
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置List of IPs associated with resource. If no Anti-DDoS Pro instance is bound, pass in an empty array. For Anti-DDoS Ultimate, pass in multiple IPs
                     * @param _ipList List of IPs associated with resource. If no Anti-DDoS Pro instance is bound, pass in an empty array. For Anti-DDoS Ultimate, pass in multiple IPs
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`shield`: Chess Shield, `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_rsId;
                    bool m_rsIdHasBeenSet;

                    /**
                     * Alarm threshold type. 0: not set, 1: inbound traffic, 2: cleansed traffic
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Alarm threshold, which should be greater than 0 (currently scheduled value)
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                    /**
                     * List of IPs associated with resource. If no Anti-DDoS Pro instance is bound, pass in an empty array. For Anti-DDoS Ultimate, pass in multiple IPs
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSALARMTHRESHOLDREQUEST_H_
