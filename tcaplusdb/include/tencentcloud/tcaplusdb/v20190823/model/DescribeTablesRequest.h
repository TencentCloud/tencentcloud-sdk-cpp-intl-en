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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>
#include <tencentcloud/tcaplusdb/v20190823/model/Filter.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeTables request structure.
                */
                class DescribeTablesRequest : public AbstractModel
                {
                public:
                    DescribeTablesRequest();
                    ~DescribeTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where the table to be queried resides
                     * @return ClusterId ID of the cluster where the table to be queried resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where the table to be queried resides
                     * @param ClusterId ID of the cluster where the table to be queried resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of the table groups where the table to be queried resides
                     * @return TableGroupIds List of IDs of the table groups where the table to be queried resides
                     */
                    std::vector<std::string> GetTableGroupIds() const;

                    /**
                     * 设置List of IDs of the table groups where the table to be queried resides
                     * @param TableGroupIds List of IDs of the table groups where the table to be queried resides
                     */
                    void SetTableGroupIds(const std::vector<std::string>& _tableGroupIds);

                    /**
                     * 判断参数 TableGroupIds 是否已赋值
                     * @return TableGroupIds 是否已赋值
                     */
                    bool TableGroupIdsHasBeenSet() const;

                    /**
                     * 获取Information list of tables to be queried
                     * @return SelectedTables Information list of tables to be queried
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置Information list of tables to be queried
                     * @param SelectedTables Information list of tables to be queried
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取Filter. Valid values: TableName, TableInstanceId
                     * @return Filters Filter. Valid values: TableName, TableInstanceId
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Valid values: TableName, TableInstanceId
                     * @param Filters Filter. Valid values: TableName, TableInstanceId
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Query result offset
                     * @return Offset Query result offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query result offset
                     * @param Offset Query result offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned query results
                     * @return Limit Number of returned query results
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned query results
                     * @param Limit Number of returned query results
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where the table to be queried resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of IDs of the table groups where the table to be queried resides
                     */
                    std::vector<std::string> m_tableGroupIds;
                    bool m_tableGroupIdsHasBeenSet;

                    /**
                     * Information list of tables to be queried
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * Filter. Valid values: TableName, TableInstanceId
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query result offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned query results
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLESREQUEST_H_
