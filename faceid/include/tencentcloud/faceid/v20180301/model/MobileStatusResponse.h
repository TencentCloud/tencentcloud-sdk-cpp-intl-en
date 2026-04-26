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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILESTATUSRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILESTATUSRESPONSE_H_

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
                * MobileStatus response structure.
                */
                class MobileStatusResponse : public AbstractModel
                {
                public:
                    MobileStatusResponse();
                    ~MobileStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code. Billing is as follows.
-Result code for charges
0: Success.

-Result code with no charge
-No results found.
-2: Invalid phone number format.
-3: Verification Center Service is busy.
-4: Authentication attempts exceeded the daily limit. Retry the next day.
                     * @return Result Verification result code. Billing is as follows.
-Result code for charges
0: Success.

-Result code with no charge
-No results found.
-2: Invalid phone number format.
-3: Verification Center Service is busy.
-4: Authentication attempts exceeded the daily limit. Retry the next day.
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
                     * 获取Status code.
-Value range:
0: Normal.
1: Out of service.
2: Account cancellation.
4: Offline.
99: unknown status.
                     * @return StatusCode Status code.
-Value range:
0: Normal.
1: Out of service.
2: Account cancellation.
4: Offline.
99: unknown status.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                private:

                    /**
                     * Verification result code. Billing is as follows.
-Result code for charges
0: Success.

-Result code with no charge
-No results found.
-2: Invalid phone number format.
-3: Verification Center Service is busy.
-4: Authentication attempts exceeded the daily limit. Retry the next day.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Business result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Status code.
-Value range:
0: Normal.
1: Out of service.
2: Account cancellation.
4: Offline.
99: unknown status.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILESTATUSRESPONSE_H_
