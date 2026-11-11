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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyAutoBackupConfig request structure.
                */
                class ModifyAutoBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyAutoBackupConfigRequest();
                    ~ModifyAutoBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID in the instance list.</p>
                     * @return InstanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID in the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID in the instance list.</p>
                     * @param _instanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID in the instance list.</p>
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
                     * 获取<p>Set the automatic backup cycle. It can be set to Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, or Sunday. This parameter cannot be modified for the moment.</p>
                     * @return WeekDays <p>Set the automatic backup cycle. It can be set to Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, or Sunday. This parameter cannot be modified for the moment.</p>
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置<p>Set the automatic backup cycle. It can be set to Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, or Sunday. This parameter cannot be modified for the moment.</p>
                     * @param _weekDays <p>Set the automatic backup cycle. It can be set to Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, or Sunday. This parameter cannot be modified for the moment.</p>
                     * 
                     */
                    void SetWeekDays(const std::vector<std::string>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取<p>Backup time period. It can be set to every full hour. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     * @return TimePeriod <p>Backup time period. It can be set to every full hour. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     * 
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 设置<p>Backup time period. It can be set to every full hour. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     * @param _timePeriod <p>Backup time period. It can be set to every full hour. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     * 
                     */
                    void SetTimePeriod(const std::string& _timePeriod);

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     * 
                     */
                    bool TimePeriodHasBeenSet() const;

                    /**
                     * 获取<p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     * @return AutoBackupType <p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     * 
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 设置<p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     * @param _autoBackupType <p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     * 
                     */
                    void SetAutoBackupType(const int64_t& _autoBackupType);

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     * 
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of days to save full backup files. Only support setting to 7, unit: days. For a longer period, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * @return BackupStorageDays <p>Number of days to save full backup files. Only support setting to 7, unit: days. For a longer period, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * 
                     */
                    int64_t GetBackupStorageDays() const;

                    /**
                     * 设置<p>Number of days to save full backup files. Only support setting to 7, unit: days. For a longer period, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * @param _backupStorageDays <p>Number of days to save full backup files. Only support setting to 7, unit: days. For a longer period, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * 
                     */
                    void SetBackupStorageDays(const int64_t& _backupStorageDays);

                    /**
                     * 判断参数 BackupStorageDays 是否已赋值
                     * @return BackupStorageDays 是否已赋值
                     * 
                     */
                    bool BackupStorageDaysHasBeenSet() const;

                private:

                    /**
                     * <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID in the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Set the automatic backup cycle. It can be set to Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, or Sunday. This parameter cannot be modified for the moment.</p>
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * <p>Backup time period. It can be set to every full hour. Format: 00:00-01:00, 01:00-02:00...... 23:00-00:00.</p>
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * <p>Automatic backup type. Currently, it can only be configured as: 1, scheduled backup.</p>
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                    /**
                     * <p>Number of days to save full backup files. Only support setting to 7, unit: days. For a longer period, please <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
