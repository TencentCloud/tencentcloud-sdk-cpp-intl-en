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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDTEMPLATEMEMBERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDTEMPLATEMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AddTemplateMember request structure.
                */
                class AddTemplateMemberRequest : public AbstractModel
                {
                public:
                    AddTemplateMemberRequest();
                    ~AddTemplateMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameter template instance ID, which can be the instance ID of a parameter template of the following four types: IP address, protocol port, IP address group, and protocol port group.
                     * @return TemplateId Parameter template instance ID, which can be the instance ID of a parameter template of the following four types: IP address, protocol port, IP address group, and protocol port group.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Parameter template instance ID, which can be the instance ID of a parameter template of the following four types: IP address, protocol port, IP address group, and protocol port group.
                     * @param _templateId Parameter template instance ID, which can be the instance ID of a parameter template of the following four types: IP address, protocol port, IP address group, and protocol port group.
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
                     * 获取Information on the parameter template to be added. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter.
                     * @return TemplateMember Information on the parameter template to be added. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter.
                     * 
                     */
                    std::vector<MemberInfo> GetTemplateMember() const;

                    /**
                     * 设置Information on the parameter template to be added. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter.
                     * @param _templateMember Information on the parameter template to be added. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter.
                     * 
                     */
                    void SetTemplateMember(const std::vector<MemberInfo>& _templateMember);

                    /**
                     * 判断参数 TemplateMember 是否已赋值
                     * @return TemplateMember 是否已赋值
                     * 
                     */
                    bool TemplateMemberHasBeenSet() const;

                private:

                    /**
                     * Parameter template instance ID, which can be the instance ID of a parameter template of the following four types: IP address, protocol port, IP address group, and protocol port group.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Information on the parameter template to be added. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter.
                     */
                    std::vector<MemberInfo> m_templateMember;
                    bool m_templateMemberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDTEMPLATEMEMBERREQUEST_H_
