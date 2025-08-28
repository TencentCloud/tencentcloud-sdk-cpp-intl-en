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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPNAMEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyBackupName request structure.
                */
                class ModifyBackupNameRequest : public AbstractModel
                {
                public:
                    ModifyBackupNameRequest();
                    ~ModifyBackupNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of mssql-3l3fgqn7.
                     * @return InstanceId Instance ID, in the format of mssql-3l3fgqn7.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of mssql-3l3fgqn7.
                     * @param _instanceId Instance ID, in the format of mssql-3l3fgqn7.
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
                     * 获取Modified backup name.
                     * @return BackupName Modified backup name.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Modified backup name.
                     * @param _backupName Modified backup name.
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取The backup ID can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API. When the value of GroupId is null, BackupId is required.
                     * @return BackupId The backup ID can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API. When the value of GroupId is null, BackupId is required.
                     * 
                     */
                    uint64_t GetBackupId() const;

                    /**
                     * 设置The backup ID can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API. When the value of GroupId is null, BackupId is required.
                     * @param _backupId The backup ID can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API. When the value of GroupId is null, BackupId is required.
                     * 
                     */
                    void SetBackupId(const uint64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup task group ID, which can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API in single-database backup file mode. BackupId and GroupId exist simultaneously, and are modified according to BackupId.
                     * @return GroupId Backup task group ID, which can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API in single-database backup file mode. BackupId and GroupId exist simultaneously, and are modified according to BackupId.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Backup task group ID, which can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API in single-database backup file mode. BackupId and GroupId exist simultaneously, and are modified according to BackupId.
                     * @param _groupId Backup task group ID, which can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API in single-database backup file mode. BackupId and GroupId exist simultaneously, and are modified according to BackupId.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of mssql-3l3fgqn7.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Modified backup name.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * The backup ID can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API. When the value of GroupId is null, BackupId is required.
                     */
                    uint64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup task group ID, which can be obtained through the [DescribeBackups](https://cloud.tencent.com/document/product/238/19943) API in single-database backup file mode. BackupId and GroupId exist simultaneously, and are modified according to BackupId.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPNAMEREQUEST_H_
