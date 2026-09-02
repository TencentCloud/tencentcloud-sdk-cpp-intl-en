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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTSKILLLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTSKILLLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAgentSkillList request structure.
                */
                class DescribeAIAgentSkillListRequest : public AbstractModel
                {
                public:
                    DescribeAIAgentSkillListRequest();
                    ~DescribeAIAgentSkillListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Agent name.
                     * @return AgentName Agent name.
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent name.
                     * @param _agentName Agent name.
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceID Instance ID.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceID Instance ID.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Container ID
                     * @return ContainerID Container ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置Container ID
                     * @param _containerID Container ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Agent name.
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Container ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTSKILLLISTREQUEST_H_
