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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * BindSecurityTemplateToEntity request structure.
                */
                class BindSecurityTemplateToEntityRequest : public AbstractModel
                {
                public:
                    BindSecurityTemplateToEntityRequest();
                    ~BindSecurityTemplateToEntityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID of the policy template to be bound to or unbound from.
                     * @return ZoneId Site ID of the policy template to be bound to or unbound from.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID of the policy template to be bound to or unbound from.
                     * @param _zoneId Site ID of the policy template to be bound to or unbound from.
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
                     * 获取List of domain names to bind to/unbind from a policy template
                     * @return Entities List of domain names to bind to/unbind from a policy template
                     * 
                     */
                    std::vector<std::string> GetEntities() const;

                    /**
                     * 设置List of domain names to bind to/unbind from a policy template
                     * @param _entities List of domain names to bind to/unbind from a policy template
                     * 
                     */
                    void SetEntities(const std::vector<std::string>& _entities);

                    /**
                     * 判断参数 Entities 是否已赋值
                     * @return Entities 是否已赋值
                     * 
                     */
                    bool EntitiesHasBeenSet() const;

                    /**
                     * 获取Action options. Values include:
<li>`bind`: Bind the domain names to the specified policy template </li>
<li>`unbind-keep-policy`: Unbind a domain name from a policy template and keep the current policy when unbinding</li>
<li>`unbind-use-default`: Unbind domain names from policy templates and use default blank policy.</li> Note: Only one domain name can be unbound at one time. When `Operate` is `unbind-keep-policy` or `unbind-use-default`, there can only be one domain name specified in `Entities`.
                     * @return Operate Action options. Values include:
<li>`bind`: Bind the domain names to the specified policy template </li>
<li>`unbind-keep-policy`: Unbind a domain name from a policy template and keep the current policy when unbinding</li>
<li>`unbind-use-default`: Unbind domain names from policy templates and use default blank policy.</li> Note: Only one domain name can be unbound at one time. When `Operate` is `unbind-keep-policy` or `unbind-use-default`, there can only be one domain name specified in `Entities`.
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置Action options. Values include:
<li>`bind`: Bind the domain names to the specified policy template </li>
<li>`unbind-keep-policy`: Unbind a domain name from a policy template and keep the current policy when unbinding</li>
<li>`unbind-use-default`: Unbind domain names from policy templates and use default blank policy.</li> Note: Only one domain name can be unbound at one time. When `Operate` is `unbind-keep-policy` or `unbind-use-default`, there can only be one domain name specified in `Entities`.
                     * @param _operate Action options. Values include:
<li>`bind`: Bind the domain names to the specified policy template </li>
<li>`unbind-keep-policy`: Unbind a domain name from a policy template and keep the current policy when unbinding</li>
<li>`unbind-use-default`: Unbind domain names from policy templates and use default blank policy.</li> Note: Only one domain name can be unbound at one time. When `Operate` is `unbind-keep-policy` or `unbind-use-default`, there can only be one domain name specified in `Entities`.
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取Specifies the ID of the policy template or the site's global policy to be bound or unbound.
- To bind to a policy template, or unbind from it, specify the policy template ID.
- To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * @return TemplateId Specifies the ID of the policy template or the site's global policy to be bound or unbound.
- To bind to a policy template, or unbind from it, specify the policy template ID.
- To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Specifies the ID of the policy template or the site's global policy to be bound or unbound.
- To bind to a policy template, or unbind from it, specify the policy template ID.
- To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * @param _templateId Specifies the ID of the policy template or the site's global policy to be bound or unbound.
- To bind to a policy template, or unbind from it, specify the policy template ID.
- To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Whether to replace the existing policy template bound with the domain name. Values: 
<li>`true`: Replace the template bound to the domain. </li>
<li>`false`: Do not replace the template.</li> Note: In this case, the API returns an error if there is already a policy template bound to the specified domain name.
                     * @return OverWrite Whether to replace the existing policy template bound with the domain name. Values: 
<li>`true`: Replace the template bound to the domain. </li>
<li>`false`: Do not replace the template.</li> Note: In this case, the API returns an error if there is already a policy template bound to the specified domain name.
                     * 
                     */
                    bool GetOverWrite() const;

                    /**
                     * 设置Whether to replace the existing policy template bound with the domain name. Values: 
<li>`true`: Replace the template bound to the domain. </li>
<li>`false`: Do not replace the template.</li> Note: In this case, the API returns an error if there is already a policy template bound to the specified domain name.
                     * @param _overWrite Whether to replace the existing policy template bound with the domain name. Values: 
<li>`true`: Replace the template bound to the domain. </li>
<li>`false`: Do not replace the template.</li> Note: In this case, the API returns an error if there is already a policy template bound to the specified domain name.
                     * 
                     */
                    void SetOverWrite(const bool& _overWrite);

                    /**
                     * 判断参数 OverWrite 是否已赋值
                     * @return OverWrite 是否已赋值
                     * 
                     */
                    bool OverWriteHasBeenSet() const;

                private:

                    /**
                     * Site ID of the policy template to be bound to or unbound from.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of domain names to bind to/unbind from a policy template
                     */
                    std::vector<std::string> m_entities;
                    bool m_entitiesHasBeenSet;

                    /**
                     * Action options. Values include:
<li>`bind`: Bind the domain names to the specified policy template </li>
<li>`unbind-keep-policy`: Unbind a domain name from a policy template and keep the current policy when unbinding</li>
<li>`unbind-use-default`: Unbind domain names from policy templates and use default blank policy.</li> Note: Only one domain name can be unbound at one time. When `Operate` is `unbind-keep-policy` or `unbind-use-default`, there can only be one domain name specified in `Entities`.
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Specifies the ID of the policy template or the site's global policy to be bound or unbound.
- To bind to a policy template, or unbind from it, specify the policy template ID.
- To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Whether to replace the existing policy template bound with the domain name. Values: 
<li>`true`: Replace the template bound to the domain. </li>
<li>`false`: Do not replace the template.</li> Note: In this case, the API returns an error if there is already a policy template bound to the specified domain name.
                     */
                    bool m_overWrite;
                    bool m_overWriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_
