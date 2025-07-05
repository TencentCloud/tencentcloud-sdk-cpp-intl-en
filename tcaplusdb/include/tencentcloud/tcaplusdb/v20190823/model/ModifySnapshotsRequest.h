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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYSNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYSNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SnapshotInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifySnapshots request structure.
                */
                class ModifySnapshotsRequest : public AbstractModel
                {
                public:
                    ModifySnapshotsRequest();
                    ~ModifySnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the cluster where the table resides
                     * @return ClusterId The ID of the cluster where the table resides
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The ID of the cluster where the table resides
                     * @param _clusterId The ID of the cluster where the table resides
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
                     * 获取Snapshot list
                     * @return SelectedTables Snapshot list
                     * 
                     */
                    std::vector<SnapshotInfoNew> GetSelectedTables() const;

                    /**
                     * 设置Snapshot list
                     * @param _selectedTables Snapshot list
                     * 
                     */
                    void SetSelectedTables(const std::vector<SnapshotInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                private:

                    /**
                     * The ID of the cluster where the table resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Snapshot list
                     */
                    std::vector<SnapshotInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYSNAPSHOTSREQUEST_H_
