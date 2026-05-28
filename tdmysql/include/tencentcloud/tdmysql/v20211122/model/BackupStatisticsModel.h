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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSTATISTICSMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSTATISTICSMODEL_H_

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
                * Backup statistics object
                */
                class BackupStatisticsModel : public AbstractModel
                {
                public:
                    BackupStatisticsModel();
                    ~BackupStatisticsModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Backup size of data, in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataBackupSize <p>Backup size of data, in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataBackupSize() const;

                    /**
                     * 设置<p>Backup size of data, in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataBackupSize <p>Backup size of data, in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataBackupSize(const int64_t& _dataBackupSize);

                    /**
                     * 判断参数 DataBackupSize 是否已赋值
                     * @return DataBackupSize 是否已赋值
                     * 
                     */
                    bool DataBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogBackupSize <p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLogBackupSize() const;

                    /**
                     * 设置<p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logBackupSize <p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogBackupSize(const int64_t& _logBackupSize);

                    /**
                     * 判断参数 LogBackupSize 是否已赋值
                     * @return LogBackupSize 是否已赋值
                     * 
                     */
                    bool LogBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>Total backup count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount <p>Total backup count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total backup count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount <p>Total backup count</p>
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
                     * <p>Average size of total backup per day in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_averageSizePerDay;
                    bool m_averageSizePerDayHasBeenSet;

                    /**
                     * <p>Backup size of data, in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataBackupSize;
                    bool m_dataBackupSizeHasBeenSet;

                    /**
                     * <p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_logBackupSize;
                    bool m_logBackupSizeHasBeenSet;

                    /**
                     * <p>Total backup count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSTATISTICSMODEL_H_
