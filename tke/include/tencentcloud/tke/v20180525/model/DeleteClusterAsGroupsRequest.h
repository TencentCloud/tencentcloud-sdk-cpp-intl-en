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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERASGROUPSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERASGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteClusterAsGroups request structure.
                */
                class DeleteClusterAsGroupsRequest : public AbstractModel
                {
                public:
                    DeleteClusterAsGroupsRequest();
                    ~DeleteClusterAsGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The cluster ID, obtained through the [DescribeClusters](https://intl.cloud.tencent.com/document/api/457/31862?from_cn_redirect=1) API.
                     * @return ClusterId The cluster ID, obtained through the [DescribeClusters](https://intl.cloud.tencent.com/document/api/457/31862?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The cluster ID, obtained through the [DescribeClusters](https://intl.cloud.tencent.com/document/api/457/31862?from_cn_redirect=1) API.
                     * @param _clusterId The cluster ID, obtained through the [DescribeClusters](https://intl.cloud.tencent.com/document/api/457/31862?from_cn_redirect=1) API.
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
                     * 获取Cluster scaling group ID list
                     * @return AutoScalingGroupIds Cluster scaling group ID list
                     * 
                     */
                    std::vector<std::string> GetAutoScalingGroupIds() const;

                    /**
                     * 设置Cluster scaling group ID list
                     * @param _autoScalingGroupIds Cluster scaling group ID list
                     * 
                     */
                    void SetAutoScalingGroupIds(const std::vector<std::string>& _autoScalingGroupIds);

                    /**
                     * 判断参数 AutoScalingGroupIds 是否已赋值
                     * @return AutoScalingGroupIds 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdsHasBeenSet() const;

                    /**
                     * 获取Whether to keep nodes in the scaling group. Default to **false** (not keep)
                     * @return KeepInstance Whether to keep nodes in the scaling group. Default to **false** (not keep)
                     * 
                     */
                    bool GetKeepInstance() const;

                    /**
                     * 设置Whether to keep nodes in the scaling group. Default to **false** (not keep)
                     * @param _keepInstance Whether to keep nodes in the scaling group. Default to **false** (not keep)
                     * 
                     */
                    void SetKeepInstance(const bool& _keepInstance);

                    /**
                     * 判断参数 KeepInstance 是否已赋值
                     * @return KeepInstance 是否已赋值
                     * 
                     */
                    bool KeepInstanceHasBeenSet() const;

                private:

                    /**
                     * The cluster ID, obtained through the [DescribeClusters](https://intl.cloud.tencent.com/document/api/457/31862?from_cn_redirect=1) API.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster scaling group ID list
                     */
                    std::vector<std::string> m_autoScalingGroupIds;
                    bool m_autoScalingGroupIdsHasBeenSet;

                    /**
                     * Whether to keep nodes in the scaling group. Default to **false** (not keep)
                     */
                    bool m_keepInstance;
                    bool m_keepInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERASGROUPSREQUEST_H_
