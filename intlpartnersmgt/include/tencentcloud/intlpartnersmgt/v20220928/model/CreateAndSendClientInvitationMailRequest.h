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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEANDSENDCLIENTINVITATIONMAILREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEANDSENDCLIENTINVITATIONMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * CreateAndSendClientInvitationMail request structure.
                */
                class CreateAndSendClientInvitationMailRequest : public AbstractModel
                {
                public:
                    CreateAndSendClientInvitationMailRequest();
                    ~CreateAndSendClientInvitationMailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Email address that receives the customer invitation link.
                     * @return Email Email address that receives the customer invitation link.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address that receives the customer invitation link.
                     * @param _email Email address that receives the customer invitation link.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Invite a role.
Note: if no value is passed, it defaults to the sub - customer.
Client: customer.
SubAgent: second-level reseller.
                     * @return InvitationRole Invite a role.
Note: if no value is passed, it defaults to the sub - customer.
Client: customer.
SubAgent: second-level reseller.
                     * 
                     */
                    std::string GetInvitationRole() const;

                    /**
                     * 设置Invite a role.
Note: if no value is passed, it defaults to the sub - customer.
Client: customer.
SubAgent: second-level reseller.
                     * @param _invitationRole Invite a role.
Note: if no value is passed, it defaults to the sub - customer.
Client: customer.
SubAgent: second-level reseller.
                     * 
                     */
                    void SetInvitationRole(const std::string& _invitationRole);

                    /**
                     * 判断参数 InvitationRole 是否已赋值
                     * @return InvitationRole 是否已赋值
                     * 
                     */
                    bool InvitationRoleHasBeenSet() const;

                    /**
                     * 获取Specifies the application material.
Note: this field takes effect only in the scenario of inviting a second-level reseller.
                     * @return MaterialUrl Specifies the application material.
Note: this field takes effect only in the scenario of inviting a second-level reseller.
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置Specifies the application material.
Note: this field takes effect only in the scenario of inviting a second-level reseller.
                     * @param _materialUrl Specifies the application material.
Note: this field takes effect only in the scenario of inviting a second-level reseller.
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                private:

                    /**
                     * Email address that receives the customer invitation link.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Invite a role.
Note: if no value is passed, it defaults to the sub - customer.
Client: customer.
SubAgent: second-level reseller.
                     */
                    std::string m_invitationRole;
                    bool m_invitationRoleHasBeenSet;

                    /**
                     * Specifies the application material.
Note: this field takes effect only in the scenario of inviting a second-level reseller.
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEANDSENDCLIENTINVITATIONMAILREQUEST_H_
