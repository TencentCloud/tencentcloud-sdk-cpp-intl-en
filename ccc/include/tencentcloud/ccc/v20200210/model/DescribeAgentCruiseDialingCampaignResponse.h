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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAGENTCRUISEDIALINGCAMPAIGNRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAGENTCRUISEDIALINGCAMPAIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAgentCruiseDialingCampaign response structure.
                */
                class DescribeAgentCruiseDialingCampaignResponse : public AbstractModel
                {
                public:
                    DescribeAgentCruiseDialingCampaignResponse();
                    ~DescribeAgentCruiseDialingCampaignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Agent account.
                     * @return Agent Agent account.
                     * 
                     */
                    std::string GetAgent() const;

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取Single-Round concurrent call volume 1-20.
                     * @return ConcurrencyNumber Single-Round concurrent call volume 1-20.
                     * 
                     */
                    int64_t GetConcurrencyNumber() const;

                    /**
                     * 判断参数 ConcurrencyNumber 是否已赋值
                     * @return ConcurrencyNumber 是否已赋值
                     * 
                     */
                    bool ConcurrencyNumberHasBeenSet() const;

                    /**
                     * 获取Task start time. unix timestamp. the task will automatically start after this time.
                     * @return StartTime Task start time. unix timestamp. the task will automatically start after this time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * @return EndTime Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Being called sequence: 0 for random 1 for in order.
                     * @return CallOrder Being called sequence: 0 for random 1 for in order.
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 判断参数 CallOrder 是否已赋值
                     * @return CallOrder 是否已赋值
                     * 
                     */
                    bool CallOrderHasBeenSet() const;

                    /**
                     * 获取Caller custom data, maximum length 1024.
                     * @return UUI Caller custom data, maximum length 1024.
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取Task status 0 not started 1 running 2 completed 3 terminated.
                     * @return State Task status 0 not started 1 running 2 completed 3 terminated.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Total number of called parties.
                     * @return TotalCalleeCount Total number of called parties.
                     * 
                     */
                    int64_t GetTotalCalleeCount() const;

                    /**
                     * 判断参数 TotalCalleeCount 是否已赋值
                     * @return TotalCalleeCount 是否已赋值
                     * 
                     */
                    bool TotalCalleeCountHasBeenSet() const;

                    /**
                     * 获取Number of calls made and received.
                     * @return CalledCalleeCount Number of calls made and received.
                     * 
                     */
                    int64_t GetCalledCalleeCount() const;

                    /**
                     * 判断参数 CalledCalleeCount 是否已赋值
                     * @return CalledCalleeCount 是否已赋值
                     * 
                     */
                    bool CalledCalleeCountHasBeenSet() const;

                private:

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent account.
                     */
                    std::string m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * Single-Round concurrent call volume 1-20.
                     */
                    int64_t m_concurrencyNumber;
                    bool m_concurrencyNumberHasBeenSet;

                    /**
                     * Task start time. unix timestamp. the task will automatically start after this time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task termination time. unix timestamp. the task will automatically terminate after this time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Being called sequence: 0 for random 1 for in order.
                     */
                    int64_t m_callOrder;
                    bool m_callOrderHasBeenSet;

                    /**
                     * Caller custom data, maximum length 1024.
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * Task status 0 not started 1 running 2 completed 3 terminated.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Total number of called parties.
                     */
                    int64_t m_totalCalleeCount;
                    bool m_totalCalleeCountHasBeenSet;

                    /**
                     * Number of calls made and received.
                     */
                    int64_t m_calledCalleeCount;
                    bool m_calledCalleeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAGENTCRUISEDIALINGCAMPAIGNRESPONSE_H_
