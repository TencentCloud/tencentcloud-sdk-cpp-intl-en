/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * Delivery statistics response body
                */
                class SendStatusStatistics : public AbstractModel
                {
                public:
                    SendStatusStatistics();
                    ~SendStatusStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billable SMS message quantity; for example, in 100 successfully submitted SMS messages, if 20 ones are long messages (over 80 characters) and split into two messages each, then the billable quantity will be 80 * 1 + 20 * 2 = 120.
                     * @return FeeCount Billable SMS message quantity; for example, in 100 successfully submitted SMS messages, if 20 ones are long messages (over 80 characters) and split into two messages each, then the billable quantity will be 80 * 1 + 20 * 2 = 120.
                     */
                    uint64_t GetFeeCount() const;

                    /**
                     * 设置Billable SMS message quantity; for example, in 100 successfully submitted SMS messages, if 20 ones are long messages (over 80 characters) and split into two messages each, then the billable quantity will be 80 * 1 + 20 * 2 = 120.
                     * @param FeeCount Billable SMS message quantity; for example, in 100 successfully submitted SMS messages, if 20 ones are long messages (over 80 characters) and split into two messages each, then the billable quantity will be 80 * 1 + 20 * 2 = 120.
                     */
                    void SetFeeCount(const uint64_t& _feeCount);

                    /**
                     * 判断参数 FeeCount 是否已赋值
                     * @return FeeCount 是否已赋值
                     */
                    bool FeeCountHasBeenSet() const;

                    /**
                     * 获取Submitted SMS messages.
                     * @return RequestCount Submitted SMS messages.
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置Submitted SMS messages.
                     * @param RequestCount Submitted SMS messages.
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取Successfully submitted SMS messages.
                     * @return RequestSuccessCount Successfully submitted SMS messages.
                     */
                    uint64_t GetRequestSuccessCount() const;

                    /**
                     * 设置Successfully submitted SMS messages.
                     * @param RequestSuccessCount Successfully submitted SMS messages.
                     */
                    void SetRequestSuccessCount(const uint64_t& _requestSuccessCount);

                    /**
                     * 判断参数 RequestSuccessCount 是否已赋值
                     * @return RequestSuccessCount 是否已赋值
                     */
                    bool RequestSuccessCountHasBeenSet() const;

                private:

                    /**
                     * Billable SMS message quantity; for example, in 100 successfully submitted SMS messages, if 20 ones are long messages (over 80 characters) and split into two messages each, then the billable quantity will be 80 * 1 + 20 * 2 = 120.
                     */
                    uint64_t m_feeCount;
                    bool m_feeCountHasBeenSet;

                    /**
                     * Submitted SMS messages.
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * Successfully submitted SMS messages.
                     */
                    uint64_t m_requestSuccessCount;
                    bool m_requestSuccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICS_H_
