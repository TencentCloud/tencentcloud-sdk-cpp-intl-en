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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Synced table description
                */
                class Table : public AbstractModel
                {
                public:
                    Table();
                    ~Table() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TableName Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewTableName New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NewTableName New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     */
                    bool NewTableNameHasBeenSet() const;

                    /**
                     * 获取Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilterCondition Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFilterCondition() const;

                    /**
                     * 设置Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FilterCondition Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilterCondition(const std::string& _filterCondition);

                    /**
                     * 判断参数 FilterCondition 是否已赋值
                     * @return FilterCondition 是否已赋值
                     */
                    bool FilterConditionHasBeenSet() const;

                private:

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * New table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * Filter condition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filterCondition;
                    bool m_filterConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLE_H_
