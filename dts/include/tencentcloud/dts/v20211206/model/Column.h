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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COLUMN_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COLUMN_H_

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
                * Column information in data sync
                */
                class Column : public AbstractModel
                {
                public:
                    Column();
                    ~Column() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column name
                     * @return ColumnName Column name
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置Column name
                     * @param _columnName Column name
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取New column name.
                     * @return NewColumnName New column name.
                     * 
                     */
                    std::string GetNewColumnName() const;

                    /**
                     * 设置New column name.
                     * @param _newColumnName New column name.
                     * 
                     */
                    void SetNewColumnName(const std::string& _newColumnName);

                    /**
                     * 判断参数 NewColumnName 是否已赋值
                     * @return NewColumnName 是否已赋值
                     * 
                     */
                    bool NewColumnNameHasBeenSet() const;

                private:

                    /**
                     * Column name
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * New column name.
                     */
                    std::string m_newColumnName;
                    bool m_newColumnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COLUMN_H_
