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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_

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
                * MobileNetworkTimeVerification response structure.
                */
                class MobileNetworkTimeVerificationResponse : public AbstractModel
                {
                public:
                    MobileNetworkTimeVerificationResponse();
                    ~MobileNetworkTimeVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code. Billing is as follows.
-Result code for charges
Success.
-2: Mobile number does not exist.
-3: The mobile number exists, but unable to query the duration.

-Result code with no charge
-Invalid phone number format.
-4: Verification Center Service is busy.
-5: Authentication attempts exceeded the daily limit. Retry the next day.
                     * @return Result Verification result code. Billing is as follows.
-Result code for charges
Success.
-2: Mobile number does not exist.
-3: The mobile number exists, but unable to query the duration.

-Result code with no charge
-Invalid phone number format.
-4: Verification Center Service is busy.
-5: Authentication attempts exceeded the daily limit. Retry the next day.
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
                     * 获取Business result description.
                     * @return Description Business result description.
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
                     * 获取Online duration interval.
-The format is [a,b), which means the online duration is longer than a months and shorter than b months.
-If b is +, it means no upper limit.
                     * @return Range Online duration interval.
-The format is [a,b), which means the online duration is longer than a months and shorter than b months.
-If b is +, it means no upper limit.
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * Verification result code. Billing is as follows.
-Result code for charges
Success.
-2: Mobile number does not exist.
-3: The mobile number exists, but unable to query the duration.

-Result code with no charge
-Invalid phone number format.
-4: Verification Center Service is busy.
-5: Authentication attempts exceeded the daily limit. Retry the next day.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Business result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Online duration interval.
-The format is [a,b), which means the online duration is longer than a months and shorter than b months.
-If b is +, it means no upper limit.
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_
