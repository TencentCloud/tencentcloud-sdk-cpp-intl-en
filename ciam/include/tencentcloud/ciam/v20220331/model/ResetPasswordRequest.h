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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_RESETPASSWORDREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_RESETPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ResetPassword request structure.
                */
                class ResetPasswordRequest : public AbstractModel
                {
                public:
                    ResetPasswordRequest();
                    ~ResetPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User ID
                     * @return UserId User ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param _userId User ID
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
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_RESETPASSWORDREQUEST_H_
