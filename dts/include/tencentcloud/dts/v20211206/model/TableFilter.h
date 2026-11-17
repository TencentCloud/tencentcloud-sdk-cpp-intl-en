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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLEFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/OpFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Table-level DDL/DML filtering information
                */
                class TableFilter : public AbstractModel
                {
                public:
                    TableFilter();
                    ~TableFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name for rule effectiveness
                     * @return TableName Table name for rule effectiveness
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name for rule effectiveness
                     * @param _tableName Table name for rule effectiveness
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
                     * 获取Table-level DDL/DML Filter Rule
                     * @return OpFilter Table-level DDL/DML Filter Rule
                     * 
                     */
                    OpFilter GetOpFilter() const;

                    /**
                     * 设置Table-level DDL/DML Filter Rule
                     * @param _opFilter Table-level DDL/DML Filter Rule
                     * 
                     */
                    void SetOpFilter(const OpFilter& _opFilter);

                    /**
                     * 判断参数 OpFilter 是否已赋值
                     * @return OpFilter 是否已赋值
                     * 
                     */
                    bool OpFilterHasBeenSet() const;

                private:

                    /**
                     * Table name for rule effectiveness
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table-level DDL/DML Filter Rule
                     */
                    OpFilter m_opFilter;
                    bool m_opFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLEFILTER_H_
