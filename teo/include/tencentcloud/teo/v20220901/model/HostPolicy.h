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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Domain-level policy.
                */
                class HostPolicy : public AbstractModel
                {
                public:
                    HostPolicy();
                    ~HostPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Site-level policy, a policy that takes effect for all domain names under the site. For details, see Site-level Policy.</p>
                     * @return Host <p>Site-level policy, a policy that takes effect for all domain names under the site. For details, see Site-level Policy.</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Site-level policy, a policy that takes effect for all domain names under the site. For details, see Site-level Policy.</p>
                     * @param _host <p>Site-level policy, a policy that takes effect for all domain names under the site. For details, see Site-level Policy.</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Policy type used by the current domain. Valid values: <li>ZoneDefault: use a site-level policy, which is the policy settings defined in ZoneDefaultPolicy.</li><li>Custom: use a domain-level policy. When using this option, the Policy field must also be configured to specify the detailed policy settings.</li><li>Template: use a policy template. When using this option, the TemplateId field must also be configured to specify the policy template used by the current domain.</li></p>
                     * @return PolicyType <p>Policy type used by the current domain. Valid values: <li>ZoneDefault: use a site-level policy, which is the policy settings defined in ZoneDefaultPolicy.</li><li>Custom: use a domain-level policy. When using this option, the Policy field must also be configured to specify the detailed policy settings.</li><li>Template: use a policy template. When using this option, the TemplateId field must also be configured to specify the policy template used by the current domain.</li></p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>Policy type used by the current domain. Valid values: <li>ZoneDefault: use a site-level policy, which is the policy settings defined in ZoneDefaultPolicy.</li><li>Custom: use a domain-level policy. When using this option, the Policy field must also be configured to specify the detailed policy settings.</li><li>Template: use a policy template. When using this option, the TemplateId field must also be configured to specify the policy template used by the current domain.</li></p>
                     * @param _policyType <p>Policy type used by the current domain. Valid values: <li>ZoneDefault: use a site-level policy, which is the policy settings defined in ZoneDefaultPolicy.</li><li>Custom: use a domain-level policy. When using this option, the Policy field must also be configured to specify the detailed policy settings.</li><li>Template: use a policy template. When using this option, the TemplateId field must also be configured to specify the policy template used by the current domain.</li></p>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Optional. When PolicyType is Custom, this field is the detailed policy configuration of the current domain name, which takes effect on the current domain.</p>
                     * @return Policy <p>Optional. When PolicyType is Custom, this field is the detailed policy configuration of the current domain name, which takes effect on the current domain.</p>
                     * 
                     */
                    SecurityPolicy GetPolicy() const;

                    /**
                     * 设置<p>Optional. When PolicyType is Custom, this field is the detailed policy configuration of the current domain name, which takes effect on the current domain.</p>
                     * @param _policy <p>Optional. When PolicyType is Custom, this field is the detailed policy configuration of the current domain name, which takes effect on the current domain.</p>
                     * 
                     */
                    void SetPolicy(const SecurityPolicy& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取<p>Optional. When PolicyType is Template, this field is used to specify the Id of the policy Template used by the current domain.</p>
                     * @return TemplateId <p>Optional. When PolicyType is Template, this field is used to specify the Id of the policy Template used by the current domain.</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Optional. When PolicyType is Template, this field is used to specify the Id of the policy Template used by the current domain.</p>
                     * @param _templateId <p>Optional. When PolicyType is Template, this field is used to specify the Id of the policy Template used by the current domain.</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>Site-level policy, a policy that takes effect for all domain names under the site. For details, see Site-level Policy.</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Policy type used by the current domain. Valid values: <li>ZoneDefault: use a site-level policy, which is the policy settings defined in ZoneDefaultPolicy.</li><li>Custom: use a domain-level policy. When using this option, the Policy field must also be configured to specify the detailed policy settings.</li><li>Template: use a policy template. When using this option, the TemplateId field must also be configured to specify the policy template used by the current domain.</li></p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>Optional. When PolicyType is Custom, this field is the detailed policy configuration of the current domain name, which takes effect on the current domain.</p>
                     */
                    SecurityPolicy m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>Optional. When PolicyType is Template, this field is used to specify the Id of the policy Template used by the current domain.</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTPOLICY_H_
