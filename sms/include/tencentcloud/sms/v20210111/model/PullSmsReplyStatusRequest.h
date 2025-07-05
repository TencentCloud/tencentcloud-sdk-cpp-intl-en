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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PullSmsReplyStatus request structure.
                */
                class PullSmsReplyStatusRequest : public AbstractModel
                {
                public:
                    PullSmsReplyStatusRequest();
                    ~PullSmsReplyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Maximum number of pulled entries. Maximum value: 100.
                     * @return Limit Maximum number of pulled entries. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of pulled entries. Maximum value: 100.
                     * @param _limit Maximum number of pulled entries. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * @return SmsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * @param _smsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

                private:

                    /**
                     * Maximum number of pulled entries. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 1400006666.
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUSREQUEST_H_
