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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupConfig response structure.
                */
                class DescribeBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeBackupConfigResponse();
                    ~DescribeBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Full backup start time. Value range: [0-24*3600]. For example, 0:00 AM, 1:00 AM, and 2:00 AM are represented by 0, 3600, and 7200, respectively
                     * @return BackupTimeBeg Full backup start time. Value range: [0-24*3600]. For example, 0:00 AM, 1:00 AM, and 2:00 AM are represented by 0, 3600, and 7200, respectively
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 判断参数 BackupTimeBeg 是否已赋值
                     * @return BackupTimeBeg 是否已赋值
                     */
                    bool BackupTimeBegHasBeenSet() const;

                    /**
                     * 获取Full backup end time. Value range: [0-24*3600]. For example, 0:00 AM, 1:00 AM, and 2:00 AM are represented by 0, 3600, and 7200, respectively
                     * @return BackupTimeEnd Full backup end time. Value range: [0-24*3600]. For example, 0:00 AM, 1:00 AM, and 2:00 AM are represented by 0, 3600, and 7200, respectively
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 判断参数 BackupTimeEnd 是否已赋值
                     * @return BackupTimeEnd 是否已赋值
                     */
                    bool BackupTimeEndHasBeenSet() const;

                    /**
                     * 获取Backup retention period in seconds. Backups will be cleared after this period elapses. 7 days is represented by 3600*24*7 = 604800
                     * @return ReserveDuration Backup retention period in seconds. Backups will be cleared after this period elapses. 7 days is represented by 3600*24*7 = 604800
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 判断参数 ReserveDuration 是否已赋值
                     * @return ReserveDuration 是否已赋值
                     */
                    bool ReserveDurationHasBeenSet() const;

                    /**
                     * 获取Backup frequency. It is an array of 7 elements corresponding to Monday through Sunday. full: full backup; increment: incremental backup
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BackupFreq Backup frequency. It is an array of 7 elements corresponding to Monday through Sunday. full: full backup; increment: incremental backup
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetBackupFreq() const;

                    /**
                     * 判断参数 BackupFreq 是否已赋值
                     * @return BackupFreq 是否已赋值
                     */
                    bool BackupFreqHasBeenSet() const;

                    /**
                     * 获取Backup mode. logic: logic backup; snapshot: snapshot backup
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BackupType Backup mode. logic: logic backup; snapshot: snapshot backup
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                private:

                    /**
                     * Full backup start time. Value range: [0-24*3600]. For example, 0:00 AM, 1:00 AM, and 2:00 AM are represented by 0, 3600, and 7200, respectively
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * Full backup end time. Value range: [0-24*3600]. For example, 0:00 AM, 1:00 AM, and 2:00 AM are represented by 0, 3600, and 7200, respectively
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * Backup retention period in seconds. Backups will be cleared after this period elapses. 7 days is represented by 3600*24*7 = 604800
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * Backup frequency. It is an array of 7 elements corresponding to Monday through Sunday. full: full backup; increment: incremental backup
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_backupFreq;
                    bool m_backupFreqHasBeenSet;

                    /**
                     * Backup mode. logic: logic backup; snapshot: snapshot backup
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
