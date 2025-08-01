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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBEREMAILBINDREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBEREMAILBINDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateOrganizationMemberEmailBind request structure.
                */
                class UpdateOrganizationMemberEmailBindRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationMemberEmailBindRequest();
                    ~UpdateOrganizationMemberEmailBindRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member uin.
                     * @return MemberUin Member uin.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member uin.
                     * @param _memberUin Member uin.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Bound ID, which can be obtained through describeorganizationmemberemailbind (https://intl.cloud.tencent.com/document/product/850/93332?from_cn_redirect=1).
                     * @return BindId Bound ID, which can be obtained through describeorganizationmemberemailbind (https://intl.cloud.tencent.com/document/product/850/93332?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetBindId() const;

                    /**
                     * 设置Bound ID, which can be obtained through describeorganizationmemberemailbind (https://intl.cloud.tencent.com/document/product/850/93332?from_cn_redirect=1).
                     * @param _bindId Bound ID, which can be obtained through describeorganizationmemberemailbind (https://intl.cloud.tencent.com/document/product/850/93332?from_cn_redirect=1).
                     * 
                     */
                    void SetBindId(const int64_t& _bindId);

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

                    /**
                     * 获取Email address.
                     * @return Email Email address.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address.
                     * @param _email Email address.
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
                     * 获取International area code.
                     * @return CountryCode International area code.
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置International area code.
                     * @param _countryCode International area code.
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Phone Mobile number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Mobile number.
                     * @param _phone Mobile number.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * Member uin.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Bound ID, which can be obtained through describeorganizationmemberemailbind (https://intl.cloud.tencent.com/document/product/850/93332?from_cn_redirect=1).
                     */
                    int64_t m_bindId;
                    bool m_bindIdHasBeenSet;

                    /**
                     * Email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * International area code.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBEREMAILBINDREQUEST_H_
