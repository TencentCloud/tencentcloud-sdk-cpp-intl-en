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
                     * 获取Bindings of the specified policy template.

When a domain name of a site is bound with the specified policy template, `TemplateScope` includes the `ZoneId` of the related site and the bindings of the domain name. 

Note: If the template is not bound with any domain name, and there is not any existing binding, `TemplateScope=0` is returned.

In the binding list, the same domain name may appear repeatedly in the `EntityStatus` list with different `Status`. For example, when a domain name is being bound to another policy template, it's marked both `online` and `pending`.
                     * @return SecurityTemplate Bindings of the specified policy template.

When a domain name of a site is bound with the specified policy template, `TemplateScope` includes the `ZoneId` of the related site and the bindings of the domain name. 

Note: If the template is not bound with any domain name, and there is not any existing binding, `TemplateScope=0` is returned.

In the binding list, the same domain name may appear repeatedly in the `EntityStatus` list with different `Status`. For example, when a domain name is being bound to another policy template, it's marked both `online` and `pending`.
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
                     * Bindings of the specified policy template.

When a domain name of a site is bound with the specified policy template, `TemplateScope` includes the `ZoneId` of the related site and the bindings of the domain name. 

Note: If the template is not bound with any domain name, and there is not any existing binding, `TemplateScope=0` is returned.

In the binding list, the same domain name may appear repeatedly in the `EntityStatus` list with different `Status`. For example, when a domain name is being bound to another policy template, it's marked both `online` and `pending`.
                     */
                    std::vector<SecurityTemplateBinding> m_securityTemplate;
                    bool m_securityTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSRESPONSE_H_
