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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBEREMAILBINDRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBEREMAILBINDRESPONSE_H_

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
                * DescribeOrganizationMemberEmailBind response structure.
                */
                class DescribeOrganizationMemberEmailBindResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberEmailBindResponse();
                    ~DescribeOrganizationMemberEmailBindResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Bound ID.
                     * @return BindId Bound ID.
                     * 
                     */
                    uint64_t GetBindId() const;

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

                    /**
                     * 获取Application time.
                     * @return ApplyTime Application time.
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Email address.
                     * @return Email Email address.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Verification mobile number.
                     * @return Phone Verification mobile number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Binding status: unbound indicates not bound; valid indicates to be activated; success indicates bound successfully; failed indicates binding failed.
                     * @return BindStatus Binding status: unbound indicates not bound; valid indicates to be activated; success indicates bound successfully; failed indicates binding failed.
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取Binding time.
                     * @return BindTime Binding time.
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                    /**
                     * 获取Failure description.
                     * @return Description Failure description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Verification mobile number binding status. 0 indicates unbound and 1 indicates bound.
                     * @return PhoneBind Verification mobile number binding status. 0 indicates unbound and 1 indicates bound.
                     * 
                     */
                    uint64_t GetPhoneBind() const;

                    /**
                     * 判断参数 PhoneBind 是否已赋值
                     * @return PhoneBind 是否已赋值
                     * 
                     */
                    bool PhoneBindHasBeenSet() const;

                    /**
                     * 获取International area code.
                     * @return CountryCode International area code.
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                private:

                    /**
                     * Bound ID.
                     */
                    uint64_t m_bindId;
                    bool m_bindIdHasBeenSet;

                    /**
                     * Application time.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Verification mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Binding status: unbound indicates not bound; valid indicates to be activated; success indicates bound successfully; failed indicates binding failed.
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * Binding time.
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                    /**
                     * Failure description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Verification mobile number binding status. 0 indicates unbound and 1 indicates bound.
                     */
                    uint64_t m_phoneBind;
                    bool m_phoneBindHasBeenSet;

                    /**
                     * International area code.
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBEREMAILBINDRESPONSE_H_
