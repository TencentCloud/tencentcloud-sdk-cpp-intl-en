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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENTDETAILDATA_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENTDETAILDATA_H_

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
                * DDoS attack event details
                */
                class DDosAttackEventDetailData : public AbstractModel
                {
                public:
                    DDosAttackEventDetailData();
                    ~DDosAttackEventDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack status
                     * @return AttackStatus Attack status
                     * 
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置Attack status
                     * @param _attackStatus Attack status
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth
                     * @return MaxBandWidth Maximum bandwidth
                     * 
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置Maximum bandwidth
                     * @param _maxBandWidth Maximum bandwidth
                     * 
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Maximum packet rate
                     * @return PacketMaxRate Maximum packet rate
                     * 
                     */
                    int64_t GetPacketMaxRate() const;

                    /**
                     * 设置Maximum packet rate
                     * @param _packetMaxRate Maximum packet rate
                     * 
                     */
                    void SetPacketMaxRate(const int64_t& _packetMaxRate);

                    /**
                     * 判断参数 PacketMaxRate 是否已赋值
                     * @return PacketMaxRate 是否已赋值
                     * 
                     */
                    bool PacketMaxRateHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return EventId Event ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param _eventId Event ID
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
                     * 获取DDoS policy group ID
                     * @return PolicyId DDoS policy group ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置DDoS policy group ID
                     * @param _policyId DDoS policy group ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Attack status
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * Attack type
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * End time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Start time
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Maximum bandwidth
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Maximum packet rate
                     */
                    int64_t m_packetMaxRate;
                    bool m_packetMaxRateHasBeenSet;

                    /**
                     * Event ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * DDoS policy group ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENTDETAILDATA_H_
