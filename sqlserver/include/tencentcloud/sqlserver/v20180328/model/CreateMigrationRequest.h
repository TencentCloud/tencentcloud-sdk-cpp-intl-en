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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateSource.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateTarget.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDB.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateMigration request structure.
                */
                class CreateMigrationRequest : public AbstractModel
                {
                public:
                    CreateMigrationRequest();
                    ~CreateMigrationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     * @return MigrateType Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     */
                    uint64_t GetMigrateType() const;

                    /**
                     * 设置Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     * @param MigrateType Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     */
                    void SetMigrateType(const uint64_t& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     * @return SourceType Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     * @param SourceType Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Migration source
                     * @return Source Migration source
                     */
                    MigrateSource GetSource() const;

                    /**
                     * 设置Migration source
                     * @param Source Migration source
                     */
                    void SetSource(const MigrateSource& _source);

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
                     * 设置Migration target
                     * @param Target Migration target
                     */
                    void SetTarget(const MigrateTarget& _target);

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
                     * 设置Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5)
                     * @param MigrateDBSet Database objects to be migrated. This parameter is not used for offline migration (SourceType=4 or SourceType=5)
                     */
                    void SetMigrateDBSet(const std::vector<MigrateDB>& _migrateDBSet);

                    /**
                     * 判断参数 MigrateDBSet 是否已赋值
                     * @return MigrateDBSet 是否已赋值
                     */
                    bool MigrateDBSetHasBeenSet() const;

                    /**
                     * 获取Restore and rename the databases listed in `ReNameRestoreDatabase`. If this parameter is left empty, all restored databases will be renamed in the default format. This parameter takes effect only when `SourceType=5`.
                     * @return RenameRestore Restore and rename the databases listed in `ReNameRestoreDatabase`. If this parameter is left empty, all restored databases will be renamed in the default format. This parameter takes effect only when `SourceType=5`.
                     */
                    std::vector<RenameRestoreDatabase> GetRenameRestore() const;

                    /**
                     * 设置Restore and rename the databases listed in `ReNameRestoreDatabase`. If this parameter is left empty, all restored databases will be renamed in the default format. This parameter takes effect only when `SourceType=5`.
                     * @param RenameRestore Restore and rename the databases listed in `ReNameRestoreDatabase`. If this parameter is left empty, all restored databases will be renamed in the default format. This parameter takes effect only when `SourceType=5`.
                     */
                    void SetRenameRestore(const std::vector<RenameRestoreDatabase>& _renameRestore);

                    /**
                     * 判断参数 RenameRestore 是否已赋值
                     * @return RenameRestore 是否已赋值
                     */
                    bool RenameRestoreHasBeenSet() const;

                private:

                    /**
                     * Migration task name
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * Migration type (1: structure migration, 2: data migration, 3: incremental sync)
                     */
                    uint64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * Migration source type. 1: TencentDB for SQL Server, 2: CVM-based self-created SQL Server database; 3: SQL Server backup restoration, 4: SQL Server backup restoration (in COS mode)
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

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

                    /**
                     * Restore and rename the databases listed in `ReNameRestoreDatabase`. If this parameter is left empty, all restored databases will be renamed in the default format. This parameter takes effect only when `SourceType=5`.
                     */
                    std::vector<RenameRestoreDatabase> m_renameRestore;
                    bool m_renameRestoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEMIGRATIONREQUEST_H_
