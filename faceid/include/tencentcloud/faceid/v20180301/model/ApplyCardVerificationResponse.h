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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYCARDVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYCARDVERIFICATIONRESPONSE_H_

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
                * ApplyCardVerification response structure.
                */
                class ApplyCardVerificationResponse : public AbstractModel
                {
                public:
                    ApplyCardVerificationResponse();
                    ~ApplyCardVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * @return CardVerificationToken The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * 
                     */
                    std::string GetCardVerificationToken() const;

                    /**
                     * 判断参数 CardVerificationToken 是否已赋值
                     * @return CardVerificationToken 是否已赋值
                     * 
                     */
                    bool CardVerificationTokenHasBeenSet() const;

                    /**
                     * 获取The maximum number of polls for calling the pull result interface polling.
                     * @return AsyncCardVerificationMaxPollingTimes The maximum number of polls for calling the pull result interface polling.
                     * 
                     */
                    uint64_t GetAsyncCardVerificationMaxPollingTimes() const;

                    /**
                     * 判断参数 AsyncCardVerificationMaxPollingTimes 是否已赋值
                     * @return AsyncCardVerificationMaxPollingTimes 是否已赋值
                     * 
                     */
                    bool AsyncCardVerificationMaxPollingTimesHasBeenSet() const;

                    /**
                     * 获取The interval for polling when calling the pull result interface (in seconds).
                     * @return AsyncCardVerificationPollingWaitTime The interval for polling when calling the pull result interface (in seconds).
                     * 
                     */
                    uint64_t GetAsyncCardVerificationPollingWaitTime() const;

                    /**
                     * 判断参数 AsyncCardVerificationPollingWaitTime 是否已赋值
                     * @return AsyncCardVerificationPollingWaitTime 是否已赋值
                     * 
                     */
                    bool AsyncCardVerificationPollingWaitTimeHasBeenSet() const;

                private:

                    /**
                     * The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     */
                    std::string m_cardVerificationToken;
                    bool m_cardVerificationTokenHasBeenSet;

                    /**
                     * The maximum number of polls for calling the pull result interface polling.
                     */
                    uint64_t m_asyncCardVerificationMaxPollingTimes;
                    bool m_asyncCardVerificationMaxPollingTimesHasBeenSet;

                    /**
                     * The interval for polling when calling the pull result interface (in seconds).
                     */
                    uint64_t m_asyncCardVerificationPollingWaitTime;
                    bool m_asyncCardVerificationPollingWaitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYCARDVERIFICATIONRESPONSE_H_
