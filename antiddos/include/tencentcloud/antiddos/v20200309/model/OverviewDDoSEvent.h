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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_OVERVIEWDDOSEVENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_OVERVIEWDDOSEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DDoS events recorded
                */
                class OverviewDDoSEvent : public AbstractModel
                {
                public:
                    OverviewDDoSEvent();
                    ~OverviewDDoSEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
                     * @return Id Event ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
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
                     * 获取IP
                     * @return Vip IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP
                     * @param _vip IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Attack type
                     * @return AttackType Attack type
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type
                     * @param _attackType Attack type
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取Attack status. `0`: The attack is ongoing; `1`: The attack ends.
                     * @return AttackStatus Attack status. `0`: The attack is ongoing; `1`: The attack ends.
                     * 
                     */
                    uint64_t GetAttackStatus() const;

                    /**
                     * 设置Attack status. `0`: The attack is ongoing; `1`: The attack ends.
                     * @param _attackStatus Attack status. `0`: The attack is ongoing; `1`: The attack ends.
                     * 
                     */
                    void SetAttackStatus(const uint64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取Attack traffic, in Mbps
                     * @return Mbps Attack traffic, in Mbps
                     * 
                     */
                    uint64_t GetMbps() const;

                    /**
                     * 设置Attack traffic, in Mbps
                     * @param _mbps Attack traffic, in Mbps
                     * 
                     */
                    void SetMbps(const uint64_t& _mbps);

                    /**
                     * 判断参数 Mbps 是否已赋值
                     * @return Mbps 是否已赋值
                     * 
                     */
                    bool MbpsHasBeenSet() const;

                    /**
                     * 获取Attack packets, in PPS
                     * @return Pps Attack packets, in PPS
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 设置Attack packets, in PPS
                     * @param _pps Attack packets, in PPS
                     * 
                     */
                    void SetPps(const uint64_t& _pps);

                    /**
                     * 判断参数 Pps 是否已赋值
                     * @return Pps 是否已赋值
                     * 
                     */
                    bool PpsHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS service type. `bgp-multip`: Anti-DDoS Pro; `bgpip`: Anti-DDoS Advanced; `basic`: Anti-DDoS Basic.
                     * @return Business Anti-DDoS service type. `bgp-multip`: Anti-DDoS Pro; `bgpip`: Anti-DDoS Advanced; `basic`: Anti-DDoS Basic.
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgp-multip`: Anti-DDoS Pro; `bgpip`: Anti-DDoS Advanced; `basic`: Anti-DDoS Basic.
                     * @param _business Anti-DDoS service type. `bgp-multip`: Anti-DDoS Pro; `bgpip`: Anti-DDoS Advanced; `basic`: Anti-DDoS Basic.
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
                     * @return InstanceId Anti-DDoS instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _instanceId Anti-DDoS instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance name
                     * @return InstanceName Anti-DDoS instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Anti-DDoS instance name
                     * @param _instanceName Anti-DDoS instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Event ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Attack type
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Attack status. `0`: The attack is ongoing; `1`: The attack ends.
                     */
                    uint64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * Attack traffic, in Mbps
                     */
                    uint64_t m_mbps;
                    bool m_mbpsHasBeenSet;

                    /**
                     * Attack packets, in PPS
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * Anti-DDoS service type. `bgp-multip`: Anti-DDoS Pro; `bgpip`: Anti-DDoS Advanced; `basic`: Anti-DDoS Basic.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Anti-DDoS instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_OVERVIEWDDOSEVENT_H_
