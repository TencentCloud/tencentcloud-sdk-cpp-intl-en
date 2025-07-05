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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETTABLEDATAFLOWREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETTABLEDATAFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableWithField.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * SetTableDataFlow request structure.
                */
                class SetTableDataFlowRequest : public AbstractModel
                {
                public:
                    SetTableDataFlowRequest();
                    ~SetTableDataFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the cluster where the tables reside
                     * @return ClusterId The ID of the cluster where the tables reside
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The ID of the cluster where the tables reside
                     * @param _clusterId The ID of the cluster where the tables reside
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The list of tables for which data subscription will be enabled
                     * @return SelectedTables The list of tables for which data subscription will be enabled
                     * 
                     */
                    std::vector<SelectedTableWithField> GetSelectedTables() const;

                    /**
                     * 设置The list of tables for which data subscription will be enabled
                     * @param _selectedTables The list of tables for which data subscription will be enabled
                     * 
                     */
                    void SetSelectedTables(const std::vector<SelectedTableWithField>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                private:

                    /**
                     * The ID of the cluster where the tables reside
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The list of tables for which data subscription will be enabled
                     */
                    std::vector<SelectedTableWithField> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETTABLEDATAFLOWREQUEST_H_
