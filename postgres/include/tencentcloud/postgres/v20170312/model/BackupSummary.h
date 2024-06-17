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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPSUMMARY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Instance backup statistics
                */
                class BackupSummary : public AbstractModel
                {
                public:
                    BackupSummary();
                    ~BackupSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _dBInstanceId Instance ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of log backups of an instance
                     * @return LogBackupCount Number of log backups of an instance
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 设置Number of log backups of an instance
                     * @param _logBackupCount Number of log backups of an instance
                     * 
                     */
                    void SetLogBackupCount(const uint64_t& _logBackupCount);

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取Size of log backups of an instance
                     * @return LogBackupSize Size of log backups of an instance
                     * 
                     */
                    uint64_t GetLogBackupSize() const;

                    /**
                     * 设置Size of log backups of an instance
                     * @param _logBackupSize Size of log backups of an instance
                     * 
                     */
                    void SetLogBackupSize(const uint64_t& _logBackupSize);

                    /**
                     * 判断参数 LogBackupSize 是否已赋值
                     * @return LogBackupSize 是否已赋值
                     * 
                     */
                    bool LogBackupSizeHasBeenSet() const;

                    /**
                     * 获取Number of manually created instance data backups.
                     * @return ManualBaseBackupCount Number of manually created instance data backups.
                     * 
                     */
                    uint64_t GetManualBaseBackupCount() const;

                    /**
                     * 设置Number of manually created instance data backups.
                     * @param _manualBaseBackupCount Number of manually created instance data backups.
                     * 
                     */
                    void SetManualBaseBackupCount(const uint64_t& _manualBaseBackupCount);

                    /**
                     * 判断参数 ManualBaseBackupCount 是否已赋值
                     * @return ManualBaseBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBaseBackupCountHasBeenSet() const;

                    /**
                     * 获取Size of manually created instance data backups.
                     * @return ManualBaseBackupSize Size of manually created instance data backups.
                     * 
                     */
                    uint64_t GetManualBaseBackupSize() const;

                    /**
                     * 设置Size of manually created instance data backups.
                     * @param _manualBaseBackupSize Size of manually created instance data backups.
                     * 
                     */
                    void SetManualBaseBackupSize(const uint64_t& _manualBaseBackupSize);

                    /**
                     * 判断参数 ManualBaseBackupSize 是否已赋值
                     * @return ManualBaseBackupSize 是否已赋值
                     * 
                     */
                    bool ManualBaseBackupSizeHasBeenSet() const;

                    /**
                     * 获取Number of automatically created instance data backups.
                     * @return AutoBaseBackupCount Number of automatically created instance data backups.
                     * 
                     */
                    uint64_t GetAutoBaseBackupCount() const;

                    /**
                     * 设置Number of automatically created instance data backups.
                     * @param _autoBaseBackupCount Number of automatically created instance data backups.
                     * 
                     */
                    void SetAutoBaseBackupCount(const uint64_t& _autoBaseBackupCount);

                    /**
                     * 判断参数 AutoBaseBackupCount 是否已赋值
                     * @return AutoBaseBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBaseBackupCountHasBeenSet() const;

                    /**
                     * 获取Size of automatically created instance data backups.
                     * @return AutoBaseBackupSize Size of automatically created instance data backups.
                     * 
                     */
                    uint64_t GetAutoBaseBackupSize() const;

                    /**
                     * 设置Size of automatically created instance data backups.
                     * @param _autoBaseBackupSize Size of automatically created instance data backups.
                     * 
                     */
                    void SetAutoBaseBackupSize(const uint64_t& _autoBaseBackupSize);

                    /**
                     * 判断参数 AutoBaseBackupSize 是否已赋值
                     * @return AutoBaseBackupSize 是否已赋值
                     * 
                     */
                    bool AutoBaseBackupSizeHasBeenSet() const;

                    /**
                     * 获取Total number of backups
                     * @return TotalBackupCount Total number of backups
                     * 
                     */
                    uint64_t GetTotalBackupCount() const;

                    /**
                     * 设置Total number of backups
                     * @param _totalBackupCount Total number of backups
                     * 
                     */
                    void SetTotalBackupCount(const uint64_t& _totalBackupCount);

                    /**
                     * 判断参数 TotalBackupCount 是否已赋值
                     * @return TotalBackupCount 是否已赋值
                     * 
                     */
                    bool TotalBackupCountHasBeenSet() const;

                    /**
                     * 获取Total backup size
                     * @return TotalBackupSize Total backup size
                     * 
                     */
                    uint64_t GetTotalBackupSize() const;

                    /**
                     * 设置Total backup size
                     * @param _totalBackupSize Total backup size
                     * 
                     */
                    void SetTotalBackupSize(const uint64_t& _totalBackupSize);

                    /**
                     * 判断参数 TotalBackupSize 是否已赋值
                     * @return TotalBackupSize 是否已赋值
                     * 
                     */
                    bool TotalBackupSizeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Number of log backups of an instance
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * Size of log backups of an instance
                     */
                    uint64_t m_logBackupSize;
                    bool m_logBackupSizeHasBeenSet;

                    /**
                     * Number of manually created instance data backups.
                     */
                    uint64_t m_manualBaseBackupCount;
                    bool m_manualBaseBackupCountHasBeenSet;

                    /**
                     * Size of manually created instance data backups.
                     */
                    uint64_t m_manualBaseBackupSize;
                    bool m_manualBaseBackupSizeHasBeenSet;

                    /**
                     * Number of automatically created instance data backups.
                     */
                    uint64_t m_autoBaseBackupCount;
                    bool m_autoBaseBackupCountHasBeenSet;

                    /**
                     * Size of automatically created instance data backups.
                     */
                    uint64_t m_autoBaseBackupSize;
                    bool m_autoBaseBackupSizeHasBeenSet;

                    /**
                     * Total number of backups
                     */
                    uint64_t m_totalBackupCount;
                    bool m_totalBackupCountHasBeenSet;

                    /**
                     * Total backup size
                     */
                    uint64_t m_totalBackupSize;
                    bool m_totalBackupSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPSUMMARY_H_
