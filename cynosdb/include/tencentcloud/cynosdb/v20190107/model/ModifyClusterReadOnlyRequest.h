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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERREADONLYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERREADONLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyClusterReadOnly request structure.
                */
                class ModifyClusterReadOnlyRequest : public AbstractModel
                {
                public:
                    ModifyClusterReadOnlyRequest();
                    ~ModifyClusterReadOnlyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cluster IDs
                     * @return ClusterIds List of cluster IDs
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置List of cluster IDs
                     * @param _clusterIds List of cluster IDs
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取Cluster read-only switch. Available values: ON, OFF
                     * @return ReadOnlyOperation Cluster read-only switch. Available values: ON, OFF
                     * 
                     */
                    std::string GetReadOnlyOperation() const;

                    /**
                     * 设置Cluster read-only switch. Available values: ON, OFF
                     * @param _readOnlyOperation Cluster read-only switch. Available values: ON, OFF
                     * 
                     */
                    void SetReadOnlyOperation(const std::string& _readOnlyOperation);

                    /**
                     * 判断参数 ReadOnlyOperation 是否已赋值
                     * @return ReadOnlyOperation 是否已赋值
                     * 
                     */
                    bool ReadOnlyOperationHasBeenSet() const;

                    /**
                     * 获取yes: Modify within the Ops time window. no: Immediately execute (default value)
                     * @return IsInMaintainPeriod yes: Modify within the Ops time window. no: Immediately execute (default value)
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置yes: Modify within the Ops time window. no: Immediately execute (default value)
                     * @param _isInMaintainPeriod yes: Modify within the Ops time window. no: Immediately execute (default value)
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * List of cluster IDs
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Cluster read-only switch. Available values: ON, OFF
                     */
                    std::string m_readOnlyOperation;
                    bool m_readOnlyOperationHasBeenSet;

                    /**
                     * yes: Modify within the Ops time window. no: Immediately execute (default value)
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERREADONLYREQUEST_H_
