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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATEMIGRATEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATEMIGRATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/MigrateOption.h>
#include <tencentcloud/dts/v20180330/model/SrcInfo.h>
#include <tencentcloud/dts/v20180330/model/DstInfo.h>
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
                * CreateMigrateJob request structure.
                */
                class CreateMigrateJobRequest : public AbstractModel
                {
                public:
                    CreateMigrateJobRequest();
                    ~CreateMigrateJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Source instance database type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona, and SQL Server. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     * @return SrcDatabaseType Source instance database type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona, and SQL Server. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source instance database type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona, and SQL Server. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     * @param _srcDatabaseType Source instance database type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona, and SQL Server. For more information on the supported types in a specific region, see the migration task creation page in the console.
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
                     * 获取Source instance access type. Valid values: extranet (public network), cvm (CVM-based self-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instance)
                     * @return SrcAccessType Source instance access type. Valid values: extranet (public network), cvm (CVM-based self-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instance)
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source instance access type. Valid values: extranet (public network), cvm (CVM-based self-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instance)
                     * @param _srcAccessType Source instance access type. Valid values: extranet (public network), cvm (CVM-based self-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instance)
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
                     * 获取Target instance access type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, and Percona, SQL Server, and TDSQL-C for MySQL. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     * @return DstDatabaseType Target instance access type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, and Percona, SQL Server, and TDSQL-C for MySQL. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target instance access type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, and Percona, SQL Server, and TDSQL-C for MySQL. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     * @param _dstDatabaseType Target instance access type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, and Percona, SQL Server, and TDSQL-C for MySQL. For more information on the supported types in a specific region, see the migration task creation page in the console.
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
                     * 获取Destination instance information
                     * @return DstInfo Destination instance information
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置Destination instance information
                     * @param _dstInfo Destination instance information
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
                     * 获取Information of the source table to be migrated, which is described in JSON string format. It is required if MigrateOption.MigrateObject is 2 (migrating the specified table).
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
For databases with a database-schema-table structure:
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * @return DatabaseInfo Information of the source table to be migrated, which is described in JSON string format. It is required if MigrateOption.MigrateObject is 2 (migrating the specified table).
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
For databases with a database-schema-table structure:
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * 
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置Information of the source table to be migrated, which is described in JSON string format. It is required if MigrateOption.MigrateObject is 2 (migrating the specified table).
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
For databases with a database-schema-table structure:
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     * @param _databaseInfo Information of the source table to be migrated, which is described in JSON string format. It is required if MigrateOption.MigrateObject is 2 (migrating the specified table).
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
For databases with a database-schema-table structure:
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
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
                     * 获取Tag of the instance to be migrated.
                     * @return Tags Tag of the instance to be migrated.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag of the instance to be migrated.
                     * @param _tags Tag of the instance to be migrated.
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
                     * 获取Source instance type. `simple`: Primary/Secondary node; `cluster`: Cluster node. If this field is left empty, the value defaults to primary/secondary node.
                     * @return SrcNodeType Source instance type. `simple`: Primary/Secondary node; `cluster`: Cluster node. If this field is left empty, the value defaults to primary/secondary node.
                     * 
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置Source instance type. `simple`: Primary/Secondary node; `cluster`: Cluster node. If this field is left empty, the value defaults to primary/secondary node.
                     * @param _srcNodeType Source instance type. `simple`: Primary/Secondary node; `cluster`: Cluster node. If this field is left empty, the value defaults to primary/secondary node.
                     * 
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     * 
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取Source instance information, which is correlated with the migration task type.
                     * @return SrcInfoMulti Source instance information, which is correlated with the migration task type.
                     * 
                     */
                    std::vector<SrcInfo> GetSrcInfoMulti() const;

                    /**
                     * 设置Source instance information, which is correlated with the migration task type.
                     * @param _srcInfoMulti Source instance information, which is correlated with the migration task type.
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
                     * Source instance database type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, Percona, and SQL Server. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source instance access type. Valid values: extranet (public network), cvm (CVM-based self-created instance), dcg (Direct Connect-enabled instance), vpncloud (Tencent Cloud VPN-enabled instance), cdb (TencentDB instance), ccn (CCN instance)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Source instance information, which is correlated with the migration task type
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Target instance access type, which currently supports MySQL, Redis, MongoDB, PostgreSQL, MariaDB, and Percona, SQL Server, and TDSQL-C for MySQL. For more information on the supported types in a specific region, see the migration task creation page in the console.
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Target instance access type, which currently only supports cdb (TencentDB instance)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Destination instance information
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Information of the source table to be migrated, which is described in JSON string format. It is required if MigrateOption.MigrateObject is 2 (migrating the specified table).
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
For databases with a database-schema-table structure:
[{"Database":"db1","Schema":"s1","Table":["table1","table2"]},{"Database":"db1","Schema":"s2","Table":["table1","table2"]},{"Database":"db2","Schema":"s1","Table":["table1","table2"]},{"Database":"db3"},{"Database":"db4","Schema":"s1"}]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * Tag of the instance to be migrated.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Source instance type. `simple`: Primary/Secondary node; `cluster`: Cluster node. If this field is left empty, the value defaults to primary/secondary node.
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * Source instance information, which is correlated with the migration task type.
                     */
                    std::vector<SrcInfo> m_srcInfoMulti;
                    bool m_srcInfoMultiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATEMIGRATEJOBREQUEST_H_
