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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginCredentialParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent plug-in credential configuration
                */
                class AgentPluginCredentialConfig : public AbstractModel
                {
                public:
                    AgentPluginCredentialConfig();
                    ~AgentPluginCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Plugin authentication value source</p><p>Enumeration values:</p><ul><li>0: Unspecified</li><li>1: Use the default authentication value of the plug-in. Only APIKey/AccessKey is supported.</li><li>2: Refer to a credential</li><li>3: Refer to a variable</li></ul>
                     * @return AuthValueSource <p>Plugin authentication value source</p><p>Enumeration values:</p><ul><li>0: Unspecified</li><li>1: Use the default authentication value of the plug-in. Only APIKey/AccessKey is supported.</li><li>2: Refer to a credential</li><li>3: Refer to a variable</li></ul>
                     * 
                     */
                    int64_t GetAuthValueSource() const;

                    /**
                     * 设置<p>Plugin authentication value source</p><p>Enumeration values:</p><ul><li>0: Unspecified</li><li>1: Use the default authentication value of the plug-in. Only APIKey/AccessKey is supported.</li><li>2: Refer to a credential</li><li>3: Refer to a variable</li></ul>
                     * @param _authValueSource <p>Plugin authentication value source</p><p>Enumeration values:</p><ul><li>0: Unspecified</li><li>1: Use the default authentication value of the plug-in. Only APIKey/AccessKey is supported.</li><li>2: Refer to a credential</li><li>3: Refer to a variable</li></ul>
                     * 
                     */
                    void SetAuthValueSource(const int64_t& _authValueSource);

                    /**
                     * 判断参数 AuthValueSource 是否已赋值
                     * @return AuthValueSource 是否已赋值
                     * 
                     */
                    bool AuthValueSourceHasBeenSet() const;

                    /**
                     * 获取<p>Credential ID</p><p>Input parameter limit: required when AuthValueSource=2</p>
                     * @return CredentialId <p>Credential ID</p><p>Input parameter limit: required when AuthValueSource=2</p>
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置<p>Credential ID</p><p>Input parameter limit: required when AuthValueSource=2</p>
                     * @param _credentialId <p>Credential ID</p><p>Input parameter limit: required when AuthValueSource=2</p>
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取<p>Parameter configuration</p>
                     * @return ParamList <p>Parameter configuration</p>
                     * 
                     */
                    std::vector<AgentPluginCredentialParam> GetParamList() const;

                    /**
                     * 设置<p>Parameter configuration</p>
                     * @param _paramList <p>Parameter configuration</p>
                     * 
                     */
                    void SetParamList(const std::vector<AgentPluginCredentialParam>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * <p>Plugin authentication value source</p><p>Enumeration values:</p><ul><li>0: Unspecified</li><li>1: Use the default authentication value of the plug-in. Only APIKey/AccessKey is supported.</li><li>2: Refer to a credential</li><li>3: Refer to a variable</li></ul>
                     */
                    int64_t m_authValueSource;
                    bool m_authValueSourceHasBeenSet;

                    /**
                     * <p>Credential ID</p><p>Input parameter limit: required when AuthValueSource=2</p>
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * <p>Parameter configuration</p>
                     */
                    std::vector<AgentPluginCredentialParam> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALCONFIG_H_
