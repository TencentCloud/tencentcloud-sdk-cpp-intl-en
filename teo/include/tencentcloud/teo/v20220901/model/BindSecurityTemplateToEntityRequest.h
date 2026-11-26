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
                     * 获取Site ID of the policy template to be bound or unbound.
                     * @return ZoneId Site ID of the policy template to be bound or unbound.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID of the policy template to be bound or unbound.
                     * @param _zoneId Site ID of the policy template to be bound or unbound.
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
                     * 获取Domain name list bound to the policy template (or unbound from it).
                     * @return Entities Domain name list bound to the policy template (or unbound from it).
                     * 
                     */
                    std::vector<std::string> GetEntities() const;

                    /**
                     * 设置Domain name list bound to the policy template (or unbound from it).
                     * @param _entities Domain name list bound to the policy template (or unbound from it).
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
                     * 获取Bind or unbind operation options. Valid values:
<li>bind: Bind a domain name to the policy template.</li>
<li>unbind-keep-policy: Unbind the domain name from the policy template while retaining the current policy.</li>
<li>unbind-use-default: Unbind the domain name from the policy template and use the default blank policy.</li>Note: The unbinding operation currently only supports unbinding a single domain name. That is, when the Operate parameter value is unbind-keep-policy or unbind-use-default, the Entities parameter list supports filling in only one domain name.
                     * @return Operate Bind or unbind operation options. Valid values:
<li>bind: Bind a domain name to the policy template.</li>
<li>unbind-keep-policy: Unbind the domain name from the policy template while retaining the current policy.</li>
<li>unbind-use-default: Unbind the domain name from the policy template and use the default blank policy.</li>Note: The unbinding operation currently only supports unbinding a single domain name. That is, when the Operate parameter value is unbind-keep-policy or unbind-use-default, the Entities parameter list supports filling in only one domain name.
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置Bind or unbind operation options. Valid values:
<li>bind: Bind a domain name to the policy template.</li>
<li>unbind-keep-policy: Unbind the domain name from the policy template while retaining the current policy.</li>
<li>unbind-use-default: Unbind the domain name from the policy template and use the default blank policy.</li>Note: The unbinding operation currently only supports unbinding a single domain name. That is, when the Operate parameter value is unbind-keep-policy or unbind-use-default, the Entities parameter list supports filling in only one domain name.
                     * @param _operate Bind or unbind operation options. Valid values:
<li>bind: Bind a domain name to the policy template.</li>
<li>unbind-keep-policy: Unbind the domain name from the policy template while retaining the current policy.</li>
<li>unbind-use-default: Unbind the domain name from the policy template and use the default blank policy.</li>Note: The unbinding operation currently only supports unbinding a single domain name. That is, when the Operate parameter value is unbind-keep-policy or unbind-use-default, the Entities parameter list supports filling in only one domain name.
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
                     * 获取Specifies the ID of the policy template or the site global policy to be bound or unbound.
<li>To bind to a policy template, or unbind from it, specify the policy template ID.</li>
<li>To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.</li>

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * @return TemplateId Specifies the ID of the policy template or the site global policy to be bound or unbound.
<li>To bind to a policy template, or unbind from it, specify the policy template ID.</li>
<li>To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.</li>

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Specifies the ID of the policy template or the site global policy to be bound or unbound.
<li>To bind to a policy template, or unbind from it, specify the policy template ID.</li>
<li>To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.</li>

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     * @param _templateId Specifies the ID of the policy template or the site global policy to be bound or unbound.
<li>To bind to a policy template, or unbind from it, specify the policy template ID.</li>
<li>To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.</li>

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
                     * 获取If the imported domain name is already bound to a policy template (including a site-level protection strategy), setting this parameter indicates whether to replace the template. Default value: true. Valid values: <li>true: Replace the template currently bound to the domain name.</li><li>false: Do not replace the template currently bound to the domain name.</li>Note: When set to false, if the imported domain name is already bound to a policy template, an error will be returned. A site-level protection strategy is also a type of policy template.
                     * @return OverWrite If the imported domain name is already bound to a policy template (including a site-level protection strategy), setting this parameter indicates whether to replace the template. Default value: true. Valid values: <li>true: Replace the template currently bound to the domain name.</li><li>false: Do not replace the template currently bound to the domain name.</li>Note: When set to false, if the imported domain name is already bound to a policy template, an error will be returned. A site-level protection strategy is also a type of policy template.
                     * 
                     */
                    bool GetOverWrite() const;

                    /**
                     * 设置If the imported domain name is already bound to a policy template (including a site-level protection strategy), setting this parameter indicates whether to replace the template. Default value: true. Valid values: <li>true: Replace the template currently bound to the domain name.</li><li>false: Do not replace the template currently bound to the domain name.</li>Note: When set to false, if the imported domain name is already bound to a policy template, an error will be returned. A site-level protection strategy is also a type of policy template.
                     * @param _overWrite If the imported domain name is already bound to a policy template (including a site-level protection strategy), setting this parameter indicates whether to replace the template. Default value: true. Valid values: <li>true: Replace the template currently bound to the domain name.</li><li>false: Do not replace the template currently bound to the domain name.</li>Note: When set to false, if the imported domain name is already bound to a policy template, an error will be returned. A site-level protection strategy is also a type of policy template.
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
                     * Site ID of the policy template to be bound or unbound.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name list bound to the policy template (or unbound from it).
                     */
                    std::vector<std::string> m_entities;
                    bool m_entitiesHasBeenSet;

                    /**
                     * Bind or unbind operation options. Valid values:
<li>bind: Bind a domain name to the policy template.</li>
<li>unbind-keep-policy: Unbind the domain name from the policy template while retaining the current policy.</li>
<li>unbind-use-default: Unbind the domain name from the policy template and use the default blank policy.</li>Note: The unbinding operation currently only supports unbinding a single domain name. That is, when the Operate parameter value is unbind-keep-policy or unbind-use-default, the Entities parameter list supports filling in only one domain name.
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Specifies the ID of the policy template or the site global policy to be bound or unbound.
<li>To bind to a policy template, or unbind from it, specify the policy template ID.</li>
<li>To bind to the site's global policy, or unbind from it, use the @ZoneLevel@domain parameter value.</li>

Note: After unbinding, the domain name will use an independent policy and rule quota will be calculated separately. Please make sure there is sufficient rule quota before unbinding.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * If the imported domain name is already bound to a policy template (including a site-level protection strategy), setting this parameter indicates whether to replace the template. Default value: true. Valid values: <li>true: Replace the template currently bound to the domain name.</li><li>false: Do not replace the template currently bound to the domain name.</li>Note: When set to false, if the imported domain name is already bound to a policy template, an error will be returned. A site-level protection strategy is also a type of policy template.
                     */
                    bool m_overWrite;
                    bool m_overWriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_
