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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_GETCALLERIDENTITYRESPONSE_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_GETCALLERIDENTITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetCallerIdentity response structure.
                */
                class GetCallerIdentityResponse : public AbstractModel
                {
                public:
                    GetCallerIdentityResponse();
                    ~GetCallerIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ARN of the current caller.
                     * @return Arn ARN of the current caller.
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                    /**
                     * 获取Root account UIN of the current caller.
                     * @return AccountId Root account UIN of the current caller.
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取User ID.
1. If the caller is a Tencent Cloud account, the UIN of the current account is returned.
2. If the caller is a role, `roleId:roleSessionName` is returned.
3. If the caller is a federated user, `uin:federatedUserName` is returned.
                     * @return UserId User ID.
1. If the caller is a Tencent Cloud account, the UIN of the current account is returned.
2. If the caller is a role, `roleId:roleSessionName` is returned.
3. If the caller is a federated user, `uin:federatedUserName` is returned.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Account UIN.
1. If the caller is a Tencent Cloud account, the UIN of the current account is returned.
2. If the caller is a role, the UIN of the account that applies for the role is returned.
                     * @return PrincipalId Account UIN.
1. If the caller is a Tencent Cloud account, the UIN of the current account is returned.
2. If the caller is a role, the UIN of the account that applies for the role is returned.
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取Identity type.
                     * @return Type Identity type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * ARN of the current caller.
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                    /**
                     * Root account UIN of the current caller.
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * User ID.
1. If the caller is a Tencent Cloud account, the UIN of the current account is returned.
2. If the caller is a role, `roleId:roleSessionName` is returned.
3. If the caller is a federated user, `uin:federatedUserName` is returned.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Account UIN.
1. If the caller is a Tencent Cloud account, the UIN of the current account is returned.
2. If the caller is a role, the UIN of the account that applies for the role is returned.
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Identity type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_GETCALLERIDENTITYRESPONSE_H_
