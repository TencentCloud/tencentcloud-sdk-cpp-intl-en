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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAGENTCRUISEDIALINGCAMPAIGNREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAGENTCRUISEDIALINGCAMPAIGNREQUEST_H_

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
                * CreateAgentCruiseDialingCampaign request structure.
                */
                class CreateAgentCruiseDialingCampaignRequest : public AbstractModel
                {
                public:
                    CreateAgentCruiseDialingCampaignRequest();
                    ~CreateAgentCruiseDialingCampaignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name.
                     * @param _name Task name.
                     * 
                     */
                    void SetName(const std::string& _name);

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
                     * 设置Agent account.
                     * @param _agent Agent account.
                     * 
                     */
                    void SetAgent(const std::string& _agent);

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
                     * 设置Single-Round concurrent call volume 1-20.
                     * @param _concurrencyNumber Single-Round concurrent call volume 1-20.
                     * 
                     */
                    void SetConcurrencyNumber(const int64_t& _concurrencyNumber);

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
                     * 设置Task start time. unix timestamp. the task will automatically start after this time.
                     * @param _startTime Task start time. unix timestamp. the task will automatically start after this time.
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
                     * 获取Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * @return EndTime Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Task termination time. unix timestamp. the task will automatically terminate after this time.
                     * @param _endTime Task termination time. unix timestamp. the task will automatically terminate after this time.
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
                     * 获取Called list supporting e.164 or number formats without country code.
                     * @return Callees Called list supporting e.164 or number formats without country code.
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置Called list supporting e.164 or number formats without country code.
                     * @param _callees Called list supporting e.164 or number formats without country code.
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取Calling list using the number formats displayed on the management side.
                     * @return Callers Calling list using the number formats displayed on the management side.
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置Calling list using the number formats displayed on the management side.
                     * @param _callers Calling list using the number formats displayed on the management side.
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取Being called sequence: 0 for random 1 for in order.
                     * @return CallOrder Being called sequence: 0 for random 1 for in order.
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 设置Being called sequence: 0 for random 1 for in order.
                     * @param _callOrder Being called sequence: 0 for random 1 for in order.
                     * 
                     */
                    void SetCallOrder(const int64_t& _callOrder);

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
                     * 设置Caller custom data, maximum length 1024.
                     * @param _uUI Caller custom data, maximum length 1024.
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

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
                     * Called list supporting e.164 or number formats without country code.
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * Calling list using the number formats displayed on the management side.
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAGENTCRUISEDIALINGCAMPAIGNREQUEST_H_
