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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETAREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableNameFilter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableMeta request structure.
                */
                class DescribeTableMetaRequest : public AbstractModel
                {
                public:
                    DescribeTableMetaRequest();
                    ~DescribeTableMetaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique Table ID
                     * @return TableId Unique Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Unique Table ID
                     * @param _tableId Unique Table ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Query conditions by Name
                     * @return TableNameFilter Query conditions by Name
                     * 
                     */
                    TableNameFilter GetTableNameFilter() const;

                    /**
                     * 设置Query conditions by Name
                     * @param _tableNameFilter Query conditions by Name
                     * 
                     */
                    void SetTableNameFilter(const TableNameFilter& _tableNameFilter);

                    /**
                     * 判断参数 TableNameFilter 是否已赋值
                     * @return TableNameFilter 是否已赋值
                     * 
                     */
                    bool TableNameFilterHasBeenSet() const;

                    /**
                     * 获取Query condition type: 0 by ID, 1 by Name, default is 0
                     * @return TableFilterType Query condition type: 0 by ID, 1 by Name, default is 0
                     * 
                     */
                    uint64_t GetTableFilterType() const;

                    /**
                     * 设置Query condition type: 0 by ID, 1 by Name, default is 0
                     * @param _tableFilterType Query condition type: 0 by ID, 1 by Name, default is 0
                     * 
                     */
                    void SetTableFilterType(const uint64_t& _tableFilterType);

                    /**
                     * 判断参数 TableFilterType 是否已赋值
                     * @return TableFilterType 是否已赋值
                     * 
                     */
                    bool TableFilterTypeHasBeenSet() const;

                private:

                    /**
                     * Unique Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Query conditions by Name
                     */
                    TableNameFilter m_tableNameFilter;
                    bool m_tableNameFilterHasBeenSet;

                    /**
                     * Query condition type: 0 by ID, 1 by Name, default is 0
                     */
                    uint64_t m_tableFilterType;
                    bool m_tableFilterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETAREQUEST_H_
