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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CLUSTERVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CLUSTERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Cluster view data
                */
                class ClusterView : public AbstractModel
                {
                public:
                    ClusterView();
                    ~ClusterView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster health status
                     * @return Health Cluster health status
                     */
                    double GetHealth() const;

                    /**
                     * 设置Cluster health status
                     * @param Health Cluster health status
                     */
                    void SetHealth(const double& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取Whether the cluster is visible
                     * @return Visible Whether the cluster is visible
                     */
                    double GetVisible() const;

                    /**
                     * 设置Whether the cluster is visible
                     * @param Visible Whether the cluster is visible
                     */
                    void SetVisible(const double& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     */
                    bool VisibleHasBeenSet() const;

                    /**
                     * 获取Whether the cluster encounters circuit breaking
                     * @return Break Whether the cluster encounters circuit breaking
                     */
                    double GetBreak() const;

                    /**
                     * 设置Whether the cluster encounters circuit breaking
                     * @param Break Whether the cluster encounters circuit breaking
                     */
                    void SetBreak(const double& _break);

                    /**
                     * 判断参数 Break 是否已赋值
                     * @return Break 是否已赋值
                     */
                    bool BreakHasBeenSet() const;

                    /**
                     * 获取Average disk usage
                     * @return AvgDiskUsage Average disk usage
                     */
                    double GetAvgDiskUsage() const;

                    /**
                     * 设置Average disk usage
                     * @param AvgDiskUsage Average disk usage
                     */
                    void SetAvgDiskUsage(const double& _avgDiskUsage);

                    /**
                     * 判断参数 AvgDiskUsage 是否已赋值
                     * @return AvgDiskUsage 是否已赋值
                     */
                    bool AvgDiskUsageHasBeenSet() const;

                    /**
                     * 获取Average memory usage
                     * @return AvgMemUsage Average memory usage
                     */
                    double GetAvgMemUsage() const;

                    /**
                     * 设置Average memory usage
                     * @param AvgMemUsage Average memory usage
                     */
                    void SetAvgMemUsage(const double& _avgMemUsage);

                    /**
                     * 判断参数 AvgMemUsage 是否已赋值
                     * @return AvgMemUsage 是否已赋值
                     */
                    bool AvgMemUsageHasBeenSet() const;

                    /**
                     * 获取Average CPU usage
                     * @return AvgCpuUsage Average CPU usage
                     */
                    double GetAvgCpuUsage() const;

                    /**
                     * 设置Average CPU usage
                     * @param AvgCpuUsage Average CPU usage
                     */
                    void SetAvgCpuUsage(const double& _avgCpuUsage);

                    /**
                     * 判断参数 AvgCpuUsage 是否已赋值
                     * @return AvgCpuUsage 是否已赋值
                     */
                    bool AvgCpuUsageHasBeenSet() const;

                    /**
                     * 获取Total disk size of the cluster
                     * @return TotalDiskSize Total disk size of the cluster
                     */
                    uint64_t GetTotalDiskSize() const;

                    /**
                     * 设置Total disk size of the cluster
                     * @param TotalDiskSize Total disk size of the cluster
                     */
                    void SetTotalDiskSize(const uint64_t& _totalDiskSize);

                    /**
                     * 判断参数 TotalDiskSize 是否已赋值
                     * @return TotalDiskSize 是否已赋值
                     */
                    bool TotalDiskSizeHasBeenSet() const;

                    /**
                     * 获取Types of nodes to receive client requests
                     * @return TargetNodeTypes Types of nodes to receive client requests
                     */
                    std::vector<std::string> GetTargetNodeTypes() const;

                    /**
                     * 设置Types of nodes to receive client requests
                     * @param TargetNodeTypes Types of nodes to receive client requests
                     */
                    void SetTargetNodeTypes(const std::vector<std::string>& _targetNodeTypes);

                    /**
                     * 判断参数 TargetNodeTypes 是否已赋值
                     * @return TargetNodeTypes 是否已赋值
                     */
                    bool TargetNodeTypesHasBeenSet() const;

                    /**
                     * 获取Number of online nodes
                     * @return NodeNum Number of online nodes
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of online nodes
                     * @param NodeNum Number of online nodes
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Total number of nodes
                     * @return TotalNodeNum Total number of nodes
                     */
                    int64_t GetTotalNodeNum() const;

                    /**
                     * 设置Total number of nodes
                     * @param TotalNodeNum Total number of nodes
                     */
                    void SetTotalNodeNum(const int64_t& _totalNodeNum);

                    /**
                     * 判断参数 TotalNodeNum 是否已赋值
                     * @return TotalNodeNum 是否已赋值
                     */
                    bool TotalNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of data nodes
                     * @return DataNodeNum Number of data nodes
                     */
                    int64_t GetDataNodeNum() const;

                    /**
                     * 设置Number of data nodes
                     * @param DataNodeNum Number of data nodes
                     */
                    void SetDataNodeNum(const int64_t& _dataNodeNum);

                    /**
                     * 判断参数 DataNodeNum 是否已赋值
                     * @return DataNodeNum 是否已赋值
                     */
                    bool DataNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of indices
                     * @return IndexNum Number of indices
                     */
                    int64_t GetIndexNum() const;

                    /**
                     * 设置Number of indices
                     * @param IndexNum Number of indices
                     */
                    void SetIndexNum(const int64_t& _indexNum);

                    /**
                     * 判断参数 IndexNum 是否已赋值
                     * @return IndexNum 是否已赋值
                     */
                    bool IndexNumHasBeenSet() const;

                    /**
                     * 获取Number of documents
                     * @return DocNum Number of documents
                     */
                    int64_t GetDocNum() const;

                    /**
                     * 设置Number of documents
                     * @param DocNum Number of documents
                     */
                    void SetDocNum(const int64_t& _docNum);

                    /**
                     * 判断参数 DocNum 是否已赋值
                     * @return DocNum 是否已赋值
                     */
                    bool DocNumHasBeenSet() const;

                    /**
                     * 获取Used disk size (in bytes)
                     * @return DiskUsedInBytes Used disk size (in bytes)
                     */
                    int64_t GetDiskUsedInBytes() const;

                    /**
                     * 设置Used disk size (in bytes)
                     * @param DiskUsedInBytes Used disk size (in bytes)
                     */
                    void SetDiskUsedInBytes(const int64_t& _diskUsedInBytes);

                    /**
                     * 判断参数 DiskUsedInBytes 是否已赋值
                     * @return DiskUsedInBytes 是否已赋值
                     */
                    bool DiskUsedInBytesHasBeenSet() const;

                    /**
                     * 获取Number of shards
                     * @return ShardNum Number of shards
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置Number of shards
                     * @param ShardNum Number of shards
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取Number of primary shards
                     * @return PrimaryShardNum Number of primary shards
                     */
                    int64_t GetPrimaryShardNum() const;

                    /**
                     * 设置Number of primary shards
                     * @param PrimaryShardNum Number of primary shards
                     */
                    void SetPrimaryShardNum(const int64_t& _primaryShardNum);

                    /**
                     * 判断参数 PrimaryShardNum 是否已赋值
                     * @return PrimaryShardNum 是否已赋值
                     */
                    bool PrimaryShardNumHasBeenSet() const;

                    /**
                     * 获取Number of relocating shards
                     * @return RelocatingShardNum Number of relocating shards
                     */
                    int64_t GetRelocatingShardNum() const;

                    /**
                     * 设置Number of relocating shards
                     * @param RelocatingShardNum Number of relocating shards
                     */
                    void SetRelocatingShardNum(const int64_t& _relocatingShardNum);

                    /**
                     * 判断参数 RelocatingShardNum 是否已赋值
                     * @return RelocatingShardNum 是否已赋值
                     */
                    bool RelocatingShardNumHasBeenSet() const;

                    /**
                     * 获取Number of initializing shards
                     * @return InitializingShardNum Number of initializing shards
                     */
                    int64_t GetInitializingShardNum() const;

                    /**
                     * 设置Number of initializing shards
                     * @param InitializingShardNum Number of initializing shards
                     */
                    void SetInitializingShardNum(const int64_t& _initializingShardNum);

                    /**
                     * 判断参数 InitializingShardNum 是否已赋值
                     * @return InitializingShardNum 是否已赋值
                     */
                    bool InitializingShardNumHasBeenSet() const;

                    /**
                     * 获取Number of unassigned shards
                     * @return UnassignedShardNum Number of unassigned shards
                     */
                    int64_t GetUnassignedShardNum() const;

                    /**
                     * 设置Number of unassigned shards
                     * @param UnassignedShardNum Number of unassigned shards
                     */
                    void SetUnassignedShardNum(const int64_t& _unassignedShardNum);

                    /**
                     * 判断参数 UnassignedShardNum 是否已赋值
                     * @return UnassignedShardNum 是否已赋值
                     */
                    bool UnassignedShardNumHasBeenSet() const;

                    /**
                     * 获取Total COS storage of an enterprise cluster, in GB
                     * @return TotalCosStorage Total COS storage of an enterprise cluster, in GB
                     */
                    int64_t GetTotalCosStorage() const;

                    /**
                     * 设置Total COS storage of an enterprise cluster, in GB
                     * @param TotalCosStorage Total COS storage of an enterprise cluster, in GB
                     */
                    void SetTotalCosStorage(const int64_t& _totalCosStorage);

                    /**
                     * 判断参数 TotalCosStorage 是否已赋值
                     * @return TotalCosStorage 是否已赋值
                     */
                    bool TotalCosStorageHasBeenSet() const;

                    /**
                     * 获取Name of the COS bucket that stores searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SearchableSnapshotCosBucket Name of the COS bucket that stores searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSearchableSnapshotCosBucket() const;

                    /**
                     * 设置Name of the COS bucket that stores searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SearchableSnapshotCosBucket Name of the COS bucket that stores searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSearchableSnapshotCosBucket(const std::string& _searchableSnapshotCosBucket);

                    /**
                     * 判断参数 SearchableSnapshotCosBucket 是否已赋值
                     * @return SearchableSnapshotCosBucket 是否已赋值
                     */
                    bool SearchableSnapshotCosBucketHasBeenSet() const;

                    /**
                     * 获取COS app ID of the searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SearchableSnapshotCosAppId COS app ID of the searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSearchableSnapshotCosAppId() const;

                    /**
                     * 设置COS app ID of the searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SearchableSnapshotCosAppId COS app ID of the searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSearchableSnapshotCosAppId(const std::string& _searchableSnapshotCosAppId);

                    /**
                     * 判断参数 SearchableSnapshotCosAppId 是否已赋值
                     * @return SearchableSnapshotCosAppId 是否已赋值
                     */
                    bool SearchableSnapshotCosAppIdHasBeenSet() const;

                private:

                    /**
                     * Cluster health status
                     */
                    double m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * Whether the cluster is visible
                     */
                    double m_visible;
                    bool m_visibleHasBeenSet;

                    /**
                     * Whether the cluster encounters circuit breaking
                     */
                    double m_break;
                    bool m_breakHasBeenSet;

                    /**
                     * Average disk usage
                     */
                    double m_avgDiskUsage;
                    bool m_avgDiskUsageHasBeenSet;

                    /**
                     * Average memory usage
                     */
                    double m_avgMemUsage;
                    bool m_avgMemUsageHasBeenSet;

                    /**
                     * Average CPU usage
                     */
                    double m_avgCpuUsage;
                    bool m_avgCpuUsageHasBeenSet;

                    /**
                     * Total disk size of the cluster
                     */
                    uint64_t m_totalDiskSize;
                    bool m_totalDiskSizeHasBeenSet;

                    /**
                     * Types of nodes to receive client requests
                     */
                    std::vector<std::string> m_targetNodeTypes;
                    bool m_targetNodeTypesHasBeenSet;

                    /**
                     * Number of online nodes
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Total number of nodes
                     */
                    int64_t m_totalNodeNum;
                    bool m_totalNodeNumHasBeenSet;

                    /**
                     * Number of data nodes
                     */
                    int64_t m_dataNodeNum;
                    bool m_dataNodeNumHasBeenSet;

                    /**
                     * Number of indices
                     */
                    int64_t m_indexNum;
                    bool m_indexNumHasBeenSet;

                    /**
                     * Number of documents
                     */
                    int64_t m_docNum;
                    bool m_docNumHasBeenSet;

                    /**
                     * Used disk size (in bytes)
                     */
                    int64_t m_diskUsedInBytes;
                    bool m_diskUsedInBytesHasBeenSet;

                    /**
                     * Number of shards
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * Number of primary shards
                     */
                    int64_t m_primaryShardNum;
                    bool m_primaryShardNumHasBeenSet;

                    /**
                     * Number of relocating shards
                     */
                    int64_t m_relocatingShardNum;
                    bool m_relocatingShardNumHasBeenSet;

                    /**
                     * Number of initializing shards
                     */
                    int64_t m_initializingShardNum;
                    bool m_initializingShardNumHasBeenSet;

                    /**
                     * Number of unassigned shards
                     */
                    int64_t m_unassignedShardNum;
                    bool m_unassignedShardNumHasBeenSet;

                    /**
                     * Total COS storage of an enterprise cluster, in GB
                     */
                    int64_t m_totalCosStorage;
                    bool m_totalCosStorageHasBeenSet;

                    /**
                     * Name of the COS bucket that stores searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_searchableSnapshotCosBucket;
                    bool m_searchableSnapshotCosBucketHasBeenSet;

                    /**
                     * COS app ID of the searchable snapshots of an enterprise cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_searchableSnapshotCosAppId;
                    bool m_searchableSnapshotCosAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CLUSTERVIEW_H_
