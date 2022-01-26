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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERCOMPLIANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERCOMPLIANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compliance review request
                */
                class CrossBorderCompliance : public AbstractModel
                {
                public:
                    CrossBorderCompliance();
                    ~CrossBorderCompliance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service provider. Valid values: `UNICOM`.
                     * @return ServiceProvider Service provider. Valid values: `UNICOM`.
                     */
                    std::string GetServiceProvider() const;

                    /**
                     * 设置Service provider. Valid values: `UNICOM`.
                     * @param ServiceProvider Service provider. Valid values: `UNICOM`.
                     */
                    void SetServiceProvider(const std::string& _serviceProvider);

                    /**
                     * 判断参数 ServiceProvider 是否已赋值
                     * @return ServiceProvider 是否已赋值
                     */
                    bool ServiceProviderHasBeenSet() const;

                    /**
                     * 获取ID of compliance review request.
                     * @return ComplianceId ID of compliance review request.
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置ID of compliance review request.
                     * @param ComplianceId ID of compliance review request.
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取Full company name.
                     * @return Company Full company name.
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置Full company name.
                     * @param Company Full company name.
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取Unified Social Credit Code.
                     * @return UniformSocialCreditCode Unified Social Credit Code.
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置Unified Social Credit Code.
                     * @param UniformSocialCreditCode Unified Social Credit Code.
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取Legal person.
                     * @return LegalPerson Legal person.
                     */
                    std::string GetLegalPerson() const;

                    /**
                     * 设置Legal person.
                     * @param LegalPerson Legal person.
                     */
                    void SetLegalPerson(const std::string& _legalPerson);

                    /**
                     * 判断参数 LegalPerson 是否已赋值
                     * @return LegalPerson 是否已赋值
                     */
                    bool LegalPersonHasBeenSet() const;

                    /**
                     * 获取Issuing authority.
                     * @return IssuingAuthority Issuing authority.
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置Issuing authority.
                     * @param IssuingAuthority Issuing authority.
                     */
                    void SetIssuingAuthority(const std::string& _issuingAuthority);

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                    /**
                     * 获取Business license.
                     * @return BusinessLicense Business license.
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置Business license.
                     * @param BusinessLicense Business license.
                     */
                    void SetBusinessLicense(const std::string& _businessLicense);

                    /**
                     * 判断参数 BusinessLicense 是否已赋值
                     * @return BusinessLicense 是否已赋值
                     */
                    bool BusinessLicenseHasBeenSet() const;

                    /**
                     * 获取Business address.
                     * @return BusinessAddress Business address.
                     */
                    std::string GetBusinessAddress() const;

                    /**
                     * 设置Business address.
                     * @param BusinessAddress Business address.
                     */
                    void SetBusinessAddress(const std::string& _businessAddress);

                    /**
                     * 判断参数 BusinessAddress 是否已赋值
                     * @return BusinessAddress 是否已赋值
                     */
                    bool BusinessAddressHasBeenSet() const;

                    /**
                     * 获取Zip code.
                     * @return PostCode Zip code.
                     */
                    uint64_t GetPostCode() const;

                    /**
                     * 设置Zip code.
                     * @param PostCode Zip code.
                     */
                    void SetPostCode(const uint64_t& _postCode);

                    /**
                     * 判断参数 PostCode 是否已赋值
                     * @return PostCode 是否已赋值
                     */
                    bool PostCodeHasBeenSet() const;

                    /**
                     * 获取Operator.
                     * @return Manager Operator.
                     */
                    std::string GetManager() const;

                    /**
                     * 设置Operator.
                     * @param Manager Operator.
                     */
                    void SetManager(const std::string& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取Operator ID card number.
                     * @return ManagerId Operator ID card number.
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置Operator ID card number.
                     * @param ManagerId Operator ID card number.
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取Operator ID card.
                     * @return ManagerIdCard Operator ID card.
                     */
                    std::string GetManagerIdCard() const;

                    /**
                     * 设置Operator ID card.
                     * @param ManagerIdCard Operator ID card.
                     */
                    void SetManagerIdCard(const std::string& _managerIdCard);

                    /**
                     * 判断参数 ManagerIdCard 是否已赋值
                     * @return ManagerIdCard 是否已赋值
                     */
                    bool ManagerIdCardHasBeenSet() const;

                    /**
                     * 获取Operator address.
                     * @return ManagerAddress Operator address.
                     */
                    std::string GetManagerAddress() const;

                    /**
                     * 设置Operator address.
                     * @param ManagerAddress Operator address.
                     */
                    void SetManagerAddress(const std::string& _managerAddress);

                    /**
                     * 判断参数 ManagerAddress 是否已赋值
                     * @return ManagerAddress 是否已赋值
                     */
                    bool ManagerAddressHasBeenSet() const;

                    /**
                     * 获取Operator phone number.
                     * @return ManagerTelephone Operator phone number.
                     */
                    std::string GetManagerTelephone() const;

                    /**
                     * 设置Operator phone number.
                     * @param ManagerTelephone Operator phone number.
                     */
                    void SetManagerTelephone(const std::string& _managerTelephone);

                    /**
                     * 判断参数 ManagerTelephone 是否已赋值
                     * @return ManagerTelephone 是否已赋值
                     */
                    bool ManagerTelephoneHasBeenSet() const;

                    /**
                     * 获取Email.
                     * @return Email Email.
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email.
                     * @param Email Email.
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Service handling form.
                     * @return ServiceHandlingForm Service handling form.
                     */
                    std::string GetServiceHandlingForm() const;

                    /**
                     * 设置Service handling form.
                     * @param ServiceHandlingForm Service handling form.
                     */
                    void SetServiceHandlingForm(const std::string& _serviceHandlingForm);

                    /**
                     * 判断参数 ServiceHandlingForm 是否已赋值
                     * @return ServiceHandlingForm 是否已赋值
                     */
                    bool ServiceHandlingFormHasBeenSet() const;

                    /**
                     * 获取Authorization letter.
                     * @return AuthorizationLetter Authorization letter.
                     */
                    std::string GetAuthorizationLetter() const;

                    /**
                     * 设置Authorization letter.
                     * @param AuthorizationLetter Authorization letter.
                     */
                    void SetAuthorizationLetter(const std::string& _authorizationLetter);

                    /**
                     * 判断参数 AuthorizationLetter 是否已赋值
                     * @return AuthorizationLetter 是否已赋值
                     */
                    bool AuthorizationLetterHasBeenSet() const;

                    /**
                     * 获取Information security commitment.
                     * @return SafetyCommitment Information security commitment.
                     */
                    std::string GetSafetyCommitment() const;

                    /**
                     * 设置Information security commitment.
                     * @param SafetyCommitment Information security commitment.
                     */
                    void SetSafetyCommitment(const std::string& _safetyCommitment);

                    /**
                     * 判断参数 SafetyCommitment 是否已赋值
                     * @return SafetyCommitment 是否已赋值
                     */
                    bool SafetyCommitmentHasBeenSet() const;

                    /**
                     * 获取Service start date.
                     * @return ServiceStartDate Service start date.
                     */
                    std::string GetServiceStartDate() const;

                    /**
                     * 设置Service start date.
                     * @param ServiceStartDate Service start date.
                     */
                    void SetServiceStartDate(const std::string& _serviceStartDate);

                    /**
                     * 判断参数 ServiceStartDate 是否已赋值
                     * @return ServiceStartDate 是否已赋值
                     */
                    bool ServiceStartDateHasBeenSet() const;

                    /**
                     * 获取Service end date.
                     * @return ServiceEndDate Service end date.
                     */
                    std::string GetServiceEndDate() const;

                    /**
                     * 设置Service end date.
                     * @param ServiceEndDate Service end date.
                     */
                    void SetServiceEndDate(const std::string& _serviceEndDate);

                    /**
                     * 判断参数 ServiceEndDate 是否已赋值
                     * @return ServiceEndDate 是否已赋值
                     */
                    bool ServiceEndDateHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     * @return State Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     * @param State Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Creation time of the review form.
                     * @return CreatedTime Creation time of the review form.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the review form.
                     * @param CreatedTime Creation time of the review form.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Service provider. Valid values: `UNICOM`.
                     */
                    std::string m_serviceProvider;
                    bool m_serviceProviderHasBeenSet;

                    /**
                     * ID of compliance review request.
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * Full company name.
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * Unified Social Credit Code.
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * Legal person.
                     */
                    std::string m_legalPerson;
                    bool m_legalPersonHasBeenSet;

                    /**
                     * Issuing authority.
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * Business license.
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * Business address.
                     */
                    std::string m_businessAddress;
                    bool m_businessAddressHasBeenSet;

                    /**
                     * Zip code.
                     */
                    uint64_t m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * Operator.
                     */
                    std::string m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * Operator ID card number.
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * Operator ID card.
                     */
                    std::string m_managerIdCard;
                    bool m_managerIdCardHasBeenSet;

                    /**
                     * Operator address.
                     */
                    std::string m_managerAddress;
                    bool m_managerAddressHasBeenSet;

                    /**
                     * Operator phone number.
                     */
                    std::string m_managerTelephone;
                    bool m_managerTelephoneHasBeenSet;

                    /**
                     * Email.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Service handling form.
                     */
                    std::string m_serviceHandlingForm;
                    bool m_serviceHandlingFormHasBeenSet;

                    /**
                     * Authorization letter.
                     */
                    std::string m_authorizationLetter;
                    bool m_authorizationLetterHasBeenSet;

                    /**
                     * Information security commitment.
                     */
                    std::string m_safetyCommitment;
                    bool m_safetyCommitmentHasBeenSet;

                    /**
                     * Service start date.
                     */
                    std::string m_serviceStartDate;
                    bool m_serviceStartDateHasBeenSet;

                    /**
                     * Service end date.
                     */
                    std::string m_serviceEndDate;
                    bool m_serviceEndDateHasBeenSet;

                    /**
                     * Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time of the review form.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERCOMPLIANCE_H_
