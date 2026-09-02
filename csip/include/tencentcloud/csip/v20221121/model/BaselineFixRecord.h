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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEFIXRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEFIXRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>
#include <tencentcloud/csip/v20221121/model/BaselineHostAsset.h>
#include <tencentcloud/csip/v20221121/model/BaselineClusterAsset.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline risk repair history
                */
                class BaselineFixRecord : public AbstractModel
                {
                public:
                    BaselineFixRecord();
                    ~BaselineFixRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Primary key ID of the correction record.</p>
                     * @return ID <p>Primary key ID of the correction record.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Primary key ID of the correction record.</p>
                     * @param _iD <p>Primary key ID of the correction record.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Tenant AppID.</p>
                     * @return AppID <p>Tenant AppID.</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>Tenant AppID.</p>
                     * @param _appID <p>Tenant AppID.</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Basic information of the repaired detection item.</p>
                     * @return ItemInfo <p>Basic information of the repaired detection item.</p>
                     * 
                     */
                    BaselineItem GetItemInfo() const;

                    /**
                     * 设置<p>Basic information of the repaired detection item.</p>
                     * @param _itemInfo <p>Basic information of the repaired detection item.</p>
                     * 
                     */
                    void SetItemInfo(const BaselineItem& _itemInfo);

                    /**
                     * 判断参数 ItemInfo 是否已赋值
                     * @return ItemInfo 是否已赋值
                     * 
                     */
                    bool ItemInfoHasBeenSet() const;

                    /**
                     * 获取<p>Host asset information involved in this fix. null when no data is available.</p>
                     * @return HostInfo <p>Host asset information involved in this fix. null when no data is available.</p>
                     * 
                     */
                    BaselineHostAsset GetHostInfo() const;

                    /**
                     * 设置<p>Host asset information involved in this fix. null when no data is available.</p>
                     * @param _hostInfo <p>Host asset information involved in this fix. null when no data is available.</p>
                     * 
                     */
                    void SetHostInfo(const BaselineHostAsset& _hostInfo);

                    /**
                     * 判断参数 HostInfo 是否已赋值
                     * @return HostInfo 是否已赋值
                     * 
                     */
                    bool HostInfoHasBeenSet() const;

                    /**
                     * 获取<p>Cluster asset information. The value is null if no data is available.</p>
                     * @return ClusterInfo <p>Cluster asset information. The value is null if no data is available.</p>
                     * 
                     */
                    BaselineClusterAsset GetClusterInfo() const;

                    /**
                     * 设置<p>Cluster asset information. The value is null if no data is available.</p>
                     * @param _clusterInfo <p>Cluster asset information. The value is null if no data is available.</p>
                     * 
                     */
                    void SetClusterInfo(const BaselineClusterAsset& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取<p>Asset type: HOST (host), CLUSTER (container cluster).</p>
                     * @return AssetType <p>Asset type: HOST (host), CLUSTER (container cluster).</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type: HOST (host), CLUSTER (container cluster).</p>
                     * @param _assetType <p>Asset type: HOST (host), CLUSTER (container cluster).</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Repair completion time.</p>
                     * @return FixTime <p>Repair completion time.</p>
                     * 
                     */
                    std::string GetFixTime() const;

                    /**
                     * 设置<p>Repair completion time.</p>
                     * @param _fixTime <p>Repair completion time.</p>
                     * 
                     */
                    void SetFixTime(const std::string& _fixTime);

                    /**
                     * 判断参数 FixTime 是否已赋值
                     * @return FixTime 是否已赋值
                     * 
                     */
                    bool FixTimeHasBeenSet() const;

                    /**
                     * 获取<p>The time when the risk was first detected.</p>
                     * @return DiscoveryTime <p>The time when the risk was first detected.</p>
                     * 
                     */
                    std::string GetDiscoveryTime() const;

                    /**
                     * 设置<p>The time when the risk was first detected.</p>
                     * @param _discoveryTime <p>The time when the risk was first detected.</p>
                     * 
                     */
                    void SetDiscoveryTime(const std::string& _discoveryTime);

                    /**
                     * 判断参数 DiscoveryTime 是否已赋值
                     * @return DiscoveryTime 是否已赋值
                     * 
                     */
                    bool DiscoveryTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Primary key ID of the correction record.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Tenant AppID.</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Basic information of the repaired detection item.</p>
                     */
                    BaselineItem m_itemInfo;
                    bool m_itemInfoHasBeenSet;

                    /**
                     * <p>Host asset information involved in this fix. null when no data is available.</p>
                     */
                    BaselineHostAsset m_hostInfo;
                    bool m_hostInfoHasBeenSet;

                    /**
                     * <p>Cluster asset information. The value is null if no data is available.</p>
                     */
                    BaselineClusterAsset m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>Asset type: HOST (host), CLUSTER (container cluster).</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Repair completion time.</p>
                     */
                    std::string m_fixTime;
                    bool m_fixTimeHasBeenSet;

                    /**
                     * <p>The time when the risk was first detected.</p>
                     */
                    std::string m_discoveryTime;
                    bool m_discoveryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEFIXRECORD_H_
