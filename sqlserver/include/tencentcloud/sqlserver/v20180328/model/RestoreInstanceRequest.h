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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_

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
                * RestoreInstance request structure.
                */
                class RestoreInstanceRequest : public AbstractModel
                {
                public:
                    RestoreInstanceRequest();
                    ~RestoreInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of mssql-j8kv137v
                     * @return InstanceId Instance ID in the format of mssql-j8kv137v
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-j8kv137v
                     * @param InstanceId Instance ID in the format of mssql-j8kv137v
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     * @return BackupId Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     * @param BackupId Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_
