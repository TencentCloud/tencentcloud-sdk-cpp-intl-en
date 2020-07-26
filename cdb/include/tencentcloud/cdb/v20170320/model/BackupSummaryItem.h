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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPSUMMARYITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPSUMMARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Statistical items of instance backup
                */
                class BackupSummaryItem : public AbstractModel
                {
                public:
                    BackupSummaryItem();
                    ~BackupSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of automatic data backups of an instance.
                     * @return AutoBackupCount Number of automatic data backups of an instance.
                     */
                    int64_t GetAutoBackupCount() const;

                    /**
                     * 设置Number of automatic data backups of an instance.
                     * @param AutoBackupCount Number of automatic data backups of an instance.
                     */
                    void SetAutoBackupCount(const int64_t& _autoBackupCount);

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取Capacity of automatic data backups of an instance.
                     * @return AutoBackupVolume Capacity of automatic data backups of an instance.
                     */
                    int64_t GetAutoBackupVolume() const;

                    /**
                     * 设置Capacity of automatic data backups of an instance.
                     * @param AutoBackupVolume Capacity of automatic data backups of an instance.
                     */
                    void SetAutoBackupVolume(const int64_t& _autoBackupVolume);

                    /**
                     * 判断参数 AutoBackupVolume 是否已赋值
                     * @return AutoBackupVolume 是否已赋值
                     */
                    bool AutoBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Number of manual data backups of an instance.
                     * @return ManualBackupCount Number of manual data backups of an instance.
                     */
                    int64_t GetManualBackupCount() const;

                    /**
                     * 设置Number of manual data backups of an instance.
                     * @param ManualBackupCount Number of manual data backups of an instance.
                     */
                    void SetManualBackupCount(const int64_t& _manualBackupCount);

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取Capacity of manual data backups of an instance.
                     * @return ManualBackupVolume Capacity of manual data backups of an instance.
                     */
                    int64_t GetManualBackupVolume() const;

                    /**
                     * 设置Capacity of manual data backups of an instance.
                     * @param ManualBackupVolume Capacity of manual data backups of an instance.
                     */
                    void SetManualBackupVolume(const int64_t& _manualBackupVolume);

                    /**
                     * 判断参数 ManualBackupVolume 是否已赋值
                     * @return ManualBackupVolume 是否已赋值
                     */
                    bool ManualBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Total number of data backups of an instance (including automatic backups and manual backups).
                     * @return DataBackupCount Total number of data backups of an instance (including automatic backups and manual backups).
                     */
                    int64_t GetDataBackupCount() const;

                    /**
                     * 设置Total number of data backups of an instance (including automatic backups and manual backups).
                     * @param DataBackupCount Total number of data backups of an instance (including automatic backups and manual backups).
                     */
                    void SetDataBackupCount(const int64_t& _dataBackupCount);

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取Total capacity of data backups of an instance.
                     * @return DataBackupVolume Total capacity of data backups of an instance.
                     */
                    int64_t GetDataBackupVolume() const;

                    /**
                     * 设置Total capacity of data backups of an instance.
                     * @param DataBackupVolume Total capacity of data backups of an instance.
                     */
                    void SetDataBackupVolume(const int64_t& _dataBackupVolume);

                    /**
                     * 判断参数 DataBackupVolume 是否已赋值
                     * @return DataBackupVolume 是否已赋值
                     */
                    bool DataBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Number of log backups of an instance.
                     * @return BinlogBackupCount Number of log backups of an instance.
                     */
                    int64_t GetBinlogBackupCount() const;

                    /**
                     * 设置Number of log backups of an instance.
                     * @param BinlogBackupCount Number of log backups of an instance.
                     */
                    void SetBinlogBackupCount(const int64_t& _binlogBackupCount);

                    /**
                     * 判断参数 BinlogBackupCount 是否已赋值
                     * @return BinlogBackupCount 是否已赋值
                     */
                    bool BinlogBackupCountHasBeenSet() const;

                    /**
                     * 获取Capacity of log backups of an instance.
                     * @return BinlogBackupVolume Capacity of log backups of an instance.
                     */
                    int64_t GetBinlogBackupVolume() const;

                    /**
                     * 设置Capacity of log backups of an instance.
                     * @param BinlogBackupVolume Capacity of log backups of an instance.
                     */
                    void SetBinlogBackupVolume(const int64_t& _binlogBackupVolume);

                    /**
                     * 判断参数 BinlogBackupVolume 是否已赋值
                     * @return BinlogBackupVolume 是否已赋值
                     */
                    bool BinlogBackupVolumeHasBeenSet() const;

                    /**
                     * 获取Total capacity of backups of an instance (including data backups and log backups).
                     * @return BackupVolume Total capacity of backups of an instance (including data backups and log backups).
                     */
                    int64_t GetBackupVolume() const;

                    /**
                     * 设置Total capacity of backups of an instance (including data backups and log backups).
                     * @param BackupVolume Total capacity of backups of an instance (including data backups and log backups).
                     */
                    void SetBackupVolume(const int64_t& _backupVolume);

                    /**
                     * 判断参数 BackupVolume 是否已赋值
                     * @return BackupVolume 是否已赋值
                     */
                    bool BackupVolumeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of automatic data backups of an instance.
                     */
                    int64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * Capacity of automatic data backups of an instance.
                     */
                    int64_t m_autoBackupVolume;
                    bool m_autoBackupVolumeHasBeenSet;

                    /**
                     * Number of manual data backups of an instance.
                     */
                    int64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * Capacity of manual data backups of an instance.
                     */
                    int64_t m_manualBackupVolume;
                    bool m_manualBackupVolumeHasBeenSet;

                    /**
                     * Total number of data backups of an instance (including automatic backups and manual backups).
                     */
                    int64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * Total capacity of data backups of an instance.
                     */
                    int64_t m_dataBackupVolume;
                    bool m_dataBackupVolumeHasBeenSet;

                    /**
                     * Number of log backups of an instance.
                     */
                    int64_t m_binlogBackupCount;
                    bool m_binlogBackupCountHasBeenSet;

                    /**
                     * Capacity of log backups of an instance.
                     */
                    int64_t m_binlogBackupVolume;
                    bool m_binlogBackupVolumeHasBeenSet;

                    /**
                     * Total capacity of backups of an instance (including data backups and log backups).
                     */
                    int64_t m_backupVolume;
                    bool m_backupVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPSUMMARYITEM_H_
