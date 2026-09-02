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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVOUCHERELIGIBILITYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVOUCHERELIGIBILITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVoucherEligibility response structure.
                */
                class DescribeVoucherEligibilityResponse : public AbstractModel
                {
                public:
                    DescribeVoucherEligibilityResponse();
                    ~DescribeVoucherEligibilityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether there is eligibility to obtain promo voucher. Value: 1 (eligible), 0 (not eligible).
                     * @return Available Whether there is eligibility to obtain promo voucher. Value: 1 (eligible), 0 (not eligible).
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * Whether there is eligibility to obtain promo voucher. Value: 1 (eligible), 0 (not eligible).
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVOUCHERELIGIBILITYRESPONSE_H_
