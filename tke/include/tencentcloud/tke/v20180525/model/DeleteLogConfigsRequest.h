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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSREQUEST_H_

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
                * DeleteLogConfigs request structure.
                */
                class DeleteLogConfigsRequest : public AbstractModel
                {
                public:
                    DeleteLogConfigsRequest();
                    ~DeleteLogConfigsRequest() = default;
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
                     * 获取Name of the collection rule to be deleted. For multiple collection rules, they are separated by ",".
                     * @return LogConfigNames Name of the collection rule to be deleted. For multiple collection rules, they are separated by ",".
                     * 
                     */
                    std::string GetLogConfigNames() const;

                    /**
                     * 设置Name of the collection rule to be deleted. For multiple collection rules, they are separated by ",".
                     * @param _logConfigNames Name of the collection rule to be deleted. For multiple collection rules, they are separated by ",".
                     * 
                     */
                    void SetLogConfigNames(const std::string& _logConfigNames);

                    /**
                     * 判断参数 LogConfigNames 是否已赋值
                     * @return LogConfigNames 是否已赋值
                     * 
                     */
                    bool LogConfigNamesHasBeenSet() const;

                    /**
                     * 获取Cluster type: tke/eks. The default is tke cluster.
                     * @return ClusterType Cluster type: tke/eks. The default is tke cluster.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type: tke/eks. The default is tke cluster.
                     * @param _clusterType Cluster type: tke/eks. The default is tke cluster.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Name of the collection rule to be deleted. For multiple collection rules, they are separated by ",".
                     */
                    std::string m_logConfigNames;
                    bool m_logConfigNamesHasBeenSet;

                    /**
                     * Cluster type: tke/eks. The default is tke cluster.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSREQUEST_H_
