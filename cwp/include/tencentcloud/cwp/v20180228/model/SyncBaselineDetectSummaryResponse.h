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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SYNCBASELINEDETECTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SYNCBASELINEDETECTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SyncBaselineDetectSummary response structure.
                */
                class SyncBaselineDetectSummaryResponse : public AbstractModel
                {
                public:
                    SyncBaselineDetectSummaryResponse();
                    ~SyncBaselineDetectSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Processing progress
                     * @return ProgressRate Processing progress
                     * 
                     */
                    int64_t GetProgressRate() const;

                    /**
                     * 判断参数 ProgressRate 是否已赋值
                     * @return ProgressRate 是否已赋值
                     * 
                     */
                    bool ProgressRateHasBeenSet() const;

                    /**
                     * 获取Total number of failed policies
                     * @return NotPassPolicyCount Total number of failed policies
                     * 
                     */
                    int64_t GetNotPassPolicyCount() const;

                    /**
                     * 判断参数 NotPassPolicyCount 是否已赋值
                     * @return NotPassPolicyCount 是否已赋值
                     * 
                     */
                    bool NotPassPolicyCountHasBeenSet() const;

                    /**
                     * 获取Total number of hosts
                     * @return HostCount Total number of hosts
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

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
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取1: first scan about to start; 0: already scanned.
                     * @return WillFirstScan 1: first scan about to start; 0: already scanned.
                     * 
                     */
                    int64_t GetWillFirstScan() const;

                    /**
                     * 判断参数 WillFirstScan 是否已赋值
                     * @return WillFirstScan 是否已赋值
                     * 
                     */
                    bool WillFirstScanHasBeenSet() const;

                    /**
                     * 获取ID of ongoing detection task
                     * @return DetectingTaskIds ID of ongoing detection task
                     * 
                     */
                    std::vector<int64_t> GetDetectingTaskIds() const;

                    /**
                     * 判断参数 DetectingTaskIds 是否已赋值
                     * @return DetectingTaskIds 是否已赋值
                     * 
                     */
                    bool DetectingTaskIdsHasBeenSet() const;

                    /**
                     * 获取Remaining scanning time (minutes)
                     * @return LeftMins Remaining scanning time (minutes)
                     * 
                     */
                    int64_t GetLeftMins() const;

                    /**
                     * 判断参数 LeftMins 是否已赋值
                     * @return LeftMins 是否已赋值
                     * 
                     */
                    bool LeftMinsHasBeenSet() const;

                private:

                    /**
                     * Processing progress
                     */
                    int64_t m_progressRate;
                    bool m_progressRateHasBeenSet;

                    /**
                     * Total number of failed policies
                     */
                    int64_t m_notPassPolicyCount;
                    bool m_notPassPolicyCountHasBeenSet;

                    /**
                     * Total number of hosts
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

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
                     * 1: first scan about to start; 0: already scanned.
                     */
                    int64_t m_willFirstScan;
                    bool m_willFirstScanHasBeenSet;

                    /**
                     * ID of ongoing detection task
                     */
                    std::vector<int64_t> m_detectingTaskIds;
                    bool m_detectingTaskIdsHasBeenSet;

                    /**
                     * Remaining scanning time (minutes)
                     */
                    int64_t m_leftMins;
                    bool m_leftMinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SYNCBASELINEDETECTSUMMARYRESPONSE_H_
