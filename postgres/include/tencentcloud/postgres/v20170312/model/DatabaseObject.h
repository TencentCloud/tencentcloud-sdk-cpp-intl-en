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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEOBJECT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the type of a certain object in the database, and the database, mode, and table of the object.
                */
                class DatabaseObject : public AbstractModel
                {
                public:
                    DatabaseObject();
                    ~DatabaseObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the supported object types in the database: account, database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * @return ObjectType Specifies the supported object types in the database: account, database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置Specifies the supported object types in the database: account, database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * @param _objectType Specifies the supported object types in the database: account, database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the database object name.
                     * @return ObjectName Specifies the database object name.
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置Specifies the database object name.
                     * @param _objectName Specifies the database object name.
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取Describes the database object and the database name it belongs to. this parameter is required when the description object type is not database.
                     * @return DatabaseName Describes the database object and the database name it belongs to. this parameter is required when the description object type is not database.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Describes the database object and the database name it belongs to. this parameter is required when the description object type is not database.
                     * @param _databaseName Describes the database object and the database name it belongs to. this parameter is required when the description object type is not database.
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
                     * 获取Specifies the schema name of the database object to describe. this parameter is required when the description object is not database or schema.
                     * @return SchemaName Specifies the schema name of the database object to describe. this parameter is required when the description object is not database or schema.
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Specifies the schema name of the database object to describe. this parameter is required when the description object is not database or schema.
                     * @param _schemaName Specifies the schema name of the database object to describe. this parameter is required when the description object is not database or schema.
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Specifies the database object to describe and the table name it belongs to. this parameter is required when the object type is column.
                     * @return TableName Specifies the database object to describe and the table name it belongs to. this parameter is required when the object type is column.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Specifies the database object to describe and the table name it belongs to. this parameter is required when the object type is column.
                     * @param _tableName Specifies the database object to describe and the table name it belongs to. this parameter is required when the object type is column.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * Specifies the supported object types in the database: account, database, schema, sequence, procedure, type, function, table, view, matview, column.
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * Specifies the database object name.
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * Describes the database object and the database name it belongs to. this parameter is required when the description object type is not database.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Specifies the schema name of the database object to describe. this parameter is required when the description object is not database or schema.
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Specifies the database object to describe and the table name it belongs to. this parameter is required when the object type is column.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEOBJECT_H_
