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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONRESPONSE_H_

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
                * PhoneVerification response structure.
                */
                class PhoneVerificationResponse : public AbstractModel
                {
                public:
                    PhoneVerificationResponse();
                    ~PhoneVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code.
-Fee result code
Three-element information consistency.
-4: Three-element information inconsistency.

-No charge result code
-6: Invalid phone number.
-7: Identity number error.
-8: Name verification failed.
-9: No records.
-11: The Verification Center Service is busy.
-12: Authentication attempts exceeded the daily limit. Retry the next day.
-13: The number range is unsupported for verification.
                     * @return Result Verification result code.
-Fee result code
Three-element information consistency.
-4: Three-element information inconsistency.

-No charge result code
-6: Invalid phone number.
-7: Identity number error.
-8: Name verification failed.
-9: No records.
-11: The Verification Center Service is busy.
-12: Authentication attempts exceeded the daily limit. Retry the next day.
-13: The number range is unsupported for verification.
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
                     * 获取ISP name.
-Valid values: ["", "mobile", "telecom", "cucc"]
                     * @return Isp ISP name.
-Valid values: ["", "mobile", "telecom", "cucc"]
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                private:

                    /**
                     * Verification result code.
-Fee result code
Three-element information consistency.
-4: Three-element information inconsistency.

-No charge result code
-6: Invalid phone number.
-7: Identity number error.
-8: Name verification failed.
-9: No records.
-11: The Verification Center Service is busy.
-12: Authentication attempts exceeded the daily limit. Retry the next day.
-13: The number range is unsupported for verification.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Business result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ISP name.
-Valid values: ["", "mobile", "telecom", "cucc"]
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONRESPONSE_H_
