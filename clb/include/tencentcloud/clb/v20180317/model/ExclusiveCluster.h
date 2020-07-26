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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_EXCLUSIVECLUSTER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_EXCLUSIVECLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClusterItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Dedicated cluster
                */
                class ExclusiveCluster : public AbstractModel
                {
                public:
                    ExclusiveCluster();
                    ~ExclusiveCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Layer-4 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return L4Clusters Layer-4 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterItem> GetL4Clusters() const;

                    /**
                     * 设置Layer-4 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param L4Clusters Layer-4 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetL4Clusters(const std::vector<ClusterItem>& _l4Clusters);

                    /**
                     * 判断参数 L4Clusters 是否已赋值
                     * @return L4Clusters 是否已赋值
                     */
                    bool L4ClustersHasBeenSet() const;

                    /**
                     * 获取Layer-7 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return L7Clusters Layer-7 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterItem> GetL7Clusters() const;

                    /**
                     * 设置Layer-7 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param L7Clusters Layer-7 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetL7Clusters(const std::vector<ClusterItem>& _l7Clusters);

                    /**
                     * 判断参数 L7Clusters 是否已赋值
                     * @return L7Clusters 是否已赋值
                     */
                    bool L7ClustersHasBeenSet() const;

                    /**
                     * 获取vpcgw cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassicalCluster vpcgw cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ClusterItem GetClassicalCluster() const;

                    /**
                     * 设置vpcgw cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClassicalCluster vpcgw cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClassicalCluster(const ClusterItem& _classicalCluster);

                    /**
                     * 判断参数 ClassicalCluster 是否已赋值
                     * @return ClassicalCluster 是否已赋值
                     */
                    bool ClassicalClusterHasBeenSet() const;

                private:

                    /**
                     * Layer-4 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterItem> m_l4Clusters;
                    bool m_l4ClustersHasBeenSet;

                    /**
                     * Layer-7 dedicated cluster list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterItem> m_l7Clusters;
                    bool m_l7ClustersHasBeenSet;

                    /**
                     * vpcgw cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ClusterItem m_classicalCluster;
                    bool m_classicalClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_EXCLUSIVECLUSTER_H_
