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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERCOMPLIANCEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERCOMPLIANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCrossBorderCompliance request structure.
                */
                class DescribeCrossBorderComplianceRequest : public AbstractModel
                {
                public:
                    DescribeCrossBorderComplianceRequest();
                    ~DescribeCrossBorderComplianceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取(Exact match) Service provider. Valid values: `UNICOM`.
                     * @return ServiceProvider (Exact match) Service provider. Valid values: `UNICOM`.
                     * 
                     */
                    std::string GetServiceProvider() const;

                    /**
                     * 设置(Exact match) Service provider. Valid values: `UNICOM`.
                     * @param _serviceProvider (Exact match) Service provider. Valid values: `UNICOM`.
                     * 
                     */
                    void SetServiceProvider(const std::string& _serviceProvider);

                    /**
                     * 判断参数 ServiceProvider 是否已赋值
                     * @return ServiceProvider 是否已赋值
                     * 
                     */
                    bool ServiceProviderHasBeenSet() const;

                    /**
                     * 获取(Exact match) ID of compliance review request.
                     * @return ComplianceId (Exact match) ID of compliance review request.
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置(Exact match) ID of compliance review request.
                     * @param _complianceId (Exact match) ID of compliance review request.
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Company name.
                     * @return Company (Fuzzy match) Company name.
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置(Fuzzy match) Company name.
                     * @param _company (Fuzzy match) Company name.
                     * 
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Unified Social Credit Code.
                     * @return UniformSocialCreditCode (Fuzzy match) Unified Social Credit Code.
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置(Fuzzy match) Unified Social Credit Code.
                     * @param _uniformSocialCreditCode (Fuzzy match) Unified Social Credit Code.
                     * 
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Legal person.
                     * @return LegalPerson (Fuzzy match) Legal person.
                     * 
                     */
                    std::string GetLegalPerson() const;

                    /**
                     * 设置(Fuzzy match) Legal person.
                     * @param _legalPerson (Fuzzy match) Legal person.
                     * 
                     */
                    void SetLegalPerson(const std::string& _legalPerson);

                    /**
                     * 判断参数 LegalPerson 是否已赋值
                     * @return LegalPerson 是否已赋值
                     * 
                     */
                    bool LegalPersonHasBeenSet() const;

                    /**
                     * 获取
                     * @return LegalPersonId 
                     * 
                     */
                    std::string GetLegalPersonId() const;

                    /**
                     * 设置
                     * @param _legalPersonId 
                     * 
                     */
                    void SetLegalPersonId(const std::string& _legalPersonId);

                    /**
                     * 判断参数 LegalPersonId 是否已赋值
                     * @return LegalPersonId 是否已赋值
                     * 
                     */
                    bool LegalPersonIdHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Issuing authority.
                     * @return IssuingAuthority (Fuzzy match) Issuing authority.
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置(Fuzzy match) Issuing authority.
                     * @param _issuingAuthority (Fuzzy match) Issuing authority.
                     * 
                     */
                    void SetIssuingAuthority(const std::string& _issuingAuthority);

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     * 
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Business address.
                     * @return BusinessAddress (Fuzzy match) Business address.
                     * 
                     */
                    std::string GetBusinessAddress() const;

                    /**
                     * 设置(Fuzzy match) Business address.
                     * @param _businessAddress (Fuzzy match) Business address.
                     * 
                     */
                    void SetBusinessAddress(const std::string& _businessAddress);

                    /**
                     * 判断参数 BusinessAddress 是否已赋值
                     * @return BusinessAddress 是否已赋值
                     * 
                     */
                    bool BusinessAddressHasBeenSet() const;

                    /**
                     * 获取(Exact match) Zip code.
                     * @return PostCode (Exact match) Zip code.
                     * 
                     */
                    uint64_t GetPostCode() const;

                    /**
                     * 设置(Exact match) Zip code.
                     * @param _postCode (Exact match) Zip code.
                     * 
                     */
                    void SetPostCode(const uint64_t& _postCode);

                    /**
                     * 判断参数 PostCode 是否已赋值
                     * @return PostCode 是否已赋值
                     * 
                     */
                    bool PostCodeHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Operator.
                     * @return Manager (Fuzzy match) Operator.
                     * 
                     */
                    std::string GetManager() const;

                    /**
                     * 设置(Fuzzy match) Operator.
                     * @param _manager (Fuzzy match) Operator.
                     * 
                     */
                    void SetManager(const std::string& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取(Exact match) Operator ID card number.
                     * @return ManagerId (Exact match) Operator ID card number.
                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置(Exact match) Operator ID card number.
                     * @param _managerId (Exact match) Operator ID card number.
                     * 
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取(Fuzzy match) Operator address.
                     * @return ManagerAddress (Fuzzy match) Operator address.
                     * 
                     */
                    std::string GetManagerAddress() const;

                    /**
                     * 设置(Fuzzy match) Operator address.
                     * @param _managerAddress (Fuzzy match) Operator address.
                     * 
                     */
                    void SetManagerAddress(const std::string& _managerAddress);

                    /**
                     * 判断参数 ManagerAddress 是否已赋值
                     * @return ManagerAddress 是否已赋值
                     * 
                     */
                    bool ManagerAddressHasBeenSet() const;

                    /**
                     * 获取(Exact match) Operator phone number.
                     * @return ManagerTelephone (Exact match) Operator phone number.
                     * 
                     */
                    std::string GetManagerTelephone() const;

                    /**
                     * 设置(Exact match) Operator phone number.
                     * @param _managerTelephone (Exact match) Operator phone number.
                     * 
                     */
                    void SetManagerTelephone(const std::string& _managerTelephone);

                    /**
                     * 判断参数 ManagerTelephone 是否已赋值
                     * @return ManagerTelephone 是否已赋值
                     * 
                     */
                    bool ManagerTelephoneHasBeenSet() const;

                    /**
                     * 获取(Exact match) Email.
                     * @return Email (Exact match) Email.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置(Exact match) Email.
                     * @param _email (Exact match) Email.
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
                     * 获取(Exact match) Service start date, such as `2020-07-28`.
                     * @return ServiceStartDate (Exact match) Service start date, such as `2020-07-28`.
                     * 
                     */
                    std::string GetServiceStartDate() const;

                    /**
                     * 设置(Exact match) Service start date, such as `2020-07-28`.
                     * @param _serviceStartDate (Exact match) Service start date, such as `2020-07-28`.
                     * 
                     */
                    void SetServiceStartDate(const std::string& _serviceStartDate);

                    /**
                     * 判断参数 ServiceStartDate 是否已赋值
                     * @return ServiceStartDate 是否已赋值
                     * 
                     */
                    bool ServiceStartDateHasBeenSet() const;

                    /**
                     * 获取(Exact match) Service end date, such as `2020-07-28`.
                     * @return ServiceEndDate (Exact match) Service end date, such as `2020-07-28`.
                     * 
                     */
                    std::string GetServiceEndDate() const;

                    /**
                     * 设置(Exact match) Service end date, such as `2020-07-28`.
                     * @param _serviceEndDate (Exact match) Service end date, such as `2020-07-28`.
                     * 
                     */
                    void SetServiceEndDate(const std::string& _serviceEndDate);

                    /**
                     * 判断参数 ServiceEndDate 是否已赋值
                     * @return ServiceEndDate 是否已赋值
                     * 
                     */
                    bool ServiceEndDateHasBeenSet() const;

                    /**
                     * 获取(Exact match) Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     * @return State (Exact match) Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置(Exact match) Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     * @param _state (Exact match) Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The offset value
                     * @return Offset The offset value
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset value
                     * @param _offset The offset value
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Quantity of returned items
                     * @return Limit Quantity of returned items
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity of returned items
                     * @param _limit Quantity of returned items
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * (Exact match) Service provider. Valid values: `UNICOM`.
                     */
                    std::string m_serviceProvider;
                    bool m_serviceProviderHasBeenSet;

                    /**
                     * (Exact match) ID of compliance review request.
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * (Fuzzy match) Company name.
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * (Fuzzy match) Unified Social Credit Code.
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * (Fuzzy match) Legal person.
                     */
                    std::string m_legalPerson;
                    bool m_legalPersonHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_legalPersonId;
                    bool m_legalPersonIdHasBeenSet;

                    /**
                     * (Fuzzy match) Issuing authority.
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * (Fuzzy match) Business address.
                     */
                    std::string m_businessAddress;
                    bool m_businessAddressHasBeenSet;

                    /**
                     * (Exact match) Zip code.
                     */
                    uint64_t m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * (Fuzzy match) Operator.
                     */
                    std::string m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * (Exact match) Operator ID card number.
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * (Fuzzy match) Operator address.
                     */
                    std::string m_managerAddress;
                    bool m_managerAddressHasBeenSet;

                    /**
                     * (Exact match) Operator phone number.
                     */
                    std::string m_managerTelephone;
                    bool m_managerTelephoneHasBeenSet;

                    /**
                     * (Exact match) Email.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * (Exact match) Service start date, such as `2020-07-28`.
                     */
                    std::string m_serviceStartDate;
                    bool m_serviceStartDateHasBeenSet;

                    /**
                     * (Exact match) Service end date, such as `2020-07-28`.
                     */
                    std::string m_serviceEndDate;
                    bool m_serviceEndDateHasBeenSet;

                    /**
                     * (Exact match) Status. Valid values: `PENDING`, `APPROVED`, and `DENY`.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The offset value
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Quantity of returned items
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERCOMPLIANCEREQUEST_H_
