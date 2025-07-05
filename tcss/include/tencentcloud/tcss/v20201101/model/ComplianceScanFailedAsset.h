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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCESCANFAILEDASSET_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCESCANFAILEDASSET_H_

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
                * Information of the asset that failed the check
                */
                class ComplianceScanFailedAsset : public AbstractModel
                {
                public:
                    ComplianceScanFailedAsset();
                    ~ComplianceScanFailedAsset() = default;
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
                     * 获取Cause of the asset check failure
                     * @return FailureReason Cause of the asset check failure
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置Cause of the asset check failure
                     * @param _failureReason Cause of the asset check failure
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取Suggestion for handling the check failure
                     * @return Suggestion Suggestion for handling the check failure
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion for handling the check failure
                     * @param _suggestion Suggestion for handling the check failure
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Check time
                     * @return CheckTime Check time
                     * 
                     */
                    std::string GetCheckTime() const;

                    /**
                     * 设置Check time
                     * @param _checkTime Check time
                     * 
                     */
                    void SetCheckTime(const std::string& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

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
                     * Check status
`CHECK_INIT`: To be checked.
`CHECK_RUNNING`: Checking.
`CHECK_FINISHED`: Checked.
`CHECK_FAILED`: Check failed.
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Cause of the asset check failure
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * Suggestion for handling the check failure
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Check time
                     */
                    std::string m_checkTime;
                    bool m_checkTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCESCANFAILEDASSET_H_
