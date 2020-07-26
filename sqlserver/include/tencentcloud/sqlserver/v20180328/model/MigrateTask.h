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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDetail.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Migration task type
                */
                class MigrateTask : public AbstractModel
                {
                public:
                    MigrateTask();
                    ~MigrateTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Migration task ID
                     * @return MigrateId Migration task ID
                     */
                    uint64_t GetMigrateId() const;

                    /**
                     * 设置Migration task ID
                     * @param MigrateId Migration task ID
                     */
                    void SetMigrateId(const uint64_t& _migrateId);

                    /**
                     * 判断参数 MigrateId 是否已赋值
                     * @return MigrateId 是否已赋值
                     */
                    bool MigrateIdHasBeenSet() const;

                    /**
                     * 获取Migration task name
                     * @return MigrateName Migration task name
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置Migration task name
                     * @param MigrateName Migration task name
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取User ID of migration task
                     * @return AppId User ID of migration task
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User ID of migration task
                     * @param AppId User ID of migration task
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Migration task region
                     * @return Region Migration task region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Migration task region
                     * @param Region Migration task region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     * @return SourceType Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     * @param SourceType Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Migration task creation time
                     * @return CreateTime Migration task creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Migration task creation time
                     * @param CreateTime Migration task creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Migration task start time
                     * @return StartTime Migration task start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Migration task start time
                     * @param StartTime Migration task start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Migration task end time
                     * @return EndTime Migration task end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Migration task end time
                     * @param EndTime Migration task end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Migration task status (1: initializing, 4: migrating, 5: migration failed, 6: migration succeeded)
                     * @return Status Migration task status (1: initializing, 4: migrating, 5: migration failed, 6: migration succeeded)
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Migration task status (1: initializing, 4: migrating, 5: migration failed, 6: migration succeeded)
                     * @param Status Migration task status (1: initializing, 4: migrating, 5: migration failed, 6: migration succeeded)
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Information
                     * @return Message Information
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Information
                     * @param Message Information
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Whether migration task has been checked (0: not checked, 1: check succeeded, 2: check failed, 3: checking)
                     * @return CheckFlag Whether migration task has been checked (0: not checked, 1: check succeeded, 2: check failed, 3: checking)
                     */
                    uint64_t GetCheckFlag() const;

                    /**
                     * 设置Whether migration task has been checked (0: not checked, 1: check succeeded, 2: check failed, 3: checking)
                     * @param CheckFlag Whether migration task has been checked (0: not checked, 1: check succeeded, 2: check failed, 3: checking)
                     */
                    void SetCheckFlag(const uint64_t& _checkFlag);

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     */
                    bool CheckFlagHasBeenSet() const;

                    /**
                     * 获取Migration task progress in %
                     * @return Progress Migration task progress in %
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Migration task progress in %
                     * @param Progress Migration task progress in %
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Migration task progress details
                     * @return MigrateDetail Migration task progress details
                     */
                    MigrateDetail GetMigrateDetail() const;

                    /**
                     * 设置Migration task progress details
                     * @param MigrateDetail Migration task progress details
                     */
                    void SetMigrateDetail(const MigrateDetail& _migrateDetail);

                    /**
                     * 判断参数 MigrateDetail 是否已赋值
                     * @return MigrateDetail 是否已赋值
                     */
                    bool MigrateDetailHasBeenSet() const;

                private:

                    /**
                     * Migration task ID
                     */
                    uint64_t m_migrateId;
                    bool m_migrateIdHasBeenSet;

                    /**
                     * Migration task name
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * User ID of migration task
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Migration task region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Migration task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Migration task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Migration task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Migration task status (1: initializing, 4: migrating, 5: migration failed, 6: migration succeeded)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Information
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Whether migration task has been checked (0: not checked, 1: check succeeded, 2: check failed, 3: checking)
                     */
                    uint64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                    /**
                     * Migration task progress in %
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Migration task progress details
                     */
                    MigrateDetail m_migrateDetail;
                    bool m_migrateDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETASK_H_
