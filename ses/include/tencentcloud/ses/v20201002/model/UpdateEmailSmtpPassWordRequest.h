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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILSMTPPASSWORDREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILSMTPPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailSmtpPassWord request structure.
                */
                class UpdateEmailSmtpPassWordRequest : public AbstractModel
                {
                public:
                    UpdateEmailSmtpPassWordRequest();
                    ~UpdateEmailSmtpPassWordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SMTP password. Length limit: 64.
                     * @return Password SMTP password. Length limit: 64.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置SMTP password. Length limit: 64.
                     * @param _password SMTP password. Length limit: 64.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Email address. Length limit: 128.
                     * @return EmailAddress Email address. Length limit: 128.
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置Email address. Length limit: 128.
                     * @param _emailAddress Email address. Length limit: 128.
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                private:

                    /**
                     * SMTP password. Length limit: 64.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Email address. Length limit: 128.
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILSMTPPASSWORDREQUEST_H_
