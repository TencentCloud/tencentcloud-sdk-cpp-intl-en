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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_

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
                * Backup plan
                */
                class BackupPlan : public AbstractModel
                {
                public:
                    BackupPlan();
                    ~BackupPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup cycle
                     * @return BackupPeriod Backup cycle
                     */
                    std::string GetBackupPeriod() const;

                    /**
                     * 设置Backup cycle
                     * @param BackupPeriod Backup cycle
                     */
                    void SetBackupPeriod(const std::string& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取Retention period of basic backups
                     * @return BaseBackupRetentionPeriod Retention period of basic backups
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置Retention period of basic backups
                     * @param BaseBackupRetentionPeriod Retention period of basic backups
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取The earliest time to start a backup
                     * @return MinBackupStartTime The earliest time to start a backup
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置The earliest time to start a backup
                     * @param MinBackupStartTime The earliest time to start a backup
                     */
                    void SetMinBackupStartTime(const std::string& _minBackupStartTime);

                    /**
                     * 判断参数 MinBackupStartTime 是否已赋值
                     * @return MinBackupStartTime 是否已赋值
                     */
                    bool MinBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取The latest time to start a backup
                     * @return MaxBackupStartTime The latest time to start a backup
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置The latest time to start a backup
                     * @param MaxBackupStartTime The latest time to start a backup
                     */
                    void SetMaxBackupStartTime(const std::string& _maxBackupStartTime);

                    /**
                     * 判断参数 MaxBackupStartTime 是否已赋值
                     * @return MaxBackupStartTime 是否已赋值
                     */
                    bool MaxBackupStartTimeHasBeenSet() const;

                private:

                    /**
                     * Backup cycle
                     */
                    std::string m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * Retention period of basic backups
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * The earliest time to start a backup
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * The latest time to start a backup
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
