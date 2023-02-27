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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSCLUSTERAGENTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSCLUSTERAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusClusterAgentBasic.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreatePrometheusClusterAgent request structure.
                */
                class CreatePrometheusClusterAgentRequest : public AbstractModel
                {
                public:
                    CreatePrometheusClusterAgentRequest();
                    ~CreatePrometheusClusterAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Agent list
                     * @return Agents Agent list
                     */
                    std::vector<PrometheusClusterAgentBasic> GetAgents() const;

                    /**
                     * 设置Agent list
                     * @param Agents Agent list
                     */
                    void SetAgents(const std::vector<PrometheusClusterAgentBasic>& _agents);

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     */
                    bool AgentsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent list
                     */
                    std::vector<PrometheusClusterAgentBasic> m_agents;
                    bool m_agentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSCLUSTERAGENTREQUEST_H_
