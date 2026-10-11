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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RAYCLUSTER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RAYCLUSTER_H_

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
                * RayCluster
                */
                class RayCluster : public AbstractModel
                {
                public:
                    RayCluster();
                    ~RayCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>RayCluster cluster name.</p>
                     * @return RayClusterName <p>RayCluster cluster name.</p>
                     * 
                     */
                    std::string GetRayClusterName() const;

                    /**
                     * 设置<p>RayCluster cluster name.</p>
                     * @param _rayClusterName <p>RayCluster cluster name.</p>
                     * 
                     */
                    void SetRayClusterName(const std::string& _rayClusterName);

                    /**
                     * 判断参数 RayClusterName 是否已赋值
                     * @return RayClusterName 是否已赋值
                     * 
                     */
                    bool RayClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>RayCluster cluster ID.</p>
                     * @return RayClusterId <p>RayCluster cluster ID.</p>
                     * 
                     */
                    int64_t GetRayClusterId() const;

                    /**
                     * 设置<p>RayCluster cluster ID.</p>
                     * @param _rayClusterId <p>RayCluster cluster ID.</p>
                     * 
                     */
                    void SetRayClusterId(const int64_t& _rayClusterId);

                    /**
                     * 判断参数 RayClusterId 是否已赋值
                     * @return RayClusterId 是否已赋值
                     * 
                     */
                    bool RayClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of Pods.</p>
                     * @return PodCount <p>Number of Pods.</p>
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置<p>Number of Pods.</p>
                     * @param _podCount <p>Number of Pods.</p>
                     * 
                     */
                    void SetPodCount(const int64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取<p>Cluster creation time.</p>
                     * @return CreateTime <p>Cluster creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Cluster creation time.</p>
                     * @param _createTime <p>Cluster creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of Redis instances.</p>
                     * @return RedisCount <p>Number of Redis instances.</p>
                     * 
                     */
                    int64_t GetRedisCount() const;

                    /**
                     * 设置<p>Number of Redis instances.</p>
                     * @param _redisCount <p>Number of Redis instances.</p>
                     * 
                     */
                    void SetRedisCount(const int64_t& _redisCount);

                    /**
                     * 判断参数 RedisCount 是否已赋值
                     * @return RedisCount 是否已赋值
                     * 
                     */
                    bool RedisCountHasBeenSet() const;

                    /**
                     * 获取<p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     * @return SubmitType <p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     * 
                     */
                    int64_t GetSubmitType() const;

                    /**
                     * 设置<p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     * @param _submitType <p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     * 
                     */
                    void SetSubmitType(const int64_t& _submitType);

                    /**
                     * 判断参数 SubmitType 是否已赋值
                     * @return SubmitType 是否已赋值
                     * 
                     */
                    bool SubmitTypeHasBeenSet() const;

                    /**
                     * 获取<p>Head access address, which is also the dashboard address.</p>
                     * @return DashboardUrl <p>Head access address, which is also the dashboard address.</p>
                     * 
                     */
                    std::string GetDashboardUrl() const;

                    /**
                     * 设置<p>Head access address, which is also the dashboard address.</p>
                     * @param _dashboardUrl <p>Head access address, which is also the dashboard address.</p>
                     * 
                     */
                    void SetDashboardUrl(const std::string& _dashboardUrl);

                    /**
                     * 判断参数 DashboardUrl 是否已赋值
                     * @return DashboardUrl 是否已赋值
                     * 
                     */
                    bool DashboardUrlHasBeenSet() const;

                    /**
                     * 获取<p>Namespace.</p>
                     * @return Namespace <p>Namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Namespace.</p>
                     * @param _namespace <p>Namespace.</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Number of volumes mounted by the RayCluster.</p>
                     * @return StorageCount <p>Number of volumes mounted by the RayCluster.</p>
                     * 
                     */
                    int64_t GetStorageCount() const;

                    /**
                     * 设置<p>Number of volumes mounted by the RayCluster.</p>
                     * @param _storageCount <p>Number of volumes mounted by the RayCluster.</p>
                     * 
                     */
                    void SetStorageCount(const int64_t& _storageCount);

                    /**
                     * 判断参数 StorageCount 是否已赋值
                     * @return StorageCount 是否已赋值
                     * 
                     */
                    bool StorageCountHasBeenSet() const;

                private:

                    /**
                     * <p>RayCluster cluster name.</p>
                     */
                    std::string m_rayClusterName;
                    bool m_rayClusterNameHasBeenSet;

                    /**
                     * <p>RayCluster cluster ID.</p>
                     */
                    int64_t m_rayClusterId;
                    bool m_rayClusterIdHasBeenSet;

                    /**
                     * <p>Number of Pods.</p>
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * <p>Cluster creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Number of Redis instances.</p>
                     */
                    int64_t m_redisCount;
                    bool m_redisCountHasBeenSet;

                    /**
                     * <p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     */
                    int64_t m_submitType;
                    bool m_submitTypeHasBeenSet;

                    /**
                     * <p>Head access address, which is also the dashboard address.</p>
                     */
                    std::string m_dashboardUrl;
                    bool m_dashboardUrlHasBeenSet;

                    /**
                     * <p>Namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Number of volumes mounted by the RayCluster.</p>
                     */
                    int64_t m_storageCount;
                    bool m_storageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RAYCLUSTER_H_
