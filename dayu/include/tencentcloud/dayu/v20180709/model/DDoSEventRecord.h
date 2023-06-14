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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSEVENTRECORD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSEVENTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DDoS attack event record
                */
                class DDoSEventRecord : public AbstractModel
                {
                public:
                    DDoSEventRecord();
                    ~DDoSEventRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
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
                     * @return Vip Resource IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Resource IP
                     * @param _vip Resource IP
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
                     * 获取Attack start time
                     * @return StartTime Attack start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Attack start time
                     * @param _startTime Attack start time
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
                     * 获取Attack end time
                     * @return EndTime Attack end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Attack end time
                     * @param _endTime Attack end time
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
                     * 获取Maximum attack bandwidth
                     * @return Mbps Maximum attack bandwidth
                     * 
                     */
                    uint64_t GetMbps() const;

                    /**
                     * 设置Maximum attack bandwidth
                     * @param _mbps Maximum attack bandwidth
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
                     * 获取Maximum attack packet rate
                     * @return Pps Maximum attack packet rate
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 设置Maximum attack packet rate
                     * @param _pps Maximum attack packet rate
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
                     * 获取Whether the IP is blocked. Valid values: [1 (yes), 0 (no), 2 (invalid value)]
                     * @return BlockFlag Whether the IP is blocked. Valid values: [1 (yes), 0 (no), 2 (invalid value)]
                     * 
                     */
                    uint64_t GetBlockFlag() const;

                    /**
                     * 设置Whether the IP is blocked. Valid values: [1 (yes), 0 (no), 2 (invalid value)]
                     * @param _blockFlag Whether the IP is blocked. Valid values: [1 (yes), 0 (no), 2 (invalid value)]
                     * 
                     */
                    void SetBlockFlag(const uint64_t& _blockFlag);

                    /**
                     * 判断参数 BlockFlag 是否已赋值
                     * @return BlockFlag 是否已赋值
                     * 
                     */
                    bool BlockFlagHasBeenSet() const;

                    /**
                     * 获取Whether the elastic protection bandwidth is exceeded. Valid values: [yes (yes), no (no), empty string (unknown value)]
                     * @return OverLoad Whether the elastic protection bandwidth is exceeded. Valid values: [yes (yes), no (no), empty string (unknown value)]
                     * 
                     */
                    std::string GetOverLoad() const;

                    /**
                     * 设置Whether the elastic protection bandwidth is exceeded. Valid values: [yes (yes), no (no), empty string (unknown value)]
                     * @param _overLoad Whether the elastic protection bandwidth is exceeded. Valid values: [yes (yes), no (no), empty string (unknown value)]
                     * 
                     */
                    void SetOverLoad(const std::string& _overLoad);

                    /**
                     * 判断参数 OverLoad 是否已赋值
                     * @return OverLoad 是否已赋值
                     * 
                     */
                    bool OverLoadHasBeenSet() const;

                    /**
                     * 获取Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * @return AttackStatus Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * 
                     */
                    uint64_t GetAttackStatus() const;

                    /**
                     * 设置Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * @param _attackStatus Attack status. Valid values: [0 (ongoing), 1 (ended)]
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
                     * 获取Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceName Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _resourceName Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Attack event ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EventId Attack event ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Attack event ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _eventId Attack event ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
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
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Attack start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Attack end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Maximum attack bandwidth
                     */
                    uint64_t m_mbps;
                    bool m_mbpsHasBeenSet;

                    /**
                     * Maximum attack packet rate
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * Attack type
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Whether the IP is blocked. Valid values: [1 (yes), 0 (no), 2 (invalid value)]
                     */
                    uint64_t m_blockFlag;
                    bool m_blockFlagHasBeenSet;

                    /**
                     * Whether the elastic protection bandwidth is exceeded. Valid values: [yes (yes), no (no), empty string (unknown value)]
                     */
                    std::string m_overLoad;
                    bool m_overLoadHasBeenSet;

                    /**
                     * Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     */
                    uint64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Attack event ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSEVENTRECORD_H_
