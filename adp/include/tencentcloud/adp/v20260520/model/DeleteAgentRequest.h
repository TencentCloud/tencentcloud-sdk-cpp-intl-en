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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETEAGENTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DeleteAgent request structure.
                */
                class DeleteAgentRequest : public AbstractModel
                {
                public:
                    DeleteAgentRequest();
                    ~DeleteAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the agent to delete</p>
                     * @return AgentId <p>ID of the agent to delete</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>ID of the agent to delete</p>
                     * @param _agentId <p>ID of the agent to delete</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Collaboration mode; 0: Claw mode; 1: Multi-Agent mode
                     * @return CollaborationMode Collaboration mode; 0: Claw mode; 1: Multi-Agent mode
                     * 
                     */
                    int64_t GetCollaborationMode() const;

                    /**
                     * 设置Collaboration mode; 0: Claw mode; 1: Multi-Agent mode
                     * @param _collaborationMode Collaboration mode; 0: Claw mode; 1: Multi-Agent mode
                     * 
                     */
                    void SetCollaborationMode(const int64_t& _collaborationMode);

                    /**
                     * 判断参数 CollaborationMode 是否已赋值
                     * @return CollaborationMode 是否已赋值
                     * 
                     */
                    bool CollaborationModeHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>ID of the agent to delete</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Collaboration mode; 0: Claw mode; 1: Multi-Agent mode
                     */
                    int64_t m_collaborationMode;
                    bool m_collaborationModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETEAGENTREQUEST_H_
