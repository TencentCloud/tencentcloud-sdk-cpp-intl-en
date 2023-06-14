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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEMEMOSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEMEMOSREQUEST_H_

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
                * ModifyTableMemos request structure.
                */
                class ModifyTableMemosRequest : public AbstractModel
                {
                public:
                    ModifyTableMemosRequest();
                    ~ModifyTableMemosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster instance where a table resides
                     * @return ClusterId ID of the cluster instance where a table resides
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster instance where a table resides
                     * @param _clusterId ID of the cluster instance where a table resides
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
                     * 获取List of details of selected tables
                     * @return TableMemos List of details of selected tables
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetTableMemos() const;

                    /**
                     * 设置List of details of selected tables
                     * @param _tableMemos List of details of selected tables
                     * 
                     */
                    void SetTableMemos(const std::vector<SelectedTableInfoNew>& _tableMemos);

                    /**
                     * 判断参数 TableMemos 是否已赋值
                     * @return TableMemos 是否已赋值
                     * 
                     */
                    bool TableMemosHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster instance where a table resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of details of selected tables
                     */
                    std::vector<SelectedTableInfoNew> m_tableMemos;
                    bool m_tableMemosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEMEMOSREQUEST_H_
