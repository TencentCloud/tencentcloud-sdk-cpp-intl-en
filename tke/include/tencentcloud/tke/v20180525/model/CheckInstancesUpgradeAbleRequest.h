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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CheckInstancesUpgradeAble request structure.
                */
                class CheckInstancesUpgradeAbleRequest : public AbstractModel
                {
                public:
                    CheckInstancesUpgradeAbleRequest();
                    ~CheckInstancesUpgradeAbleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Specify the node list to check. If it’s not passed in, all nodes of the cluster will be checked.
                     * @return InstanceIds Specify the node list to check. If it’s not passed in, all nodes of the cluster will be checked.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Specify the node list to check. If it’s not passed in, all nodes of the cluster will be checked.
                     * @param _instanceIds Specify the node list to check. If it’s not passed in, all nodes of the cluster will be checked.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Upgrade type, enum values: reset (Reinstallation and Upgrade, supports major and minor versions), hot (In-place Rolling Minor Version Upgrade), major (In-place Rolling Major Version Upgrade).
                     * @return UpgradeType Upgrade type, enum values: reset (Reinstallation and Upgrade, supports major and minor versions), hot (In-place Rolling Minor Version Upgrade), major (In-place Rolling Major Version Upgrade).
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade type, enum values: reset (Reinstallation and Upgrade, supports major and minor versions), hot (In-place Rolling Minor Version Upgrade), major (In-place Rolling Major Version Upgrade).
                     * @param _upgradeType Upgrade type, enum values: reset (Reinstallation and Upgrade, supports major and minor versions), hot (In-place Rolling Minor Version Upgrade), major (In-place Rolling Major Version Upgrade).
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filtering
                     * @return Filter Filtering
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置Filtering
                     * @param _filter Filtering
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Specify the node list to check. If it’s not passed in, all nodes of the cluster will be checked.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Upgrade type, enum values: reset (Reinstallation and Upgrade, supports major and minor versions), hot (In-place Rolling Minor Version Upgrade), major (In-place Rolling Major Version Upgrade).
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filtering
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_
