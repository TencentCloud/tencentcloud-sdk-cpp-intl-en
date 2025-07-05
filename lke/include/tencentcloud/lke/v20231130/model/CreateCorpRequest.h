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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATECORPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATECORPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateCorp request structure.
                */
                class CreateCorpRequest : public AbstractModel
                {
                public:
                    CreateCorpRequest();
                    ~CreateCorpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Full name of the corporate.
                     * @return FullName Full name of the corporate.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Full name of the corporate.
                     * @param _fullName Full name of the corporate.
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Contact person's name.
                     * @return ContactName Contact person's name.
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置Contact person's name.
                     * @param _contactName Contact person's name.
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取Contact person's mailbox.
                     * @return Email Contact person's mailbox.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Contact person's mailbox.
                     * @param _email Contact person's mailbox.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Contact person's mobile phone number.
                     * @return Telephone Contact person's mobile phone number.
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置Contact person's mobile phone number.
                     * @param _telephone Contact person's mobile phone number.
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                private:

                    /**
                     * Full name of the corporate.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Contact person's name.
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * Contact person's mailbox.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Contact person's mobile phone number.
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATECORPREQUEST_H_
