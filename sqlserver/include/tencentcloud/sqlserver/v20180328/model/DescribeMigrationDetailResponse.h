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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateSource.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateTarget.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDB.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeMigrationDetail response structure.
                */
                class DescribeMigrationDetailResponse : public AbstractModel
                {
                public:
                    DescribeMigrationDetailResponse();
                    ~DescribeMigrationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Migration task ID
                     * @return MigrateId Migration task ID
                     */
                    uint64_t GetMigrateId() const;

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
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Migration task progress
                     * @return Progress Migration task progress
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     * @return MigrateType Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     */
                    int64_t GetMigrateType() const;

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取Migration source
                     * @return Source Migration source
                     */
                    MigrateSource GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Migration target
                     * @return Target Migration target
                     */
                    MigrateTarget GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5)
                     * @return MigrateDBSet Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5)
                     */
                    std::vector<MigrateDB> GetMigrateDBSet() const;

                    /**
                     * 判断参数 MigrateDBSet 是否已赋值
                     * @return MigrateDBSet 是否已赋值
                     */
                    bool MigrateDBSetHasBeenSet() const;

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
                     * Migration task progress
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     */
                    int64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * Migration source
                     */
                    MigrateSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Migration target
                     */
                    MigrateTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5)
                     */
                    std::vector<MigrateDB> m_migrateDBSet;
                    bool m_migrateDBSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
