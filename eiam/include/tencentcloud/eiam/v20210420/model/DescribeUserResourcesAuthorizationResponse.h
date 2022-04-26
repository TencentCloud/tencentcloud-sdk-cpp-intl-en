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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AuthorizationUserResouceInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeUserResourcesAuthorization response structure.
                */
                class DescribeUserResourcesAuthorizationResponse : public AbstractModel
                {
                public:
                    DescribeUserResourcesAuthorizationResponse();
                    ~DescribeUserResourcesAuthorizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique application ID.
                     * @return ApplicationId Unique application ID.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationAccounts Application account.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetApplicationAccounts() const;

                    /**
                     * 判断参数 ApplicationAccounts 是否已赋值
                     * @return ApplicationAccounts 是否已赋值
                     */
                    bool ApplicationAccountsHasBeenSet() const;

                    /**
                     * 获取Unique ID of the authorized user.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserId Unique ID of the authorized user.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username of the authorized user.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username of the authorized user.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Returned resource list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizationUserResourceList Returned resource list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AuthorizationUserResouceInfo> GetAuthorizationUserResourceList() const;

                    /**
                     * 判断参数 AuthorizationUserResourceList 是否已赋值
                     * @return AuthorizationUserResourceList 是否已赋值
                     */
                    bool AuthorizationUserResourceListHasBeenSet() const;

                private:

                    /**
                     * Unique application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application account.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationAccounts;
                    bool m_applicationAccountsHasBeenSet;

                    /**
                     * Unique ID of the authorized user.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username of the authorized user.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Returned resource list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AuthorizationUserResouceInfo> m_authorizationUserResourceList;
                    bool m_authorizationUserResourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONRESPONSE_H_
