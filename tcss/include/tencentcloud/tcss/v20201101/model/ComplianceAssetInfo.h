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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageRegistryInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Asset information
                */
                class ComplianceAssetInfo : public AbstractModel
                {
                public:
                    ComplianceAssetInfo();
                    ~ComplianceAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Customer asset ID.</p>
                     * @return CustomerAssetId <p>Customer asset ID.</p>
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置<p>Customer asset ID.</p>
                     * @param _customerAssetId <p>Customer asset ID.</p>
                     * 
                     */
                    void SetCustomerAssetId(const uint64_t& _customerAssetId);

                    /**
                     * 判断参数 CustomerAssetId 是否已赋值
                     * @return CustomerAssetId 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Asset category.</p>
                     * @return AssetType <p>Asset category.</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset category.</p>
                     * @param _assetType <p>Asset category.</p>
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
                     * 获取<p>Asset name.</p>
                     * @return AssetName <p>Asset name.</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>Asset name.</p>
                     * @param _assetName <p>Asset name.</p>
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取<p>When the asset is an image, this field represents the image tag.</p>
                     * @return ImageTag <p>When the asset is an image, this field represents the image tag.</p>
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置<p>When the asset is an image, this field represents the image tag.</p>
                     * @param _imageTag <p>When the asset is an image, this field represents the image tag.</p>
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取<p>The host IP address where the asset is located.</p>
                     * @return HostIP <p>The host IP address where the asset is located.</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置<p>The host IP address where the asset is located.</p>
                     * @param _hostIP <p>The host IP address where the asset is located.</p>
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取<p>Name of the node to which the asset belongs.</p>
                     * @return NodeName <p>Name of the node to which the asset belongs.</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>Name of the node to which the asset belongs.</p>
                     * @param _nodeName <p>Name of the node to which the asset belongs.</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>Check status.</p><p>CHECK_INIT: pending check</p><p>CHECK_RUNNING: checking</p><p>CHECK_FINISHED: check completed</p><p>CHECK_FAILED: check failed</p>
                     * @return CheckStatus <p>Check status.</p><p>CHECK_INIT: pending check</p><p>CHECK_RUNNING: checking</p><p>CHECK_FINISHED: check completed</p><p>CHECK_FAILED: check failed</p>
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置<p>Check status.</p><p>CHECK_INIT: pending check</p><p>CHECK_RUNNING: checking</p><p>CHECK_FINISHED: check completed</p><p>CHECK_FAILED: check failed</p>
                     * @param _checkStatus <p>Check status.</p><p>CHECK_INIT: pending check</p><p>CHECK_RUNNING: checking</p><p>CHECK_FINISHED: check completed</p><p>CHECK_FAILED: check failed</p>
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of check items passed by this type of asset.</p>
                     * @return PassedPolicyItemCount <p>Number of check items passed by this type of asset.</p>
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置<p>Number of check items passed by this type of asset.</p>
                     * @param _passedPolicyItemCount <p>Number of check items passed by this type of asset.</p>
                     * 
                     */
                    void SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount);

                    /**
                     * 判断参数 PassedPolicyItemCount 是否已赋值
                     * @return PassedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool PassedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of check items failed by this type of asset.</p>
                     * @return FailedPolicyItemCount <p>Number of check items failed by this type of asset.</p>
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置<p>Number of check items failed by this type of asset.</p>
                     * @param _failedPolicyItemCount <p>Number of check items failed by this type of asset.</p>
                     * 
                     */
                    void SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount);

                    /**
                     * 判断参数 FailedPolicyItemCount 是否已赋值
                     * @return FailedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Last check time.</p>
                     * @return LastCheckTime <p>Last check time.</p>
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置<p>Last check time.</p>
                     * @param _lastCheckTime <p>Last check time.</p>
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>Check result:<br>RESULT_FAILED: failed<br>RESULT_PASSED: passed</p>
                     * @return CheckResult <p>Check result:<br>RESULT_FAILED: failed<br>RESULT_PASSED: passed</p>
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置<p>Check result:<br>RESULT_FAILED: failed<br>RESULT_PASSED: passed</p>
                     * @param _checkResult <p>Check result:<br>RESULT_FAILED: failed<br>RESULT_PASSED: passed</p>
                     * 
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取<p>Host node instance ID.</p>
                     * @return InstanceId <p>Host node instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Host node instance ID.</p>
                     * @param _instanceId <p>Host node instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Image repository information.</p>
                     * @return ImageRegistryInfo <p>Image repository information.</p>
                     * 
                     */
                    ImageRegistryInfo GetImageRegistryInfo() const;

                    /**
                     * 设置<p>Image repository information.</p>
                     * @param _imageRegistryInfo <p>Image repository information.</p>
                     * 
                     */
                    void SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo);

                    /**
                     * 判断参数 ImageRegistryInfo 是否已赋值
                     * @return ImageRegistryInfo 是否已赋值
                     * 
                     */
                    bool ImageRegistryInfoHasBeenSet() const;

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
                     * 获取<p>Unique asset ID.</p><p>Default value: -</p>
                     * @return AssetUniqueID <p>Unique asset ID.</p><p>Default value: -</p>
                     * 
                     */
                    std::string GetAssetUniqueID() const;

                    /**
                     * 设置<p>Unique asset ID.</p><p>Default value: -</p>
                     * @param _assetUniqueID <p>Unique asset ID.</p><p>Default value: -</p>
                     * 
                     */
                    void SetAssetUniqueID(const std::string& _assetUniqueID);

                    /**
                     * 判断参数 AssetUniqueID 是否已赋值
                     * @return AssetUniqueID 是否已赋值
                     * 
                     */
                    bool AssetUniqueIDHasBeenSet() const;

                private:

                    /**
                     * <p>Customer asset ID.</p>
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * <p>Asset category.</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Asset name.</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>When the asset is an image, this field represents the image tag.</p>
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * <p>The host IP address where the asset is located.</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>Name of the node to which the asset belongs.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>Check status.</p><p>CHECK_INIT: pending check</p><p>CHECK_RUNNING: checking</p><p>CHECK_FINISHED: check completed</p><p>CHECK_FAILED: check failed</p>
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * <p>Number of check items passed by this type of asset.</p>
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * <p>Number of check items failed by this type of asset.</p>
                     */
                    uint64_t m_failedPolicyItemCount;
                    bool m_failedPolicyItemCountHasBeenSet;

                    /**
                     * <p>Last check time.</p>
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * <p>Check result:<br>RESULT_FAILED: failed<br>RESULT_PASSED: passed</p>
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * <p>Host node instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Image repository information.</p>
                     */
                    ImageRegistryInfo m_imageRegistryInfo;
                    bool m_imageRegistryInfoHasBeenSet;

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
                     * <p>Unique asset ID.</p><p>Default value: -</p>
                     */
                    std::string m_assetUniqueID;
                    bool m_assetUniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_
