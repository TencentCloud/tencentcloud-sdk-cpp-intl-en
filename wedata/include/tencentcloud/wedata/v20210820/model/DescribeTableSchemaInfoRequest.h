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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableSchemaInfo request structure.
                */
                class DescribeTableSchemaInfoRequest : public AbstractModel
                {
                public:
                    DescribeTableSchemaInfoRequest();
                    ~DescribeTableSchemaInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Table Name
                     * @return Name Table Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Table Name
                     * @param _name Table Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DatabaseName Database name
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name
                     * @param _databaseName Database name
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
                     * 获取Data Source Types (e.g., MYSQL, HIVE, KAFKA, etc.)
                     * @return MsType Data Source Types (e.g., MYSQL, HIVE, KAFKA, etc.)
                     * 
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置Data Source Types (e.g., MYSQL, HIVE, KAFKA, etc.)
                     * @param _msType Data Source Types (e.g., MYSQL, HIVE, KAFKA, etc.)
                     * 
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     * 
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取Data source ID
                     * @return DatasourceId Data source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source ID
                     * @param _datasourceId Data source ID
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Connection Type (example value: rpc)
                     * @return ConnectionType Connection Type (example value: rpc)
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置Connection Type (example value: rpc)
                     * @param _connectionType Connection Type (example value: rpc)
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取Schema Name under Metadata Database
                     * @return SchemaName Schema Name under Metadata Database
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema Name under Metadata Database
                     * @param _schemaName Schema Name under Metadata Database
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * Table Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Data Source Types (e.g., MYSQL, HIVE, KAFKA, etc.)
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * Data source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Connection Type (example value: rpc)
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * Schema Name under Metadata Database
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_
