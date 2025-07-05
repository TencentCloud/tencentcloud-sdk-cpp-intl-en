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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUSBYPHONENUMBERRESPONSE_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUSBYPHONENUMBERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * PullSmsSendStatusByPhoneNumber response structure.
                */
                class PullSmsSendStatusByPhoneNumberResponse : public AbstractModel
                {
                public:
                    PullSmsSendStatusByPhoneNumberResponse();
                    ~PullSmsSendStatusByPhoneNumberResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Delivery status response set.
                     * @return PullSmsSendStatusSet Delivery status response set.
                     * 
                     */
                    std::vector<PullSmsSendStatus> GetPullSmsSendStatusSet() const;

                    /**
                     * 判断参数 PullSmsSendStatusSet 是否已赋值
                     * @return PullSmsSendStatusSet 是否已赋值
                     * 
                     */
                    bool PullSmsSendStatusSetHasBeenSet() const;

                private:

                    /**
                     * Delivery status response set.
                     */
                    std::vector<PullSmsSendStatus> m_pullSmsSendStatusSet;
                    bool m_pullSmsSendStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUSBYPHONENUMBERRESPONSE_H_
