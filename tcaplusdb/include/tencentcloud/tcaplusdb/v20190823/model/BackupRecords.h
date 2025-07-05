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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPRECORDS_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPRECORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Backup records
When it is used as an output parameter, each field will be filled.
When it is used as an input parameter, each field will be filled back into the structure as it is. This API can only be called if `FIleTag` = `OSDATA`.
                */
                class BackupRecords : public AbstractModel
                {
                public:
                    BackupRecords();
                    ~BackupRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table group ID
                     * @return ZoneId Table group ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Table group ID
                     * @param _zoneId Table group ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Backup source
                     * @return BackupType Backup source
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup source
                     * @param _backupType Backup source
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取File tag: TCAPLUS_FULL or OSDATA
                     * @return FileTag File tag: TCAPLUS_FULL or OSDATA
                     * 
                     */
                    std::string GetFileTag() const;

                    /**
                     * 设置File tag: TCAPLUS_FULL or OSDATA
                     * @param _fileTag File tag: TCAPLUS_FULL or OSDATA
                     * 
                     */
                    void SetFileTag(const std::string& _fileTag);

                    /**
                     * 判断参数 FileTag 是否已赋值
                     * @return FileTag 是否已赋值
                     * 
                     */
                    bool FileTagHasBeenSet() const;

                    /**
                     * 获取Number of shards
                     * @return ShardCount Number of shards
                     * 
                     */
                    uint64_t GetShardCount() const;

                    /**
                     * 设置Number of shards
                     * @param _shardCount Number of shards
                     * 
                     */
                    void SetShardCount(const uint64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取Backup batch date
                     * @return BackupBatchTime Backup batch date
                     * 
                     */
                    std::string GetBackupBatchTime() const;

                    /**
                     * 设置Backup batch date
                     * @param _backupBatchTime Backup batch date
                     * 
                     */
                    void SetBackupBatchTime(const std::string& _backupBatchTime);

                    /**
                     * 判断参数 BackupBatchTime 是否已赋值
                     * @return BackupBatchTime 是否已赋值
                     * 
                     */
                    bool BackupBatchTimeHasBeenSet() const;

                    /**
                     * 获取Total size of backup files
                     * @return BackupFileSize Total size of backup files
                     * 
                     */
                    uint64_t GetBackupFileSize() const;

                    /**
                     * 设置Total size of backup files
                     * @param _backupFileSize Total size of backup files
                     * 
                     */
                    void SetBackupFileSize(const uint64_t& _backupFileSize);

                    /**
                     * 判断参数 BackupFileSize 是否已赋值
                     * @return BackupFileSize 是否已赋值
                     * 
                     */
                    bool BackupFileSizeHasBeenSet() const;

                    /**
                     * 获取Backup success rate
                     * @return BackupSuccRate Backup success rate
                     * 
                     */
                    std::string GetBackupSuccRate() const;

                    /**
                     * 设置Backup success rate
                     * @param _backupSuccRate Backup success rate
                     * 
                     */
                    void SetBackupSuccRate(const std::string& _backupSuccRate);

                    /**
                     * 判断参数 BackupSuccRate 是否已赋值
                     * @return BackupSuccRate 是否已赋值
                     * 
                     */
                    bool BackupSuccRateHasBeenSet() const;

                    /**
                     * 获取Backup file expiration time
                     * @return BackupExpireTime Backup file expiration time
                     * 
                     */
                    std::string GetBackupExpireTime() const;

                    /**
                     * 设置Backup file expiration time
                     * @param _backupExpireTime Backup file expiration time
                     * 
                     */
                    void SetBackupExpireTime(const std::string& _backupExpireTime);

                    /**
                     * 判断参数 BackupExpireTime 是否已赋值
                     * @return BackupExpireTime 是否已赋值
                     * 
                     */
                    bool BackupExpireTimeHasBeenSet() const;

                    /**
                     * 获取Business ID
                     * @return AppId Business ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Business ID
                     * @param _appId Business ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * Table group ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Backup source
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * File tag: TCAPLUS_FULL or OSDATA
                     */
                    std::string m_fileTag;
                    bool m_fileTagHasBeenSet;

                    /**
                     * Number of shards
                     */
                    uint64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * Backup batch date
                     */
                    std::string m_backupBatchTime;
                    bool m_backupBatchTimeHasBeenSet;

                    /**
                     * Total size of backup files
                     */
                    uint64_t m_backupFileSize;
                    bool m_backupFileSizeHasBeenSet;

                    /**
                     * Backup success rate
                     */
                    std::string m_backupSuccRate;
                    bool m_backupSuccRateHasBeenSet;

                    /**
                     * Backup file expiration time
                     */
                    std::string m_backupExpireTime;
                    bool m_backupExpireTimeHasBeenSet;

                    /**
                     * Business ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPRECORDS_H_
