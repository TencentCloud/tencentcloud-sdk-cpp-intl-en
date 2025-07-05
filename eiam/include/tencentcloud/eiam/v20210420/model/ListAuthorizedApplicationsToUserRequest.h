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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERREQUEST_H_

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
                * ListAuthorizedApplicationsToUser request structure.
                */
                class ListAuthorizedApplicationsToUserRequest : public AbstractModel
                {
                public:
                    ListAuthorizedApplicationsToUserRequest();
                    ~ListAuthorizedApplicationsToUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User ID.
                     * @return UserId User ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID.
                     * @param _userId User ID.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     * @return IncludeInheritedAuthorizations Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     * 
                     */
                    bool GetIncludeInheritedAuthorizations() const;

                    /**
                     * 设置Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     * @param _includeInheritedAuthorizations Whether the query scope includes the application access of the user groups and organizations associated with the user. Valid values: false: no; true: yes. Default value: false.
                     * 
                     */
                    void SetIncludeInheritedAuthorizations(const bool& _includeInheritedAuthorizations);

                    /**
                     * 判断参数 IncludeInheritedAuthorizations 是否已赋值
                     * @return IncludeInheritedAuthorizations 是否已赋值
                     * 
                     */
                    bool IncludeInheritedAuthorizationsHasBeenSet() const;

                private:

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

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

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERREQUEST_H_
