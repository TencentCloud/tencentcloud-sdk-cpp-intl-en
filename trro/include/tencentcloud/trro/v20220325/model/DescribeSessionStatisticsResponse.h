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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeSessionStatistics response structure.
                */
                class DescribeSessionStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeSessionStatisticsResponse();
                    ~DescribeSessionStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of sessions.
                     * @return SessionNum Number of sessions.
                     * 
                     */
                    uint64_t GetSessionNum() const;

                    /**
                     * 判断参数 SessionNum 是否已赋值
                     * @return SessionNum 是否已赋值
                     * 
                     */
                    bool SessionNumHasBeenSet() const;

                    /**
                     * 获取Call duration, unit: minutes.
                     * @return TotalDuration Call duration, unit: minutes.
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取Number of active on-site devices.
                     * @return ActiveFieldDeviceNum Number of active on-site devices.
                     * 
                     */
                    uint64_t GetActiveFieldDeviceNum() const;

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
                     * 判断参数 ActiveRemoteDeviceNum 是否已赋值
                     * @return ActiveRemoteDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveRemoteDeviceNumHasBeenSet() const;

                    /**
                     * 获取Proportion of excellent sessions, unit: %.
                     * @return NotBadSessionRatio Proportion of excellent sessions, unit: %.
                     * 
                     */
                    uint64_t GetNotBadSessionRatio() const;

                    /**
                     * 判断参数 NotBadSessionRatio 是否已赋值
                     * @return NotBadSessionRatio 是否已赋值
                     * 
                     */
                    bool NotBadSessionRatioHasBeenSet() const;

                private:

                    /**
                     * Number of sessions.
                     */
                    uint64_t m_sessionNum;
                    bool m_sessionNumHasBeenSet;

                    /**
                     * Call duration, unit: minutes.
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

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
                     * Proportion of excellent sessions, unit: %.
                     */
                    uint64_t m_notBadSessionRatio;
                    bool m_notBadSessionRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSRESPONSE_H_
