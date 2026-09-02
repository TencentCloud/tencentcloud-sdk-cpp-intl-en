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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRCONTAINERALERTCOUNTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRCONTAINERALERTCOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Group statistics item for container alarms (only TotalCount is returned, without splitting by major category of alarm)
                */
                class EdrContainerAlertCountItem : public AbstractModel
                {
                public:
                    EdrContainerAlertCountItem();
                    ~EdrContainerAlertCountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cluster ID (has a value when grouping by cluster, otherwise empty string)</p>
                     * @return ClusterId <p>Cluster ID (has a value when grouping by cluster, otherwise empty string)</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID (has a value when grouping by cluster, otherwise empty string)</p>
                     * @param _clusterId <p>Cluster ID (has a value when grouping by cluster, otherwise empty string)</p>
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
                     * 获取<p>Container ID (has a value when grouped by container; otherwise, empty string)</p>
                     * @return ContainerId <p>Container ID (has a value when grouped by container; otherwise, empty string)</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>Container ID (has a value when grouped by container; otherwise, empty string)</p>
                     * @param _containerId <p>Container ID (has a value when grouped by container; otherwise, empty string)</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>Total number of alarms for the cluster/container</p>
                     * @return TotalCount <p>Total number of alarms for the cluster/container</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of alarms for the cluster/container</p>
                     * @param _totalCount <p>Total number of alarms for the cluster/container</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID (has a value when grouping by cluster, otherwise empty string)</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Container ID (has a value when grouped by container; otherwise, empty string)</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Total number of alarms for the cluster/container</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRCONTAINERALERTCOUNTITEM_H_
