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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDatabaseObjects request structure.
                */
                class DescribeDatabaseObjectsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsRequest();
                    ~DescribeDatabaseObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the object type for querying. supported objects: database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * @return ObjectType Specifies the object type for querying. supported objects: database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置Specifies the object type for querying. supported objects: database, schema, sequence, procedure, type, function, table, view, matview, column.
                     * @param _objectType Specifies the object type for querying. supported objects: database, schema, sequence, procedure, type, function, table, view, matview, column.
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
                     * 获取Number of items displayed at a time. default 20. value range 0-100.
                     * @return Limit Number of items displayed at a time. default 20. value range 0-100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items displayed at a time. default 20. value range 0-100.
                     * @param _limit Number of items displayed at a time. default 20. value range 0-100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Data offset, starting from 0.		
                     * @return Offset Data offset, starting from 0.		
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset, starting from 0.		
                     * @param _offset Data offset, starting from 0.		
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Describes the database the query object belongs to. this parameter is required when the query object type is not database.
                     * @return DatabaseName Describes the database the query object belongs to. this parameter is required when the query object type is not database.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Describes the database the query object belongs to. this parameter is required when the query object type is not database.
                     * @param _databaseName Describes the database the query object belongs to. this parameter is required when the query object type is not database.
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
                     * 获取Specifies the mode belonging to the query object. this parameter is required when the query object type is not database or schema.
                     * @return SchemaName Specifies the mode belonging to the query object. this parameter is required when the query object type is not database or schema.
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Specifies the mode belonging to the query object. this parameter is required when the query object type is not database or schema.
                     * @param _schemaName Specifies the mode belonging to the query object. this parameter is required when the query object type is not database or schema.
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
                     * 获取Specifies the table belonging to the query object. this parameter is required when the query object type is column.
                     * @return TableName Specifies the table belonging to the query object. this parameter is required when the query object type is column.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Specifies the table belonging to the query object. this parameter is required when the query object type is column.
                     * @param _tableName Specifies the table belonging to the query object. this parameter is required when the query object type is column.
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
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Specifies the object type for querying. supported objects: database, schema, sequence, procedure, type, function, table, view, matview, column.
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * Number of items displayed at a time. default 20. value range 0-100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset, starting from 0.		
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Describes the database the query object belongs to. this parameter is required when the query object type is not database.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Specifies the mode belonging to the query object. this parameter is required when the query object type is not database or schema.
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Specifies the table belonging to the query object. this parameter is required when the query object type is column.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
