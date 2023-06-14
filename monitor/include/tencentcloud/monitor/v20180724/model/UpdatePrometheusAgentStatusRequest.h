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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSAGENTSTATUSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSAGENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdatePrometheusAgentStatus request structure.
                */
                class UpdatePrometheusAgentStatusRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusAgentStatusRequest();
                    ~UpdatePrometheusAgentStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TMP instance ID, such as “prom-abcd1234”.
                     * @return InstanceId TMP instance ID, such as “prom-abcd1234”.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TMP instance ID, such as “prom-abcd1234”.
                     * @param _instanceId TMP instance ID, such as “prom-abcd1234”.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取List of agent IDs such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console.
                     * @return AgentIds List of agent IDs such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console.
                     * 
                     */
                    std::vector<std::string> GetAgentIds() const;

                    /**
                     * 设置List of agent IDs such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console.
                     * @param _agentIds List of agent IDs such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console.
                     * 
                     */
                    void SetAgentIds(const std::vector<std::string>& _agentIds);

                    /**
                     * 判断参数 AgentIds 是否已赋值
                     * @return AgentIds 是否已赋值
                     * 
                     */
                    bool AgentIdsHasBeenSet() const;

                    /**
                     * 获取Status to update
<li> 1 = enabled </li>
<li> 2 = disabled </li>
                     * @return Status Status to update
<li> 1 = enabled </li>
<li> 2 = disabled </li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status to update
<li> 1 = enabled </li>
<li> 2 = disabled </li>
                     * @param _status Status to update
<li> 1 = enabled </li>
<li> 2 = disabled </li>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * TMP instance ID, such as “prom-abcd1234”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of agent IDs such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console.
                     */
                    std::vector<std::string> m_agentIds;
                    bool m_agentIdsHasBeenSet;

                    /**
                     * Status to update
<li> 1 = enabled </li>
<li> 2 = disabled </li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSAGENTSTATUSREQUEST_H_
