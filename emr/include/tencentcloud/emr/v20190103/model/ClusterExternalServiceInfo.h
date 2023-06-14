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
                     * 获取Dependency. `0`: Other clusters depend on the current cluster. `1`: The current cluster depends on other clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DependType Dependency. `0`: Other clusters depend on the current cluster. `1`: The current cluster depends on other clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDependType() const;

                    /**
                     * 设置Dependency. `0`: Other clusters depend on the current cluster. `1`: The current cluster depends on other clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _dependType Dependency. `0`: Other clusters depend on the current cluster. `1`: The current cluster depends on other clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Shared component
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Service Shared component
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Shared component
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _service Shared component
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Sharing cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterId Sharing cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Sharing cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _clusterId Sharing cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Sharing cluster status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterStatus Sharing cluster status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Sharing cluster status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _clusterStatus Sharing cluster status
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Dependency. `0`: Other clusters depend on the current cluster. `1`: The current cluster depends on other clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_dependType;
                    bool m_dependTypeHasBeenSet;

                    /**
                     * Shared component
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Sharing cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Sharing cluster status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_
