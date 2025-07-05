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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_

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
                * CreateBackupDBInstance request structure.
                */
                class CreateBackupDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateBackupDBInstanceRequest();
                    ~CreateBackupDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Valid values: 0 (logical backup), 1 (physical backup)
                     * @return BackupMethod Valid values: 0 (logical backup), 1 (physical backup)
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置Valid values: 0 (logical backup), 1 (physical backup)
                     * @param _backupMethod Valid values: 0 (logical backup), 1 (physical backup)
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Backup remarks
                     * @return BackupRemark Backup remarks
                     * 
                     */
                    std::string GetBackupRemark() const;

                    /**
                     * 设置Backup remarks
                     * @param _backupRemark Backup remarks
                     * 
                     */
                    void SetBackupRemark(const std::string& _backupRemark);

                    /**
                     * 判断参数 BackupRemark 是否已赋值
                     * @return BackupRemark 是否已赋值
                     * 
                     */
                    bool BackupRemarkHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Valid values: 0 (logical backup), 1 (physical backup)
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Backup remarks
                     */
                    std::string m_backupRemark;
                    bool m_backupRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_
