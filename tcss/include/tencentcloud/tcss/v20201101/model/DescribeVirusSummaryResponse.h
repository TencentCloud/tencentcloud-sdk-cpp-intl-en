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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusSummary response structure.
                */
                class DescribeVirusSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVirusSummaryResponse();
                    ~DescribeVirusSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the last scan task
                     * @return TaskId ID of the last scan task
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Number of Containers Affected by Trojans
                     * @return RiskContainerCnt Number of Containers Affected by Trojans
                     * 
                     */
                    uint64_t GetRiskContainerCnt() const;

                    /**
                     * 判断参数 RiskContainerCnt 是否已赋值
                     * @return RiskContainerCnt 是否已赋值
                     * 
                     */
                    bool RiskContainerCntHasBeenSet() const;

                    /**
                     * 获取Number of Pending Risks
                     * @return RiskCnt Number of Pending Risks
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取Virus database update time
                     * @return VirusDataBaseModifyTime Virus database update time
                     * 
                     */
                    std::string GetVirusDataBaseModifyTime() const;

                    /**
                     * 判断参数 VirusDataBaseModifyTime 是否已赋值
                     * @return VirusDataBaseModifyTime 是否已赋值
                     * 
                     */
                    bool VirusDataBaseModifyTimeHasBeenSet() const;

                    /**
                     * 获取Increase in the Number of Containers Affected by Trojans Compared to Yesterday
                     * @return RiskContainerIncrease Increase in the Number of Containers Affected by Trojans Compared to Yesterday
                     * 
                     */
                    int64_t GetRiskContainerIncrease() const;

                    /**
                     * 判断参数 RiskContainerIncrease 是否已赋值
                     * @return RiskContainerIncrease 是否已赋值
                     * 
                     */
                    bool RiskContainerIncreaseHasBeenSet() const;

                    /**
                     * 获取Number of Pending Risks Increased Compared to Yesterday
                     * @return RiskIncrease Number of Pending Risks Increased Compared to Yesterday
                     * 
                     */
                    int64_t GetRiskIncrease() const;

                    /**
                     * 判断参数 RiskIncrease 是否已赋值
                     * @return RiskIncrease 是否已赋值
                     * 
                     */
                    bool RiskIncreaseHasBeenSet() const;

                    /**
                     * 获取Isolation Event Count Increased Compared to Yesterday
                     * @return IsolateIncrease Isolation Event Count Increased Compared to Yesterday
                     * 
                     */
                    int64_t GetIsolateIncrease() const;

                    /**
                     * 判断参数 IsolateIncrease 是否已赋值
                     * @return IsolateIncrease 是否已赋值
                     * 
                     */
                    bool IsolateIncreaseHasBeenSet() const;

                    /**
                     * 获取Total Number of Isolation Events
                     * @return IsolateCnt Total Number of Isolation Events
                     * 
                     */
                    int64_t GetIsolateCnt() const;

                    /**
                     * 判断参数 IsolateCnt 是否已赋值
                     * @return IsolateCnt 是否已赋值
                     * 
                     */
                    bool IsolateCntHasBeenSet() const;

                private:

                    /**
                     * ID of the last scan task
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Number of Containers Affected by Trojans
                     */
                    uint64_t m_riskContainerCnt;
                    bool m_riskContainerCntHasBeenSet;

                    /**
                     * Number of Pending Risks
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Virus database update time
                     */
                    std::string m_virusDataBaseModifyTime;
                    bool m_virusDataBaseModifyTimeHasBeenSet;

                    /**
                     * Increase in the Number of Containers Affected by Trojans Compared to Yesterday
                     */
                    int64_t m_riskContainerIncrease;
                    bool m_riskContainerIncreaseHasBeenSet;

                    /**
                     * Number of Pending Risks Increased Compared to Yesterday
                     */
                    int64_t m_riskIncrease;
                    bool m_riskIncreaseHasBeenSet;

                    /**
                     * Isolation Event Count Increased Compared to Yesterday
                     */
                    int64_t m_isolateIncrease;
                    bool m_isolateIncreaseHasBeenSet;

                    /**
                     * Total Number of Isolation Events
                     */
                    int64_t m_isolateCnt;
                    bool m_isolateCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSUMMARYRESPONSE_H_
