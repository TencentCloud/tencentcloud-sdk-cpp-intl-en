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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLTEMPLATEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The registrant profile details.
                */
                class IntlTemplateInfo : public AbstractModel
                {
                public:
                    IntlTemplateInfo();
                    ~IntlTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取The creation time.
                     * @return CreatedOn The creation time.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time.
                     * @param _createdOn The creation time.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取The profile ID.
                     * @return TemplateId The profile ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The profile ID.
                     * @param _templateId The profile ID.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取The registrant type. Valid values: `I` (individual), `E` (organization).
                     * @return TemplateType The registrant type. Valid values: `I` (individual), `E` (organization).
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置The registrant type. Valid values: `I` (individual), `E` (organization).
                     * @param _templateType The registrant type. Valid values: `I` (individual), `E` (organization).
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取The last updated time.
                     * @return UpdatedOn The last updated time.
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置The last updated time.
                     * @param _updatedOn The last updated time.
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取The account ID.
                     * @return Uin The account ID.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置The account ID.
                     * @param _uin The account ID.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Whether the profile is the default one.
                     * @return IsDefault Whether the profile is the default one.
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether the profile is the default one.
                     * @param _isDefault Whether the profile is the default one.
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

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
                     * The creation time.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The profile ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The registrant type. Valid values: `I` (individual), `E` (organization).
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * The last updated time.
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * The account ID.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Whether the profile is the default one.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLTEMPLATEINFO_H_
