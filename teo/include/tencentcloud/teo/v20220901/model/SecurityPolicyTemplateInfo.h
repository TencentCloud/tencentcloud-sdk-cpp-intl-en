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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICYTEMPLATEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICYTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BindDomainInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Policy template information.
                */
                class SecurityPolicyTemplateInfo : public AbstractModel
                {
                public:
                    SecurityPolicyTemplateInfo();
                    ~SecurityPolicyTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The zone ID to which the policy template belongs.
                     * @return ZoneId The zone ID to which the policy template belongs.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The zone ID to which the policy template belongs.
                     * @param _zoneId The zone ID to which the policy template belongs.
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
                     * 获取Policy template ID.
                     * @return TemplateId Policy template ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Policy template ID.
                     * @param _templateId Policy template ID.
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
                     * 获取The name of the policy template.
                     * @return TemplateName The name of the policy template.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置The name of the policy template.
                     * @param _templateName The name of the policy template.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Information about domains bound to the policy template.
                     * @return BindDomains Information about domains bound to the policy template.
                     * 
                     */
                    std::vector<BindDomainInfo> GetBindDomains() const;

                    /**
                     * 设置Information about domains bound to the policy template.
                     * @param _bindDomains Information about domains bound to the policy template.
                     * 
                     */
                    void SetBindDomains(const std::vector<BindDomainInfo>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * 
                     */
                    bool BindDomainsHasBeenSet() const;

                private:

                    /**
                     * The zone ID to which the policy template belongs.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The name of the policy template.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Information about domains bound to the policy template.
                     */
                    std::vector<BindDomainInfo> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICYTEMPLATEINFO_H_
