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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPCOMMANDREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPCOMMANDREQUEST_H_

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
                * DescribeBackupCommand request structure.
                */
                class DescribeBackupCommandRequest : public AbstractModel
                {
                public:
                    DescribeBackupCommandRequest();
                    ~DescribeBackupCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup file type. Full: full backup. FULL_LOG: full backup which needs log increments. FULL_DIFF: full backup which needs differential increments. LOG: log backup. DIFF: differential backup.
                     * @return BackupFileType Backup file type. Full: full backup. FULL_LOG: full backup which needs log increments. FULL_DIFF: full backup which needs differential increments. LOG: log backup. DIFF: differential backup.
                     * 
                     */
                    std::string GetBackupFileType() const;

                    /**
                     * 设置Backup file type. Full: full backup. FULL_LOG: full backup which needs log increments. FULL_DIFF: full backup which needs differential increments. LOG: log backup. DIFF: differential backup.
                     * @param _backupFileType Backup file type. Full: full backup. FULL_LOG: full backup which needs log increments. FULL_DIFF: full backup which needs differential increments. LOG: log backup. DIFF: differential backup.
                     * 
                     */
                    void SetBackupFileType(const std::string& _backupFileType);

                    /**
                     * 判断参数 BackupFileType 是否已赋值
                     * @return BackupFileType 是否已赋值
                     * 
                     */
                    bool BackupFileTypeHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DataBaseName Database name
                     * 
                     */
                    std::string GetDataBaseName() const;

                    /**
                     * 设置Database name
                     * @param _dataBaseName Database name
                     * 
                     */
                    void SetDataBaseName(const std::string& _dataBaseName);

                    /**
                     * 判断参数 DataBaseName 是否已赋值
                     * @return DataBaseName 是否已赋值
                     * 
                     */
                    bool DataBaseNameHasBeenSet() const;

                    /**
                     * 获取Whether restoration is required. No: not required. Yes: required.
                     * @return IsRecovery Whether restoration is required. No: not required. Yes: required.
                     * 
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置Whether restoration is required. No: not required. Yes: required.
                     * @param _isRecovery Whether restoration is required. No: not required. Yes: required.
                     * 
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     * 
                     */
                    bool IsRecoveryHasBeenSet() const;

                    /**
                     * 获取Storage path of backup files. If this parameter is left empty, the default storage path will be D:\\.
                     * @return LocalPath Storage path of backup files. If this parameter is left empty, the default storage path will be D:\\.
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置Storage path of backup files. If this parameter is left empty, the default storage path will be D:\\.
                     * @param _localPath Storage path of backup files. If this parameter is left empty, the default storage path will be D:\\.
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                private:

                    /**
                     * Backup file type. Full: full backup. FULL_LOG: full backup which needs log increments. FULL_DIFF: full backup which needs differential increments. LOG: log backup. DIFF: differential backup.
                     */
                    std::string m_backupFileType;
                    bool m_backupFileTypeHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_dataBaseName;
                    bool m_dataBaseNameHasBeenSet;

                    /**
                     * Whether restoration is required. No: not required. Yes: required.
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                    /**
                     * Storage path of backup files. If this parameter is left empty, the default storage path will be D:\\.
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPCOMMANDREQUEST_H_
