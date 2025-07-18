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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILADDRESSRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/EmailSender.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListEmailAddress response structure.
                */
                class ListEmailAddressResponse : public AbstractModel
                {
                public:
                    ListEmailAddressResponse();
                    ~ListEmailAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of sender addresses.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EmailSenders Details of sender addresses.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EmailSender> GetEmailSenders() const;

                    /**
                     * 判断参数 EmailSenders 是否已赋值
                     * @return EmailSenders 是否已赋值
                     * 
                     */
                    bool EmailSendersHasBeenSet() const;

                private:

                    /**
                     * Details of sender addresses.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<EmailSender> m_emailSenders;
                    bool m_emailSendersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILADDRESSRESPONSE_H_
