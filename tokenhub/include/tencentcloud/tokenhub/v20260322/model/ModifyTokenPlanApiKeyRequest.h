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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_

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
                * ModifyTokenPlanApiKey request structure.
                */
                class ModifyTokenPlanApiKeyRequest : public AbstractModel
                {
                public:
                    ModifyTokenPlanApiKeyRequest();
                    ~ModifyTokenPlanApiKeyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Available model list. If this parameter is not specified, no modification is made.

- If the package type is enterprise professional:
1) Input "all": use all models supported by the package
2) Import Model ID: specify a specific model. "all" and a specific Model ID cannot be specified at the same time.

-If the package type is enterprise lightweight edition, do not pass in this parameter.
                     * @return AllowedModels Available model list. If this parameter is not specified, no modification is made.

- If the package type is enterprise professional:
1) Input "all": use all models supported by the package
2) Import Model ID: specify a specific model. "all" and a specific Model ID cannot be specified at the same time.

-If the package type is enterprise lightweight edition, do not pass in this parameter.
                     * 
                     */
                    std::vector<std::string> GetAllowedModels() const;

                    /**
                     * 设置Available model list. If this parameter is not specified, no modification is made.

- If the package type is enterprise professional:
1) Input "all": use all models supported by the package
2) Import Model ID: specify a specific model. "all" and a specific Model ID cannot be specified at the same time.

-If the package type is enterprise lightweight edition, do not pass in this parameter.
                     * @param _allowedModels Available model list. If this parameter is not specified, no modification is made.

- If the package type is enterprise professional:
1) Input "all": use all models supported by the package
2) Import Model ID: specify a specific model. "all" and a specific Model ID cannot be specified at the same time.

-If the package type is enterprise lightweight edition, do not pass in this parameter.
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
                     * 获取Dedicated limit. If this parameter is not specified, no modification will be made. Unit:

-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @return ExclusiveQuota Dedicated limit. If this parameter is not specified, no modification will be made. Unit:

-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    int64_t GetExclusiveQuota() const;

                    /**
                     * 设置Dedicated limit. If this parameter is not specified, no modification will be made. Unit:

-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @param _exclusiveQuota Dedicated limit. If this parameter is not specified, no modification will be made. Unit:

-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
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
                     * 获取Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no modification is made. Measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @return TotalQuota Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no modification is made. Measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no modification is made. Measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @param _totalQuota Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no modification is made. Measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
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
                     * 获取Whether to enable the API Key. Values: enable (enable), disable (disable). If not passed, no modification is made.
                     * @return UseStatus Whether to enable the API Key. Values: enable (enable), disable (disable). If not passed, no modification is made.
                     * 
                     */
                    std::string GetUseStatus() const;

                    /**
                     * 设置Whether to enable the API Key. Values: enable (enable), disable (disable). If not passed, no modification is made.
                     * @param _useStatus Whether to enable the API Key. Values: enable (enable), disable (disable). If not passed, no modification is made.
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
                     * 获取TPM (Tokens Per Minute) limit. If not passed, no modification will be made. Must be >= 0 and <= the package TPM.
                     * @return TPM TPM (Tokens Per Minute) limit. If not passed, no modification will be made. Must be >= 0 and <= the package TPM.
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置TPM (Tokens Per Minute) limit. If not passed, no modification will be made. Must be >= 0 and <= the package TPM.
                     * @param _tPM TPM (Tokens Per Minute) limit. If not passed, no modification will be made. Must be >= 0 and <= the package TPM.
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
                     * API Key ID.
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * Available model list. If this parameter is not specified, no modification is made.

- If the package type is enterprise professional:
1) Input "all": use all models supported by the package
2) Import Model ID: specify a specific model. "all" and a specific Model ID cannot be specified at the same time.

-If the package type is enterprise lightweight edition, do not pass in this parameter.
                     */
                    std::vector<std::string> m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * Dedicated limit. If this parameter is not specified, no modification will be made. Unit:

-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     */
                    int64_t m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * Total credit limit. -1 means unlimited. It must be -1 or greater than or equal to the current ExclusiveQuota of the API Key. If not passed, no modification is made. Measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * Whether to enable the API Key. Values: enable (enable), disable (disable). If not passed, no modification is made.
                     */
                    std::string m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * TPM (Tokens Per Minute) limit. If not passed, no modification will be made. Must be >= 0 and <= the package TPM.
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_
