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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMIGRATIONREQUEST_H_

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
                * ModifyMigration request structure.
                */
                class ModifyMigrationRequest : public AbstractModel
                {
                public:
                    ModifyMigrationRequest();
                    ~ModifyMigrationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取New name of migration task. If this parameter is left empty, no modification will be made
                     * @return MigrateName New name of migration task. If this parameter is left empty, no modification will be made
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置New name of migration task. If this parameter is left empty, no modification will be made
                     * @param MigrateName New name of migration task. If this parameter is left empty, no modification will be made
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取New migration type (1: structure migration, 2: data migration, 3: incremental sync). If this parameter is left empty, no modification will be made
                     * @return MigrateType New migration type (1: structure migration, 2: data migration, 3: incremental sync). If this parameter is left empty, no modification will be made
                     */
                    uint64_t GetMigrateType() const;

                    /**
                     * 设置New migration type (1: structure migration, 2: data migration, 3: incremental sync). If this parameter is left empty, no modification will be made
                     * @param MigrateType New migration type (1: structure migration, 2: data migration, 3: incremental sync). If this parameter is left empty, no modification will be made
                     */
                    void SetMigrateType(const uint64_t& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode). If this parameter is left empty, no modification will be made
                     * @return SourceType Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode). If this parameter is left empty, no modification will be made
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode). If this parameter is left empty, no modification will be made
                     * @param SourceType Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode). If this parameter is left empty, no modification will be made
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Migration source. If this parameter is left empty, no modification will be made
                     * @return Source Migration source. If this parameter is left empty, no modification will be made
                     */
                    MigrateSource GetSource() const;

                    /**
                     * 设置Migration source. If this parameter is left empty, no modification will be made
                     * @param Source Migration source. If this parameter is left empty, no modification will be made
                     */
                    void SetSource(const MigrateSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Migration target. If this parameter is left empty, no modification will be made
                     * @return Target Migration target. If this parameter is left empty, no modification will be made
                     */
                    MigrateTarget GetTarget() const;

                    /**
                     * 设置Migration target. If this parameter is left empty, no modification will be made
                     * @param Target Migration target. If this parameter is left empty, no modification will be made
                     */
                    void SetTarget(const MigrateTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5). If it left empty, no modification will be made
                     * @return MigrateDBSet Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5). If it left empty, no modification will be made
                     */
                    std::vector<MigrateDB> GetMigrateDBSet() const;

                    /**
                     * 设置Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5). If it left empty, no modification will be made
                     * @param MigrateDBSet Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5). If it left empty, no modification will be made
                     */
                    void SetMigrateDBSet(const std::vector<MigrateDB>& _migrateDBSet);

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
                     * New name of migration task. If this parameter is left empty, no modification will be made
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * New migration type (1: structure migration, 2: data migration, 3: incremental sync). If this parameter is left empty, no modification will be made
                     */
                    uint64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode). If this parameter is left empty, no modification will be made
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Migration source. If this parameter is left empty, no modification will be made
                     */
                    MigrateSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Migration target. If this parameter is left empty, no modification will be made
                     */
                    MigrateTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5). If it left empty, no modification will be made
                     */
                    std::vector<MigrateDB> m_migrateDBSet;
                    bool m_migrateDBSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMIGRATIONREQUEST_H_
