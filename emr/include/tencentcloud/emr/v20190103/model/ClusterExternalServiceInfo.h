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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Relationship between shared components and the current cluster
                */
                class ClusterExternalServiceInfo : public AbstractModel
                {
                public:
                    ClusterExternalServiceInfo();
                    ~ClusterExternalServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dependency relationship. 0: being depended on by other clusters, 1: depending on other clusters.
                     * @return DependType Dependency relationship. 0: being depended on by other clusters, 1: depending on other clusters.
                     * 
                     */
                    int64_t GetDependType() const;

                    /**
                     * 设置Dependency relationship. 0: being depended on by other clusters, 1: depending on other clusters.
                     * @param _dependType Dependency relationship. 0: being depended on by other clusters, 1: depending on other clusters.
                     * 
                     */
                    void SetDependType(const int64_t& _dependType);

                    /**
                     * 判断参数 DependType 是否已赋值
                     * @return DependType 是否已赋值
                     * 
                     */
                    bool DependTypeHasBeenSet() const;

                    /**
                     * 获取Shared component.
                     * @return Service Shared component.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Shared component.
                     * @param _service Shared component.
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Shared cluster.
                     * @return ClusterId Shared cluster.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Shared cluster.
                     * @param _clusterId Shared cluster.
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
                     * 获取Shared cluster status.
                     * @return ClusterStatus Shared cluster status.
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Shared cluster status.
                     * @param _clusterStatus Shared cluster status.
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                private:

                    /**
                     * Dependency relationship. 0: being depended on by other clusters, 1: depending on other clusters.
                     */
                    int64_t m_dependType;
                    bool m_dependTypeHasBeenSet;

                    /**
                     * Shared component.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Shared cluster.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Shared cluster status.
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_
