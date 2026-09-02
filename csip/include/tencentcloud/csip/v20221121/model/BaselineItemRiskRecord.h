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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEMRISKRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEMRISKRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Risk result history of a detection item on an asset.
                */
                class BaselineItemRiskRecord : public AbstractModel
                {
                public:
                    BaselineItemRiskRecord();
                    ~BaselineItemRiskRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk record primary key ID.</p>
                     * @return ID <p>Risk record primary key ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Risk record primary key ID.</p>
                     * @param _iD <p>Risk record primary key ID.</p>
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
                     * 获取<p>Risk-hit host asset information. If no data is available, this field is null.</p>
                     * @return HostInfo <p>Risk-hit host asset information. If no data is available, this field is null.</p>
                     * 
                     */
                    BaselineHostAsset GetHostInfo() const;

                    /**
                     * 设置<p>Risk-hit host asset information. If no data is available, this field is null.</p>
                     * @param _hostInfo <p>Risk-hit host asset information. If no data is available, this field is null.</p>
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
                     * 获取<p>Asset type of the hit asset. Value:</p><ul><li>HOST: host</li><li>CLUSTER: cluster</li><li>POD: Pod</li><li>CONTAINER: container</li><li>IMAGE: mirror</li></ul>
                     * @return AssetType <p>Asset type of the hit asset. Value:</p><ul><li>HOST: host</li><li>CLUSTER: cluster</li><li>POD: Pod</li><li>CONTAINER: container</li><li>IMAGE: mirror</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type of the hit asset. Value:</p><ul><li>HOST: host</li><li>CLUSTER: cluster</li><li>POD: Pod</li><li>CONTAINER: container</li><li>IMAGE: mirror</li></ul>
                     * @param _assetType <p>Asset type of the hit asset. Value:</p><ul><li>HOST: host</li><li>CLUSTER: cluster</li><li>POD: Pod</li><li>CONTAINER: container</li><li>IMAGE: mirror</li></ul>
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
                     * 获取<p>Risk detection result status. Parameter values:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li><li>IGNORED: ignored</li></ul>
                     * @return ResultStatus <p>Risk detection result status. Parameter values:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li><li>IGNORED: ignored</li></ul>
                     * 
                     */
                    std::string GetResultStatus() const;

                    /**
                     * 设置<p>Risk detection result status. Parameter values:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li><li>IGNORED: ignored</li></ul>
                     * @param _resultStatus <p>Risk detection result status. Parameter values:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li><li>IGNORED: ignored</li></ul>
                     * 
                     */
                    void SetResultStatus(const std::string& _resultStatus);

                    /**
                     * 判断参数 ResultStatus 是否已赋值
                     * @return ResultStatus 是否已赋值
                     * 
                     */
                    bool ResultStatusHasBeenSet() const;

                    /**
                     * 获取<p>Latest check time.</p>
                     * @return LatestCheckTime <p>Latest check time.</p>
                     * 
                     */
                    std::string GetLatestCheckTime() const;

                    /**
                     * 设置<p>Latest check time.</p>
                     * @param _latestCheckTime <p>Latest check time.</p>
                     * 
                     */
                    void SetLatestCheckTime(const std::string& _latestCheckTime);

                    /**
                     * 判断参数 LatestCheckTime 是否已赋值
                     * @return LatestCheckTime 是否已赋值
                     * 
                     */
                    bool LatestCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>Baseline detection item ID.</p>
                     * @return ItemID <p>Baseline detection item ID.</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>Baseline detection item ID.</p>
                     * @param _itemID <p>Baseline detection item ID.</p>
                     * 
                     */
                    void SetItemID(const uint64_t& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取<p>Risk event ID, used for uniquely identifying this risk record.</p>
                     * @return RiskID <p>Risk event ID, used for uniquely identifying this risk record.</p>
                     * 
                     */
                    std::string GetRiskID() const;

                    /**
                     * 设置<p>Risk event ID, used for uniquely identifying this risk record.</p>
                     * @param _riskID <p>Risk event ID, used for uniquely identifying this risk record.</p>
                     * 
                     */
                    void SetRiskID(const std::string& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取<p>Global JobID of this scan.</p>
                     * @return JobID <p>Global JobID of this scan.</p>
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置<p>Global JobID of this scan.</p>
                     * @param _jobID <p>Global JobID of this scan.</p>
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                private:

                    /**
                     * <p>Risk record primary key ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Risk-hit host asset information. If no data is available, this field is null.</p>
                     */
                    BaselineHostAsset m_hostInfo;
                    bool m_hostInfoHasBeenSet;

                    /**
                     * <p>Cluster asset information. The value is null if no data is available.</p>
                     */
                    BaselineClusterAsset m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>Asset type of the hit asset. Value:</p><ul><li>HOST: host</li><li>CLUSTER: cluster</li><li>POD: Pod</li><li>CONTAINER: container</li><li>IMAGE: mirror</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Risk detection result status. Parameter values:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li><li>IGNORED: ignored</li></ul>
                     */
                    std::string m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                    /**
                     * <p>Latest check time.</p>
                     */
                    std::string m_latestCheckTime;
                    bool m_latestCheckTimeHasBeenSet;

                    /**
                     * <p>Baseline detection item ID.</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * <p>Risk event ID, used for uniquely identifying this risk record.</p>
                     */
                    std::string m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * <p>Global JobID of this scan.</p>
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEMRISKRECORD_H_
