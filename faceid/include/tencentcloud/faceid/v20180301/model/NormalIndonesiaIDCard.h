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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALINDONESIAIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALINDONESIAIDCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Indonesia ID card.
                */
                class NormalIndonesiaIDCard : public AbstractModel
                {
                public:
                    NormalIndonesiaIDCard();
                    ~NormalIndonesiaIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseNumber(const std::string& _licenseNumber);

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BloodType Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBloodType() const;

                    /**
                     * 设置Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bloodType Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBloodType(const std::string& _bloodType);

                    /**
                     * 判断参数 BloodType 是否已赋值
                     * @return BloodType 是否已赋值
                     * 
                     */
                    bool BloodTypeHasBeenSet() const;

                    /**
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormattedAddress Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formattedAddress Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormattedAddress(const std::string& _formattedAddress);

                    /**
                     * 判断参数 FormattedAddress 是否已赋值
                     * @return FormattedAddress 是否已赋值
                     * 
                     */
                    bool FormattedAddressHasBeenSet() const;

                    /**
                     * 获取Street
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Street Street
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStreet() const;

                    /**
                     * 设置Street
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _street Street
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStreet(const std::string& _street);

                    /**
                     * 判断参数 Street 是否已赋值
                     * @return Street 是否已赋值
                     * 
                     */
                    bool StreetHasBeenSet() const;

                    /**
                     * 获取Village
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Village Village
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVillage() const;

                    /**
                     * 设置Village
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _village Village
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVillage(const std::string& _village);

                    /**
                     * 判断参数 Village 是否已赋值
                     * @return Village 是否已赋值
                     * 
                     */
                    bool VillageHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Area Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _area Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Religion Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 设置Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _religion Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReligion(const std::string& _religion);

                    /**
                     * 判断参数 Religion 是否已赋值
                     * @return Religion 是否已赋值
                     * 
                     */
                    bool ReligionHasBeenSet() const;

                    /**
                     * 获取Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaritalStatus Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMaritalStatus() const;

                    /**
                     * 设置Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maritalStatus Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaritalStatus(const std::string& _maritalStatus);

                    /**
                     * 判断参数 MaritalStatus 是否已赋值
                     * @return MaritalStatus 是否已赋值
                     * 
                     */
                    bool MaritalStatusHasBeenSet() const;

                    /**
                     * 获取Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Occupation Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOccupation() const;

                    /**
                     * 设置Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _occupation Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOccupation(const std::string& _occupation);

                    /**
                     * 判断参数 Occupation 是否已赋值
                     * @return Occupation 是否已赋值
                     * 
                     */
                    bool OccupationHasBeenSet() const;

                    /**
                     * 获取Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nationality Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DueDate ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dueDate ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDueDate(const std::string& _dueDate);

                    /**
                     * 判断参数 DueDate 是否已赋值
                     * @return DueDate 是否已赋值
                     * 
                     */
                    bool DueDateHasBeenSet() const;

                    /**
                     * 获取Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedDate(const std::string& _issuedDate);

                    /**
                     * 判断参数 IssuedDate 是否已赋值
                     * @return IssuedDate 是否已赋值
                     * 
                     */
                    bool IssuedDateHasBeenSet() const;

                    /**
                     * 获取Province
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Province Province
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _province Province
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
                     * 获取City
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return City City
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _city City
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

                private:

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bloodType;
                    bool m_bloodTypeHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * Street
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_street;
                    bool m_streetHasBeenSet;

                    /**
                     * Village
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_village;
                    bool m_villageHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_maritalStatus;
                    bool m_maritalStatusHasBeenSet;

                    /**
                     * Job
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_occupation;
                    bool m_occupationHasBeenSet;

                    /**
                     * Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Province
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALINDONESIAIDCARD_H_
