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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERREQUEST_H_

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
                * DeleteUser request structure.
                */
                class DeleteUserRequest : public AbstractModel
                {
                public:
                    DeleteUserRequest();
                    ~DeleteUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Username, which can contain up to 32 characters. You need to select either `UserName` or `UserId` as the search criterion; if both are selected, `UserName` will be used by default.
                     * @return UserName Username, which can contain up to 32 characters. You need to select either `UserName` or `UserId` as the search criterion; if both are selected, `UserName` will be used by default.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username, which can contain up to 32 characters. You need to select either `UserName` or `UserId` as the search criterion; if both are selected, `UserName` will be used by default.
                     * @param _userName Username, which can contain up to 32 characters. You need to select either `UserName` or `UserId` as the search criterion; if both are selected, `UserName` will be used by default.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     * @return UserId User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     * @param _userId User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * Username, which can contain up to 32 characters. You need to select either `UserName` or `UserId` as the search criterion; if both are selected, `UserName` will be used by default.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERREQUEST_H_
