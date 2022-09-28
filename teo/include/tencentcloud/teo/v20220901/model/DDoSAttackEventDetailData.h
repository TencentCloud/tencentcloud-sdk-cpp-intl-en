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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENTDETAILDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENTDETAILDATA_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The details of a DDoS attack event
                */
                class DDoSAttackEventDetailData : public AbstractModel
                {
                public:
                    DDoSAttackEventDetailData();
                    ~DDoSAttackEventDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The attack status. Values:
<li>`1`: The attack is being observed;</li>
<li>`2`: The attack started;</li>
<li>`3`: The attack ended.</li>
                     * @return AttackStatus The attack status. Values:
<li>`1`: The attack is being observed;</li>
<li>`2`: The attack started;</li>
<li>`3`: The attack ended.</li>
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置The attack status. Values:
<li>`1`: The attack is being observed;</li>
<li>`2`: The attack started;</li>
<li>`3`: The attack ended.</li>
                     * @param AttackStatus The attack status. Values:
<li>`1`: The attack is being observed;</li>
<li>`2`: The attack started;</li>
<li>`3`: The attack ended.</li>
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     */
                    bool AttackStatusHasBeenSet() const;

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
                     * 获取The end time.
                     * @return EndTime The end time.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param EndTime The end time.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The start time.
                     * @return StartTime The start time.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param StartTime The start time.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The maximum bandwidth.
                     * @return MaxBandWidth The maximum bandwidth.
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置The maximum bandwidth.
                     * @param MaxBandWidth The maximum bandwidth.
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取The maximum packet rate.
                     * @return PacketMaxRate The maximum packet rate.
                     */
                    int64_t GetPacketMaxRate() const;

                    /**
                     * 设置The maximum packet rate.
                     * @param PacketMaxRate The maximum packet rate.
                     */
                    void SetPacketMaxRate(const int64_t& _packetMaxRate);

                    /**
                     * 判断参数 PacketMaxRate 是否已赋值
                     * @return PacketMaxRate 是否已赋值
                     */
                    bool PacketMaxRateHasBeenSet() const;

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
                     * 获取The DDoS policy ID.
                     * @return PolicyId The DDoS policy ID.
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置The DDoS policy ID.
                     * @param PolicyId The DDoS policy ID.
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * The attack status. Values:
<li>`1`: The attack is being observed;</li>
<li>`2`: The attack started;</li>
<li>`3`: The attack ended.</li>
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * The attack type.
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * The end time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The maximum bandwidth.
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * The maximum packet rate.
                     */
                    int64_t m_packetMaxRate;
                    bool m_packetMaxRateHasBeenSet;

                    /**
                     * The event ID.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * The DDoS policy ID.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENTDETAILDATA_H_
