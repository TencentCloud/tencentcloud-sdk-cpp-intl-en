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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPMETHODSTATISTICSMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPMETHODSTATISTICSMODEL_H_

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
                * Backup method statistical object - provided to backup space statistics API
                */
                class BackupMethodStatisticsModel : public AbstractModel
                {
                public:
                    BackupMethodStatisticsModel();
                    ~BackupMethodStatisticsModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoBackupSize <p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoBackupSize() const;

                    /**
                     * 设置<p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoBackupSize <p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoBackupSize(const int64_t& _autoBackupSize);

                    /**
                     * 判断参数 AutoBackupSize 是否已赋值
                     * @return AutoBackupSize 是否已赋值
                     * 
                     */
                    bool AutoBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>Average size of total backup per day in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AverageSizePerDay <p>Average size of total backup per day in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAverageSizePerDay() const;

                    /**
                     * 设置<p>Average size of total backup per day in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _averageSizePerDay <p>Average size of total backup per day in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAverageSizePerDay(const int64_t& _averageSizePerDay);

                    /**
                     * 判断参数 AverageSizePerDay 是否已赋值
                     * @return AverageSizePerDay 是否已赋值
                     * 
                     */
                    bool AverageSizePerDayHasBeenSet() const;

                    /**
                     * 获取<p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManualBackupSize <p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetManualBackupSize() const;

                    /**
                     * 设置<p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manualBackupSize <p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManualBackupSize(const int64_t& _manualBackupSize);

                    /**
                     * 判断参数 ManualBackupSize 是否已赋值
                     * @return ManualBackupSize 是否已赋值
                     * 
                     */
                    bool ManualBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>Total backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize <p>Total backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置<p>Total backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalSize <p>Total backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalSize(const int64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoBackupSize;
                    bool m_autoBackupSizeHasBeenSet;

                    /**
                     * <p>Average size of total backup per day in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_averageSizePerDay;
                    bool m_averageSizePerDayHasBeenSet;

                    /**
                     * <p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_manualBackupSize;
                    bool m_manualBackupSizeHasBeenSet;

                    /**
                     * <p>Total backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPMETHODSTATISTICSMODEL_H_
