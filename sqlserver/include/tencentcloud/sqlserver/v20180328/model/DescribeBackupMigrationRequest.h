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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMIGRATIONREQUEST_H_

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
                * DescribeBackupMigration request structure.
                */
                class DescribeBackupMigrationRequest : public AbstractModel
                {
                public:
                    DescribeBackupMigrationRequest();
                    ~DescribeBackupMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of imported target instance
                     * @return InstanceId ID of imported target instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of imported target instance
                     * @param InstanceId ID of imported target instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup import task ID, which is returned through the API CreateBackupMigration.
                     * @return BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration.
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置Backup import task ID, which is returned through the API CreateBackupMigration.
                     * @param BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration.
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                    /**
                     * 获取Import task name
                     * @return MigrationName Import task name
                     */
                    std::string GetMigrationName() const;

                    /**
                     * 设置Import task name
                     * @param MigrationName Import task name
                     */
                    void SetMigrationName(const std::string& _migrationName);

                    /**
                     * 判断参数 MigrationName 是否已赋值
                     * @return MigrationName 是否已赋值
                     */
                    bool MigrationNameHasBeenSet() const;

                    /**
                     * 获取Backup file name
                     * @return BackupFileName Backup file name
                     */
                    std::string GetBackupFileName() const;

                    /**
                     * 设置Backup file name
                     * @param BackupFileName Backup file name
                     */
                    void SetBackupFileName(const std::string& _backupFileName);

                    /**
                     * 判断参数 BackupFileName 是否已赋值
                     * @return BackupFileName 是否已赋值
                     */
                    bool BackupFileNameHasBeenSet() const;

                    /**
                     * 获取Status set of import tasks
                     * @return StatusSet Status set of import tasks
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置Status set of import tasks
                     * @param StatusSet Status set of import tasks
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取Import task restoration type: FULL,FULL_LOG,FULL_DIFF
                     * @return RecoveryType Import task restoration type: FULL,FULL_LOG,FULL_DIFF
                     */
                    std::string GetRecoveryType() const;

                    /**
                     * 设置Import task restoration type: FULL,FULL_LOG,FULL_DIFF
                     * @param RecoveryType Import task restoration type: FULL,FULL_LOG,FULL_DIFF
                     */
                    void SetRecoveryType(const std::string& _recoveryType);

                    /**
                     * 判断参数 RecoveryType 是否已赋值
                     * @return RecoveryType 是否已赋值
                     */
                    bool RecoveryTypeHasBeenSet() const;

                    /**
                     * 获取COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * @return UploadType COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * @param UploadType COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned per page. Default value: `100`.
                     * @return Limit The maximum number of results returned per page. Default value: `100`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Default value: `100`.
                     * @param Limit The maximum number of results returned per page. Default value: `100`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`.
                     * @return Offset Page number. Default value: `0`.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`.
                     * @param Offset Page number. Default value: `0`.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort by field. Valid values: `name`, `createTime`, `startTime`, `endTime`. By default, the results returned are sorted by `createTime` in the ascending order.
                     * @return OrderBy Sort by field. Valid values: `name`, `createTime`, `startTime`, `endTime`. By default, the results returned are sorted by `createTime` in the ascending order.
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by field. Valid values: `name`, `createTime`, `startTime`, `endTime`. By default, the results returned are sorted by `createTime` in the ascending order.
                     * @param OrderBy Sort by field. Valid values: `name`, `createTime`, `startTime`, `endTime`. By default, the results returned are sorted by `createTime` in the ascending order.
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order which is valid only when `OrderBy` is specified. Valid values: `asc` (ascending), `desc` (descending). Default value: `asc`.
                     * @return OrderByType Sorting order which is valid only when `OrderBy` is specified. Valid values: `asc` (ascending), `desc` (descending). Default value: `asc`.
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order which is valid only when `OrderBy` is specified. Valid values: `asc` (ascending), `desc` (descending). Default value: `asc`.
                     * @param OrderByType Sorting order which is valid only when `OrderBy` is specified. Valid values: `asc` (ascending), `desc` (descending). Default value: `asc`.
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * ID of imported target instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup import task ID, which is returned through the API CreateBackupMigration.
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                    /**
                     * Import task name
                     */
                    std::string m_migrationName;
                    bool m_migrationNameHasBeenSet;

                    /**
                     * Backup file name
                     */
                    std::string m_backupFileName;
                    bool m_backupFileNameHasBeenSet;

                    /**
                     * Status set of import tasks
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * Import task restoration type: FULL,FULL_LOG,FULL_DIFF
                     */
                    std::string m_recoveryType;
                    bool m_recoveryTypeHasBeenSet;

                    /**
                     * COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * The maximum number of results returned per page. Default value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort by field. Valid values: `name`, `createTime`, `startTime`, `endTime`. By default, the results returned are sorted by `createTime` in the ascending order.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order which is valid only when `OrderBy` is specified. Valid values: `asc` (ascending), `desc` (descending). Default value: `asc`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMIGRATIONREQUEST_H_
