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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTEMPLATEMEMBERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTEMPLATEMEMBERREQUEST_H_

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
                * ModifyTemplateMember request structure.
                */
                class ModifyTemplateMemberRequest : public AbstractModel
                {
                public:
                    ModifyTemplateMemberRequest();
                    ~ModifyTemplateMemberRequest() = default;
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
                     * 获取Information on the parameter template to be modified. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of TemplateMember, and the input parameter length should be consistent with that of TemplateMember.
                     * @return OriginalTemplateMember Information on the parameter template to be modified. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of TemplateMember, and the input parameter length should be consistent with that of TemplateMember.
                     * 
                     */
                    std::vector<MemberInfo> GetOriginalTemplateMember() const;

                    /**
                     * 设置Information on the parameter template to be modified. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of TemplateMember, and the input parameter length should be consistent with that of TemplateMember.
                     * @param _originalTemplateMember Information on the parameter template to be modified. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of TemplateMember, and the input parameter length should be consistent with that of TemplateMember.
                     * 
                     */
                    void SetOriginalTemplateMember(const std::vector<MemberInfo>& _originalTemplateMember);

                    /**
                     * 判断参数 OriginalTemplateMember 是否已赋值
                     * @return OriginalTemplateMember 是否已赋值
                     * 
                     */
                    bool OriginalTemplateMemberHasBeenSet() const;

                    /**
                     * 获取New parameter template information. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of OriginalTemplateMember, and the input parameter length should be consistent with that of OriginalTemplateMember.
                     * @return TemplateMember New parameter template information. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of OriginalTemplateMember, and the input parameter length should be consistent with that of OriginalTemplateMember.
                     * 
                     */
                    std::vector<MemberInfo> GetTemplateMember() const;

                    /**
                     * 设置New parameter template information. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of OriginalTemplateMember, and the input parameter length should be consistent with that of OriginalTemplateMember.
                     * @param _templateMember New parameter template information. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of OriginalTemplateMember, and the input parameter length should be consistent with that of OriginalTemplateMember.
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
                     * Information on the parameter template to be modified. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of TemplateMember, and the input parameter length should be consistent with that of TemplateMember.
                     */
                    std::vector<MemberInfo> m_originalTemplateMember;
                    bool m_originalTemplateMemberHasBeenSet;

                    /**
                     * New parameter template information. The template can be of the following four types: IP address, protocol port, IP address group, and protocol port group. The type should be consistent with that of the template specified by the TemplateId parameter. The parameter sequence should be the same as that of OriginalTemplateMember, and the input parameter length should be consistent with that of OriginalTemplateMember.
                     */
                    std::vector<MemberInfo> m_templateMember;
                    bool m_templateMemberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTEMPLATEMEMBERREQUEST_H_
