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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCSRREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCSRREQUEST_H_

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
                * ModifyCSR request structure.
                */
                class ModifyCSRRequest : public AbstractModel
                {
                public:
                    ModifyCSRRequest();
                    ~ModifyCSRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CSR ID.	
                     * @return CSRId The CSR ID.	
                     * 
                     */
                    int64_t GetCSRId() const;

                    /**
                     * 设置The CSR ID.	
                     * @param _cSRId The CSR ID.	
                     * 
                     */
                    void SetCSRId(const int64_t& _cSRId);

                    /**
                     * 判断参数 CSRId 是否已赋值
                     * @return CSRId 是否已赋值
                     * 
                     */
                    bool CSRIdHasBeenSet() const;

                    /**
                     * 获取Whether to generate the CSR content. Once the CSR content is generated, the CSR record cannot be modified.
                     * @return Generate Whether to generate the CSR content. Once the CSR content is generated, the CSR record cannot be modified.
                     * 
                     */
                    bool GetGenerate() const;

                    /**
                     * 设置Whether to generate the CSR content. Once the CSR content is generated, the CSR record cannot be modified.
                     * @param _generate Whether to generate the CSR content. Once the CSR content is generated, the CSR record cannot be modified.
                     * 
                     */
                    void SetGenerate(const bool& _generate);

                    /**
                     * 判断参数 Generate 是否已赋值
                     * @return Generate 是否已赋值
                     * 
                     */
                    bool GenerateHasBeenSet() const;

                    /**
                     * 获取The domain.
                     * @return Domain The domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
                     * @param _domain The domain.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

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
                     * 设置The organization name.
                     * @param _organization The organization name.
                     * 
                     */
                    void SetOrganization(const std::string& _organization);

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
                     * 设置The department.
                     * @param _department The department.
                     * 
                     */
                    void SetDepartment(const std::string& _department);

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
                     * 设置The email address.
                     * @param _email The email address.
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
                     * 获取The province.
                     * @return Province The province.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置The province.
                     * @param _province The province.
                     * 
                     */
                    void SetProvince(const std::string& _province);

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
                     * 设置The city.
                     * @param _city The city.
                     * 
                     */
                    void SetCity(const std::string& _city);

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
                     * 设置The country or region.
                     * @param _country The country or region.
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取The encryption algorithm. RSA and ECC are supported.	
                     * @return EncryptAlgo The encryption algorithm. RSA and ECC are supported.	
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置The encryption algorithm. RSA and ECC are supported.	
                     * @param _encryptAlgo The encryption algorithm. RSA and ECC are supported.	
                     * 
                     */
                    void SetEncryptAlgo(const std::string& _encryptAlgo);

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                    /**
                     * 获取The key pair parameter. For RSA, only the 2048-bit and 4096-bit key pairs are supported. For ECC, only prime256v1 is supported.
                     * @return KeyParameter The key pair parameter. For RSA, only the 2048-bit and 4096-bit key pairs are supported. For ECC, only prime256v1 is supported.
                     * 
                     */
                    std::string GetKeyParameter() const;

                    /**
                     * 设置The key pair parameter. For RSA, only the 2048-bit and 4096-bit key pairs are supported. For ECC, only prime256v1 is supported.
                     * @param _keyParameter The key pair parameter. For RSA, only the 2048-bit and 4096-bit key pairs are supported. For ECC, only prime256v1 is supported.
                     * 
                     */
                    void SetKeyParameter(const std::string& _keyParameter);

                    /**
                     * 判断参数 KeyParameter 是否已赋值
                     * @return KeyParameter 是否已赋值
                     * 
                     */
                    bool KeyParameterHasBeenSet() const;

                    /**
                     * 获取The remarks.
                     * @return Remark The remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置The remarks.
                     * @param _remark The remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取The password of the private key.
                     * @return KeyPassword The password of the private key.
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置The password of the private key.
                     * @param _keyPassword The password of the private key.
                     * 
                     */
                    void SetKeyPassword(const std::string& _keyPassword);

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     * 
                     */
                    bool KeyPasswordHasBeenSet() const;

                private:

                    /**
                     * The CSR ID.	
                     */
                    int64_t m_cSRId;
                    bool m_cSRIdHasBeenSet;

                    /**
                     * Whether to generate the CSR content. Once the CSR content is generated, the CSR record cannot be modified.
                     */
                    bool m_generate;
                    bool m_generateHasBeenSet;

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
                     * The encryption algorithm. RSA and ECC are supported.	
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                    /**
                     * The key pair parameter. For RSA, only the 2048-bit and 4096-bit key pairs are supported. For ECC, only prime256v1 is supported.
                     */
                    std::string m_keyParameter;
                    bool m_keyParameterHasBeenSet;

                    /**
                     * The remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The password of the private key.
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCSRREQUEST_H_
