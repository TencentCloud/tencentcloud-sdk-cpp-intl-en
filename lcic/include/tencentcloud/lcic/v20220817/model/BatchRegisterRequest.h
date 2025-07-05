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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHREGISTERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHREGISTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/BatchUserRequest.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchRegister request structure.
                */
                class BatchRegisterRequest : public AbstractModel
                {
                public:
                    BatchRegisterRequest();
                    ~BatchRegisterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The information of the users to register.
                     * @return Users The information of the users to register.
                     * 
                     */
                    std::vector<BatchUserRequest> GetUsers() const;

                    /**
                     * 设置The information of the users to register.
                     * @param _users The information of the users to register.
                     * 
                     */
                    void SetUsers(const std::vector<BatchUserRequest>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * The information of the users to register.
                     */
                    std::vector<BatchUserRequest> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHREGISTERREQUEST_H_
