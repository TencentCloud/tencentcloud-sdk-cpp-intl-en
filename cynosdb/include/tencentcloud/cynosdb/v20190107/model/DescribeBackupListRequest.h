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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupList request structure.
                */
                class DescribeBackupListRequest : public AbstractModel
                {
                public:
                    DescribeBackupListRequest();
                    ~DescribeBackupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The number of results to be returned. Value range: (0,100]
                     * @return Limit The number of results to be returned. Value range: (0,100]
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of results to be returned. Value range: (0,100]
                     * @param Limit The number of results to be returned. Value range: (0,100]
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Record offset. Value range: [0,INF)
                     * @return Offset Record offset. Value range: [0,INF)
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Value range: [0,INF)
                     * @param Offset Record offset. Value range: [0,INF)
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Database type. Valid values: 
<li> MYSQL </li>
                     * @return DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type. Valid values: 
<li> MYSQL </li>
                     * @param DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Backup ID
                     * @return BackupIds Backup ID
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置Backup ID
                     * @param BackupIds Backup ID
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     */
                    bool BackupIdsHasBeenSet() const;

                    /**
                     * 获取Backup type. Valid values: `snapshot` (snapshot backup), `logic` (logic backup).
                     * @return BackupType Backup type. Valid values: `snapshot` (snapshot backup), `logic` (logic backup).
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. Valid values: `snapshot` (snapshot backup), `logic` (logic backup).
                     * @param BackupType Backup type. Valid values: `snapshot` (snapshot backup), `logic` (logic backup).
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Back mode. Valid values: `auto` (automatic backup), `manual` (manual backup)
                     * @return BackupMethod Back mode. Valid values: `auto` (automatic backup), `manual` (manual backup)
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Back mode. Valid values: `auto` (automatic backup), `manual` (manual backup)
                     * @param BackupMethod Back mode. Valid values: `auto` (automatic backup), `manual` (manual backup)
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取
                     * @return SnapShotType 
                     */
                    std::string GetSnapShotType() const;

                    /**
                     * 设置
                     * @param SnapShotType 
                     */
                    void SetSnapShotType(const std::string& _snapShotType);

                    /**
                     * 判断参数 SnapShotType 是否已赋值
                     * @return SnapShotType 是否已赋值
                     */
                    bool SnapShotTypeHasBeenSet() const;

                    /**
                     * 获取Backup start time
                     * @return StartTime Backup start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
                     * @param StartTime Backup start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup end time
                     * @return EndTime Backup end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time
                     * @param EndTime Backup end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileNames 
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置
                     * @param FileNames 
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取Backup alias, which supports fuzzy query.
                     * @return BackupNames Backup alias, which supports fuzzy query.
                     */
                    std::vector<std::string> GetBackupNames() const;

                    /**
                     * 设置Backup alias, which supports fuzzy query.
                     * @param BackupNames Backup alias, which supports fuzzy query.
                     */
                    void SetBackupNames(const std::vector<std::string>& _backupNames);

                    /**
                     * 判断参数 BackupNames 是否已赋值
                     * @return BackupNames 是否已赋值
                     */
                    bool BackupNamesHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The number of results to be returned. Value range: (0,100]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Record offset. Value range: [0,INF)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Backup ID
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                    /**
                     * Backup type. Valid values: `snapshot` (snapshot backup), `logic` (logic backup).
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Back mode. Valid values: `auto` (automatic backup), `manual` (manual backup)
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_snapShotType;
                    bool m_snapShotTypeHasBeenSet;

                    /**
                     * Backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * Backup alias, which supports fuzzy query.
                     */
                    std::vector<std::string> m_backupNames;
                    bool m_backupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_
