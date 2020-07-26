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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONRESPONSE_H_

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
                * GetOrganization response structure.
                */
                class GetOrganizationResponse : public AbstractModel
                {
                public:
                    GetOrganizationResponse();
                    ~GetOrganizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Organization ID
                     * @return OrgId Organization ID
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取Creator UIN
                     * @return HostUin Creator UIN
                     */
                    uint64_t GetHostUin() const;

                    /**
                     * 判断参数 HostUin 是否已赋值
                     * @return HostUin 是否已赋值
                     */
                    bool HostUinHasBeenSet() const;

                    /**
                     * 获取Creator’s name
                     * @return Nickname Creator’s name
                     */
                    std::string GetNickname() const;

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Creator’s email address
                     * @return Mail Creator’s email address
                     */
                    std::string GetMail() const;

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取Organization type
                     * @return OrgType Organization type
                     */
                    uint64_t GetOrgType() const;

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     */
                    bool OrgTypeHasBeenSet() const;

                    /**
                     * 获取Whether the organization is empty or not 
                     * @return IsEmpty Whether the organization is empty or not 
                     */
                    uint64_t GetIsEmpty() const;

                    /**
                     * 判断参数 IsEmpty 是否已赋值
                     * @return IsEmpty 是否已赋值
                     */
                    bool IsEmptyHasBeenSet() const;

                private:

                    /**
                     * Organization ID
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    uint64_t m_hostUin;
                    bool m_hostUinHasBeenSet;

                    /**
                     * Creator’s name
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Creator’s email address
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * Organization type
                     */
                    uint64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                    /**
                     * Whether the organization is empty or not 
                     */
                    uint64_t m_isEmpty;
                    bool m_isEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONRESPONSE_H_
