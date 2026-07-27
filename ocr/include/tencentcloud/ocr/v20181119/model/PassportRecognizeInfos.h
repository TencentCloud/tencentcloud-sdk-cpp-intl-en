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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Passport Information Page Content
                */
                class PassportRecognizeInfos : public AbstractModel
                {
                public:
                    PassportRecognizeInfos();
                    ~PassportRecognizeInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Document type, obtained from passport visual zone
                     * @return Type Document type, obtained from passport visual zone
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Document type, obtained from passport visual zone
                     * @param _type Document type, obtained from passport visual zone
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
                     * 获取Issuing country, obtained from passport visual zone
                     * @return IssuingCountry Issuing country, obtained from passport visual zone
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置Issuing country, obtained from passport visual zone
                     * @param _issuingCountry Issuing country, obtained from passport visual zone
                     * 
                     */
                    void SetIssuingCountry(const std::string& _issuingCountry);

                    /**
                     * 判断参数 IssuingCountry 是否已赋值
                     * @return IssuingCountry 是否已赋值
                     * 
                     */
                    bool IssuingCountryHasBeenSet() const;

                    /**
                     * 获取Unique serial number / identification number of the passport, obtained from passport visual zone
                     * @return PassportID Unique serial number / identification number of the passport, obtained from passport visual zone
                     * 
                     */
                    std::string GetPassportID() const;

                    /**
                     * 设置Unique serial number / identification number of the passport, obtained from passport visual zone
                     * @param _passportID Unique serial number / identification number of the passport, obtained from passport visual zone
                     * 
                     */
                    void SetPassportID(const std::string& _passportID);

                    /**
                     * 判断参数 PassportID 是否已赋值
                     * @return PassportID 是否已赋值
                     * 
                     */
                    bool PassportIDHasBeenSet() const;

                    /**
                     * 获取Last name, obtained from passport visual zone
                     * @return Surname Last name, obtained from passport visual zone
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置Last name, obtained from passport visual zone
                     * @param _surname Last name, obtained from passport visual zone
                     * 
                     */
                    void SetSurname(const std::string& _surname);

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取First name, obtained from passport visual zone
                     * @return GivenName First name, obtained from passport visual zone
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置First name, obtained from passport visual zone
                     * @param _givenName First name, obtained from passport visual zone
                     * 
                     */
                    void SetGivenName(const std::string& _givenName);

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

                    /**
                     * 获取Full name, obtained from passport visual zone
                     * @return Name Full name, obtained from passport visual zone
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Full name, obtained from passport visual zone
                     * @param _name Full name, obtained from passport visual zone
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Nationality, obtained from passport visual zone
                     * @return Nationality Nationality, obtained from passport visual zone
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality, obtained from passport visual zone
                     * @param _nationality Nationality, obtained from passport visual zone
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
                     * 获取Date of birth, obtained from passport visual zone
                     * @return DateOfBirth Date of birth, obtained from passport visual zone
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置Date of birth, obtained from passport visual zone
                     * @param _dateOfBirth Date of birth, obtained from passport visual zone
                     * 
                     */
                    void SetDateOfBirth(const std::string& _dateOfBirth);

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取Gender, obtained from passport visual zone
                     * @return Sex Gender, obtained from passport visual zone
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender, obtained from passport visual zone
                     * @param _sex Gender, obtained from passport visual zone
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
                     * 获取Date of issue, obtained from passport visual zone
                     * @return DateOfIssuance Date of issue, obtained from passport visual zone
                     * 
                     */
                    std::string GetDateOfIssuance() const;

                    /**
                     * 设置Date of issue, obtained from passport visual zone
                     * @param _dateOfIssuance Date of issue, obtained from passport visual zone
                     * 
                     */
                    void SetDateOfIssuance(const std::string& _dateOfIssuance);

                    /**
                     * 判断参数 DateOfIssuance 是否已赋值
                     * @return DateOfIssuance 是否已赋值
                     * 
                     */
                    bool DateOfIssuanceHasBeenSet() const;

                    /**
                     * 获取Passport expiry date, obtained from passport visual zone
                     * @return DateOfExpiration Passport expiry date, obtained from passport visual zone
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置Passport expiry date, obtained from passport visual zone
                     * @param _dateOfExpiration Passport expiry date, obtained from passport visual zone
                     * 
                     */
                    void SetDateOfExpiration(const std::string& _dateOfExpiration);

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     * 
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取Holder's signature, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * @return Signature Holder's signature, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置Holder's signature, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * @param _signature Holder's signature, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * 
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取Place of issue, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * @return IssuePlace Place of issue, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * 
                     */
                    std::string GetIssuePlace() const;

                    /**
                     * 设置Place of issue, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * @param _issuePlace Place of issue, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     * 
                     */
                    void SetIssuePlace(const std::string& _issuePlace);

                    /**
                     * 判断参数 IssuePlace 是否已赋值
                     * @return IssuePlace 是否已赋值
                     * 
                     */
                    bool IssuePlaceHasBeenSet() const;

                    /**
                     * 获取Issuing Authority, obtained from passport visual zone
(Note: Only returned for PRC passport)

                     * @return IssuingAuthority Issuing Authority, obtained from passport visual zone
(Note: Only returned for PRC passport)

                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置Issuing Authority, obtained from passport visual zone
(Note: Only returned for PRC passport)

                     * @param _issuingAuthority Issuing Authority, obtained from passport visual zone
(Note: Only returned for PRC passport)

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
                     * 获取Place of birth, obtained from passport visual zone
                     * @return BirthPlace Place of birth, obtained from passport visual zone
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置Place of birth, obtained from passport visual zone
                     * @param _birthPlace Place of birth, obtained from passport visual zone
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
                     * 获取Passport flag, obtained from passport visual zone
                     * @return PassportFlag Passport flag, obtained from passport visual zone
                     * 
                     */
                    std::string GetPassportFlag() const;

                    /**
                     * 设置Passport flag, obtained from passport visual zone
                     * @param _passportFlag Passport flag, obtained from passport visual zone
                     * 
                     */
                    void SetPassportFlag(const std::string& _passportFlag);

                    /**
                     * 判断参数 PassportFlag 是否已赋值
                     * @return PassportFlag 是否已赋值
                     * 
                     */
                    bool PassportFlagHasBeenSet() const;

                    /**
                     * 获取Middle name, obtained from passport visual zone
                     * @return MiddleName Middle name, obtained from passport visual zone
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置Middle name, obtained from passport visual zone
                     * @param _middleName Middle name, obtained from passport visual zone
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
                     * 获取Father's name, obtained from passport visual zone
                     * @return FatherName Father's name, obtained from passport visual zone
                     * 
                     */
                    std::string GetFatherName() const;

                    /**
                     * 设置Father's name, obtained from passport visual zone
                     * @param _fatherName Father's name, obtained from passport visual zone
                     * 
                     */
                    void SetFatherName(const std::string& _fatherName);

                    /**
                     * 判断参数 FatherName 是否已赋值
                     * @return FatherName 是否已赋值
                     * 
                     */
                    bool FatherNameHasBeenSet() const;

                    /**
                     * 获取Mother's name, obtained from passport visual zone
                     * @return MotherName Mother's name, obtained from passport visual zone
                     * 
                     */
                    std::string GetMotherName() const;

                    /**
                     * 设置Mother's name, obtained from passport visual zone
                     * @param _motherName Mother's name, obtained from passport visual zone
                     * 
                     */
                    void SetMotherName(const std::string& _motherName);

                    /**
                     * 判断参数 MotherName 是否已赋值
                     * @return MotherName 是否已赋值
                     * 
                     */
                    bool MotherNameHasBeenSet() const;

                    /**
                     * 获取Title, obtained from passport visual zone
                     * @return Title Title, obtained from passport visual zone
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Title, obtained from passport visual zone
                     * @param _title Title, obtained from passport visual zone
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Name suffix, obtained from passport visual zone
                     * @return Postname Name suffix, obtained from passport visual zone
                     * 
                     */
                    std::string GetPostname() const;

                    /**
                     * 设置Name suffix, obtained from passport visual zone
                     * @param _postname Name suffix, obtained from passport visual zone
                     * 
                     */
                    void SetPostname(const std::string& _postname);

                    /**
                     * 判断参数 Postname 是否已赋值
                     * @return Postname 是否已赋值
                     * 
                     */
                    bool PostnameHasBeenSet() const;

                private:

                    /**
                     * Document type, obtained from passport visual zone
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Issuing country, obtained from passport visual zone
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * Unique serial number / identification number of the passport, obtained from passport visual zone
                     */
                    std::string m_passportID;
                    bool m_passportIDHasBeenSet;

                    /**
                     * Last name, obtained from passport visual zone
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * First name, obtained from passport visual zone
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Full name, obtained from passport visual zone
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Nationality, obtained from passport visual zone
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Date of birth, obtained from passport visual zone
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * Gender, obtained from passport visual zone
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of issue, obtained from passport visual zone
                     */
                    std::string m_dateOfIssuance;
                    bool m_dateOfIssuanceHasBeenSet;

                    /**
                     * Passport expiry date, obtained from passport visual zone
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Holder's signature, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * Place of issue, obtained from passport visual zone
(Note: Only returned for PRC passport)
                     */
                    std::string m_issuePlace;
                    bool m_issuePlaceHasBeenSet;

                    /**
                     * Issuing Authority, obtained from passport visual zone
(Note: Only returned for PRC passport)

                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * Place of birth, obtained from passport visual zone
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * Passport flag, obtained from passport visual zone
                     */
                    std::string m_passportFlag;
                    bool m_passportFlagHasBeenSet;

                    /**
                     * Middle name, obtained from passport visual zone
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Father's name, obtained from passport visual zone
                     */
                    std::string m_fatherName;
                    bool m_fatherNameHasBeenSet;

                    /**
                     * Mother's name, obtained from passport visual zone
                     */
                    std::string m_motherName;
                    bool m_motherNameHasBeenSet;

                    /**
                     * Title, obtained from passport visual zone
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Name suffix, obtained from passport visual zone
                     */
                    std::string m_postname;
                    bool m_postnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
