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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS attack event object
                */
                class DDosAttackEvent : public AbstractModel
                {
                public:
                    DDosAttackEvent();
                    ~DDosAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS policy group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId DDoS policy group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置DDoS policy group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PolicyId DDoS policy group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Attack type (corresponding to interaction event name)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackType Attack type (corresponding to interaction event name)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置Attack type (corresponding to interaction event name)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackType Attack type (corresponding to interaction event name)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取Attack status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackStatus Attack status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置Attack status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackStatus Attack status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取Maximum attack bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackMaxBandWidth Maximum attack bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置Maximum attack bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackMaxBandWidth Maximum attack bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Peak attack packet rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackPacketMaxRate Peak attack packet rate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttackPacketMaxRate() const;

                    /**
                     * 设置Peak attack packet rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackPacketMaxRate Peak attack packet rate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate);

                    /**
                     * 判断参数 AttackPacketMaxRate 是否已赋值
                     * @return AttackPacketMaxRate 是否已赋值
                     */
                    bool AttackPacketMaxRateHasBeenSet() const;

                    /**
                     * 获取Attack start time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackStartTime Attack start time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttackStartTime() const;

                    /**
                     * 设置Attack start time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackStartTime Attack start time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackStartTime(const int64_t& _attackStartTime);

                    /**
                     * 判断参数 AttackStartTime 是否已赋值
                     * @return AttackStartTime 是否已赋值
                     */
                    bool AttackStartTimeHasBeenSet() const;

                    /**
                     * 获取Attack end time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackEndTime Attack end time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttackEndTime() const;

                    /**
                     * 设置Attack end time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackEndTime Attack end time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackEndTime(const int64_t& _attackEndTime);

                    /**
                     * 判断参数 AttackEndTime 是否已赋值
                     * @return AttackEndTime 是否已赋值
                     */
                    bool AttackEndTimeHasBeenSet() const;

                    /**
                     * 获取Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EventId Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Site ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Site ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ZoneId Site ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * DDoS policy group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Attack type (corresponding to interaction event name)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Attack status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * Maximum attack bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * Peak attack packet rate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackPacketMaxRate;
                    bool m_attackPacketMaxRateHasBeenSet;

                    /**
                     * Attack start time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackStartTime;
                    bool m_attackStartTimeHasBeenSet;

                    /**
                     * Attack end time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackEndTime;
                    bool m_attackEndTimeHasBeenSet;

                    /**
                     * Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Site ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENT_H_
