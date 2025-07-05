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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusters request structure.
                */
                class DescribeDedicatedClustersRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClustersRequest();
                    ~DescribeDedicatedClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by one or more instance IDs. Example of instance ID: cluster-xxxxxxxx
                     * @return DedicatedClusterIds Query by one or more instance IDs. Example of instance ID: cluster-xxxxxxxx
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterIds() const;

                    /**
                     * 设置Query by one or more instance IDs. Example of instance ID: cluster-xxxxxxxx
                     * @param _dedicatedClusterIds Query by one or more instance IDs. Example of instance ID: cluster-xxxxxxxx
                     * 
                     */
                    void SetDedicatedClusterIds(const std::vector<std::string>& _dedicatedClusterIds);

                    /**
                     * 判断参数 DedicatedClusterIds 是否已赋值
                     * @return DedicatedClusterIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdsHasBeenSet() const;

                    /**
                     * 获取Filter by AZ name.
                     * @return Zones Filter by AZ name.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Filter by AZ name.
                     * @param _zones Filter by AZ name.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Filter by site id.
                     * @return SiteIds Filter by site id.
                     * 
                     */
                    std::vector<std::string> GetSiteIds() const;

                    /**
                     * 设置Filter by site id.
                     * @param _siteIds Filter by site id.
                     * 
                     */
                    void SetSiteIds(const std::vector<std::string>& _siteIds);

                    /**
                     * 判断参数 SiteIds 是否已赋值
                     * @return SiteIds 是否已赋值
                     * 
                     */
                    bool SiteIdsHasBeenSet() const;

                    /**
                     * 获取Filter by CDC life cycle.
                     * @return LifecycleStatuses Filter by CDC life cycle.
                     * 
                     */
                    std::vector<std::string> GetLifecycleStatuses() const;

                    /**
                     * 设置Filter by CDC life cycle.
                     * @param _lifecycleStatuses Filter by CDC life cycle.
                     * 
                     */
                    void SetLifecycleStatuses(const std::vector<std::string>& _lifecycleStatuses);

                    /**
                     * 判断参数 LifecycleStatuses 是否已赋值
                     * @return LifecycleStatuses 是否已赋值
                     * 
                     */
                    bool LifecycleStatusesHasBeenSet() const;

                    /**
                     * 获取Name of fuzzy matching CDC
                     * @return Name Name of fuzzy matching CDC
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of fuzzy matching CDC
                     * @param _name Name of fuzzy matching CDC
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Query by one or more instance IDs. Example of instance ID: cluster-xxxxxxxx
                     */
                    std::vector<std::string> m_dedicatedClusterIds;
                    bool m_dedicatedClusterIdsHasBeenSet;

                    /**
                     * Filter by AZ name.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Filter by site id.
                     */
                    std::vector<std::string> m_siteIds;
                    bool m_siteIdsHasBeenSet;

                    /**
                     * Filter by CDC life cycle.
                     */
                    std::vector<std::string> m_lifecycleStatuses;
                    bool m_lifecycleStatusesHasBeenSet;

                    /**
                     * Name of fuzzy matching CDC
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERSREQUEST_H_
