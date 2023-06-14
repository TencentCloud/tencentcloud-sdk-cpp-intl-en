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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Asset details
                */
                class ComplianceAssetDetailInfo : public AbstractModel
                {
                public:
                    ComplianceAssetDetailInfo();
                    ~ComplianceAssetDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Customer asset ID
                     * @return CustomerAssetId Customer asset ID
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置Customer asset ID
                     * @param _customerAssetId Customer asset ID
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
                     * 获取Asset type
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
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
                     * 获取Asset name
                     * @return AssetName Asset name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
                     * @param _assetName Asset name
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
                     * 获取Node name of the asset
                     * @return NodeName Node name of the asset
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name of the asset
                     * @param _nodeName Node name of the asset
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
                     * 获取Server name of the asset
                     * @return HostName Server name of the asset
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name of the asset
                     * @param _hostName Server name of the asset
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP of the asset
                     * @return HostIP Server IP of the asset
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP of the asset
                     * @param _hostIP Server IP of the asset
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
                     * 获取Check status
`CHECK_INIT`: To be checked.
`CHECK_RUNNING`: Checking.
`CHECK_FINISHED`: Checked.
`CHECK_FAILED`: Check failed.
                     * @return CheckStatus Check status
`CHECK_INIT`: To be checked.
`CHECK_RUNNING`: Checking.
`CHECK_FINISHED`: Checked.
`CHECK_FAILED`: Check failed.
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置Check status
`CHECK_INIT`: To be checked.
`CHECK_RUNNING`: Checking.
`CHECK_FINISHED`: Checked.
`CHECK_FAILED`: Check failed.
                     * @param _checkStatus Check status
`CHECK_INIT`: To be checked.
`CHECK_RUNNING`: Checking.
`CHECK_FINISHED`: Checked.
`CHECK_FAILED`: Check failed.
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
                     * 获取Number of check items that the asset passed
                     * @return PassedPolicyItemCount Number of check items that the asset passed
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置Number of check items that the asset passed
                     * @param _passedPolicyItemCount Number of check items that the asset passed
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
                     * 获取Number of check items that the asset failed
                     * @return FailedPolicyItemCount Number of check items that the asset failed
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置Number of check items that the asset failed
                     * @param _failedPolicyItemCount Number of check items that the asset failed
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
                     * 获取Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastCheckTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastCheckTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Check result. Valid values:
`RESULT_FAILED`: Failed.
`RESULT_PASSED`: Passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckResult Check result. Valid values:
`RESULT_FAILED`: Failed.
`RESULT_PASSED`: Passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置Check result. Valid values:
`RESULT_FAILED`: Failed.
`RESULT_PASSED`: Passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkResult Check result. Valid values:
`RESULT_FAILED`: Failed.
`RESULT_PASSED`: Passed.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Asset status
                     * @return AssetStatus Asset status
                     * 
                     */
                    std::string GetAssetStatus() const;

                    /**
                     * 设置Asset status
                     * @param _assetStatus Asset status
                     * 
                     */
                    void SetAssetStatus(const std::string& _assetStatus);

                    /**
                     * 判断参数 AssetStatus 是否已赋值
                     * @return AssetStatus 是否已赋值
                     * 
                     */
                    bool AssetStatusHasBeenSet() const;

                    /**
                     * 获取Asset creation time
`ASSET_NORMAL`: Running.
`ASSET_PAUSED`: Suspended.
`ASSET_STOPPED`: Stopped.
`ASSET_ABNORMAL`: Abnormal.
                     * @return AssetCreateTime Asset creation time
`ASSET_NORMAL`: Running.
`ASSET_PAUSED`: Suspended.
`ASSET_STOPPED`: Stopped.
`ASSET_ABNORMAL`: Abnormal.
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置Asset creation time
`ASSET_NORMAL`: Running.
`ASSET_PAUSED`: Suspended.
`ASSET_STOPPED`: Stopped.
`ASSET_ABNORMAL`: Abnormal.
                     * @param _assetCreateTime Asset creation time
`ASSET_NORMAL`: Running.
`ASSET_PAUSED`: Suspended.
`ASSET_STOPPED`: Stopped.
`ASSET_ABNORMAL`: Abnormal.
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                private:

                    /**
                     * Customer asset ID
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Node name of the asset
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Server name of the asset
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP of the asset
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Check status
`CHECK_INIT`: To be checked.
`CHECK_RUNNING`: Checking.
`CHECK_FINISHED`: Checked.
`CHECK_FAILED`: Check failed.
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Number of check items that the asset passed
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * Number of check items that the asset failed
                     */
                    uint64_t m_failedPolicyItemCount;
                    bool m_failedPolicyItemCountHasBeenSet;

                    /**
                     * Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * Check result. Valid values:
`RESULT_FAILED`: Failed.
`RESULT_PASSED`: Passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * Asset status
                     */
                    std::string m_assetStatus;
                    bool m_assetStatusHasBeenSet;

                    /**
                     * Asset creation time
`ASSET_NORMAL`: Running.
`ASSET_PAUSED`: Suspended.
`ASSET_STOPPED`: Stopped.
`ASSET_ABNORMAL`: Abnormal.
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETDETAILINFO_H_
