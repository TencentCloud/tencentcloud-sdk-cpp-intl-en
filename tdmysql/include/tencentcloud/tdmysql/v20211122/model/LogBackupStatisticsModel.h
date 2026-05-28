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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_LOGBACKUPSTATISTICSMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_LOGBACKUPSTATISTICSMODEL_H_

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
                * Backup statistics object for logs
                */
                class LogBackupStatisticsModel : public AbstractModel
                {
                public:
                    LogBackupStatisticsModel();
                    ~LogBackupStatisticsModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Avg size of each log backup in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AverageSizePerBackup <p>Avg size of each log backup in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAverageSizePerBackup() const;

                    /**
                     * 设置<p>Avg size of each log backup in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _averageSizePerBackup <p>Avg size of each log backup in Byte</p>
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
                     * 获取<p>Avg daily log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AverageSizePerDay <p>Avg daily log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAverageSizePerDay() const;

                    /**
                     * 设置<p>Avg daily log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _averageSizePerDay <p>Avg daily log backup size in Byte</p>
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
                     * 获取<p>Number of log backups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount <p>Number of log backups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Number of log backups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount <p>Number of log backups</p>
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
                     * 获取<p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize <p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置<p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalSize <p>Log backup size in Byte</p>
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
                     * <p>Avg size of each log backup in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_averageSizePerBackup;
                    bool m_averageSizePerBackupHasBeenSet;

                    /**
                     * <p>Avg daily log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_averageSizePerDay;
                    bool m_averageSizePerDayHasBeenSet;

                    /**
                     * <p>Number of log backups</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Log backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_LOGBACKUPSTATISTICSMODEL_H_
