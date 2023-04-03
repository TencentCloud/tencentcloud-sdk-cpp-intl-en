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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadURL request structure.
                */
                class DescribeBackupDownloadURLRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadURLRequest();
                    ~DescribeBackupDownloadURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return DBInstanceId Instance ID.
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param DBInstanceId Instance ID.
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup type. Valid values: `LogBackup`, `BaseBackup`.
                     * @return BackupType Backup type. Valid values: `LogBackup`, `BaseBackup`.
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. Valid values: `LogBackup`, `BaseBackup`.
                     * @param BackupType Backup type. Valid values: `LogBackup`, `BaseBackup`.
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Unique backup ID.
                     * @return BackupId Unique backup ID.
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置Unique backup ID.
                     * @param BackupId Unique backup ID.
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Validity period of a URL, which is 12 hours by default.
                     * @return URLExpireTime Validity period of a URL, which is 12 hours by default.
                     */
                    uint64_t GetURLExpireTime() const;

                    /**
                     * 设置Validity period of a URL, which is 12 hours by default.
                     * @param URLExpireTime Validity period of a URL, which is 12 hours by default.
                     */
                    void SetURLExpireTime(const uint64_t& _uRLExpireTime);

                    /**
                     * 判断参数 URLExpireTime 是否已赋值
                     * @return URLExpireTime 是否已赋值
                     */
                    bool URLExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Backup type. Valid values: `LogBackup`, `BaseBackup`.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Unique backup ID.
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Validity period of a URL, which is 12 hours by default.
                     */
                    uint64_t m_uRLExpireTime;
                    bool m_uRLExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
