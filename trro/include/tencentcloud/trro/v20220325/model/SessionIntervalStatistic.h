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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONINTERVALSTATISTIC_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONINTERVALSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * Session statistics data in a unit time interval
                */
                class SessionIntervalStatistic : public AbstractModel
                {
                public:
                    SessionIntervalStatistic();
                    ~SessionIntervalStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of active on-site devices.
                     * @return ActiveFieldDeviceNum Number of active on-site devices.
                     * 
                     */
                    uint64_t GetActiveFieldDeviceNum() const;

                    /**
                     * 设置Number of active on-site devices.
                     * @param _activeFieldDeviceNum Number of active on-site devices.
                     * 
                     */
                    void SetActiveFieldDeviceNum(const uint64_t& _activeFieldDeviceNum);

                    /**
                     * 判断参数 ActiveFieldDeviceNum 是否已赋值
                     * @return ActiveFieldDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveFieldDeviceNumHasBeenSet() const;

                    /**
                     * 获取Number of active remote devices.
                     * @return ActiveRemoteDeviceNum Number of active remote devices.
                     * 
                     */
                    uint64_t GetActiveRemoteDeviceNum() const;

                    /**
                     * 设置Number of active remote devices.
                     * @param _activeRemoteDeviceNum Number of active remote devices.
                     * 
                     */
                    void SetActiveRemoteDeviceNum(const uint64_t& _activeRemoteDeviceNum);

                    /**
                     * 判断参数 ActiveRemoteDeviceNum 是否已赋值
                     * @return ActiveRemoteDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveRemoteDeviceNumHasBeenSet() const;

                    /**
                     * 获取Number of sessions.
                     * @return SessionNum Number of sessions.
                     * 
                     */
                    uint64_t GetSessionNum() const;

                    /**
                     * 设置Number of sessions.
                     * @param _sessionNum Number of sessions.
                     * 
                     */
                    void SetSessionNum(const uint64_t& _sessionNum);

                    /**
                     * 判断参数 SessionNum 是否已赋值
                     * @return SessionNum 是否已赋值
                     * 
                     */
                    bool SessionNumHasBeenSet() const;

                    /**
                     * 获取Session age, unit: minutes.
                     * @return TotalDuration Session age, unit: minutes.
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 设置Session age, unit: minutes.
                     * @param _totalDuration Session age, unit: minutes.
                     * 
                     */
                    void SetTotalDuration(const uint64_t& _totalDuration);

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取Timestamp in seconds.
                     * @return StartTime Timestamp in seconds.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Timestamp in seconds.
                     * @param _startTime Timestamp in seconds.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Timestamp in seconds.
                     * @return EndTime Timestamp in seconds.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Timestamp in seconds.
                     * @param _endTime Timestamp in seconds.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Proportion of excellent sessions, unit: %.
                     * @return NotBadSessionRatio Proportion of excellent sessions, unit: %.
                     * 
                     */
                    uint64_t GetNotBadSessionRatio() const;

                    /**
                     * 设置Proportion of excellent sessions, unit: %.
                     * @param _notBadSessionRatio Proportion of excellent sessions, unit: %.
                     * 
                     */
                    void SetNotBadSessionRatio(const uint64_t& _notBadSessionRatio);

                    /**
                     * 判断参数 NotBadSessionRatio 是否已赋值
                     * @return NotBadSessionRatio 是否已赋值
                     * 
                     */
                    bool NotBadSessionRatioHasBeenSet() const;

                private:

                    /**
                     * Number of active on-site devices.
                     */
                    uint64_t m_activeFieldDeviceNum;
                    bool m_activeFieldDeviceNumHasBeenSet;

                    /**
                     * Number of active remote devices.
                     */
                    uint64_t m_activeRemoteDeviceNum;
                    bool m_activeRemoteDeviceNumHasBeenSet;

                    /**
                     * Number of sessions.
                     */
                    uint64_t m_sessionNum;
                    bool m_sessionNumHasBeenSet;

                    /**
                     * Session age, unit: minutes.
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * Timestamp in seconds.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Timestamp in seconds.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Proportion of excellent sessions, unit: %.
                     */
                    uint64_t m_notBadSessionRatio;
                    bool m_notBadSessionRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONINTERVALSTATISTIC_H_
