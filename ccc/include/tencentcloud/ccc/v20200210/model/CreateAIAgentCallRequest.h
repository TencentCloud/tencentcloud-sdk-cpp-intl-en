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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateAIAgentCall request structure.
                */
                class CreateAIAgentCallRequest : public AbstractModel
                {
                public:
                    CreateAIAgentCallRequest();
                    ~CreateAIAgentCallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取AI agent id.
                     * @return AIAgentId AI agent id.
                     * 
                     */
                    uint64_t GetAIAgentId() const;

                    /**
                     * 设置AI agent id.
                     * @param _aIAgentId AI agent id.
                     * 
                     */
                    void SetAIAgentId(const uint64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                    /**
                     * 获取Callee number.
                     * @return Callee Callee number.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Callee number.
                     * @param _callee Callee number.
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Caller number list
                     * @return Callers Caller number list
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置Caller number list
                     * @param _callers Caller number list
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
                     * 获取Prompt variable.
                     * @return PromptVariables Prompt variable.
                     * @deprecated
                     */
                    std::vector<Variable> GetPromptVariables() const;

                    /**
                     * 设置Prompt variable.
                     * @param _promptVariables Prompt variable.
                     * @deprecated
                     */
                    void SetPromptVariables(const std::vector<Variable>& _promptVariables);

                    /**
                     * 判断参数 PromptVariables 是否已赋值
                     * @return PromptVariables 是否已赋值
                     * @deprecated
                     */
                    bool PromptVariablesHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * AI agent id.
                     */
                    uint64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * Callee number.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Caller number list
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * Prompt variable.
                     */
                    std::vector<Variable> m_promptVariables;
                    bool m_promptVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_
