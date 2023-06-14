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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/RegistrantContact.h>
#include <tencentcloud/domain/v20180808/model/AdminContact.h>
#include <tencentcloud/domain/v20180808/model/TechnicalContact.h>
#include <tencentcloud/domain/v20180808/model/BillingContact.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateIntlTemplate request structure.
                */
                class CreateIntlTemplateRequest : public AbstractModel
                {
                public:
                    CreateIntlTemplateRequest();
                    ~CreateIntlTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The registrant contact.
                     * @return RegistrantContact The registrant contact.
                     * 
                     */
                    RegistrantContact GetRegistrantContact() const;

                    /**
                     * 设置The registrant contact.
                     * @param _registrantContact The registrant contact.
                     * 
                     */
                    void SetRegistrantContact(const RegistrantContact& _registrantContact);

                    /**
                     * 判断参数 RegistrantContact 是否已赋值
                     * @return RegistrantContact 是否已赋值
                     * 
                     */
                    bool RegistrantContactHasBeenSet() const;

                    /**
                     * 获取The admin contact.
                     * @return AdminContact The admin contact.
                     * 
                     */
                    AdminContact GetAdminContact() const;

                    /**
                     * 设置The admin contact.
                     * @param _adminContact The admin contact.
                     * 
                     */
                    void SetAdminContact(const AdminContact& _adminContact);

                    /**
                     * 判断参数 AdminContact 是否已赋值
                     * @return AdminContact 是否已赋值
                     * 
                     */
                    bool AdminContactHasBeenSet() const;

                    /**
                     * 获取The technical contact.
                     * @return TechnicalContact The technical contact.
                     * 
                     */
                    TechnicalContact GetTechnicalContact() const;

                    /**
                     * 设置The technical contact.
                     * @param _technicalContact The technical contact.
                     * 
                     */
                    void SetTechnicalContact(const TechnicalContact& _technicalContact);

                    /**
                     * 判断参数 TechnicalContact 是否已赋值
                     * @return TechnicalContact 是否已赋值
                     * 
                     */
                    bool TechnicalContactHasBeenSet() const;

                    /**
                     * 获取The contact person for bills.
                     * @return BillingContact The contact person for bills.
                     * 
                     */
                    BillingContact GetBillingContact() const;

                    /**
                     * 设置The contact person for bills.
                     * @param _billingContact The contact person for bills.
                     * 
                     */
                    void SetBillingContact(const BillingContact& _billingContact);

                    /**
                     * 判断参数 BillingContact 是否已赋值
                     * @return BillingContact 是否已赋值
                     * 
                     */
                    bool BillingContactHasBeenSet() const;

                    /**
                     * 获取The profile type. Valid values: `I` (individual, default), `E` (organization).
                     * @return TemplateType The profile type. Valid values: `I` (individual, default), `E` (organization).
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置The profile type. Valid values: `I` (individual, default), `E` (organization).
                     * @param _templateType The profile type. Valid values: `I` (individual, default), `E` (organization).
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                private:

                    /**
                     * The registrant contact.
                     */
                    RegistrantContact m_registrantContact;
                    bool m_registrantContactHasBeenSet;

                    /**
                     * The admin contact.
                     */
                    AdminContact m_adminContact;
                    bool m_adminContactHasBeenSet;

                    /**
                     * The technical contact.
                     */
                    TechnicalContact m_technicalContact;
                    bool m_technicalContactHasBeenSet;

                    /**
                     * The contact person for bills.
                     */
                    BillingContact m_billingContact;
                    bool m_billingContactHasBeenSet;

                    /**
                     * The profile type. Valid values: `I` (individual, default), `E` (organization).
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CREATEINTLTEMPLATEREQUEST_H_
