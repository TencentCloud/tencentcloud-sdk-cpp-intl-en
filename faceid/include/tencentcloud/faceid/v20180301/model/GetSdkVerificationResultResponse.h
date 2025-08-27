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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETSDKVERIFICATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETSDKVERIFICATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/CardVerifyResult.h>
#include <tencentcloud/faceid/v20180301/model/CompareResult.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetSdkVerificationResult response structure.
                */
                class GetSdkVerificationResultResponse : public AbstractModel
                {
                public:
                    GetSdkVerificationResultResponse();
                    ~GetSdkVerificationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The result code of the verification result.
                     * @return Result The result code of the verification result.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取The verification result description.
                     * @return Description The verification result description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The charge count.
                     * @return ChargeCount The charge count.
                     * 
                     */
                    int64_t GetChargeCount() const;

                    /**
                     * 判断参数 ChargeCount 是否已赋值
                     * @return ChargeCount 是否已赋值
                     * 
                     */
                    bool ChargeCountHasBeenSet() const;

                    /**
                     * 获取The results of multiple OCR processes (in order). The result of the final process is used as the valid result.
                     * @return CardVerifyResults The results of multiple OCR processes (in order). The result of the final process is used as the valid result.
                     * 
                     */
                    std::vector<CardVerifyResult> GetCardVerifyResults() const;

                    /**
                     * 判断参数 CardVerifyResults 是否已赋值
                     * @return CardVerifyResults 是否已赋值
                     * 
                     */
                    bool CardVerifyResultsHasBeenSet() const;

                    /**
                     * 获取The results of multiple liveness detection processes (in order). The result of the final process is used as the valid result.
                     * @return CompareResults The results of multiple liveness detection processes (in order). The result of the final process is used as the valid result.
                     * 
                     */
                    std::vector<CompareResult> GetCompareResults() const;

                    /**
                     * 判断参数 CompareResults 是否已赋值
                     * @return CompareResults 是否已赋值
                     * 
                     */
                    bool CompareResultsHasBeenSet() const;

                    /**
                     * 获取Data passed through in the process of getting the token.
                     * @return Extra Data passed through in the process of getting the token.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取Describe the risk level of the device where the current request is located, with a total of 4 levels. The details are as follows:
1 - Secure
2 - Low Risk
3 - Medium Risk
4 - High Risk
Empty - Risk level not obtained.
Only returned for the ENHANCED version, with the default value being empty.
                     * @return DeviceInfoLevel Describe the risk level of the device where the current request is located, with a total of 4 levels. The details are as follows:
1 - Secure
2 - Low Risk
3 - Medium Risk
4 - High Risk
Empty - Risk level not obtained.
Only returned for the ENHANCED version, with the default value being empty.
                     * 
                     */
                    std::string GetDeviceInfoLevel() const;

                    /**
                     * 判断参数 DeviceInfoLevel 是否已赋值
                     * @return DeviceInfoLevel 是否已赋值
                     * 
                     */
                    bool DeviceInfoLevelHasBeenSet() const;

                private:

                    /**
                     * The result code of the verification result.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The verification result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The charge count.
                     */
                    int64_t m_chargeCount;
                    bool m_chargeCountHasBeenSet;

                    /**
                     * The results of multiple OCR processes (in order). The result of the final process is used as the valid result.
                     */
                    std::vector<CardVerifyResult> m_cardVerifyResults;
                    bool m_cardVerifyResultsHasBeenSet;

                    /**
                     * The results of multiple liveness detection processes (in order). The result of the final process is used as the valid result.
                     */
                    std::vector<CompareResult> m_compareResults;
                    bool m_compareResultsHasBeenSet;

                    /**
                     * Data passed through in the process of getting the token.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * Describe the risk level of the device where the current request is located, with a total of 4 levels. The details are as follows:
1 - Secure
2 - Low Risk
3 - Medium Risk
4 - High Risk
Empty - Risk level not obtained.
Only returned for the ENHANCED version, with the default value being empty.
                     */
                    std::string m_deviceInfoLevel;
                    bool m_deviceInfoLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETSDKVERIFICATIONRESULTRESPONSE_H_
