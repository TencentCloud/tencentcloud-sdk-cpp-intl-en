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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityTemplateBinding.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityTemplateBindings response structure.
                */
                class DescribeSecurityTemplateBindingsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityTemplateBindingsResponse();
                    ~DescribeSecurityTemplateBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of binding relationships of the specified policy template.

When a domain name in a site is included in the binding relationship of a specified policy template, the binding relationship list `TemplateScope` will include the `ZoneId` of the site and the domain name binding relationships under the site related to the policy template.

Note: When no any domain name is being bound or has been bound to the specified policy template, the binding relationship is empty. That is, in the return structure, the length of the `TemplateScope` array is 0.

In a binding relationship, the same domain name may appear repeatedly in the `EntityStatus` list and be marked with different `Status`. For example, a domain name being bound to another policy template is marked as both `online` and `pending` at the same time.
                     * @return SecurityTemplate List of binding relationships of the specified policy template.

When a domain name in a site is included in the binding relationship of a specified policy template, the binding relationship list `TemplateScope` will include the `ZoneId` of the site and the domain name binding relationships under the site related to the policy template.

Note: When no any domain name is being bound or has been bound to the specified policy template, the binding relationship is empty. That is, in the return structure, the length of the `TemplateScope` array is 0.

In a binding relationship, the same domain name may appear repeatedly in the `EntityStatus` list and be marked with different `Status`. For example, a domain name being bound to another policy template is marked as both `online` and `pending` at the same time.
                     * 
                     */
                    std::vector<SecurityTemplateBinding> GetSecurityTemplate() const;

                    /**
                     * 判断参数 SecurityTemplate 是否已赋值
                     * @return SecurityTemplate 是否已赋值
                     * 
                     */
                    bool SecurityTemplateHasBeenSet() const;

                private:

                    /**
                     * List of binding relationships of the specified policy template.

When a domain name in a site is included in the binding relationship of a specified policy template, the binding relationship list `TemplateScope` will include the `ZoneId` of the site and the domain name binding relationships under the site related to the policy template.

Note: When no any domain name is being bound or has been bound to the specified policy template, the binding relationship is empty. That is, in the return structure, the length of the `TemplateScope` array is 0.

In a binding relationship, the same domain name may appear repeatedly in the `EntityStatus` list and be marked with different `Status`. For example, a domain name being bound to another policy template is marked as both `online` and `pending` at the same time.
                     */
                    std::vector<SecurityTemplateBinding> m_securityTemplate;
                    bool m_securityTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSRESPONSE_H_
