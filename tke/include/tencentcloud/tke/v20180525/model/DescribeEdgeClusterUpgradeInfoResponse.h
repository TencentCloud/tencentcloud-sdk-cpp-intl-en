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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERUPGRADEINFORESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERUPGRADEINFORESPONSE_H_

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
                * DescribeEdgeClusterUpgradeInfo response structure.
                */
                class DescribeEdgeClusterUpgradeInfoResponse : public AbstractModel
                {
                public:
                    DescribeEdgeClusterUpgradeInfoResponse();
                    ~DescribeEdgeClusterUpgradeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Upgradeable cluster component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ComponentVersion Upgradeable cluster component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetComponentVersion() const;

                    /**
                     * 判断参数 ComponentVersion 是否已赋值
                     * @return ComponentVersion 是否已赋值
                     * 
                     */
                    bool ComponentVersionHasBeenSet() const;

                    /**
                     * 获取Current version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EdgeVersionCurrent Current version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEdgeVersionCurrent() const;

                    /**
                     * 判断参数 EdgeVersionCurrent 是否已赋值
                     * @return EdgeVersionCurrent 是否已赋值
                     * 
                     */
                    bool EdgeVersionCurrentHasBeenSet() const;

                    /**
                     * 获取Prefix of the image registry of an edge component (including domain name and namespace)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RegistryPrefix Prefix of the image registry of an edge component (including domain name and namespace)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegistryPrefix() const;

                    /**
                     * 判断参数 RegistryPrefix 是否已赋值
                     * @return RegistryPrefix 是否已赋值
                     * 
                     */
                    bool RegistryPrefixHasBeenSet() const;

                    /**
                     * 获取Cluster upgrade status. Valid values: `Running`, `Updating`, `Failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterUpgradeStatus Cluster upgrade status. Valid values: `Running`, `Updating`, `Failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterUpgradeStatus() const;

                    /**
                     * 判断参数 ClusterUpgradeStatus 是否已赋值
                     * @return ClusterUpgradeStatus 是否已赋值
                     * 
                     */
                    bool ClusterUpgradeStatusHasBeenSet() const;

                    /**
                     * 获取Reason for `Updating` or `Failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterUpgradeStatusReason Reason for `Updating` or `Failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterUpgradeStatusReason() const;

                    /**
                     * 判断参数 ClusterUpgradeStatusReason 是否已赋值
                     * @return ClusterUpgradeStatusReason 是否已赋值
                     * 
                     */
                    bool ClusterUpgradeStatusReasonHasBeenSet() const;

                private:

                    /**
                     * Upgradeable cluster component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_componentVersion;
                    bool m_componentVersionHasBeenSet;

                    /**
                     * Current version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_edgeVersionCurrent;
                    bool m_edgeVersionCurrentHasBeenSet;

                    /**
                     * Prefix of the image registry of an edge component (including domain name and namespace)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_registryPrefix;
                    bool m_registryPrefixHasBeenSet;

                    /**
                     * Cluster upgrade status. Valid values: `Running`, `Updating`, `Failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterUpgradeStatus;
                    bool m_clusterUpgradeStatusHasBeenSet;

                    /**
                     * Reason for `Updating` or `Failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterUpgradeStatusReason;
                    bool m_clusterUpgradeStatusReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERUPGRADEINFORESPONSE_H_
