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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/SubPackageBalance.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token Plan API Key list item
                */
                class TokenPlanApiKeyListItem : public AbstractModel
                {
                public:
                    TokenPlanApiKeyListItem();
                    ~TokenPlanApiKeyListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API Key ID.
                     * @return ApiKeyId API Key ID.
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API Key ID.
                     * @param _apiKeyId API Key ID.
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取API Key secret key value (masking).
                     * @return ApiKey API Key secret key value (masking).
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API Key secret key value (masking).
                     * @param _apiKey API Key secret key value (masking).
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取API Key name.
                     * @return Name API Key name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API Key name.
                     * @param _name API Key name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Bundle ID
                     * @return TeamId Bundle ID
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Bundle ID
                     * @param _teamId Bundle ID
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Account APP ID.
                     * @return AppId Account APP ID.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Account APP ID.
                     * @param _appId Account APP ID.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Main account UIN. Maximum 128 characters.
                     * @return Uin Main account UIN. Maximum 128 characters.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Main account UIN. Maximum 128 characters.
                     * @param _uin Main account UIN. Maximum 128 characters.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取API Key available model list (JSON array string).
                     * @return AllowedModels API Key available model list (JSON array string).
                     * 
                     */
                    std::string GetAllowedModels() const;

                    /**
                     * 设置API Key available model list (JSON array string).
                     * @param _allowedModels API Key available model list (JSON array string).
                     * 
                     */
                    void SetAllowedModels(const std::string& _allowedModels);

                    /**
                     * 判断参数 AllowedModels 是否已赋值
                     * @return AllowedModels 是否已赋值
                     * 
                     */
                    bool AllowedModelsHasBeenSet() const;

                    /**
                     * 获取Whether the API Key is available. Values: enable (enable), disable (disable).
                     * @return Status Whether the API Key is available. Values: enable (enable), disable (disable).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the API Key is available. Values: enable (enable), disable (disable).
                     * @param _status Whether the API Key is available. Values: enable (enable), disable (disable).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Reason for disabling the API Key. Value: NORMAL (normal, default value), QUOTA_EXHAUSTED (API Key quota package exhausted), ABNORMAL (abnormal, requires human intervention)
                     * @return StopReason Reason for disabling the API Key. Value: NORMAL (normal, default value), QUOTA_EXHAUSTED (API Key quota package exhausted), ABNORMAL (abnormal, requires human intervention)
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置Reason for disabling the API Key. Value: NORMAL (normal, default value), QUOTA_EXHAUSTED (API Key quota package exhausted), ABNORMAL (abnormal, requires human intervention)
                     * @param _stopReason Reason for disabling the API Key. Value: NORMAL (normal, default value), QUOTA_EXHAUSTED (API Key quota package exhausted), ABNORMAL (abnormal, requires human intervention)
                     * 
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取User-side switch. Valid values: enable, disable.
                     * @return UseStatus User-side switch. Valid values: enable, disable.
                     * 
                     */
                    std::string GetUseStatus() const;

                    /**
                     * 设置User-side switch. Valid values: enable, disable.
                     * @param _useStatus User-side switch. Valid values: enable, disable.
                     * 
                     */
                    void SetUseStatus(const std::string& _useStatus);

                    /**
                     * 判断参数 UseStatus 是否已赋值
                     * @return UseStatus 是否已赋值
                     * 
                     */
                    bool UseStatusHasBeenSet() const;

                    /**
                     * 获取Key version.
                     * @return KeyVersion Key version.
                     * 
                     */
                    int64_t GetKeyVersion() const;

                    /**
                     * 设置Key version.
                     * @param _keyVersion Key version.
                     * 
                     */
                    void SetKeyVersion(const int64_t& _keyVersion);

                    /**
                     * 判断参数 KeyVersion 是否已赋值
                     * @return KeyVersion 是否已赋值
                     * 
                     */
                    bool KeyVersionHasBeenSet() const;

                    /**
                     * 获取Last reset time (ISO 8601).
                     * @return LastRotatedAt Last reset time (ISO 8601).
                     * 
                     */
                    std::string GetLastRotatedAt() const;

                    /**
                     * 设置Last reset time (ISO 8601).
                     * @param _lastRotatedAt Last reset time (ISO 8601).
                     * 
                     */
                    void SetLastRotatedAt(const std::string& _lastRotatedAt);

                    /**
                     * 判断参数 LastRotatedAt 是否已赋值
                     * @return LastRotatedAt 是否已赋值
                     * 
                     */
                    bool LastRotatedAtHasBeenSet() const;

                    /**
                     * 获取Creator. If it is created by a sub-account, this value is the sub-account UIN.
                     * @return Creator Creator. If it is created by a sub-account, this value is the sub-account UIN.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator. If it is created by a sub-account, this value is the sub-account UIN.
                     * @param _creator Creator. If it is created by a sub-account, this value is the sub-account UIN.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedAt Creation time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.
                     * @param _createdAt Creation time.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
                     * @param _updatedAt Update time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取API Key limit usage information
                     * @return Balance API Key limit usage information
                     * 
                     */
                    SubPackageBalance GetBalance() const;

                    /**
                     * 设置API Key limit usage information
                     * @param _balance API Key limit usage information
                     * 
                     */
                    void SetBalance(const SubPackageBalance& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package).
                     * @return ProductType Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package).
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package).
                     * @param _productType Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package).
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * API Key ID.
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * API Key secret key value (masking).
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * API Key name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bundle ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Account APP ID.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Main account UIN. Maximum 128 characters.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * API Key available model list (JSON array string).
                     */
                    std::string m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * Whether the API Key is available. Values: enable (enable), disable (disable).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Reason for disabling the API Key. Value: NORMAL (normal, default value), QUOTA_EXHAUSTED (API Key quota package exhausted), ABNORMAL (abnormal, requires human intervention)
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * User-side switch. Valid values: enable, disable.
                     */
                    std::string m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * Key version.
                     */
                    int64_t m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                    /**
                     * Last reset time (ISO 8601).
                     */
                    std::string m_lastRotatedAt;
                    bool m_lastRotatedAtHasBeenSet;

                    /**
                     * Creator. If it is created by a sub-account, this value is the sub-account UIN.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * API Key limit usage information
                     */
                    SubPackageBalance m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package).
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_
