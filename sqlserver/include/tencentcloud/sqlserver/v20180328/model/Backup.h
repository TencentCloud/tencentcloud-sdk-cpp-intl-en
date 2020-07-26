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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Backup file details
                */
                class Backup : public AbstractModel
                {
                public:
                    Backup();
                    ~Backup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename
                     * @return FileName Filename
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param FileName Filename
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in KB
                     * @return Size File size in KB
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size in KB
                     * @param Size File size in KB
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup start time
                     * @return StartTime Backup start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
                     * @param StartTime Backup start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup end time
                     * @return EndTime Backup end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time
                     * @param EndTime Backup end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Download address for private network
                     * @return InternalAddr Download address for private network
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置Download address for private network
                     * @param InternalAddr Download address for private network
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取Download address for public network
                     * @return ExternalAddr Download address for public network
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置Download address for public network
                     * @param ExternalAddr Download address for public network
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取Unique ID of backup file, which will be used by the `RestoreInstance` API
                     * @return Id Unique ID of backup file, which will be used by the `RestoreInstance` API
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID of backup file, which will be used by the `RestoreInstance` API
                     * @param Id Unique ID of backup file, which will be used by the `RestoreInstance` API
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Backup file status (0: creating, 1: succeeded, 2: failed)
                     * @return Status Backup file status (0: creating, 1: succeeded, 2: failed)
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Backup file status (0: creating, 1: succeeded, 2: failed)
                     * @param Status Backup file status (0: creating, 1: succeeded, 2: failed)
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of databases for multi-database backup
                     * @return DBs List of databases for multi-database backup
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置List of databases for multi-database backup
                     * @param DBs List of databases for multi-database backup
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取Backup policy (0: instance backup, 1: multi-database backup)
                     * @return Strategy Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Backup policy (0: instance backup, 1: multi-database backup)
                     * @param Strategy Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Backup mode. 0: scheduled, 1: manual
                     * @return BackupWay Backup mode. 0: scheduled, 1: manual
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置Backup mode. 0: scheduled, 1: manual
                     * @param BackupWay Backup mode. 0: scheduled, 1: manual
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     */
                    bool BackupWayHasBeenSet() const;

                private:

                    /**
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in KB
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Download address for private network
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * Download address for public network
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * Unique ID of backup file, which will be used by the `RestoreInstance` API
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Backup file status (0: creating, 1: succeeded, 2: failed)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of databases for multi-database backup
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Backup mode. 0: scheduled, 1: manual
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
