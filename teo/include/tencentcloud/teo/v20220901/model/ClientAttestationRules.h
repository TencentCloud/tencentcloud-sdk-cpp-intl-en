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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ClientAttestationRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Describes the client authentication configuration.
                */
                class ClientAttestationRules : public AbstractModel
                {
                public:
                    ClientAttestationRules();
                    ~ClientAttestationRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of client authentication. when using ModifySecurityPolicy to modify Web protection configuration: <li> if Rules in SecurityPolicy.BotManagement.ClientAttestationRules is not specified or the parameter length of Rules is zero: clear all client authentication rule configuration. </li> <li> if ClientAttestationRules in SecurityPolicy.BotManagement parameters is unspecified: keep existing client authentication rule configuration and do not modify. </li>.
                     * @return Rules List of client authentication. when using ModifySecurityPolicy to modify Web protection configuration: <li> if Rules in SecurityPolicy.BotManagement.ClientAttestationRules is not specified or the parameter length of Rules is zero: clear all client authentication rule configuration. </li> <li> if ClientAttestationRules in SecurityPolicy.BotManagement parameters is unspecified: keep existing client authentication rule configuration and do not modify. </li>.
                     * 
                     */
                    std::vector<ClientAttestationRule> GetRules() const;

                    /**
                     * 设置List of client authentication. when using ModifySecurityPolicy to modify Web protection configuration: <li> if Rules in SecurityPolicy.BotManagement.ClientAttestationRules is not specified or the parameter length of Rules is zero: clear all client authentication rule configuration. </li> <li> if ClientAttestationRules in SecurityPolicy.BotManagement parameters is unspecified: keep existing client authentication rule configuration and do not modify. </li>.
                     * @param _rules List of client authentication. when using ModifySecurityPolicy to modify Web protection configuration: <li> if Rules in SecurityPolicy.BotManagement.ClientAttestationRules is not specified or the parameter length of Rules is zero: clear all client authentication rule configuration. </li> <li> if ClientAttestationRules in SecurityPolicy.BotManagement parameters is unspecified: keep existing client authentication rule configuration and do not modify. </li>.
                     * 
                     */
                    void SetRules(const std::vector<ClientAttestationRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * List of client authentication. when using ModifySecurityPolicy to modify Web protection configuration: <li> if Rules in SecurityPolicy.BotManagement.ClientAttestationRules is not specified or the parameter length of Rules is zero: clear all client authentication rule configuration. </li> <li> if ClientAttestationRules in SecurityPolicy.BotManagement parameters is unspecified: keep existing client authentication rule configuration and do not modify. </li>.
                     */
                    std::vector<ClientAttestationRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULES_H_
