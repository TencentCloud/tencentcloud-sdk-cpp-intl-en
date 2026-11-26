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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEWEBSECURITYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEWEBSECURITYTEMPLATEREQUEST_H_

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
                * DeleteWebSecurityTemplate request structure.
                */
                class DeleteWebSecurityTemplateRequest : public AbstractModel
                {
                public:
                    DeleteWebSecurityTemplateRequest();
                    ~DeleteWebSecurityTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     * @return ZoneId Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     * @param _zoneId Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
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
                     * Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEWEBSECURITYTEMPLATEREQUEST_H_
