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
                * Indonesian Identity Card (mapped field result)
                */
                class NormalIndonesiaIDCard : public AbstractModel
                {
                public:
                    NormalIndonesiaIDCard();
                    ~NormalIndonesiaIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID number
                     * @return LicenseNumber ID number
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置ID number
                     * @param _licenseNumber ID number
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
                     * @return FullName Name
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Name
                     * @param _fullName Name
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
                     * 获取Birthplace/Date of birth
                     * @return Birthday Birthplace/Date of birth
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthplace/Date of birth
                     * @param _birthday Birthplace/Date of birth
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
                     * 获取Sex
                     * @return Sex Sex
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Sex
                     * @param _sex Sex
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
                     * @return BloodType Blood type
                     * 
                     */
                    std::string GetBloodType() const;

                    /**
                     * 设置Blood type
                     * @param _bloodType Blood type
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
                     * 获取Address.
                     * @return FormattedAddress Address.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Address.
                     * @param _formattedAddress Address.
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
                     * @return Street Street
                     * 
                     */
                    std::string GetStreet() const;

                    /**
                     * 设置Street
                     * @param _street Street
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
                     * @return Village Village
                     * 
                     */
                    std::string GetVillage() const;

                    /**
                     * 设置Village
                     * @param _village Village
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
                     * 获取Region.
                     * @return Area Region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region.
                     * @param _area Region.
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
                     * 获取Religious belief
                     * @return Religion Religious belief
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 设置Religious belief
                     * @param _religion Religious belief
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
                     * @return MaritalStatus Marital status
                     * 
                     */
                    std::string GetMaritalStatus() const;

                    /**
                     * 设置Marital status
                     * @param _maritalStatus Marital status
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
                     * 获取Occupation
                     * @return Occupation Occupation
                     * 
                     */
                    std::string GetOccupation() const;

                    /**
                     * 设置Occupation
                     * @param _occupation Occupation
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
                     * @return Nationality Nationality
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality
                     * @param _nationality Nationality
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
                     * 获取Validity period of the ID card
                     * @return DueDate Validity period of the ID card
                     * 
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置Validity period of the ID card
                     * @param _dueDate Validity period of the ID card
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
                     * 获取Issue date
                     * @return IssuedDate Issue date
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Issue date
                     * @param _issuedDate Issue date
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
                     * @return Province Province
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province
                     * @param _province Province
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
                     * 获取city
                     * @return City city
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置city
                     * @param _city city
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
                     * ID number
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Birthplace/Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Blood type
                     */
                    std::string m_bloodType;
                    bool m_bloodTypeHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * Street
                     */
                    std::string m_street;
                    bool m_streetHasBeenSet;

                    /**
                     * Village
                     */
                    std::string m_village;
                    bool m_villageHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Religious belief
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * Marital status
                     */
                    std::string m_maritalStatus;
                    bool m_maritalStatusHasBeenSet;

                    /**
                     * Occupation
                     */
                    std::string m_occupation;
                    bool m_occupationHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Validity period of the ID card
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * Issue date
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * city
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALINDONESIAIDCARD_H_
