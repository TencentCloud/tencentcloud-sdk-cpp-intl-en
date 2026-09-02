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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECLUSTERASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECLUSTERASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline cluster asset.
                */
                class BaselineClusterAsset : public AbstractModel
                {
                public:
                    BaselineClusterAsset();
                    ~BaselineClusterAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterID <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterID <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * 获取<p>Cluster type.</p>
                     * @return ClusterType <p>Cluster type.</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>Cluster type.</p>
                     * @param _clusterType <p>Cluster type.</p>
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
                     * 获取<p>Total nodes in the cluster.</p>
                     * @return NodeCount <p>Total nodes in the cluster.</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>Total nodes in the cluster.</p>
                     * @param _nodeCount <p>Total nodes in the cluster.</p>
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of online nodes in the cluster.</p>
                     * @return OnlineNodeCount <p>Number of online nodes in the cluster.</p>
                     * 
                     */
                    uint64_t GetOnlineNodeCount() const;

                    /**
                     * 设置<p>Number of online nodes in the cluster.</p>
                     * @param _onlineNodeCount <p>Number of online nodes in the cluster.</p>
                     * 
                     */
                    void SetOnlineNodeCount(const uint64_t& _onlineNodeCount);

                    /**
                     * 判断参数 OnlineNodeCount 是否已赋值
                     * @return OnlineNodeCount 是否已赋值
                     * 
                     */
                    bool OnlineNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Appid of the tenant associated with the cluster.</p>
                     * @return Appid <p>Appid of the tenant associated with the cluster.</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>Appid of the tenant associated with the cluster.</p>
                     * @param _appid <p>Appid of the tenant associated with the cluster.</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>Cluster sub-asset name (Pod name/Node name/Container name/Namespace name; cluster name for CLUSTER type).</p>
                     * @return AssetName <p>Cluster sub-asset name (Pod name/Node name/Container name/Namespace name; cluster name for CLUSTER type).</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>Cluster sub-asset name (Pod name/Node name/Container name/Namespace name; cluster name for CLUSTER type).</p>
                     * @param _assetName <p>Cluster sub-asset name (Pod name/Node name/Container name/Namespace name; cluster name for CLUSTER type).</p>
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster type.</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Total nodes in the cluster.</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Number of online nodes in the cluster.</p>
                     */
                    uint64_t m_onlineNodeCount;
                    bool m_onlineNodeCountHasBeenSet;

                    /**
                     * <p>Appid of the tenant associated with the cluster.</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>Cluster sub-asset name (Pod name/Node name/Container name/Namespace name; cluster name for CLUSTER type).</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECLUSTERASSET_H_
