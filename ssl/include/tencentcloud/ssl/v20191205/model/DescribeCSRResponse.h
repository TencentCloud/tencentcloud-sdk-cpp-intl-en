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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCSR response structure.
                */
                class DescribeCSRResponse : public AbstractModel
                {
                public:
                    DescribeCSRResponse();
                    ~DescribeCSRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The CSR ID.
                     * @return Id The CSR ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The account.
                     * @return OwnerUin The account.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取The domain.
                     * @return Domain The domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The organization name.
                     * @return Organization The organization name.
                     * 
                     */
                    std::string GetOrganization() const;

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * 
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取The department.
                     * @return Department The department.
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取The email address.
                     * @return Email The email address.
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
                     * 获取The province.
                     * @return Province The province.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取The city.
                     * @return City The city.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取The country or region.
                     * @return Country The country or region.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取The key algorithm.
                     * @return EncryptAlgo The key algorithm.
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                    /**
                     * 获取The algorithm parameter.
                     * @return KeyParameter The algorithm parameter.
                     * 
                     */
                    std::string GetKeyParameter() const;

                    /**
                     * 判断参数 KeyParameter 是否已赋值
                     * @return KeyParameter 是否已赋值
                     * 
                     */
                    bool KeyParameterHasBeenSet() const;

                    /**
                     * 获取The remarks.
                     * @return Remarks The remarks.
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取The status.
                     * @return Status The status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The password of the private key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyPassword The password of the private key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     * 
                     */
                    bool KeyPasswordHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The CSR content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CSR The CSR content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCSR() const;

                    /**
                     * 判断参数 CSR 是否已赋值
                     * @return CSR 是否已赋值
                     * 
                     */
                    bool CSRHasBeenSet() const;

                    /**
                     * 获取The content of the private key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateKey The content of the private key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * The CSR ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The account.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * The domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The organization name.
                     */
                    std::string m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * The department.
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * The email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * The province.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * The city.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * The country or region.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * The key algorithm.
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                    /**
                     * The algorithm parameter.
                     */
                    std::string m_keyParameter;
                    bool m_keyParameterHasBeenSet;

                    /**
                     * The remarks.
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * The status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The password of the private key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The CSR content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cSR;
                    bool m_cSRHasBeenSet;

                    /**
                     * The content of the private key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRRESPONSE_H_
