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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELINPUT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Modify backup policy object.
                */
                class BackupPolicyModelInput : public AbstractModel
                {
                public:
                    BackupPolicyModelInput();
                    ~BackupPolicyModelInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<P>Backup end time.</p>
                     * @return BackupEndTime <P>Backup end time.</p>
                     * 
                     */
                    std::string GetBackupEndTime() const;

                    /**
                     * 设置<P>Backup end time.</p>
                     * @param _backupEndTime <P>Backup end time.</p>
                     * 
                     */
                    void SetBackupEndTime(const std::string& _backupEndTime);

                    /**
                     * 判断参数 BackupEndTime 是否已赋值
                     * @return BackupEndTime 是否已赋值
                     * 
                     */
                    bool BackupEndTimeHasBeenSet() const;

                    /**
                     * 获取<P>Backup method: physical physical backup, snapshot snapshot backup</p>
                     * @return BackupMethod <P>Backup method: physical physical backup, snapshot snapshot backup</p>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<P>Backup method: physical physical backup, snapshot snapshot backup</p>
                     * @param _backupMethod <P>Backup method: physical physical backup, snapshot snapshot backup</p>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<P>Backup start time</p>
                     * @return BackupStartTime <P>Backup start time</p>
                     * 
                     */
                    std::string GetBackupStartTime() const;

                    /**
                     * 设置<P>Backup start time</p>
                     * @param _backupStartTime <P>Backup start time</p>
                     * 
                     */
                    void SetBackupStartTime(const std::string& _backupStartTime);

                    /**
                     * 判断参数 BackupStartTime 是否已赋值
                     * @return BackupStartTime 是否已赋值
                     * 
                     */
                    bool BackupStartTimeHasBeenSet() const;

                    /**
                     * 获取<P>Whether full backup is enabled</p>
                     * @return EnableFull <P>Whether full backup is enabled</p>
                     * 
                     */
                    int64_t GetEnableFull() const;

                    /**
                     * 设置<P>Whether full backup is enabled</p>
                     * @param _enableFull <P>Whether full backup is enabled</p>
                     * 
                     */
                    void SetEnableFull(const int64_t& _enableFull);

                    /**
                     * 判断参数 EnableFull 是否已赋值
                     * @return EnableFull 是否已赋值
                     * 
                     */
                    bool EnableFullHasBeenSet() const;

                    /**
                     * 获取<P>Whether to enable log backup</p>
                     * @return EnableLog <P>Whether to enable log backup</p>
                     * 
                     */
                    int64_t GetEnableLog() const;

                    /**
                     * 设置<P>Whether to enable log backup</p>
                     * @param _enableLog <P>Whether to enable log backup</p>
                     * 
                     */
                    void SetEnableLog(const int64_t& _enableLog);

                    /**
                     * 判断参数 EnableLog 是否已赋值
                     * @return EnableLog 是否已赋值
                     * 
                     */
                    bool EnableLogHasBeenSet() const;

                    /**
                     * 获取<P>Full backup retention time can currently only be set to 7 days.</p>
                     * @return FullRetentionPeriod <P>Full backup retention time can currently only be set to 7 days.</p>
                     * 
                     */
                    int64_t GetFullRetentionPeriod() const;

                    /**
                     * 设置<P>Full backup retention time can currently only be set to 7 days.</p>
                     * @param _fullRetentionPeriod <P>Full backup retention time can currently only be set to 7 days.</p>
                     * 
                     */
                    void SetFullRetentionPeriod(const int64_t& _fullRetentionPeriod);

                    /**
                     * 判断参数 FullRetentionPeriod 是否已赋值
                     * @return FullRetentionPeriod 是否已赋值
                     * 
                     */
                    bool FullRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<P>Log retention days. currently, can only set retention to 7 days.</p>
                     * @return LogRetentionPeriod <P>Log retention days. currently, can only set retention to 7 days.</p>
                     * 
                     */
                    int64_t GetLogRetentionPeriod() const;

                    /**
                     * 设置<P>Log retention days. currently, can only set retention to 7 days.</p>
                     * @param _logRetentionPeriod <P>Log retention days. currently, can only set retention to 7 days.</p>
                     * 
                     */
                    void SetLogRetentionPeriod(const int64_t& _logRetentionPeriod);

                    /**
                     * 判断参数 LogRetentionPeriod 是否已赋值
                     * @return LogRetentionPeriod 是否已赋值
                     * 
                     */
                    bool LogRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取<P>Days of the week to perform backup.</p>
                     * @return PeriodTime <P>Days of the week to perform backup.</p>
                     * 
                     */
                    std::string GetPeriodTime() const;

                    /**
                     * 设置<P>Days of the week to perform backup.</p>
                     * @param _periodTime <P>Days of the week to perform backup.</p>
                     * 
                     */
                    void SetPeriodTime(const std::string& _periodTime);

                    /**
                     * 判断参数 PeriodTime 是否已赋值
                     * @return PeriodTime 是否已赋值
                     * 
                     */
                    bool PeriodTimeHasBeenSet() const;

                    /**
                     * 获取<p>Storage type: COS, SNAPSHOT</p>valid values: <ul><li> COS: COS storage</li><li> SNAPSHOT: cloud disk SNAPSHOT</li></ul>
                     * @return StorageType <p>Storage type: COS, SNAPSHOT</p>valid values: <ul><li> COS: COS storage</li><li> SNAPSHOT: cloud disk SNAPSHOT</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type: COS, SNAPSHOT</p>valid values: <ul><li> COS: COS storage</li><li> SNAPSHOT: cloud disk SNAPSHOT</li></ul>
                     * @param _storageType <p>Storage type: COS, SNAPSHOT</p>valid values: <ul><li> COS: COS storage</li><li> SNAPSHOT: cloud disk SNAPSHOT</li></ul>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <P>Backup end time.</p>
                     */
                    std::string m_backupEndTime;
                    bool m_backupEndTimeHasBeenSet;

                    /**
                     * <P>Backup method: physical physical backup, snapshot snapshot backup</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <P>Backup start time</p>
                     */
                    std::string m_backupStartTime;
                    bool m_backupStartTimeHasBeenSet;

                    /**
                     * <P>Whether full backup is enabled</p>
                     */
                    int64_t m_enableFull;
                    bool m_enableFullHasBeenSet;

                    /**
                     * <P>Whether to enable log backup</p>
                     */
                    int64_t m_enableLog;
                    bool m_enableLogHasBeenSet;

                    /**
                     * <P>Full backup retention time can currently only be set to 7 days.</p>
                     */
                    int64_t m_fullRetentionPeriod;
                    bool m_fullRetentionPeriodHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <P>Log retention days. currently, can only set retention to 7 days.</p>
                     */
                    int64_t m_logRetentionPeriod;
                    bool m_logRetentionPeriodHasBeenSet;

                    /**
                     * <P>Days of the week to perform backup.</p>
                     */
                    std::string m_periodTime;
                    bool m_periodTimeHasBeenSet;

                    /**
                     * <p>Storage type: COS, SNAPSHOT</p>valid values: <ul><li> COS: COS storage</li><li> SNAPSHOT: cloud disk SNAPSHOT</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELINPUT_H_
