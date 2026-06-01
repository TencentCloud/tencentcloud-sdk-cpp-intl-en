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
                     * 获取Cloud database instance ID.
                     * @return InstanceId Cloud database instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cloud database instance ID.
                     * @param _instanceId Cloud database instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Rollback strategy. Optional values: table, db, full. table - Ultra-fast rollback mode, only imports selected table-level backups and binlog. If there are cross-table operations and the associated table hasn't been selected, it will cause rollback failure. In this mode, parameter Databases must be empty. db - Quick mode, only imports selected database-level backups and binlog. If there are cross-database operations and the associated database hasn't been selected, it will cause rollback failure. full - Standard rollback mode, imports backups and binlog of the entire instance, speed is not as fast.
                     * @return Strategy Rollback strategy. Optional values: table, db, full. table - Ultra-fast rollback mode, only imports selected table-level backups and binlog. If there are cross-table operations and the associated table hasn't been selected, it will cause rollback failure. In this mode, parameter Databases must be empty. db - Quick mode, only imports selected database-level backups and binlog. If there are cross-database operations and the associated database hasn't been selected, it will cause rollback failure. full - Standard rollback mode, imports backups and binlog of the entire instance, speed is not as fast.
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置Rollback strategy. Optional values: table, db, full. table - Ultra-fast rollback mode, only imports selected table-level backups and binlog. If there are cross-table operations and the associated table hasn't been selected, it will cause rollback failure. In this mode, parameter Databases must be empty. db - Quick mode, only imports selected database-level backups and binlog. If there are cross-database operations and the associated database hasn't been selected, it will cause rollback failure. full - Standard rollback mode, imports backups and binlog of the entire instance, speed is not as fast.
                     * @param _strategy Rollback strategy. Optional values: table, db, full. table - Ultra-fast rollback mode, only imports selected table-level backups and binlog. If there are cross-table operations and the associated table hasn't been selected, it will cause rollback failure. In this mode, parameter Databases must be empty. db - Quick mode, only imports selected database-level backups and binlog. If there are cross-database operations and the associated database hasn't been selected, it will cause rollback failure. full - Standard rollback mode, imports backups and binlog of the entire instance, speed is not as fast.
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Database rollback time in the format of yyyy-mm-dd hh:mm:ss.
                     * @return RollbackTime Database rollback time in the format of yyyy-mm-dd hh:mm:ss.
                     * 
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置Database rollback time in the format of yyyy-mm-dd hh:mm:ss.
                     * @param _rollbackTime Database rollback time in the format of yyyy-mm-dd hh:mm:ss.
                     * 
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     * 
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取Database information to be rolled back, which means database rollback.
                     * @return Databases Database information to be rolled back, which means database rollback.
                     * 
                     */
                    std::vector<RollbackDBName> GetDatabases() const;

                    /**
                     * 设置Database information to be rolled back, which means database rollback.
                     * @param _databases Database information to be rolled back, which means database rollback.
                     * 
                     */
                    void SetDatabases(const std::vector<RollbackDBName>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取Database table information to be rolled back, which means rollback by table.
                     * @return Tables Database table information to be rolled back, which means rollback by table.
                     * 
                     */
                    std::vector<RollbackTables> GetTables() const;

                    /**
                     * 设置Database table information to be rolled back, which means rollback by table.
                     * @param _tables Database table information to be rolled back, which means rollback by table.
                     * 
                     */
                    void SetTables(const std::vector<RollbackTables>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                private:

                    /**
                     * Cloud database instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Rollback strategy. Optional values: table, db, full. table - Ultra-fast rollback mode, only imports selected table-level backups and binlog. If there are cross-table operations and the associated table hasn't been selected, it will cause rollback failure. In this mode, parameter Databases must be empty. db - Quick mode, only imports selected database-level backups and binlog. If there are cross-database operations and the associated database hasn't been selected, it will cause rollback failure. full - Standard rollback mode, imports backups and binlog of the entire instance, speed is not as fast.
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Database rollback time in the format of yyyy-mm-dd hh:mm:ss.
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * Database information to be rolled back, which means database rollback.
                     */
                    std::vector<RollbackDBName> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * Database table information to be rolled back, which means rollback by table.
                     */
                    std::vector<RollbackTables> m_tables;
                    bool m_tablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_
