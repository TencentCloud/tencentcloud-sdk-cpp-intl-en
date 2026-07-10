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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_APIKEYDETAIL_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_APIKEYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/BindingItem.h>
#include <tencentcloud/tokenhub/v20260322/model/QuotaInfo.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Details of the specified API key
                */
                class ApiKeyDetail : public AbstractModel
                {
                public:
                    ApiKeyDetail();
                    ~ApiKeyDetail() = default;
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
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取API key value. The API response contains the masking value.
                     * @return ApiKey API key value. The API response contains the masking value.
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API key value. The API response contains the masking value.
                     * @param _apiKey API key value. The API response contains the masking value.
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Platform type. Currently supported values: maas.
                     * @return Platform Platform type. Currently supported values: maas.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Platform type. Currently supported values: maas.
                     * @param _platform Platform type. Currently supported values: maas.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Root account.
                     * @return Uin Root account.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Root account.
                     * @param _uin Root account.
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
                     * 获取Sub-account.
                     * @return SubUin Sub-account.
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Sub-account.
                     * @param _subUin Sub-account.
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: enable, disable.
                     * @return Status Status. Valid values: enable, disable.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Valid values: enable, disable.
                     * @param _status Status. Valid values: enable, disable.
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
                     * 获取Binding type. Value: all (all models and services), model_all_endpoint_custom (all models + custom service), model_custom_endpoint_all (custom model + all services), model_custom_endpoint_custom (custom model + custom service).
                     * @return BindType Binding type. Value: all (all models and services), model_all_endpoint_custom (all models + custom service), model_custom_endpoint_all (custom model + all services), model_custom_endpoint_custom (custom model + custom service).
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置Binding type. Value: all (all models and services), model_all_endpoint_custom (all models + custom service), model_custom_endpoint_all (custom model + all services), model_custom_endpoint_custom (custom model + custom service).
                     * @param _bindType Binding type. Value: all (all models and services), model_all_endpoint_custom (all models + custom service), model_custom_endpoint_all (custom model + all services), model_custom_endpoint_custom (custom model + custom service).
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取Creation time. Format: YYYY-MM-DD HH:mm:ss.
                     * @return CreateTime Creation time. Format: YYYY-MM-DD HH:mm:ss.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Format: YYYY-MM-DD HH:mm:ss.
                     * @param _createTime Creation time. Format: YYYY-MM-DD HH:mm:ss.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last update time. Format: YYYY-MM-DD HH:mm:ss.
                     * @return UpdateTime Last update time. Format: YYYY-MM-DD HH:mm:ss.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time. Format: YYYY-MM-DD HH:mm:ss.
                     * @param _updateTime Last update time. Format: YYYY-MM-DD HH:mm:ss.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取App ID.
                     * @return AppId App ID.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置App ID.
                     * @param _appId App ID.
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
                     * 获取Whether it is editable. true means editable, false means non-editable.
                     * @return Editable Whether it is editable. true means editable, false means non-editable.
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置Whether it is editable. true means editable, false means non-editable.
                     * @param _editable Whether it is editable. true means editable, false means non-editable.
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取List of bound resources, case-sensitive for endpoint and model kind.
                     * @return BindingItems List of bound resources, case-sensitive for endpoint and model kind.
                     * 
                     */
                    std::vector<BindingItem> GetBindingItems() const;

                    /**
                     * 设置List of bound resources, case-sensitive for endpoint and model kind.
                     * @param _bindingItems List of bound resources, case-sensitive for endpoint and model kind.
                     * 
                     */
                    void SetBindingItems(const std::vector<BindingItem>& _bindingItems);

                    /**
                     * 判断参数 BindingItems 是否已赋值
                     * @return BindingItems 是否已赋值
                     * 
                     */
                    bool BindingItemsHasBeenSet() const;

                    /**
                     * 获取IP allowlist. Supports IPv4 and CIDR format. Empty array indicates no restriction.
                     * @return IpWhitelist IP allowlist. Supports IPv4 and CIDR format. Empty array indicates no restriction.
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置IP allowlist. Supports IPv4 and CIDR format. Empty array indicates no restriction.
                     * @param _ipWhitelist IP allowlist. Supports IPv4 and CIDR format. Empty array indicates no restriction.
                     * 
                     */
                    void SetIpWhitelist(const std::vector<std::string>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                    /**
                     * 获取This field is empty when Platform is maas.
                     * @return Creator This field is empty when Platform is maas.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置This field is empty when Platform is maas.
                     * @param _creator This field is empty when Platform is maas.
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
                     * 获取Multi-dimensional list of Token quota information. This field is not returned when unconfigured.
                     * @return QuotaSet Multi-dimensional list of Token quota information. This field is not returned when unconfigured.
                     * 
                     */
                    std::vector<QuotaInfo> GetQuotaSet() const;

                    /**
                     * 设置Multi-dimensional list of Token quota information. This field is not returned when unconfigured.
                     * @param _quotaSet Multi-dimensional list of Token quota information. This field is not returned when unconfigured.
                     * 
                     */
                    void SetQuotaSet(const std::vector<QuotaInfo>& _quotaSet);

                    /**
                     * 判断参数 QuotaSet 是否已赋值
                     * @return QuotaSet 是否已赋值
                     * 
                     */
                    bool QuotaSetHasBeenSet() const;

                    /**
                     * 获取Token quota status. An empty string means no configuration. active means configured with current availability. inactive means configured but quota exhausted.
                     * @return QuotaStatus Token quota status. An empty string means no configuration. active means configured with current availability. inactive means configured but quota exhausted.
                     * 
                     */
                    std::string GetQuotaStatus() const;

                    /**
                     * 设置Token quota status. An empty string means no configuration. active means configured with current availability. inactive means configured but quota exhausted.
                     * @param _quotaStatus Token quota status. An empty string means no configuration. active means configured with current availability. inactive means configured but quota exhausted.
                     * 
                     */
                    void SetQuotaStatus(const std::string& _quotaStatus);

                    /**
                     * 判断参数 QuotaStatus 是否已赋值
                     * @return QuotaStatus 是否已赋值
                     * 
                     */
                    bool QuotaStatusHasBeenSet() const;

                private:

                    /**
                     * API Key ID.
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API key value. The API response contains the masking value.
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Platform type. Currently supported values: maas.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Root account.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account.
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Status. Valid values: enable, disable.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Binding type. Value: all (all models and services), model_all_endpoint_custom (all models + custom service), model_custom_endpoint_all (custom model + all services), model_custom_endpoint_custom (custom model + custom service).
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * Creation time. Format: YYYY-MM-DD HH:mm:ss.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time. Format: YYYY-MM-DD HH:mm:ss.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * App ID.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Whether it is editable. true means editable, false means non-editable.
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * List of bound resources, case-sensitive for endpoint and model kind.
                     */
                    std::vector<BindingItem> m_bindingItems;
                    bool m_bindingItemsHasBeenSet;

                    /**
                     * IP allowlist. Supports IPv4 and CIDR format. Empty array indicates no restriction.
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * This field is empty when Platform is maas.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Multi-dimensional list of Token quota information. This field is not returned when unconfigured.
                     */
                    std::vector<QuotaInfo> m_quotaSet;
                    bool m_quotaSetHasBeenSet;

                    /**
                     * Token quota status. An empty string means no configuration. active means configured with current availability. inactive means configured but quota exhausted.
                     */
                    std::string m_quotaStatus;
                    bool m_quotaStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_APIKEYDETAIL_H_
