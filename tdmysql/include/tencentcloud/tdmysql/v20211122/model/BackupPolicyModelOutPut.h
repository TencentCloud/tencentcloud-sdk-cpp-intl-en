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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELOUTPUT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELOUTPUT_H_

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
                * Backup policy object
                */
                class BackupPolicyModelOutPut : public AbstractModel
                {
                public:
                    BackupPolicyModelOutPut();
                    ~BackupPolicyModelOutPut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Backup end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupEndTime <p>Backup end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupEndTime() const;

                    /**
                     * 设置<p>Backup end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupEndTime <p>Backup end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Backup method</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupMethod <p>Backup method</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>Backup method</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupMethod <p>Backup method</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Backup start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupStartTime <p>Backup start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupStartTime() const;

                    /**
                     * 设置<p>Backup start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupStartTime <p>Backup start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Engine type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBType <p>Engine type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置<p>Engine type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBType <p>Engine type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取<p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBVersion <p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBVersion <p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether full backup is enabled</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableFull <p>Whether full backup is enabled</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnableFull() const;

                    /**
                     * 设置<p>Whether full backup is enabled</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableFull <p>Whether full backup is enabled</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Whether to enable log backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableLog <p>Whether to enable log backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnableLog() const;

                    /**
                     * 设置<p>Whether to enable log backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableLog <p>Whether to enable log backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Expected next backup time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpectedNextBackupPeriod <p>Expected next backup time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpectedNextBackupPeriod() const;

                    /**
                     * 设置<p>Expected next backup time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expectedNextBackupPeriod <p>Expected next backup time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpectedNextBackupPeriod(const std::string& _expectedNextBackupPeriod);

                    /**
                     * 判断参数 ExpectedNextBackupPeriod 是否已赋值
                     * @return ExpectedNextBackupPeriod 是否已赋值
                     * 
                     */
                    bool ExpectedNextBackupPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Full backup retention time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullRetentionPeriod <p>Full backup retention time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFullRetentionPeriod() const;

                    /**
                     * 设置<p>Full backup retention time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullRetentionPeriod <p>Full backup retention time</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Policy ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID <p>Policy ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Policy ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD <p>Policy ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId <p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId <p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Log retention days</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogRetentionPeriod <p>Log retention days</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLogRetentionPeriod() const;

                    /**
                     * 设置<p>Log retention days</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logRetentionPeriod <p>Log retention days</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Days of the week to perform backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeriodTime <p>Days of the week to perform backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeriodTime() const;

                    /**
                     * 设置<p>Days of the week to perform backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _periodTime <p>Days of the week to perform backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Backup cycle type 0:Weekly</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeriodType <p>Backup cycle type 0:Weekly</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPeriodType() const;

                    /**
                     * 设置<p>Backup cycle type 0:Weekly</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _periodType <p>Backup cycle type 0:Weekly</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeriodType(const int64_t& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Backup end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupEndTime;
                    bool m_backupEndTimeHasBeenSet;

                    /**
                     * <p>Backup method</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>Backup start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupStartTime;
                    bool m_backupStartTimeHasBeenSet;

                    /**
                     * <p>Engine type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * <p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>Whether full backup is enabled</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableFull;
                    bool m_enableFullHasBeenSet;

                    /**
                     * <p>Whether to enable log backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableLog;
                    bool m_enableLogHasBeenSet;

                    /**
                     * <p>Expected next backup time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expectedNextBackupPeriod;
                    bool m_expectedNextBackupPeriodHasBeenSet;

                    /**
                     * <p>Full backup retention time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fullRetentionPeriod;
                    bool m_fullRetentionPeriodHasBeenSet;

                    /**
                     * <p>Policy ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log retention days</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_logRetentionPeriod;
                    bool m_logRetentionPeriodHasBeenSet;

                    /**
                     * <p>Days of the week to perform backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_periodTime;
                    bool m_periodTimeHasBeenSet;

                    /**
                     * <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Backup cycle type 0:Weekly</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_periodType;
                    bool m_periodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELOUTPUT_H_
