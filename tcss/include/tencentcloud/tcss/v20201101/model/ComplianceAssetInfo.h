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
                     * 获取This field is the image tag when the asset is an image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageTag This field is the image tag when the asset is an image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置This field is the image tag when the asset is an image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageTag This field is the image tag when the asset is an image.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassedPolicyItemCount Number of check items that the asset passed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置Number of check items that the asset passed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passedPolicyItemCount Number of check items that the asset passed
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailedPolicyItemCount Number of check items that the asset failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置Number of check items that the asset failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failedPolicyItemCount Number of check items that the asset failed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceId Node instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Node instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _instanceId Node instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * This field is the image tag when the asset is an image.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Server IP of the asset
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Node name of the asset
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * Number of check items that the asset failed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Node instance ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_
