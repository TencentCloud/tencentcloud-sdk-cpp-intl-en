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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAGENTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateAgent request structure.
                */
                class CreateAgentRequest : public AbstractModel
                {
                public:
                    CreateAgentRequest();
                    ~CreateAgentRequest() = default;
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
                     * 获取<p>Agent configuration</p>
                     * @return Agent <p>Agent configuration</p>
                     * 
                     */
                    AgentSpec GetAgent() const;

                    /**
                     * 设置<p>Agent configuration</p>
                     * @param _agent <p>Agent configuration</p>
                     * 
                     */
                    void SetAgent(const AgentSpec& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>Agent type, case-sensitive between B-end configuration Agent and client user-mode Agent</p><p>Enumeration values:</p><ul><li>0: Configuration-end Agent</li><li>1: User-mode Agent</li></ul>
                     * @return Kind <p>Agent type, case-sensitive between B-end configuration Agent and client user-mode Agent</p><p>Enumeration values:</p><ul><li>0: Configuration-end Agent</li><li>1: User-mode Agent</li></ul>
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置<p>Agent type, case-sensitive between B-end configuration Agent and client user-mode Agent</p><p>Enumeration values:</p><ul><li>0: Configuration-end Agent</li><li>1: User-mode Agent</li></ul>
                     * @param _kind <p>Agent type, case-sensitive between B-end configuration Agent and client user-mode Agent</p><p>Enumeration values:</p><ul><li>0: Configuration-end Agent</li><li>1: User-mode Agent</li></ul>
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Agent configuration</p>
                     */
                    AgentSpec m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>Agent type, case-sensitive between B-end configuration Agent and client user-mode Agent</p><p>Enumeration values:</p><ul><li>0: Configuration-end Agent</li><li>1: User-mode Agent</li></ul>
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAGENTREQUEST_H_
