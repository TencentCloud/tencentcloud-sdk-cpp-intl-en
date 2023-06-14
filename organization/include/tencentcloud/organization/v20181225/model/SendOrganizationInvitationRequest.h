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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_SENDORGANIZATIONINVITATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_SENDORGANIZATIONINVITATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * SendOrganizationInvitation request structure.
                */
                class SendOrganizationInvitationRequest : public AbstractModel
                {
                public:
                    SendOrganizationInvitationRequest();
                    ~SendOrganizationInvitationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UIN of the invitee
                     * @return InviteUin UIN of the invitee
                     * 
                     */
                    uint64_t GetInviteUin() const;

                    /**
                     * 设置UIN of the invitee
                     * @param _inviteUin UIN of the invitee
                     * 
                     */
                    void SetInviteUin(const uint64_t& _inviteUin);

                    /**
                     * 判断参数 InviteUin 是否已赋值
                     * @return InviteUin 是否已赋值
                     * 
                     */
                    bool InviteUinHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Notes
                     * @return Remark Notes
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Notes
                     * @param _remark Notes
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * UIN of the invitee
                     */
                    uint64_t m_inviteUin;
                    bool m_inviteUinHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Notes
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_SENDORGANIZATIONINVITATIONREQUEST_H_
