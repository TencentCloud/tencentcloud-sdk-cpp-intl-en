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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULEHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULEHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetHealth.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Health check status of a forwarding rule
                */
                class RuleHealth : public AbstractModel
                {
                public:
                    RuleHealth();
                    ~RuleHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding rule ID
                     * @return LocationId Forwarding rule ID
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID
                     * @param _locationId Forwarding rule ID
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Forwarding rule Url
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Forwarding rule Url
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Forwarding rule Url
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Forwarding rule Url
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Advanced routing rule ID.
                     * @return RuleId Advanced routing rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Advanced routing rule ID.
                     * @param _ruleId Advanced routing rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Indicates the health check status of the backend service bound to this rule.
                     * @return Targets Indicates the health check status of the backend service bound to this rule.
                     * 
                     */
                    std::vector<TargetHealth> GetTargets() const;

                    /**
                     * 设置Indicates the health check status of the backend service bound to this rule.
                     * @param _targets Indicates the health check status of the backend service bound to this rule.
                     * 
                     */
                    void SetTargets(const std::vector<TargetHealth>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule Url
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Advanced routing rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Indicates the health check status of the backend service bound to this rule.
                     */
                    std::vector<TargetHealth> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEHEALTH_H_
