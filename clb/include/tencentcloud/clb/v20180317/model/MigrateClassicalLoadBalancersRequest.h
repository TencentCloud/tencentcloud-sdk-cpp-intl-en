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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MIGRATECLASSICALLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MIGRATECLASSICALLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * MigrateClassicalLoadBalancers request structure.
                */
                class MigrateClassicalLoadBalancersRequest : public AbstractModel
                {
                public:
                    MigrateClassicalLoadBalancersRequest();
                    ~MigrateClassicalLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of classic CLB instance IDs
                     * @return LoadBalancerIds Array of classic CLB instance IDs
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置Array of classic CLB instance IDs
                     * @param LoadBalancerIds Array of classic CLB instance IDs
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster information
                     * @return ExclusiveCluster Exclusive cluster information
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置Exclusive cluster information
                     * @param ExclusiveCluster Exclusive cluster information
                     */
                    void SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster);

                    /**
                     * 判断参数 ExclusiveCluster 是否已赋值
                     * @return ExclusiveCluster 是否已赋值
                     */
                    bool ExclusiveClusterHasBeenSet() const;

                private:

                    /**
                     * Array of classic CLB instance IDs
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Exclusive cluster information
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MIGRATECLASSICALLOADBALANCERSREQUEST_H_
