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
                * Information of the DDoS attacker
                */
                class DDoSAttackEvent : public AbstractModel
                {
                public:
                    DDoSAttackEvent();
                    ~DDoSAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The event ID.
                     * @return EventId The event ID.
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置The event ID.
                     * @param EventId The event ID.
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取The attack type.
                     * @return AttackType The attack type.
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置The attack type.
                     * @param AttackType The attack type.
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取The attack status.
                     * @return AttackStatus The attack status.
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置The attack status.
                     * @param AttackStatus The attack status.
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取The maximum attack bandwidth.
                     * @return AttackMaxBandWidth The maximum attack bandwidth.
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置The maximum attack bandwidth.
                     * @param AttackMaxBandWidth The maximum attack bandwidth.
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取The peak attack packet rate.
                     * @return AttackPacketMaxRate The peak attack packet rate.
                     */
                    int64_t GetAttackPacketMaxRate() const;

                    /**
                     * 设置The peak attack packet rate.
                     * @param AttackPacketMaxRate The peak attack packet rate.
                     */
                    void SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate);

                    /**
                     * 判断参数 AttackPacketMaxRate 是否已赋值
                     * @return AttackPacketMaxRate 是否已赋值
                     */
                    bool AttackPacketMaxRateHasBeenSet() const;

                    /**
                     * 获取The attack start time recorded in seconds.
                     * @return AttackStartTime The attack start time recorded in seconds.
                     */
                    int64_t GetAttackStartTime() const;

                    /**
                     * 设置The attack start time recorded in seconds.
                     * @param AttackStartTime The attack start time recorded in seconds.
                     */
                    void SetAttackStartTime(const int64_t& _attackStartTime);

                    /**
                     * 判断参数 AttackStartTime 是否已赋值
                     * @return AttackStartTime 是否已赋值
                     */
                    bool AttackStartTimeHasBeenSet() const;

                    /**
                     * 获取The attack end time recorded in seconds.
                     * @return AttackEndTime The attack end time recorded in seconds.
                     */
                    int64_t GetAttackEndTime() const;

                    /**
                     * 设置The attack end time recorded in seconds.
                     * @param AttackEndTime The attack end time recorded in seconds.
                     */
                    void SetAttackEndTime(const int64_t& _attackEndTime);

                    /**
                     * 判断参数 AttackEndTime 是否已赋值
                     * @return AttackEndTime 是否已赋值
                     */
                    bool AttackEndTimeHasBeenSet() const;

                    /**
                     * 获取The DDoS policy ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PolicyId The DDoS policy ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置The DDoS policy ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @param PolicyId The DDoS policy ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取The site ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ZoneId The site ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @param ZoneId The site ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Area Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Area Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The blocking time of a DDoS attack. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DDoSBlockData The blocking time of a DDoS attack. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<DDoSBlockData> GetDDoSBlockData() const;

                    /**
                     * 设置The blocking time of a DDoS attack. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @param DDoSBlockData The blocking time of a DDoS attack. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetDDoSBlockData(const std::vector<DDoSBlockData>& _dDoSBlockData);

                    /**
                     * 判断参数 DDoSBlockData 是否已赋值
                     * @return DDoSBlockData 是否已赋值
                     */
                    bool DDoSBlockDataHasBeenSet() const;

                private:

                    /**
                     * The event ID.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * The attack type.
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * The attack status.
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * The maximum attack bandwidth.
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * The peak attack packet rate.
                     */
                    int64_t m_attackPacketMaxRate;
                    bool m_attackPacketMaxRateHasBeenSet;

                    /**
                     * The attack start time recorded in seconds.
                     */
                    int64_t m_attackStartTime;
                    bool m_attackStartTimeHasBeenSet;

                    /**
                     * The attack end time recorded in seconds.
                     */
                    int64_t m_attackEndTime;
                    bool m_attackEndTimeHasBeenSet;

                    /**
                     * The DDoS policy ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The site ID. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The blocking time of a DDoS attack. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<DDoSBlockData> m_dDoSBlockData;
                    bool m_dDoSBlockDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_
