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
                * General card certificate information
                */
                class GeneralCard : public AbstractModel
                {
                public:
                    GeneralCard();
                    ~GeneralCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID number</p>
                     * @return LicenseNumber <p>ID number</p>
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置<p>ID number</p>
                     * @param _licenseNumber <p>ID number</p>
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
                     * 获取<p>Personal number, returned when the identity document type is passport</p>
                     * @return PersonalNumber <p>Personal number, returned when the identity document type is passport</p>
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 设置<p>Personal number, returned when the identity document type is passport</p>
                     * @param _personalNumber <p>Personal number, returned when the identity document type is passport</p>
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
                     * 获取<p>Name</p>
                     * @return FullName <p>Name</p>
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置<p>Name</p>
                     * @param _fullName <p>Name</p>
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
                     * 获取<p>Localized name</p>
                     * @return FullNameLocal <p>Localized name</p>
                     * 
                     */
                    std::string GetFullNameLocal() const;

                    /**
                     * 设置<p>Localized name</p>
                     * @param _fullNameLocal <p>Localized name</p>
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
                     * 获取<p>Name</p>
                     * @return FirstName <p>Name</p>
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置<p>Name</p>
                     * @param _firstName <p>Name</p>
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
                     * 获取<p>Localized name</p>
                     * @return FirstNameLocal <p>Localized name</p>
                     * 
                     */
                    std::string GetFirstNameLocal() const;

                    /**
                     * 设置<p>Localized name</p>
                     * @param _firstNameLocal <p>Localized name</p>
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
                     * 获取<p>Middle name</p>
                     * @return MiddleName <p>Middle name</p>
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置<p>Middle name</p>
                     * @param _middleName <p>Middle name</p>
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
                     * 获取<p>Localized middle name</p>
                     * @return MiddleNameLocal <p>Localized middle name</p>
                     * 
                     */
                    std::string GetMiddleNameLocal() const;

                    /**
                     * 设置<p>Localized middle name</p>
                     * @param _middleNameLocal <p>Localized middle name</p>
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
                     * 获取<p>Last name</p>
                     * @return LastName <p>Last name</p>
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置<p>Last name</p>
                     * @param _lastName <p>Last name</p>
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
                     * 获取<p>Localized last name</p>
                     * @return LastNameLocal <p>Localized last name</p>
                     * 
                     */
                    std::string GetLastNameLocal() const;

                    /**
                     * 设置<p>Localized last name</p>
                     * @param _lastNameLocal <p>Localized last name</p>
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
                     * 获取<p>Gender on the document</p><ul><li>M: man</li><li>F: woman</li><li>X: other gender identity</li></ul>
                     * @return Sex <p>Gender on the document</p><ul><li>M: man</li><li>F: woman</li><li>X: other gender identity</li></ul>
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置<p>Gender on the document</p><ul><li>M: man</li><li>F: woman</li><li>X: other gender identity</li></ul>
                     * @param _sex <p>Gender on the document</p><ul><li>M: man</li><li>F: woman</li><li>X: other gender identity</li></ul>
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
                     * 获取<p>Date of birth</p>
                     * @return Birthday <p>Date of birth</p>
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置<p>Date of birth</p>
                     * @param _birthday <p>Date of birth</p>
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
                     * 获取<p>Birth place</p>
                     * @return BirthPlace <p>Birth place</p>
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置<p>Birth place</p>
                     * @param _birthPlace <p>Birth place</p>
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
                     * 获取<p>Issue date, in YYYY-MM-DD format</p>
                     * @return IssuedDate <p>Issue date, in YYYY-MM-DD format</p>
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置<p>Issue date, in YYYY-MM-DD format</p>
                     * @param _issuedDate <p>Issue date, in YYYY-MM-DD format</p>
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
                     * 获取<p>Issuing authority</p>
                     * @return IssuedAuthority <p>Issuing authority</p>
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 设置<p>Issuing authority</p>
                     * @param _issuedAuthority <p>Issuing authority</p>
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
                     * 获取<p>Place where the specified file is issued</p>
                     * @return IssuedPlace <p>Place where the specified file is issued</p>
                     * 
                     */
                    std::string GetIssuedPlace() const;

                    /**
                     * 设置<p>Place where the specified file is issued</p>
                     * @param _issuedPlace <p>Place where the specified file is issued</p>
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
                     * 获取<p>Issuing country</p>
                     * @return IssuedCountry <p>Issuing country</p>
                     * 
                     */
                    std::string GetIssuedCountry() const;

                    /**
                     * 设置<p>Issuing country</p>
                     * @param _issuedCountry <p>Issuing country</p>
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
                     * 获取<p>Country code of the country that issued the file, ISO ALPHA-3 country/region code</p>
                     * @return IssuedCountryCode <p>Country code of the country that issued the file, ISO ALPHA-3 country/region code</p>
                     * 
                     */
                    std::string GetIssuedCountryCode() const;

                    /**
                     * 设置<p>Country code of the country that issued the file, ISO ALPHA-3 country/region code</p>
                     * @param _issuedCountryCode <p>Country code of the country that issued the file, ISO ALPHA-3 country/region code</p>
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
                     * 获取<p>Expiration date, in YYYY-MM-DD format</p>
                     * @return ExpirationDate <p>Expiration date, in YYYY-MM-DD format</p>
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置<p>Expiration date, in YYYY-MM-DD format</p>
                     * @param _expirationDate <p>Expiration date, in YYYY-MM-DD format</p>
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
                     * 获取<p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the order in which the line appears in the MRZ</p>
                     * @return MRZLine1 <p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the order in which the line appears in the MRZ</p>
                     * 
                     */
                    std::string GetMRZLine1() const;

                    /**
                     * 设置<p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the order in which the line appears in the MRZ</p>
                     * @param _mRZLine1 <p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the order in which the line appears in the MRZ</p>
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
                     * 获取<p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the line count in the order of the MRZ</p>
                     * @return MRZLine2 <p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the line count in the order of the MRZ</p>
                     * 
                     */
                    std::string GetMRZLine2() const;

                    /**
                     * 设置<p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the line count in the order of the MRZ</p>
                     * @param _mRZLine2 <p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the line count in the order of the MRZ</p>
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
                     * 获取<p>Document nationality, returned following the ISO 3166 country coding specification</p>
                     * @return Nationality <p>Document nationality, returned following the ISO 3166 country coding specification</p>
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置<p>Document nationality, returned following the ISO 3166 country coding specification</p>
                     * @param _nationality <p>Document nationality, returned following the ISO 3166 country coding specification</p>
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
                     * 获取<p>Address information on the document</p>
                     * @return Address <p>Address information on the document</p>
                     * 
                     */
                    AddressInfo GetAddress() const;

                    /**
                     * 设置<p>Address information on the document</p>
                     * @param _address <p>Address information on the document</p>
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
                     * 获取<p>Religious belief</p>
                     * @return Religion <p>Religious belief</p>
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 设置<p>Religious belief</p>
                     * @param _religion <p>Religious belief</p>
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
                     * 获取<p>Document type</p>
                     * @return Type <p>Document type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Document type</p>
                     * @param _type <p>Document type</p>
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
                     * 获取<p>Blood type</p>
                     * @return BloodType <p>Blood type</p>
                     * 
                     */
                    std::string GetBloodType() const;

                    /**
                     * 设置<p>Blood type</p>
                     * @param _bloodType <p>Blood type</p>
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
                     * 获取<p>Height</p>
                     * @return Height <p>Height</p>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置<p>Height</p>
                     * @param _height <p>Height</p>
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
                     * 获取<p>Weight</p>
                     * @return Weight <p>Weight</p>
                     * 
                     */
                    std::string GetWeight() const;

                    /**
                     * 设置<p>Weight</p>
                     * @param _weight <p>Weight</p>
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
                     * 获取<p>Driver's license vehicle type (for example, A/B/C)</p>
                     * @return VehicleClass <p>Driver's license vehicle type (for example, A/B/C)</p>
                     * 
                     */
                    std::string GetVehicleClass() const;

                    /**
                     * 设置<p>Driver's license vehicle type (for example, A/B/C)</p>
                     * @param _vehicleClass <p>Driver's license vehicle type (for example, A/B/C)</p>
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
                     * 获取<p>Driver's license restriction condition</p>
                     * @return Restrictions <p>Driver's license restriction condition</p>
                     * 
                     */
                    std::string GetRestrictions() const;

                    /**
                     * 设置<p>Driver's license restriction condition</p>
                     * @param _restrictions <p>Driver's license restriction condition</p>
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
                     * 获取<p>Driver's license extra records</p>
                     * @return Endorsement <p>Driver's license extra records</p>
                     * 
                     */
                    std::string GetEndorsement() const;

                    /**
                     * 设置<p>Driver's license extra records</p>
                     * @param _endorsement <p>Driver's license extra records</p>
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
                     * 获取<p>Additional field</p>
                     * @return Others <p>Additional field</p>
                     * 
                     */
                    std::string GetOthers() const;

                    /**
                     * 设置<p>Additional field</p>
                     * @param _others <p>Additional field</p>
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
                     * 获取<p>MRZ line 1 of the passport</p>
                     * @return PassportCodeFirst <p>MRZ line 1 of the passport</p>
                     * @deprecated
                     */
                    std::string GetPassportCodeFirst() const;

                    /**
                     * 设置<p>MRZ line 1 of the passport</p>
                     * @param _passportCodeFirst <p>MRZ line 1 of the passport</p>
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
                     * 获取<p>MRZ line 2 of the passport</p>
                     * @return PassportCodeSecond <p>MRZ line 2 of the passport</p>
                     * @deprecated
                     */
                    std::string GetPassportCodeSecond() const;

                    /**
                     * 设置<p>MRZ line 2 of the passport</p>
                     * @param _passportCodeSecond <p>MRZ line 2 of the passport</p>
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
                     * 获取<p>Validity date, in YYYY-MM-DD format</p>
                     * @return DueDate <p>Validity date, in YYYY-MM-DD format</p>
                     * @deprecated
                     */
                    std::string GetDueDate() const;

                    /**
                     * 设置<p>Validity date, in YYYY-MM-DD format</p>
                     * @param _dueDate <p>Validity date, in YYYY-MM-DD format</p>
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
                     * 获取<p>Age. 0 means no valid info is obtained</p>
                     * @return Age <p>Age. 0 means no valid info is obtained</p>
                     * @deprecated
                     */
                    std::string GetAge() const;

                    /**
                     * 设置<p>Age. 0 means no valid info is obtained</p>
                     * @param _age <p>Age. 0 means no valid info is obtained</p>
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
                     * 获取<p>Registration number</p>
                     * @return RegistrationNumber <p>Registration number</p>
                     * @deprecated
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置<p>Registration number</p>
                     * @param _registrationNumber <p>Registration number</p>
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
                     * <p>ID number</p>
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * <p>Personal number, returned when the identity document type is passport</p>
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * <p>Name</p>
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * <p>Localized name</p>
                     */
                    std::string m_fullNameLocal;
                    bool m_fullNameLocalHasBeenSet;

                    /**
                     * <p>Name</p>
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * <p>Localized name</p>
                     */
                    std::string m_firstNameLocal;
                    bool m_firstNameLocalHasBeenSet;

                    /**
                     * <p>Middle name</p>
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * <p>Localized middle name</p>
                     */
                    std::string m_middleNameLocal;
                    bool m_middleNameLocalHasBeenSet;

                    /**
                     * <p>Last name</p>
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * <p>Localized last name</p>
                     */
                    std::string m_lastNameLocal;
                    bool m_lastNameLocalHasBeenSet;

                    /**
                     * <p>Gender on the document</p><ul><li>M: man</li><li>F: woman</li><li>X: other gender identity</li></ul>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>Date of birth</p>
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * <p>Birth place</p>
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * <p>Issue date, in YYYY-MM-DD format</p>
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * <p>Issuing authority</p>
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * <p>Place where the specified file is issued</p>
                     */
                    std::string m_issuedPlace;
                    bool m_issuedPlaceHasBeenSet;

                    /**
                     * <p>Issuing country</p>
                     */
                    std::string m_issuedCountry;
                    bool m_issuedCountryHasBeenSet;

                    /**
                     * <p>Country code of the country that issued the file, ISO ALPHA-3 country/region code</p>
                     */
                    std::string m_issuedCountryCode;
                    bool m_issuedCountryCodeHasBeenSet;

                    /**
                     * <p>Expiration date, in YYYY-MM-DD format</p>
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * <p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the order in which the line appears in the MRZ</p>
                     */
                    std::string m_mRZLine1;
                    bool m_mRZLine1HasBeenSet;

                    /**
                     * <p>Content of the single-line machine-readable zone (MRZ) on the document. The number represents the line count in the order of the MRZ</p>
                     */
                    std::string m_mRZLine2;
                    bool m_mRZLine2HasBeenSet;

                    /**
                     * <p>Document nationality, returned following the ISO 3166 country coding specification</p>
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>Address information on the document</p>
                     */
                    AddressInfo m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Religious belief</p>
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * <p>Document type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Blood type</p>
                     */
                    std::string m_bloodType;
                    bool m_bloodTypeHasBeenSet;

                    /**
                     * <p>Height</p>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Weight</p>
                     */
                    std::string m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>Driver's license vehicle type (for example, A/B/C)</p>
                     */
                    std::string m_vehicleClass;
                    bool m_vehicleClassHasBeenSet;

                    /**
                     * <p>Driver's license restriction condition</p>
                     */
                    std::string m_restrictions;
                    bool m_restrictionsHasBeenSet;

                    /**
                     * <p>Driver's license extra records</p>
                     */
                    std::string m_endorsement;
                    bool m_endorsementHasBeenSet;

                    /**
                     * <p>Additional field</p>
                     */
                    std::string m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * <p>MRZ line 1 of the passport</p>
                     */
                    std::string m_passportCodeFirst;
                    bool m_passportCodeFirstHasBeenSet;

                    /**
                     * <p>MRZ line 2 of the passport</p>
                     */
                    std::string m_passportCodeSecond;
                    bool m_passportCodeSecondHasBeenSet;

                    /**
                     * <p>Validity date, in YYYY-MM-DD format</p>
                     */
                    std::string m_dueDate;
                    bool m_dueDateHasBeenSet;

                    /**
                     * <p>Age. 0 means no valid info is obtained</p>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>Registration number</p>
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARD_H_
