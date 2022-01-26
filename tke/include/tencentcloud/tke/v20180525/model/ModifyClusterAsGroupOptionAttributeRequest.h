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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERASGROUPOPTIONATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERASGROUPOPTIONATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterAsGroupOption.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterAsGroupOptionAttribute request structure.
                */
                class ModifyClusterAsGroupOptionAttributeRequest : public AbstractModel
                {
                public:
                    ModifyClusterAsGroupOptionAttributeRequest();
                    ~ModifyClusterAsGroupOptionAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster auto scaling attributes
                     * @return ClusterAsGroupOption Cluster auto scaling attributes
                     */
                    ClusterAsGroupOption GetClusterAsGroupOption() const;

                    /**
                     * 设置Cluster auto scaling attributes
                     * @param ClusterAsGroupOption Cluster auto scaling attributes
                     */
                    void SetClusterAsGroupOption(const ClusterAsGroupOption& _clusterAsGroupOption);

                    /**
                     * 判断参数 ClusterAsGroupOption 是否已赋值
                     * @return ClusterAsGroupOption 是否已赋值
                     */
                    bool ClusterAsGroupOptionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster auto scaling attributes
                     */
                    ClusterAsGroupOption m_clusterAsGroupOption;
                    bool m_clusterAsGroupOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERASGROUPOPTIONATTRIBUTEREQUEST_H_
