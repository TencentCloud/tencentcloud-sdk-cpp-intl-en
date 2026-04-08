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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SORTORDER_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SORTORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 
                */
                class SortOrder : public AbstractModel
                {
                public:
                    SortOrder();
                    ~SortOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Column 
                     * 
                     */
                    std::string GetColumn() const;

                    /**
                     * 设置
                     * @param _column 
                     * 
                     */
                    void SetColumn(const std::string& _column);

                    /**
                     * 判断参数 Column 是否已赋值
                     * @return Column 是否已赋值
                     * 
                     */
                    bool ColumnHasBeenSet() const;

                    /**
                     * 获取
                     * @return SortDirection 
                     * 
                     */
                    std::string GetSortDirection() const;

                    /**
                     * 设置
                     * @param _sortDirection 
                     * 
                     */
                    void SetSortDirection(const std::string& _sortDirection);

                    /**
                     * 判断参数 SortDirection 是否已赋值
                     * @return SortDirection 是否已赋值
                     * 
                     */
                    bool SortDirectionHasBeenSet() const;

                    /**
                     * 获取
                     * @return NullOrder 
                     * 
                     */
                    std::string GetNullOrder() const;

                    /**
                     * 设置
                     * @param _nullOrder 
                     * 
                     */
                    void SetNullOrder(const std::string& _nullOrder);

                    /**
                     * 判断参数 NullOrder 是否已赋值
                     * @return NullOrder 是否已赋值
                     * 
                     */
                    bool NullOrderHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_column;
                    bool m_columnHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sortDirection;
                    bool m_sortDirectionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_nullOrder;
                    bool m_nullOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SORTORDER_H_
