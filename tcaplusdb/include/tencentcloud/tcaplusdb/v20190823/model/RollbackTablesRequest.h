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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * RollbackTables request structure.
                */
                class RollbackTablesRequest : public AbstractModel
                {
                public:
                    RollbackTablesRequest();
                    ~RollbackTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where the table to be rolled back resides
                     * @return ClusterId ID of the cluster where the table to be rolled back resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where the table to be rolled back resides
                     * @param ClusterId ID of the cluster where the table to be rolled back resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取List of tables to be rolled back
                     * @return SelectedTables List of tables to be rolled back
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置List of tables to be rolled back
                     * @param SelectedTables List of tables to be rolled back
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取Time to roll back to
                     * @return RollbackTime Time to roll back to
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置Time to roll back to
                     * @param RollbackTime Time to roll back to
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取Rollback mode. `KEYS` is supported
                     * @return Mode Rollback mode. `KEYS` is supported
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Rollback mode. `KEYS` is supported
                     * @param Mode Rollback mode. `KEYS` is supported
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where the table to be rolled back resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of tables to be rolled back
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * Time to roll back to
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * Rollback mode. `KEYS` is supported
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESREQUEST_H_
