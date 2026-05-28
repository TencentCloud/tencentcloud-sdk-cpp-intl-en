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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DATABACKUPSTATISTICSMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DATABACKUPSTATISTICSMODEL_H_

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
                * Data backup statistics object
                */
                class DataBackupStatisticsModel : public AbstractModel
                {
                public:
                    DataBackupStatisticsModel();
                    ~DataBackupStatisticsModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto-backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoBackupCount Auto-backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoBackupCount() const;

                    /**
                     * 设置Auto-backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoBackupCount Auto-backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoBackupCount(const int64_t& _autoBackupCount);

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取Auto-backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoBackupSize Auto-backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoBackupSize() const;

                    /**
                     * 设置Auto-backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoBackupSize Auto-backup size, in Byte
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
                     * 获取Avg backup size per each, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AverageSizePerBackup Avg backup size per each, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAverageSizePerBackup() const;

                    /**
                     * 设置Avg backup size per each, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _averageSizePerBackup Avg backup size per each, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAverageSizePerBackup(const int64_t& _averageSizePerBackup);

                    /**
                     * 判断参数 AverageSizePerBackup 是否已赋值
                     * @return AverageSizePerBackup 是否已赋值
                     * 
                     */
                    bool AverageSizePerBackupHasBeenSet() const;

                    /**
                     * 获取Avg daily backup size, Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AverageSizePerDay Avg daily backup size, Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAverageSizePerDay() const;

                    /**
                     * 设置Avg daily backup size, Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _averageSizePerDay Avg daily backup size, Byte
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
                     * 获取Manual backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManualBackupCount Manual backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetManualBackupCount() const;

                    /**
                     * 设置Manual backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manualBackupCount Manual backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManualBackupCount(const int64_t& _manualBackupCount);

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取Manual backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManualBackupSize Manual backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetManualBackupSize() const;

                    /**
                     * 设置Manual backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manualBackupSize Manual backup size, in Byte
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
                     * 获取Number of data backups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of data backups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of data backups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Number of data backups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Data backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize Data backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置Data backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalSize Data backup size, in Byte
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
                     * Auto-backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * Auto-backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoBackupSize;
                    bool m_autoBackupSizeHasBeenSet;

                    /**
                     * Avg backup size per each, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_averageSizePerBackup;
                    bool m_averageSizePerBackupHasBeenSet;

                    /**
                     * Avg daily backup size, Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_averageSizePerDay;
                    bool m_averageSizePerDayHasBeenSet;

                    /**
                     * Manual backup count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * Manual backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_manualBackupSize;
                    bool m_manualBackupSizeHasBeenSet;

                    /**
                     * Number of data backups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Data backup size, in Byte
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DATABACKUPSTATISTICSMODEL_H_
