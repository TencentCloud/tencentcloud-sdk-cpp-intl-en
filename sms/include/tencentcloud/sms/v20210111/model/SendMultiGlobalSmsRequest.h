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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTIGLOBALSMSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTIGLOBALSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/MultiSmsInfo.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * SendMultiGlobalSms request structure.
                */
                class SendMultiGlobalSmsRequest : public AbstractModel
                {
                public:
                    SendMultiGlobalSmsRequest();
                    ~SendMultiGlobalSmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * @return SmsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * @param _smsSdkAppId The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

                    /**
                     * 获取Multi SMS information list. Up to 200 phone numbers are supported in one request, which should be all Global SMS numbers. Each element contains a phone number and its corresponding template, template parameters, and other information.
                     * @return MultiSmsInfoSet Multi SMS information list. Up to 200 phone numbers are supported in one request, which should be all Global SMS numbers. Each element contains a phone number and its corresponding template, template parameters, and other information.
                     * 
                     */
                    std::vector<MultiSmsInfo> GetMultiSmsInfoSet() const;

                    /**
                     * 设置Multi SMS information list. Up to 200 phone numbers are supported in one request, which should be all Global SMS numbers. Each element contains a phone number and its corresponding template, template parameters, and other information.
                     * @param _multiSmsInfoSet Multi SMS information list. Up to 200 phone numbers are supported in one request, which should be all Global SMS numbers. Each element contains a phone number and its corresponding template, template parameters, and other information.
                     * 
                     */
                    void SetMultiSmsInfoSet(const std::vector<MultiSmsInfo>& _multiSmsInfoSet);

                    /**
                     * 判断参数 MultiSmsInfoSet 是否已赋值
                     * @return MultiSmsInfoSet 是否已赋值
                     * 
                     */
                    bool MultiSmsInfoSetHasBeenSet() const;

                private:

                    /**
                     * The SMS `SdkAppId` generated after an application is added in the [SMS console](https://console.cloud.tencent.com/smsv2/app-manage), such as 2400006666.
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * Multi SMS information list. Up to 200 phone numbers are supported in one request, which should be all Global SMS numbers. Each element contains a phone number and its corresponding template, template parameters, and other information.
                     */
                    std::vector<MultiSmsInfo> m_multiSmsInfoSet;
                    bool m_multiSmsInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTIGLOBALSMSREQUEST_H_
