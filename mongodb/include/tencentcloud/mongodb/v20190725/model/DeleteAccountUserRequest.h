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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEACCOUNTUSERREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEACCOUNTUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DeleteAccountUser request structure.
                */
                class DeleteAccountUserRequest : public AbstractModel
                {
                public:
                    DeleteAccountUserRequest();
                    ~DeleteAccountUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID for the account to be deleted. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * @return InstanceId Specifies the instance ID for the account to be deleted. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID for the account to be deleted. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * @param _instanceId Specifies the instance ID for the account to be deleted. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Configures the name of the account to be deleted.
                     * @return UserName Configures the name of the account to be deleted.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Configures the name of the account to be deleted.
                     * @param _userName Configures the name of the account to be deleted.
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
                     * 获取Configures the password corresponding to the mongouser account. mongouser is the default account of the system. Enter the password corresponding to it.
                     * @return MongoUserPassword Configures the password corresponding to the mongouser account. mongouser is the default account of the system. Enter the password corresponding to it.
                     * 
                     */
                    std::string GetMongoUserPassword() const;

                    /**
                     * 设置Configures the password corresponding to the mongouser account. mongouser is the default account of the system. Enter the password corresponding to it.
                     * @param _mongoUserPassword Configures the password corresponding to the mongouser account. mongouser is the default account of the system. Enter the password corresponding to it.
                     * 
                     */
                    void SetMongoUserPassword(const std::string& _mongoUserPassword);

                    /**
                     * 判断参数 MongoUserPassword 是否已赋值
                     * @return MongoUserPassword 是否已赋值
                     * 
                     */
                    bool MongoUserPasswordHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID for the account to be deleted. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Configures the name of the account to be deleted.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Configures the password corresponding to the mongouser account. mongouser is the default account of the system. Enter the password corresponding to it.
                     */
                    std::string m_mongoUserPassword;
                    bool m_mongoUserPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEACCOUNTUSERREQUEST_H_
