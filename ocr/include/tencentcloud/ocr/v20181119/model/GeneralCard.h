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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/AddressInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * General card certificate information.
                */
                class GeneralCard : public AbstractModel
                {
                public:
                    GeneralCard();
                    ~GeneralCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber ID number.
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
                     * 获取Personal number. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PersonalNumber Personal number. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 设置Personal number. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _personalNumber Personal number. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPersonalNumber(const std::string& _personalNumber);

                    /**
                     * 判断参数 PersonalNumber 是否已赋值
                     * @return PersonalNumber 是否已赋值
                     * 
                     */
                    bool PersonalNumberHasBeenSet() const;

                    /**
                     * 获取Full name on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Full name on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Full name on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Full name on the document.
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
                     * 获取Full name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullNameLocal Full name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullNameLocal() const;

                    /**
                     * 设置Full name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullNameLocal Full name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullNameLocal(const std::string& _fullNameLocal);

                    /**
                     * 判断参数 FullNameLocal 是否已赋值
                     * @return FullNameLocal 是否已赋值
                     * 
                     */
                    bool FullNameLocalHasBeenSet() const;

                    /**
                     * 获取First name or given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstName First name or given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name or given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstName First name or given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取First name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstNameLocal First name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstNameLocal() const;

                    /**
                     * 设置First name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstNameLocal First name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstNameLocal(const std::string& _firstNameLocal);

                    /**
                     * 判断参数 FirstNameLocal 是否已赋值
                     * @return FirstNameLocal 是否已赋值
                     * 
                     */
                    bool FirstNameLocalHasBeenSet() const;

                    /**
                     * 获取Middle name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiddleName Middle name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置Middle name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _middleName Middle name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiddleName(const std::string& _middleName);

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     * 
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取Middle name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiddleNameLocal Middle name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMiddleNameLocal() const;

                    /**
                     * 设置Middle name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _middleNameLocal Middle name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiddleNameLocal(const std::string& _middleNameLocal);

                    /**
                     * 判断参数 MiddleNameLocal 是否已赋值
                     * @return MiddleNameLocal 是否已赋值
                     * 
                     */
                    bool MiddleNameLocalHasBeenSet() const;

                    /**
                     * 获取Last name or surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastName Last name or surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name or surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastName Last name or surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取Last name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastNameLocal Last name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastNameLocal() const;

                    /**
                     * 设置Last name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastNameLocal Last name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastNameLocal(const std::string& _lastNameLocal);

                    /**
                     * 判断参数 LastNameLocal 是否已赋值
                     * @return LastNameLocal 是否已赋值
                     * 
                     */
                    bool LastNameLocalHasBeenSet() const;

                    /**
                     * 获取Gender on the document.
- M: man.
- F: woman.
- X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender on the document.
- M: man.
- F: woman.
- X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender on the document.
- M: man.
- F: woman.
- X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender on the document.
- M: man.
- F: woman.
- X: other gender identity.
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
                     * 获取Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Date of birth.
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
                     * 获取Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BirthPlace Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthPlace Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取Issue date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate Issue date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Issue date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate Issue date.
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
                     * 获取Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedAuthority Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 设置Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedAuthority Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedAuthority(const std::string& _issuedAuthority);

                    /**
                     * 判断参数 IssuedAuthority 是否已赋值
                     * @return IssuedAuthority 是否已赋值
                     * 
                     */
                    bool IssuedAuthorityHasBeenSet() const;

                    /**
                     * 获取Place of issue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedPlace Place of issue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedPlace() const;

                    /**
                     * 设置Place of issue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedPlace Place of issue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedPlace(const std::string& _issuedPlace);

                    /**
                     * 判断参数 IssuedPlace 是否已赋值
                     * @return IssuedPlace 是否已赋值
                     * 
                     */
                    bool IssuedPlaceHasBeenSet() const;

                    /**
                     * 获取Issuing country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedCountry Issuing country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置Issuing country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedCountry Issuing country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedCountry(const std::string& _issuedCountry);

                    /**
                     * 判断参数 IssuedCountry 是否已赋值
                     * @return IssuedCountry 是否已赋值
                     * 
                     */
                    bool IssuedCountryHasBeenSet() const;

                    /**
                     * 获取Country code of issue, ISO Alpha-3 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedCountryCode Country code of issue, ISO Alpha-3 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedCountryCode() const;

                    /**
                     * 设置Country code of issue, ISO Alpha-3 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedCountryCode Country code of issue, ISO Alpha-3 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuedCountryCode(const std::string& _issuedCountryCode);

                    /**
                     * 判断参数 IssuedCountryCode 是否已赋值
                     * @return IssuedCountryCode 是否已赋值
                     * 
                     */
                    bool IssuedCountryCodeHasBeenSet() const;

                    /**
                     * 获取Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpirationDate Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expirationDate Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取First line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MRZLine1 First line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMRZLine1() const;

                    /**
                     * 设置First line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mRZLine1 First line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMRZLine1(const std::string& _mRZLine1);

                    /**
                     * 判断参数 MRZLine1 是否已赋值
                     * @return MRZLine1 是否已赋值
                     * 
                     */
                    bool MRZLine1HasBeenSet() const;

                    /**
                     * 获取Second line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MRZLine2 Second line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMRZLine2() const;

                    /**
                     * 设置Second line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mRZLine2 Second line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMRZLine2(const std::string& _mRZLine2);

                    /**
                     * 判断参数 MRZLine2 是否已赋值
                     * @return MRZLine2 是否已赋值
                     * 
                     */
                    bool MRZLine2HasBeenSet() const;

                    /**
                     * 获取Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nationality Document nationality, following ISO 3166 country coding specification.
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
                     * 获取Address information on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address information on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AddressInfo GetAddress() const;

                    /**
                     * 设置Address information on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address information on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddress(const AddressInfo& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Religion (if displayed on the document).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Religion Religion (if displayed on the document).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 设置Religion (if displayed on the document).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _religion Religion (if displayed on the document).
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
                     * 获取Type of document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type of document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type of document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Blood type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BloodType Blood type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBloodType() const;

                    /**
                     * 设置Blood type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bloodType Blood type.
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
                     * 获取Height.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Height Height.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _height Height.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWeight() const;

                    /**
                     * 设置Weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight Weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const std::string& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Vehicle class authorized on the driver license (e.g., A, B, C).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VehicleClass Vehicle class authorized on the driver license (e.g., A, B, C).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVehicleClass() const;

                    /**
                     * 设置Vehicle class authorized on the driver license (e.g., A, B, C).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vehicleClass Vehicle class authorized on the driver license (e.g., A, B, C).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVehicleClass(const std::string& _vehicleClass);

                    /**
                     * 判断参数 VehicleClass 是否已赋值
                     * @return VehicleClass 是否已赋值
                     * 
                     */
                    bool VehicleClassHasBeenSet() const;

                    /**
                     * 获取Restrictions on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Restrictions Restrictions on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestrictions() const;

                    /**
                     * 设置Restrictions on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restrictions Restrictions on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestrictions(const std::string& _restrictions);

                    /**
                     * 判断参数 Restrictions 是否已赋值
                     * @return Restrictions 是否已赋值
                     * 
                     */
                    bool RestrictionsHasBeenSet() const;

                    /**
                     * 获取Endorsements or additional records on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Endorsement Endorsements or additional records on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndorsement() const;

                    /**
                     * 设置Endorsements or additional records on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endorsement Endorsements or additional records on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndorsement(const std::string& _endorsement);

                    /**
                     * 判断参数 Endorsement 是否已赋值
                     * @return Endorsement 是否已赋值
                     * 
                     */
                    bool EndorsementHasBeenSet() const;

                    /**
                     * 获取Supplementary fields (varies by document type).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Others Supplementary fields (varies by document type).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOthers() const;

                    /**
                     * 设置Supplementary fields (varies by document type).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _others Supplementary fields (varies by document type).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOthers(const std::string& _others);

                    /**
                     * 判断参数 Others 是否已赋值
                     * @return Others 是否已赋值
                     * 
                     */
                    bool OthersHasBeenSet() const;

                    /**
                     * 获取First line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeFirst First line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置First line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeFirst First line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetPassportCodeFirst(const std::string& _passportCodeFirst);

                    /**
                     * 判断参数 PassportCodeFirst 是否已赋值
                     * @return PassportCodeFirst 是否已赋值
                     * @deprecated
                     */
                    bool PassportCodeFirstHasBeenSet() const;

                    /**
                     * 获取Second line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassportCodeSecond Second line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置Second line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passportCodeSecond Second line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetPassportCodeSecond(const std::string& _passportCodeSecond);

                    /**
                     * 判断参数 PassportCodeSecond 是否已赋值
                     * @return PassportCodeSecond 是否已赋值
                     * @deprecated
                     */
                    bool PassportCodeSecondHasBeenSet() const;

                    /**
                     * 获取Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DueDate Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dueDate Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetDueDate(const std::string& _dueDate);

                    /**
                     * 判断参数 DueDate 是否已赋值
                     * @return DueDate 是否已赋值
                     * @deprecated
                     */
                    bool DueDateHasBeenSet() const;

                    /**
                     * 获取Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Age Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetAge() const;

                    /**
                     * 设置Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _age Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * @deprecated
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistrationNumber Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registrationNumber Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetRegistrationNumber(const std::string& _registrationNumber);

                    /**
                     * 判断参数 RegistrationNumber 是否已赋值
                     * @return RegistrationNumber 是否已赋值
                     * @deprecated
                     */
                    bool RegistrationNumberHasBeenSet() const;

                private:

                    /**
                     * ID number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Personal number. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * Full name on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Full name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullNameLocal;
                    bool m_fullNameLocalHasBeenSet;

                    /**
                     * First name or given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * First name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstNameLocal;
                    bool m_firstNameLocalHasBeenSet;

                    /**
                     * Middle name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Middle name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_middleNameLocal;
                    bool m_middleNameLocalHasBeenSet;

                    /**
                     * Last name or surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Last name in local language.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastNameLocal;
                    bool m_lastNameLocalHasBeenSet;

                    /**
                     * Gender on the document.
- M: man.
- F: woman.
- X: other gender identity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of birth.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Birth place.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * Issue date.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Issuing authority.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * Place of issue.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedPlace;
                    bool m_issuedPlaceHasBeenSet;

                    /**
                     * Issuing country.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * Country code of issue, ISO Alpha-3 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedCountryCode;
                    bool m_issuedCountryCodeHasBeenSet;

                    /**
                     * Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * First line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mRZLine1;
                    bool m_mRZLine1HasBeenSet;

                    /**
                     * Second line of the Machine Readable Zone (MRZ).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mRZLine2;
                    bool m_mRZLine2HasBeenSet;

                    /**
                     * Document nationality, following ISO 3166 country coding specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Address information on the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AddressInfo m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Religion (if displayed on the document).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * Type of document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Blood type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bloodType;
                    bool m_bloodTypeHasBeenSet;

                    /**
                     * Height.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Vehicle class authorized on the driver license (e.g., A, B, C).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vehicleClass;
                    bool m_vehicleClassHasBeenSet;

                    /**
                     * Restrictions on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restrictions;
                    bool m_restrictionsHasBeenSet;

                    /**
                     * Endorsements or additional records on the driver license.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endorsement;
                    bool m_endorsementHasBeenSet;

                    /**
                     * Supplementary fields (varies by document type).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * First line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * Second line of the passport MRZ (Machine Readable Zone).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                    /**
                     * Expiry date.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * Age. 0 means no valid info.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * Registration number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_
