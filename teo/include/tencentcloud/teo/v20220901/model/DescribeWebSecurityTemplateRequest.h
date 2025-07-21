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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATEREQUEST_H_

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
                * DescribeWebSecurityTemplate request structure.
                */
                class DescribeWebSecurityTemplateRequest : public AbstractModel
                {
                public:
                    DescribeWebSecurityTemplateRequest();
                    ~DescribeWebSecurityTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * @return ZoneId Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * @param _zoneId Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
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

                private:

                    /**
                     * Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATEREQUEST_H_
