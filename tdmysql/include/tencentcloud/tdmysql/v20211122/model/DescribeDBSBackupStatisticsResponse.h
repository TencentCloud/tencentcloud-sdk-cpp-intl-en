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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupStatisticsModel.h>
#include <tencentcloud/tdmysql/v20211122/model/DataBackupStatisticsModel.h>
#include <tencentcloud/tdmysql/v20211122/model/LogBackupStatisticsModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBSBackupStatistics response structure.
                */
                class DescribeDBSBackupStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeDBSBackupStatisticsResponse();
                    ~DescribeDBSBackupStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Backup method statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupMethodStatistics <p>Backup method statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BackupMethodStatisticsModel GetBackupMethodStatistics() const;

                    /**
                     * 判断参数 BackupMethodStatistics 是否已赋值
                     * @return BackupMethodStatistics 是否已赋值
                     * 
                     */
                    bool BackupMethodStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>Backup set statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupStatistics <p>Backup set statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BackupStatisticsModel GetBackupStatistics() const;

                    /**
                     * 判断参数 BackupStatistics 是否已赋值
                     * @return BackupStatistics 是否已赋值
                     * 
                     */
                    bool BackupStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>Backup statistics.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataBackupStatistics <p>Backup statistics.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DataBackupStatisticsModel GetDataBackupStatistics() const;

                    /**
                     * 判断参数 DataBackupStatistics 是否已赋值
                     * @return DataBackupStatistics 是否已赋值
                     * 
                     */
                    bool DataBackupStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>Log backup statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogBackupStatistics <p>Log backup statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LogBackupStatisticsModel GetLogBackupStatistics() const;

                    /**
                     * 判断参数 LogBackupStatistics 是否已赋值
                     * @return LogBackupStatistics 是否已赋值
                     * 
                     */
                    bool LogBackupStatisticsHasBeenSet() const;

                private:

                    /**
                     * <p>Backup method statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackupMethodStatisticsModel m_backupMethodStatistics;
                    bool m_backupMethodStatisticsHasBeenSet;

                    /**
                     * <p>Backup set statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackupStatisticsModel m_backupStatistics;
                    bool m_backupStatisticsHasBeenSet;

                    /**
                     * <p>Backup statistics.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DataBackupStatisticsModel m_dataBackupStatistics;
                    bool m_dataBackupStatisticsHasBeenSet;

                    /**
                     * <p>Log backup statistics</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LogBackupStatisticsModel m_logBackupStatistics;
                    bool m_logBackupStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSRESPONSE_H_
