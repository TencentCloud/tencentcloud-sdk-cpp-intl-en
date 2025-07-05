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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLUSTERINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Cluster information entity
                */
                class ClusterInfo : public AbstractModel
                {
                public:
                    ClusterInfo();
                    ~ClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
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
                     * 获取The cluster’s maximum disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return MaxDiskSize The cluster’s maximum disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置The cluster’s maximum disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _maxDiskSize The cluster’s maximum disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取The cluster’s maximum bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return MaxBandWidth The cluster’s maximum bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置The cluster’s maximum bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _maxBandWidth The cluster’s maximum bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取The cluster’s available disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return AvailableDiskSize The cluster’s available disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAvailableDiskSize() const;

                    /**
                     * 设置The cluster’s available disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _availableDiskSize The cluster’s available disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableDiskSize(const int64_t& _availableDiskSize);

                    /**
                     * 判断参数 AvailableDiskSize 是否已赋值
                     * @return AvailableDiskSize 是否已赋值
                     * 
                     */
                    bool AvailableDiskSizeHasBeenSet() const;

                    /**
                     * 获取The cluster’s available bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return AvailableBandWidth The cluster’s available bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAvailableBandWidth() const;

                    /**
                     * 设置The cluster’s available bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _availableBandWidth The cluster’s available bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableBandWidth(const int64_t& _availableBandWidth);

                    /**
                     * 判断参数 AvailableBandWidth 是否已赋值
                     * @return AvailableBandWidth 是否已赋值
                     * 
                     */
                    bool AvailableBandWidthHasBeenSet() const;

                    /**
                     * 获取The AZ where the cluster resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ZoneId The AZ where the cluster resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置The AZ where the cluster resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _zoneId The AZ where the cluster resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The AZ where the cluster nodes reside. If the cluster is a multi-AZ cluster, this field means multiple AZs where the cluster nodes reside.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ZoneIds The AZ where the cluster nodes reside. If the cluster is a multi-AZ cluster, this field means multiple AZs where the cluster nodes reside.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置The AZ where the cluster nodes reside. If the cluster is a multi-AZ cluster, this field means multiple AZs where the cluster nodes reside.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _zoneIds The AZ where the cluster nodes reside. If the cluster is a multi-AZ cluster, this field means multiple AZs where the cluster nodes reside.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * The cluster’s maximum disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * The cluster’s maximum bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * The cluster’s available disk capacity in GB
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_availableDiskSize;
                    bool m_availableDiskSizeHasBeenSet;

                    /**
                     * The cluster’s available bandwidth in MB/s
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_availableBandWidth;
                    bool m_availableBandWidthHasBeenSet;

                    /**
                     * The AZ where the cluster resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The AZ where the cluster nodes reside. If the cluster is a multi-AZ cluster, this field means multiple AZs where the cluster nodes reside.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLUSTERINFO_H_
