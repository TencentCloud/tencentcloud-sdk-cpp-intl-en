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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupDecryptionKey request structure.
                */
                class DescribeBackupDecryptionKeyRequest : public AbstractModel
                {
                public:
                    DescribeBackupDecryptionKeyRequest();
                    ~DescribeBackupDecryptionKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format such as cdb-fybaegd8. This matches the instance ID displayed on the TencentDB console.
                     * @return InstanceId Instance ID, in the format such as cdb-fybaegd8. This matches the instance ID displayed on the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format such as cdb-fybaegd8. This matches the instance ID displayed on the TencentDB console.
                     * @param _instanceId Instance ID, in the format such as cdb-fybaegd8. This matches the instance ID displayed on the TencentDB console.
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
                     * 获取Backup ID of the instance, which can be obtained through the [DescribeBackups](https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) API.
                     * @return BackupId Backup ID of the instance, which can be obtained through the [DescribeBackups](https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) API.
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup ID of the instance, which can be obtained through the [DescribeBackups](https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) API.
                     * @param _backupId Backup ID of the instance, which can be obtained through the [DescribeBackups](https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) API.
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup type. data - data backup, binlog - log backup. The default value is data.
                     * @return BackupType Backup type. data - data backup, binlog - log backup. The default value is data.
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. data - data backup, binlog - log backup. The default value is data.
                     * @param _backupType Backup type. data - data backup, binlog - log backup. The default value is data.
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format such as cdb-fybaegd8. This matches the instance ID displayed on the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup ID of the instance, which can be obtained through the [DescribeBackups](https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) API.
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup type. data - data backup, binlog - log backup. The default value is data.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYREQUEST_H_
