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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CSRITEM_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CSRITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of a CSR
                */
                class CSRItem : public AbstractModel
                {
                public:
                    CSRItem();
                    ~CSRItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The CSR ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id The CSR ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置The CSR ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id The CSR ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin The account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置The account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin The account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain The domain.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Organization The organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrganization() const;

                    /**
                     * 设置The organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _organization The organization name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Department The department.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置The department.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _department The department.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email The email address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置The email address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _email The email address.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Province The province.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置The province.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _province The province.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return City The city.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置The city.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _city The city.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Country The country or region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置The country or region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _country The country or region.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remarks The remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置The remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remarks The remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createTime The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The encryption algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptAlgo The encryption algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置The encryption algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encryptAlgo The encryption algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The algorithm parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyParameter The algorithm parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyParameter() const;

                    /**
                     * 设置The algorithm parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyParameter The algorithm parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyParameter(const std::string& _keyParameter);

                    /**
                     * 判断参数 KeyParameter 是否已赋值
                     * @return KeyParameter 是否已赋值
                     * 
                     */
                    bool KeyParameterHasBeenSet() const;

                private:

                    /**
                     * The CSR ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The account.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * The department.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * The email address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * The province.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * The city.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * The country or region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * The remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The encryption algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                    /**
                     * The algorithm parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyParameter;
                    bool m_keyParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CSRITEM_H_
