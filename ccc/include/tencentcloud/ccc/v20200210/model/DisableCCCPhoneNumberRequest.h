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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DISABLECCCPHONENUMBERREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DISABLECCCPHONENUMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DisableCCCPhoneNumber request structure.
                */
                class DisableCCCPhoneNumberRequest : public AbstractModel
                {
                public:
                    DisableCCCPhoneNumberRequest();
                    ~DisableCCCPhoneNumberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number list starting with 0086.
                     * @return PhoneNumbers Number list starting with 0086.
                     * 
                     */
                    std::vector<std::string> GetPhoneNumbers() const;

                    /**
                     * 设置Number list starting with 0086.
                     * @param _phoneNumbers Number list starting with 0086.
                     * 
                     */
                    void SetPhoneNumbers(const std::vector<std::string>& _phoneNumbers);

                    /**
                     * 判断参数 PhoneNumbers 是否已赋值
                     * @return PhoneNumbers 是否已赋值
                     * 
                     */
                    bool PhoneNumbersHasBeenSet() const;

                    /**
                     * 获取Disable switch: 0 for enable, 1 for disable.
                     * @return Disabled Disable switch: 0 for enable, 1 for disable.
                     * 
                     */
                    int64_t GetDisabled() const;

                    /**
                     * 设置Disable switch: 0 for enable, 1 for disable.
                     * @param _disabled Disable switch: 0 for enable, 1 for disable.
                     * 
                     */
                    void SetDisabled(const int64_t& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取TCCC instance application id.
                     * @return SdkAppId TCCC instance application id.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TCCC instance application id.
                     * @param _sdkAppId TCCC instance application id.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * Number list starting with 0086.
                     */
                    std::vector<std::string> m_phoneNumbers;
                    bool m_phoneNumbersHasBeenSet;

                    /**
                     * Disable switch: 0 for enable, 1 for disable.
                     */
                    int64_t m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * TCCC instance application id.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DISABLECCCPHONENUMBERREQUEST_H_
