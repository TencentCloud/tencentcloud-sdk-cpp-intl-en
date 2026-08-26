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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateTokenPlanApiKeys request structure.
                */
                class CreateTokenPlanApiKeysRequest : public AbstractModel
                {
                public:
                    CreateTokenPlanApiKeysRequest();
                    ~CreateTokenPlanApiKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * @return TeamId Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * @param _teamId Package ID. You can obtain it through the DescribeTokenPlanList API.
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
                     * 获取API key name, up to 128 characters. If the number of API keys created exceeds 1, the actual name format is {ApiKeyName}-{serial number} (for example, mykey-1, mykey-2).
                     * @return ApiKeyName API key name, up to 128 characters. If the number of API keys created exceeds 1, the actual name format is {ApiKeyName}-{serial number} (for example, mykey-1, mykey-2).
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置API key name, up to 128 characters. If the number of API keys created exceeds 1, the actual name format is {ApiKeyName}-{serial number} (for example, mykey-1, mykey-2).
                     * @param _apiKeyName API key name, up to 128 characters. If the number of API keys created exceeds 1, the actual name format is {ApiKeyName}-{serial number} (for example, mykey-1, mykey-2).
                     * 
                     */
                    void SetApiKeyName(const std::string& _apiKeyName);

                    /**
                     * 判断参数 ApiKeyName 是否已赋值
                     * @return ApiKeyName 是否已赋值
                     * 
                     */
                    bool ApiKeyNameHasBeenSet() const;

                    /**
                     * 获取Number of creations. Value range: 1–10.
                     * @return Count Number of creations. Value range: 1–10.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of creations. Value range: 1–10.
                     * @param _count Number of creations. Value range: 1–10.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取List of available models. If the package type is the enterprise edition professional package, you can specify a model or pass in "all". "all" means all models supported by the package are available for use. To specify specific models, pass in Model IDs. "all" and specific Model IDs cannot be specified at the same time. If not provided, it indicates the API Key does not support any models, thereby impacting normal use of the API Key. If the package type is the enterprise edition lite package, this field will be force overwritten to ["auto"] regardless of whether it is provided and what value is passed in.
                     * @return AllowedModels List of available models. If the package type is the enterprise edition professional package, you can specify a model or pass in "all". "all" means all models supported by the package are available for use. To specify specific models, pass in Model IDs. "all" and specific Model IDs cannot be specified at the same time. If not provided, it indicates the API Key does not support any models, thereby impacting normal use of the API Key. If the package type is the enterprise edition lite package, this field will be force overwritten to ["auto"] regardless of whether it is provided and what value is passed in.
                     * 
                     */
                    std::vector<std::string> GetAllowedModels() const;

                    /**
                     * 设置List of available models. If the package type is the enterprise edition professional package, you can specify a model or pass in "all". "all" means all models supported by the package are available for use. To specify specific models, pass in Model IDs. "all" and specific Model IDs cannot be specified at the same time. If not provided, it indicates the API Key does not support any models, thereby impacting normal use of the API Key. If the package type is the enterprise edition lite package, this field will be force overwritten to ["auto"] regardless of whether it is provided and what value is passed in.
                     * @param _allowedModels List of available models. If the package type is the enterprise edition professional package, you can specify a model or pass in "all". "all" means all models supported by the package are available for use. To specify specific models, pass in Model IDs. "all" and specific Model IDs cannot be specified at the same time. If not provided, it indicates the API Key does not support any models, thereby impacting normal use of the API Key. If the package type is the enterprise edition lite package, this field will be force overwritten to ["auto"] regardless of whether it is provided and what value is passed in.
                     * 
                     */
                    void SetAllowedModels(const std::vector<std::string>& _allowedModels);

                    /**
                     * 判断参数 AllowedModels 是否已赋值
                     * @return AllowedModels 是否已赋值
                     * 
                     */
                    bool AllowedModelsHasBeenSet() const;

                    /**
                     * 获取Exclusive reserved quota. If not passed in, the value is `0`, which means no exclusive reserved quota is assigned to the API Key. Measurement units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * @return ExclusiveQuota Exclusive reserved quota. If not passed in, the value is `0`, which means no exclusive reserved quota is assigned to the API Key. Measurement units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    int64_t GetExclusiveQuota() const;

                    /**
                     * 设置Exclusive reserved quota. If not passed in, the value is `0`, which means no exclusive reserved quota is assigned to the API Key. Measurement units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * @param _exclusiveQuota Exclusive reserved quota. If not passed in, the value is `0`, which means no exclusive reserved quota is assigned to the API Key. Measurement units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    void SetExclusiveQuota(const int64_t& _exclusiveQuota);

                    /**
                     * 判断参数 ExclusiveQuota 是否已赋值
                     * @return ExclusiveQuota 是否已赋值
                     * 
                     */
                    bool ExclusiveQuotaHasBeenSet() const;

                    /**
                     * 获取Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no upper limit is set. The units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * @return TotalQuota Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no upper limit is set. The units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no upper limit is set. The units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * @param _totalQuota Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no upper limit is set. The units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    void SetTotalQuota(const int64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取TPM (Tokens Per Minute) limit. If not passed, the plan-level TPM is used. Must be >= 0 and <= the package TPM.
                     * @return TPM TPM (Tokens Per Minute) limit. If not passed, the plan-level TPM is used. Must be >= 0 and <= the package TPM.
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置TPM (Tokens Per Minute) limit. If not passed, the plan-level TPM is used. Must be >= 0 and <= the package TPM.
                     * @param _tPM TPM (Tokens Per Minute) limit. If not passed, the plan-level TPM is used. Must be >= 0 and <= the package TPM.
                     * 
                     */
                    void SetTPM(const int64_t& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                private:

                    /**
                     * Package ID. You can obtain it through the DescribeTokenPlanList API.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * API key name, up to 128 characters. If the number of API keys created exceeds 1, the actual name format is {ApiKeyName}-{serial number} (for example, mykey-1, mykey-2).
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * Number of creations. Value range: 1–10.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * List of available models. If the package type is the enterprise edition professional package, you can specify a model or pass in "all". "all" means all models supported by the package are available for use. To specify specific models, pass in Model IDs. "all" and specific Model IDs cannot be specified at the same time. If not provided, it indicates the API Key does not support any models, thereby impacting normal use of the API Key. If the package type is the enterprise edition lite package, this field will be force overwritten to ["auto"] regardless of whether it is provided and what value is passed in.
                     */
                    std::vector<std::string> m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * Exclusive reserved quota. If not passed in, the value is `0`, which means no exclusive reserved quota is assigned to the API Key. Measurement units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     */
                    int64_t m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no upper limit is set. The units are as follows:
-Package type is professional, unit value is points;
-Package type is lite package, and the measurement unit is token.
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * TPM (Tokens Per Minute) limit. If not passed, the plan-level TPM is used. Must be >= 0 and <= the package TPM.
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSREQUEST_H_
