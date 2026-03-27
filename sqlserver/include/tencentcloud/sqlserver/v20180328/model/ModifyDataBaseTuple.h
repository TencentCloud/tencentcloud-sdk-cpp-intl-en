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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASETUPLE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASETUPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DatabaseTuple.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Database Subscription Publication Relationship Collection to be Modified
                */
                class ModifyDataBaseTuple : public AbstractModel
                {
                public:
                    ModifyDataBaseTuple();
                    ~ModifyDataBaseTuple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscription Relationship to be Modified
                     * @return DatabaseTuple Subscription Relationship to be Modified
                     * 
                     */
                    DatabaseTuple GetDatabaseTuple() const;

                    /**
                     * 设置Subscription Relationship to be Modified
                     * @param _databaseTuple Subscription Relationship to be Modified
                     * 
                     */
                    void SetDatabaseTuple(const DatabaseTuple& _databaseTuple);

                    /**
                     * 判断参数 DatabaseTuple 是否已赋值
                     * @return DatabaseTuple 是否已赋值
                     * 
                     */
                    bool DatabaseTupleHasBeenSet() const;

                    /**
                     * 获取Modified subscription relationship. Takes effect when DeleteDataBasesTuple is false
                     * @return NewDatabaseTuple Modified subscription relationship. Takes effect when DeleteDataBasesTuple is false
                     * 
                     */
                    DatabaseTuple GetNewDatabaseTuple() const;

                    /**
                     * 设置Modified subscription relationship. Takes effect when DeleteDataBasesTuple is false
                     * @param _newDatabaseTuple Modified subscription relationship. Takes effect when DeleteDataBasesTuple is false
                     * 
                     */
                    void SetNewDatabaseTuple(const DatabaseTuple& _newDatabaseTuple);

                    /**
                     * 判断参数 NewDatabaseTuple 是否已赋值
                     * @return NewDatabaseTuple 是否已赋值
                     * 
                     */
                    bool NewDatabaseTupleHasBeenSet() const;

                    /**
                     * 获取Whether to delete the subscription relationship. When this option is true, NewDatabaseTuple is invalid
                     * @return DeleteDataBasesTuple Whether to delete the subscription relationship. When this option is true, NewDatabaseTuple is invalid
                     * 
                     */
                    bool GetDeleteDataBasesTuple() const;

                    /**
                     * 设置Whether to delete the subscription relationship. When this option is true, NewDatabaseTuple is invalid
                     * @param _deleteDataBasesTuple Whether to delete the subscription relationship. When this option is true, NewDatabaseTuple is invalid
                     * 
                     */
                    void SetDeleteDataBasesTuple(const bool& _deleteDataBasesTuple);

                    /**
                     * 判断参数 DeleteDataBasesTuple 是否已赋值
                     * @return DeleteDataBasesTuple 是否已赋值
                     * 
                     */
                    bool DeleteDataBasesTupleHasBeenSet() const;

                private:

                    /**
                     * Subscription Relationship to be Modified
                     */
                    DatabaseTuple m_databaseTuple;
                    bool m_databaseTupleHasBeenSet;

                    /**
                     * Modified subscription relationship. Takes effect when DeleteDataBasesTuple is false
                     */
                    DatabaseTuple m_newDatabaseTuple;
                    bool m_newDatabaseTupleHasBeenSet;

                    /**
                     * Whether to delete the subscription relationship. When this option is true, NewDatabaseTuple is invalid
                     */
                    bool m_deleteDataBasesTuple;
                    bool m_deleteDataBasesTupleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASETUPLE_H_
