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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RESTOREINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RESTOREINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * RestoreInstance request structure.
                */
                class RestoreInstanceRequest : public AbstractModel
                {
                public:
                    RestoreInstanceRequest();
                    ~RestoreInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstances` API.
                     * @return InstanceId ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstances` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstances` API.
                     * @param _instanceId ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstances` API.
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
                     * 获取Backup ID, which can be obtained through the `backupId` field in the return value of the `GetRedisBackupList` API.
                     * @return BackupId Backup ID, which can be obtained through the `backupId` field in the return value of the `GetRedisBackupList` API.
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置Backup ID, which can be obtained through the `backupId` field in the return value of the `GetRedisBackupList` API.
                     * @param _backupId Backup ID, which can be obtained through the `backupId` field in the return value of the `GetRedisBackupList` API.
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Instance password, which needs to be validated during instance restoration (this parameter is not required for password-free instances)
                     * @return Password Instance password, which needs to be validated during instance restoration (this parameter is not required for password-free instances)
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password, which needs to be validated during instance restoration (this parameter is not required for password-free instances)
                     * @param _password Instance password, which needs to be validated during instance restoration (this parameter is not required for password-free instances)
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup ID, which can be obtained through the `backupId` field in the return value of the `GetRedisBackupList` API.
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Instance password, which needs to be validated during instance restoration (this parameter is not required for password-free instances)
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESTOREINSTANCEREQUEST_H_
