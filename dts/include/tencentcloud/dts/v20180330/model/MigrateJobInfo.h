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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEJOBINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/MigrateOption.h>
#include <tencentcloud/dts/v20180330/model/SrcInfo.h>
#include <tencentcloud/dts/v20180330/model/DstInfo.h>
#include <tencentcloud/dts/v20180330/model/MigrateDetailInfo.h>
#include <tencentcloud/dts/v20180330/model/ErrorInfo.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Migration task details
                */
                class MigrateJobInfo : public AbstractModel
                {
                public:
                    MigrateJobInfo();
                    ~MigrateJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data migration task ID
                     * @return JobId Data migration task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Data migration task ID
                     * @param _jobId Data migration task ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Data migration task name
                     * @return JobName Data migration task name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Data migration task name
                     * @param _jobName Data migration task name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Migration task configuration options
                     * @return MigrateOption Migration task configuration options
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 设置Migration task configuration options
                     * @param _migrateOption Migration task configuration options
                     * 
                     */
                    void SetMigrateOption(const MigrateOption& _migrateOption);

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     * 
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取Source instance database type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * @return SrcDatabaseType Source instance database type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source instance database type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * @param _srcDatabaseType Source instance database type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source instance access type. Value range: extranet (public network), cvm (CVM-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instances)
                     * @return SrcAccessType Source instance access type. Value range: extranet (public network), cvm (CVM-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instances)
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source instance access type. Value range: extranet (public network), cvm (CVM-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instances)
                     * @param _srcAccessType Source instance access type. Value range: extranet (public network), cvm (CVM-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instances)
                     * 
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Source instance information, which is correlated with the migration task type
                     * @return SrcInfo Source instance information, which is correlated with the migration task type
                     * 
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置Source instance information, which is correlated with the migration task type
                     * @param _srcInfo Source instance information, which is correlated with the migration task type
                     * 
                     */
                    void SetSrcInfo(const SrcInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Target instance access type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * @return DstDatabaseType Target instance access type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target instance access type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * @param _dstDatabaseType Target instance access type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target instance access type, which currently only supports cdb (TencentDB instance)
                     * @return DstAccessType Target instance access type, which currently only supports cdb (TencentDB instance)
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置Target instance access type, which currently only supports cdb (TencentDB instance)
                     * @param _dstAccessType Target instance access type, which currently only supports cdb (TencentDB instance)
                     * 
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Target instance information
                     * @return DstInfo Target instance information
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置Target instance information
                     * @param _dstInfo Target instance information
                     * 
                     */
                    void SetDstInfo(const DstInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Information of the source table to be migrated. If the entire instance is to be migrated, this field should be []
                     * @return DatabaseInfo Information of the source table to be migrated. If the entire instance is to be migrated, this field should be []
                     * 
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置Information of the source table to be migrated. If the entire instance is to be migrated, this field should be []
                     * @param _databaseInfo Information of the source table to be migrated. If the entire instance is to be migrated, this field should be []
                     * 
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     * 
                     */
                    bool DatabaseInfoHasBeenSet() const;

                    /**
                     * 获取Task creation/submission time
                     * @return CreateTime Task creation/submission time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation/submission time
                     * @param _createTime Task creation/submission time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task start time
                     * @return StartTime Task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
                     * @param _startTime Task start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task end time
                     * @return EndTime Task end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
                     * @param _endTime Task end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task status. Value range: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
                     * @return Status Task status. Value range: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. Value range: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
                     * @param _status Task status. Value range: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task details
                     * @return Detail Task details
                     * 
                     */
                    MigrateDetailInfo GetDetail() const;

                    /**
                     * 设置Task details
                     * @param _detail Task details
                     * 
                     */
                    void SetDetail(const MigrateDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Prompt message for task error, which is not null or empty when an error occurs with the task
                     * @return ErrorInfo Prompt message for task error, which is not null or empty when an error occurs with the task
                     * 
                     */
                    std::vector<ErrorInfo> GetErrorInfo() const;

                    /**
                     * 设置Prompt message for task error, which is not null or empty when an error occurs with the task
                     * @param _errorInfo Prompt message for task error, which is not null or empty when an error occurs with the task
                     * 
                     */
                    void SetErrorInfo(const std::vector<ErrorInfo>& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取Tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tags Tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Information of the source instance, a cluster edition instance whose access type is not `cdb`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SrcInfoMulti Information of the source instance, a cluster edition instance whose access type is not `cdb`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SrcInfo> GetSrcInfoMulti() const;

                    /**
                     * 设置Information of the source instance, a cluster edition instance whose access type is not `cdb`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _srcInfoMulti Information of the source instance, a cluster edition instance whose access type is not `cdb`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInfoMulti(const std::vector<SrcInfo>& _srcInfoMulti);

                    /**
                     * 判断参数 SrcInfoMulti 是否已赋值
                     * @return SrcInfoMulti 是否已赋值
                     * 
                     */
                    bool SrcInfoMultiHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Data migration task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Migration task configuration options
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * Source instance database type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source instance access type. Value range: extranet (public network), cvm (CVM-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instances)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Source instance information, which is correlated with the migration task type
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Target instance access type: MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Target instance access type, which currently only supports cdb (TencentDB instance)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Target instance information
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Information of the source table to be migrated. If the entire instance is to be migrated, this field should be []
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * Task creation/submission time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task status. Value range: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task details
                     */
                    MigrateDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Prompt message for task error, which is not null or empty when an error occurs with the task
                     */
                    std::vector<ErrorInfo> m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * Tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Information of the source instance, a cluster edition instance whose access type is not `cdb`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<SrcInfo> m_srcInfoMulti;
                    bool m_srcInfoMultiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEJOBINFO_H_
