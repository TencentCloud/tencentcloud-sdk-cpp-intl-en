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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeUserResourcesAuthorization request structure.
                */
                class DescribeUserResourcesAuthorizationRequest : public AbstractModel
                {
                public:
                    DescribeUserResourcesAuthorizationRequest();
                    ~DescribeUserResourcesAuthorizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return ApplicationId Application ID.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID.
                     * @param ApplicationId Application ID.
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取User ID. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     * @return UserId User ID. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     * @param UserId User ID. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     * @return UserName Username. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     * @param UserName Username. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     * @return IncludeInheritedAuthorizations Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     */
                    bool GetIncludeInheritedAuthorizations() const;

                    /**
                     * 设置Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     * @param IncludeInheritedAuthorizations Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     */
                    void SetIncludeInheritedAuthorizations(const bool& _includeInheritedAuthorizations);

                    /**
                     * 判断参数 IncludeInheritedAuthorizations 是否已赋值
                     * @return IncludeInheritedAuthorizations 是否已赋值
                     */
                    bool IncludeInheritedAuthorizationsHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * User ID. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username. You need to specify at least `UserName` or `UserId`. If both are specified, `UserName` will be used first.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     */
                    bool m_includeInheritedAuthorizations;
                    bool m_includeInheritedAuthorizationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONREQUEST_H_