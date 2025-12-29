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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENABLECONTROLPLANELOGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENABLECONTROLPLANELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ComponentLogConfig.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EnableControlPlaneLogs request structure.
                */
                class EnableControlPlaneLogsRequest : public AbstractModel
                {
                public:
                    EnableControlPlaneLogsRequest();
                    ~EnableControlPlaneLogsRequest() = default;
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
                     * 获取Cluster type. currently only support tke.
                     * @return ClusterType Cluster type. currently only support tke.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type. currently only support tke.
                     * @param _clusterType Cluster type. currently only support tke.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Component name list. currently supports cluster-autoscaler, kapenter.
                     * @return Components Component name list. currently supports cluster-autoscaler, kapenter.
                     * 
                     */
                    std::vector<ComponentLogConfig> GetComponents() const;

                    /**
                     * 设置Component name list. currently supports cluster-autoscaler, kapenter.
                     * @param _components Component name list. currently supports cluster-autoscaler, kapenter.
                     * 
                     */
                    void SetComponents(const std::vector<ComponentLogConfig>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster type. currently only support tke.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Component name list. currently supports cluster-autoscaler, kapenter.
                     */
                    std::vector<ComponentLogConfig> m_components;
                    bool m_componentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENABLECONTROLPLANELOGSREQUEST_H_
