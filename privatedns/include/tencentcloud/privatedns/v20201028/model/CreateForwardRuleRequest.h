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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEFORWARDRULEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEFORWARDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateForwardRule request structure.
                */
                class CreateForwardRuleRequest : public AbstractModel
                {
                public:
                    CreateForwardRuleRequest();
                    ~CreateForwardRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Forwarding rule name.
                     * @return RuleName Forwarding rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Forwarding rule name.
                     * @param _ruleName Forwarding rule name.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * @return RuleType Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * @param _ruleType Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Private domain ID, which can be viewed on the private domain list page.
                     * @return ZoneId Private domain ID, which can be viewed on the private domain list page.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID, which can be viewed on the private domain list page.
                     * @param _zoneId Private domain ID, which can be viewed on the private domain list page.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Endpoint ID.
                     * @return EndPointId Endpoint ID.
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置Endpoint ID.
                     * @param _endPointId Endpoint ID.
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Private domain ID, which can be viewed on the private domain list page.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Endpoint ID.
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEFORWARDRULEREQUEST_H_
