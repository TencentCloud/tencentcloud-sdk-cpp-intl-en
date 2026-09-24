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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * UpdateAMLCustomerProfile response structure.
                */
                class UpdateAMLCustomerProfileResponse : public AbstractModel
                {
                public:
                    UpdateAMLCustomerProfileResponse();
                    ~UpdateAMLCustomerProfileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Risk level.</p>
                     * @return RiskLevel <p>Risk level.</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Returned results</p>
                     * @return Result <p>Returned results</p>
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
                     * 获取<p>Return result description</p>
                     * @return Description <p>Return result description</p>
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
                     * 获取<p>Whether continuous monitoring and screening is enabled</p>
                     * @return EnableOngoingScreening <p>Whether continuous monitoring and screening is enabled</p>
                     * 
                     */
                    bool GetEnableOngoingScreening() const;

                    /**
                     * 判断参数 EnableOngoingScreening 是否已赋值
                     * @return EnableOngoingScreening 是否已赋值
                     * 
                     */
                    bool EnableOngoingScreeningHasBeenSet() const;

                private:

                    /**
                     * <p>Risk level.</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Returned results</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Return result description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether continuous monitoring and screening is enabled</p>
                     */
                    bool m_enableOngoingScreening;
                    bool m_enableOngoingScreeningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILERESPONSE_H_
