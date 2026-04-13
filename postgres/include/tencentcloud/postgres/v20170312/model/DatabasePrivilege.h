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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEPRIVILEGE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DatabaseObject.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Specifies the permission list of the specified account for the database object.
                */
                class DatabasePrivilege : public AbstractModel
                {
                public:
                    DatabasePrivilege();
                    ~DatabasePrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The database object. when ObjectType is database, DatabaseName/SchemaName/TableName can be empty. when ObjectType is schema, SchemaName/TableName can be empty. when ObjectType is column, TableName cannot be empty. other cases can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Object The database object. when ObjectType is database, DatabaseName/SchemaName/TableName can be empty. when ObjectType is schema, SchemaName/TableName can be empty. when ObjectType is column, TableName cannot be empty. other cases can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DatabaseObject GetObject() const;

                    /**
                     * 设置The database object. when ObjectType is database, DatabaseName/SchemaName/TableName can be empty. when ObjectType is schema, SchemaName/TableName can be empty. when ObjectType is column, TableName cannot be empty. other cases can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _object The database object. when ObjectType is database, DatabaseName/SchemaName/TableName can be empty. when ObjectType is schema, SchemaName/TableName can be empty. when ObjectType is column, TableName cannot be empty. other cases can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObject(const DatabaseObject& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取Specifies the permission list of the specified account for the database object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivilegeSet Specifies the permission list of the specified account for the database object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPrivilegeSet() const;

                    /**
                     * 设置Specifies the permission list of the specified account for the database object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privilegeSet Specifies the permission list of the specified account for the database object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivilegeSet(const std::vector<std::string>& _privilegeSet);

                    /**
                     * 判断参数 PrivilegeSet 是否已赋值
                     * @return PrivilegeSet 是否已赋值
                     * 
                     */
                    bool PrivilegeSetHasBeenSet() const;

                private:

                    /**
                     * The database object. when ObjectType is database, DatabaseName/SchemaName/TableName can be empty. when ObjectType is schema, SchemaName/TableName can be empty. when ObjectType is column, TableName cannot be empty. other cases can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DatabaseObject m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * Specifies the permission list of the specified account for the database object.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privilegeSet;
                    bool m_privilegeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEPRIVILEGE_H_
