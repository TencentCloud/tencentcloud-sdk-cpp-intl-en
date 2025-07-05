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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEQUOTASREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEQUOTASREQUEST_H_

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
                * ModifyTableQuotas request structure.
                */
                class ModifyTableQuotasRequest : public AbstractModel
                {
                public:
                    ModifyTableQuotasRequest();
                    ~ModifyTableQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where the table to be scaled resides
                     * @return ClusterId ID of the cluster where the table to be scaled resides
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where the table to be scaled resides
                     * @param _clusterId ID of the cluster where the table to be scaled resides
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
                     * 获取List of quotas of tables selected for modification
                     * @return TableQuotas List of quotas of tables selected for modification
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetTableQuotas() const;

                    /**
                     * 设置List of quotas of tables selected for modification
                     * @param _tableQuotas List of quotas of tables selected for modification
                     * 
                     */
                    void SetTableQuotas(const std::vector<SelectedTableInfoNew>& _tableQuotas);

                    /**
                     * 判断参数 TableQuotas 是否已赋值
                     * @return TableQuotas 是否已赋值
                     * 
                     */
                    bool TableQuotasHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where the table to be scaled resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of quotas of tables selected for modification
                     */
                    std::vector<SelectedTableInfoNew> m_tableQuotas;
                    bool m_tableQuotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEQUOTASREQUEST_H_
