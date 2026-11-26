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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSBlockData.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS attack event objects
                */
                class DDoSAttackEvent : public AbstractModel
                {
                public:
                    DDoSAttackEvent();
                    ~DDoSAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Event ID.</p>
                     * @return EventId <p>Event ID.</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>Event ID.</p>
                     * @param _eventId <p>Event ID.</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>Attack type.</p>
                     * @return AttackType <p>Attack type.</p>
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置<p>Attack type.</p>
                     * @param _attackType <p>Attack type.</p>
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
                     * 获取<p>Attack status.</p><p>Enumeration values:</p><ul><li>0: Observing</li><li>1: Attacking</li><li>2: Attack ended</li></ul>
                     * @return AttackStatus <p>Attack status.</p><p>Enumeration values:</p><ul><li>0: Observing</li><li>1: Attacking</li><li>2: Attack ended</li></ul>
                     * 
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置<p>Attack status.</p><p>Enumeration values:</p><ul><li>0: Observing</li><li>1: Attacking</li><li>2: Attack ended</li></ul>
                     * @param _attackStatus <p>Attack status.</p><p>Enumeration values:</p><ul><li>0: Observing</li><li>1: Attacking</li><li>2: Attack ended</li></ul>
                     * 
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取<p>Maximum attack bandwidth, in bps.</p>
                     * @return AttackMaxBandWidth <p>Maximum attack bandwidth, in bps.</p>
                     * 
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置<p>Maximum attack bandwidth, in bps.</p>
                     * @param _attackMaxBandWidth <p>Maximum attack bandwidth, in bps.</p>
                     * 
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     * 
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取<p>Peak attack packet rate, unit: pps.</p>
                     * @return AttackPacketMaxRate <p>Peak attack packet rate, unit: pps.</p>
                     * 
                     */
                    int64_t GetAttackPacketMaxRate() const;

                    /**
                     * 设置<p>Peak attack packet rate, unit: pps.</p>
                     * @param _attackPacketMaxRate <p>Peak attack packet rate, unit: pps.</p>
                     * 
                     */
                    void SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate);

                    /**
                     * 判断参数 AttackPacketMaxRate 是否已赋值
                     * @return AttackPacketMaxRate 是否已赋值
                     * 
                     */
                    bool AttackPacketMaxRateHasBeenSet() const;

                    /**
                     * 获取<p>Attack start timestamp.</p><p>Unit: second</p>
                     * @return AttackStartTime <p>Attack start timestamp.</p><p>Unit: second</p>
                     * 
                     */
                    int64_t GetAttackStartTime() const;

                    /**
                     * 设置<p>Attack start timestamp.</p><p>Unit: second</p>
                     * @param _attackStartTime <p>Attack start timestamp.</p><p>Unit: second</p>
                     * 
                     */
                    void SetAttackStartTime(const int64_t& _attackStartTime);

                    /**
                     * 判断参数 AttackStartTime 是否已赋值
                     * @return AttackStartTime 是否已赋值
                     * 
                     */
                    bool AttackStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Attack end timestamp.</p><p>Unit: second</p>
                     * @return AttackEndTime <p>Attack end timestamp.</p><p>Unit: second</p>
                     * 
                     */
                    int64_t GetAttackEndTime() const;

                    /**
                     * 设置<p>Attack end timestamp.</p><p>Unit: second</p>
                     * @param _attackEndTime <p>Attack end timestamp.</p><p>Unit: second</p>
                     * 
                     */
                    void SetAttackEndTime(const int64_t& _attackEndTime);

                    /**
                     * 判断参数 AttackEndTime 是否已赋值
                     * @return AttackEndTime 是否已赋值
                     * 
                     */
                    bool AttackEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>DDoS policy group ID.</p>
                     * @return PolicyId <p>DDoS policy group ID.</p>
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置<p>DDoS policy group ID.</p>
                     * @param _policyId <p>DDoS policy group ID.</p>
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Zone ID.</p>
                     * @return ZoneId <p>Zone ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Zone ID.</p>
                     * @param _zoneId <p>Zone ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Region of the attack event.</p><p>Enumeration values:</p><ul><li>overseas: global (excluding the Chinese mainland) data;</li><li>mainland: Chinese mainland data.</li></ul>
                     * @return Area <p>Region of the attack event.</p><p>Enumeration values:</p><ul><li>overseas: global (excluding the Chinese mainland) data;</li><li>mainland: Chinese mainland data.</li></ul>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Region of the attack event.</p><p>Enumeration values:</p><ul><li>overseas: global (excluding the Chinese mainland) data;</li><li>mainland: Chinese mainland data.</li></ul>
                     * @param _area <p>Region of the attack event.</p><p>Enumeration values:</p><ul><li>overseas: global (excluding the Chinese mainland) data;</li><li>mainland: Chinese mainland data.</li></ul>
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
                     * 获取<p>Block and unblock info.</p>
                     * @return DDoSBlockData <p>Block and unblock info.</p>
                     * 
                     */
                    std::vector<DDoSBlockData> GetDDoSBlockData() const;

                    /**
                     * 设置<p>Block and unblock info.</p>
                     * @param _dDoSBlockData <p>Block and unblock info.</p>
                     * 
                     */
                    void SetDDoSBlockData(const std::vector<DDoSBlockData>& _dDoSBlockData);

                    /**
                     * 判断参数 DDoSBlockData 是否已赋值
                     * @return DDoSBlockData 是否已赋值
                     * 
                     */
                    bool DDoSBlockDataHasBeenSet() const;

                    /**
                     * 获取<p>List of target IPs under DDoS attack.</p>
                     * @return DDoSAttackDips <p>List of target IPs under DDoS attack.</p>
                     * 
                     */
                    std::vector<std::string> GetDDoSAttackDips() const;

                    /**
                     * 设置<p>List of target IPs under DDoS attack.</p>
                     * @param _dDoSAttackDips <p>List of target IPs under DDoS attack.</p>
                     * 
                     */
                    void SetDDoSAttackDips(const std::vector<std::string>& _dDoSAttackDips);

                    /**
                     * 判断参数 DDoSAttackDips 是否已赋值
                     * @return DDoSAttackDips 是否已赋值
                     * 
                     */
                    bool DDoSAttackDipsHasBeenSet() const;

                private:

                    /**
                     * <p>Event ID.</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>Attack type.</p>
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * <p>Attack status.</p><p>Enumeration values:</p><ul><li>0: Observing</li><li>1: Attacking</li><li>2: Attack ended</li></ul>
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * <p>Maximum attack bandwidth, in bps.</p>
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * <p>Peak attack packet rate, unit: pps.</p>
                     */
                    int64_t m_attackPacketMaxRate;
                    bool m_attackPacketMaxRateHasBeenSet;

                    /**
                     * <p>Attack start timestamp.</p><p>Unit: second</p>
                     */
                    int64_t m_attackStartTime;
                    bool m_attackStartTimeHasBeenSet;

                    /**
                     * <p>Attack end timestamp.</p><p>Unit: second</p>
                     */
                    int64_t m_attackEndTime;
                    bool m_attackEndTimeHasBeenSet;

                    /**
                     * <p>DDoS policy group ID.</p>
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>Zone ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Region of the attack event.</p><p>Enumeration values:</p><ul><li>overseas: global (excluding the Chinese mainland) data;</li><li>mainland: Chinese mainland data.</li></ul>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Block and unblock info.</p>
                     */
                    std::vector<DDoSBlockData> m_dDoSBlockData;
                    bool m_dDoSBlockDataHasBeenSet;

                    /**
                     * <p>List of target IPs under DDoS attack.</p>
                     */
                    std::vector<std::string> m_dDoSAttackDips;
                    bool m_dDoSAttackDipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_
