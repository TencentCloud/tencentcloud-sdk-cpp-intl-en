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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_EMAILSENDER_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_EMAILSENDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Describes sender information.
                */
                class EmailSender : public AbstractModel
                {
                public:
                    EmailSender();
                    ~EmailSender() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sender address.
                     * @return EmailAddress Sender address.
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置Sender address.
                     * @param _emailAddress Sender address.
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取Sender alias.
                     * @return EmailSenderName Sender alias.
                     * 
                     */
                    std::string GetEmailSenderName() const;

                    /**
                     * 设置Sender alias.
                     * @param _emailSenderName Sender alias.
                     * 
                     */
                    void SetEmailSenderName(const std::string& _emailSenderName);

                    /**
                     * 判断参数 EmailSenderName 是否已赋值
                     * @return EmailSenderName 是否已赋值
                     * 
                     */
                    bool EmailSenderNameHasBeenSet() const;

                    /**
                     * 获取Creation time.


                     * @return CreatedTimestamp Creation time.


                     * 
                     */
                    uint64_t GetCreatedTimestamp() const;

                    /**
                     * 设置Creation time.


                     * @param _createdTimestamp Creation time.


                     * 
                     */
                    void SetCreatedTimestamp(const uint64_t& _createdTimestamp);

                    /**
                     * 判断参数 CreatedTimestamp 是否已赋值
                     * @return CreatedTimestamp 是否已赋值
                     * 
                     */
                    bool CreatedTimestampHasBeenSet() const;

                    /**
                     * 获取smtp password type. 0=not set. 1=already set up.
                     * @return SmtpPwdType smtp password type. 0=not set. 1=already set up.
                     * 
                     */
                    uint64_t GetSmtpPwdType() const;

                    /**
                     * 设置smtp password type. 0=not set. 1=already set up.
                     * @param _smtpPwdType smtp password type. 0=not set. 1=already set up.
                     * 
                     */
                    void SetSmtpPwdType(const uint64_t& _smtpPwdType);

                    /**
                     * 判断参数 SmtpPwdType 是否已赋值
                     * @return SmtpPwdType 是否已赋值
                     * 
                     */
                    bool SmtpPwdTypeHasBeenSet() const;

                private:

                    /**
                     * Sender address.
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * Sender alias.
                     */
                    std::string m_emailSenderName;
                    bool m_emailSenderNameHasBeenSet;

                    /**
                     * Creation time.


                     */
                    uint64_t m_createdTimestamp;
                    bool m_createdTimestampHasBeenSet;

                    /**
                     * smtp password type. 0=not set. 1=already set up.
                     */
                    uint64_t m_smtpPwdType;
                    bool m_smtpPwdTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_EMAILSENDER_H_
