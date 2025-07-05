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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_TABLECOLUMN_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_TABLECOLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Database column information
                */
                class TableColumn : public AbstractModel
                {
                public:
                    TableColumn();
                    ~TableColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column name
                     * @return Col Column name
                     * 
                     */
                    std::string GetCol() const;

                    /**
                     * 设置Column name
                     * @param _col Column name
                     * 
                     */
                    void SetCol(const std::string& _col);

                    /**
                     * 判断参数 Col 是否已赋值
                     * @return Col 是否已赋值
                     * 
                     */
                    bool ColHasBeenSet() const;

                    /**
                     * 获取Column type
                     * @return Type Column type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Column type
                     * @param _type Column type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Column name
                     */
                    std::string m_col;
                    bool m_colHasBeenSet;

                    /**
                     * Column type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_TABLECOLUMN_H_
