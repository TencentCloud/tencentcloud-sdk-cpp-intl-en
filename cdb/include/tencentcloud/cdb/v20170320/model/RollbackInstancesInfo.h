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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackDBName.h>
#include <tencentcloud/cdb/v20170320/model/RollbackTables.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Details of the instance for rollback
                */
                class RollbackInstancesInfo : public AbstractModel
                {
                public:
                    RollbackInstancesInfo();
                    ~RollbackInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TencentDB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId TencentDB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TencentDB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId TencentDB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Rollback policy. Valid values: `table` (ultrafast mode), `db` (faster mode), and `full` (fast mode). Default value: `full`. In the ultrafast mode, only backups and binlogs of the tables specified by the `Tables` parameter are imported; if `Tables` does not include all of the tables involved in cross-table operations, the rollback may fail; and the `Database` parameter must be left empty. In the faster mode, only backups and binlogs of the databases specified by the `Databases` parameter are imported, and if `Databases` does not include all of the databases involved in cross-database operations, the rollback may fail. In the fast mode, backups and binlogs of the entire instance will be imported in a speed slower than the other modes.
                     * @return Strategy Rollback policy. Valid values: `table` (ultrafast mode), `db` (faster mode), and `full` (fast mode). Default value: `full`. In the ultrafast mode, only backups and binlogs of the tables specified by the `Tables` parameter are imported; if `Tables` does not include all of the tables involved in cross-table operations, the rollback may fail; and the `Database` parameter must be left empty. In the faster mode, only backups and binlogs of the databases specified by the `Databases` parameter are imported, and if `Databases` does not include all of the databases involved in cross-database operations, the rollback may fail. In the fast mode, backups and binlogs of the entire instance will be imported in a speed slower than the other modes.
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置Rollback policy. Valid values: `table` (ultrafast mode), `db` (faster mode), and `full` (fast mode). Default value: `full`. In the ultrafast mode, only backups and binlogs of the tables specified by the `Tables` parameter are imported; if `Tables` does not include all of the tables involved in cross-table operations, the rollback may fail; and the `Database` parameter must be left empty. In the faster mode, only backups and binlogs of the databases specified by the `Databases` parameter are imported, and if `Databases` does not include all of the databases involved in cross-database operations, the rollback may fail. In the fast mode, backups and binlogs of the entire instance will be imported in a speed slower than the other modes.
                     * @param Strategy Rollback policy. Valid values: `table` (ultrafast mode), `db` (faster mode), and `full` (fast mode). Default value: `full`. In the ultrafast mode, only backups and binlogs of the tables specified by the `Tables` parameter are imported; if `Tables` does not include all of the tables involved in cross-table operations, the rollback may fail; and the `Database` parameter must be left empty. In the faster mode, only backups and binlogs of the databases specified by the `Databases` parameter are imported, and if `Databases` does not include all of the databases involved in cross-database operations, the rollback may fail. In the fast mode, backups and binlogs of the entire instance will be imported in a speed slower than the other modes.
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Database rollback time in the format of yyyy-mm-dd hh:mm:ss
                     * @return RollbackTime Database rollback time in the format of yyyy-mm-dd hh:mm:ss
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置Database rollback time in the format of yyyy-mm-dd hh:mm:ss
                     * @param RollbackTime Database rollback time in the format of yyyy-mm-dd hh:mm:ss
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取Information of the databases to be rolled back, which means rollback at the database level
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Databases Information of the databases to be rolled back, which means rollback at the database level
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackDBName> GetDatabases() const;

                    /**
                     * 设置Information of the databases to be rolled back, which means rollback at the database level
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Databases Information of the databases to be rolled back, which means rollback at the database level
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDatabases(const std::vector<RollbackDBName>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取Information of the tables to be rolled back, which means rollback at the table level
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tables Information of the tables to be rolled back, which means rollback at the table level
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackTables> GetTables() const;

                    /**
                     * 设置Information of the tables to be rolled back, which means rollback at the table level
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tables Information of the tables to be rolled back, which means rollback at the table level
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTables(const std::vector<RollbackTables>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     */
                    bool TablesHasBeenSet() const;

                private:

                    /**
                     * TencentDB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Rollback policy. Valid values: `table` (ultrafast mode), `db` (faster mode), and `full` (fast mode). Default value: `full`. In the ultrafast mode, only backups and binlogs of the tables specified by the `Tables` parameter are imported; if `Tables` does not include all of the tables involved in cross-table operations, the rollback may fail; and the `Database` parameter must be left empty. In the faster mode, only backups and binlogs of the databases specified by the `Databases` parameter are imported, and if `Databases` does not include all of the databases involved in cross-database operations, the rollback may fail. In the fast mode, backups and binlogs of the entire instance will be imported in a speed slower than the other modes.
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Database rollback time in the format of yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * Information of the databases to be rolled back, which means rollback at the database level
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackDBName> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * Information of the tables to be rolled back, which means rollback at the table level
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RollbackTables> m_tables;
                    bool m_tablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_
