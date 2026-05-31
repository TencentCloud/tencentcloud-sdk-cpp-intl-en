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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTBACKUPCLUSTERINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTBACKUPCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Cluster information.
                */
                class DescribeVaultBackupClusterInfo : public AbstractModel
                {
                public:
                    DescribeVaultBackupClusterInfo();
                    ~DescribeVaultBackupClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster status
                     * @return ClusterStatus Cluster status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Cluster status
                     * @param _clusterStatus Cluster status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取cluster region
                     * @return ClusterRegion cluster region
                     * 
                     */
                    std::string GetClusterRegion() const;

                    /**
                     * 设置cluster region
                     * @param _clusterRegion cluster region
                     * 
                     */
                    void SetClusterRegion(const std::string& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     * 
                     */
                    bool ClusterRegionHasBeenSet() const;

                    /**
                     * 获取AZ of the cluster
                     * @return ClusterZone AZ of the cluster
                     * 
                     */
                    std::string GetClusterZone() const;

                    /**
                     * 设置AZ of the cluster
                     * @param _clusterZone AZ of the cluster
                     * 
                     */
                    void SetClusterZone(const std::string& _clusterZone);

                    /**
                     * 判断参数 ClusterZone 是否已赋值
                     * @return ClusterZone 是否已赋值
                     * 
                     */
                    bool ClusterZoneHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * cluster region
                     */
                    std::string m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                    /**
                     * AZ of the cluster
                     */
                    std::string m_clusterZone;
                    bool m_clusterZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTBACKUPCLUSTERINFO_H_
