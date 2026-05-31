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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TABLEMAPPINGOBJECT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TABLEMAPPINGOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Mapping relationship
                */
                class TableMappingObject : public AbstractModel
                {
                public:
                    TableMappingObject();
                    ~TableMappingObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source instance Id
                     * @return SrcInstanceId Source instance Id
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance Id
                     * @param _srcInstanceId Source instance Id
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return DatabaseName Database name.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name.
                     * @param _databaseName Database name.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Map database name
                     * @return MapDatabaseName Map database name
                     * 
                     */
                    std::string GetMapDatabaseName() const;

                    /**
                     * 设置Map database name
                     * @param _mapDatabaseName Map database name
                     * 
                     */
                    void SetMapDatabaseName(const std::string& _mapDatabaseName);

                    /**
                     * 判断参数 MapDatabaseName 是否已赋值
                     * @return MapDatabaseName 是否已赋值
                     * 
                     */
                    bool MapDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Mapping table name
                     * @return MapTableName Mapping table name
                     * 
                     */
                    std::string GetMapTableName() const;

                    /**
                     * 设置Mapping table name
                     * @param _mapTableName Mapping table name
                     * 
                     */
                    void SetMapTableName(const std::string& _mapTableName);

                    /**
                     * 判断参数 MapTableName 是否已赋值
                     * @return MapTableName 是否已赋值
                     * 
                     */
                    bool MapTableNameHasBeenSet() const;

                    /**
                     * 获取Synchronization status
                     * @return Status Synchronization status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Synchronization status
                     * @param _status Synchronization status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sync progress
                     * @return Process Sync progress
                     * 
                     */
                    double GetProcess() const;

                    /**
                     * 设置Sync progress
                     * @param _process Sync progress
                     * 
                     */
                    void SetProcess(const double& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取Delay
                     * @return Lag Delay
                     * 
                     */
                    int64_t GetLag() const;

                    /**
                     * 设置Delay
                     * @param _lag Delay
                     * 
                     */
                    void SetLag(const int64_t& _lag);

                    /**
                     * 判断参数 Lag 是否已赋值
                     * @return Lag 是否已赋值
                     * 
                     */
                    bool LagHasBeenSet() const;

                    /**
                     * 获取Message
                     * @return Message Message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Message
                     * @param _message Message
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Whether it is the main table
                     * @return IsPrimary Whether it is the main table
                     * 
                     */
                    bool GetIsPrimary() const;

                    /**
                     * 设置Whether it is the main table
                     * @param _isPrimary Whether it is the main table
                     * 
                     */
                    void SetIsPrimary(const bool& _isPrimary);

                    /**
                     * 判断参数 IsPrimary 是否已赋值
                     * @return IsPrimary 是否已赋值
                     * 
                     */
                    bool IsPrimaryHasBeenSet() const;

                    /**
                     * 获取Virtual column padding value
                     * @return VirtualColValue Virtual column padding value
                     * 
                     */
                    std::string GetVirtualColValue() const;

                    /**
                     * 设置Virtual column padding value
                     * @param _virtualColValue Virtual column padding value
                     * 
                     */
                    void SetVirtualColValue(const std::string& _virtualColValue);

                    /**
                     * 判断参数 VirtualColValue 是否已赋值
                     * @return VirtualColValue 是否已赋值
                     * 
                     */
                    bool VirtualColValueHasBeenSet() const;

                private:

                    /**
                     * Source instance Id
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Map database name
                     */
                    std::string m_mapDatabaseName;
                    bool m_mapDatabaseNameHasBeenSet;

                    /**
                     * Mapping table name
                     */
                    std::string m_mapTableName;
                    bool m_mapTableNameHasBeenSet;

                    /**
                     * Synchronization status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sync progress
                     */
                    double m_process;
                    bool m_processHasBeenSet;

                    /**
                     * Delay
                     */
                    int64_t m_lag;
                    bool m_lagHasBeenSet;

                    /**
                     * Message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Whether it is the main table
                     */
                    bool m_isPrimary;
                    bool m_isPrimaryHasBeenSet;

                    /**
                     * Virtual column padding value
                     */
                    std::string m_virtualColValue;
                    bool m_virtualColValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TABLEMAPPINGOBJECT_H_
