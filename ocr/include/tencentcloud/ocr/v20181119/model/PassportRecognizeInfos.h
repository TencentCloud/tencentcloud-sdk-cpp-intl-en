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
                * Information Section Content.
                */
                class PassportRecognizeInfos : public AbstractModel
                {
                public:
                    PassportRecognizeInfos();
                    ~PassportRecognizeInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Document Type (Passport Information Page Recognition Result).
                     * @return Type Document Type (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Document Type (Passport Information Page Recognition Result).
                     * @param _type Document Type (Passport Information Page Recognition Result).
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
                     * 获取Issuing Country (Passport Information Page Recognition Result).
                     * @return IssuingCountry Issuing Country (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置Issuing Country (Passport Information Page Recognition Result).
                     * @param _issuingCountry Issuing Country (Passport Information Page Recognition Result).
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
                     * 获取Passport Number (Passport Information Page Recognition Result).
                     * @return PassportID Passport Number (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetPassportID() const;

                    /**
                     * 设置Passport Number (Passport Information Page Recognition Result).
                     * @param _passportID Passport Number (Passport Information Page Recognition Result).
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
                     * 获取Surname (Passport Information Page Recognition Result).
                     * @return Surname Surname (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置Surname (Passport Information Page Recognition Result).
                     * @param _surname Surname (Passport Information Page Recognition Result).
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
                     * 获取Given Name (Passport Information Page Recognition Result).
                     * @return GivenName Given Name (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置Given Name (Passport Information Page Recognition Result).
                     * @param _givenName Given Name (Passport Information Page Recognition Result).
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
                     * 获取Full Name (Passport Information Page Recognition Result).
                     * @return Name Full Name (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Full Name (Passport Information Page Recognition Result).
                     * @param _name Full Name (Passport Information Page Recognition Result).
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
                     * 获取Nationality Information (Passport Information Page Recognition Result).
                     * @return Nationality Nationality Information (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality Information (Passport Information Page Recognition Result).
                     * @param _nationality Nationality Information (Passport Information Page Recognition Result).
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
                     * 获取Date of Birth (Passport Information Page Recognition Result).
                     * @return DateOfBirth Date of Birth (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置Date of Birth (Passport Information Page Recognition Result).
                     * @param _dateOfBirth Date of Birth (Passport Information Page Recognition Result).
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
                     * 获取Gender (Passport Information Page Recognition Result).
                     * @return Sex Gender (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender (Passport Information Page Recognition Result).
                     * @param _sex Gender (Passport Information Page Recognition Result).
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
                     * 获取Date of Issue (Passport Information Page Recognition Result).
                     * @return DateOfIssuance Date of Issue (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetDateOfIssuance() const;

                    /**
                     * 设置Date of Issue (Passport Information Page Recognition Result).
                     * @param _dateOfIssuance Date of Issue (Passport Information Page Recognition Result).
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
                     * 获取Expiry Date (Passport Information Page Recognition Result).
                     * @return DateOfExpiration Expiry Date (Passport Information Page Recognition Result).
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置Expiry Date (Passport Information Page Recognition Result).
                     * @param _dateOfExpiration Expiry Date (Passport Information Page Recognition Result).
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
                     * 获取Cardholder Signature (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * @return Signature Cardholder Signature (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置Cardholder Signature (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * @param _signature Cardholder Signature (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
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
                     * 获取Place of Issue (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * @return IssuePlace Place of Issue (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * 
                     */
                    std::string GetIssuePlace() const;

                    /**
                     * 设置Place of Issue (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * @param _issuePlace Place of Issue (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
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
                     * 获取Issuing Authority (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * @return IssuingAuthority Issuing Authority (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置Issuing Authority (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * @param _issuingAuthority Issuing Authority (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     * 
                     */
                    void SetIssuingAuthority(const std::string& _issuingAuthority);

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     * 
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                private:

                    /**
                     * Document Type (Passport Information Page Recognition Result).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Issuing Country (Passport Information Page Recognition Result).
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * Passport Number (Passport Information Page Recognition Result).
                     */
                    std::string m_passportID;
                    bool m_passportIDHasBeenSet;

                    /**
                     * Surname (Passport Information Page Recognition Result).
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * Given Name (Passport Information Page Recognition Result).
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Full Name (Passport Information Page Recognition Result).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Nationality Information (Passport Information Page Recognition Result).
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Date of Birth (Passport Information Page Recognition Result).
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * Gender (Passport Information Page Recognition Result).
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of Issue (Passport Information Page Recognition Result).
                     */
                    std::string m_dateOfIssuance;
                    bool m_dateOfIssuanceHasBeenSet;

                    /**
                     * Expiry Date (Passport Information Page Recognition Result).
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Cardholder Signature (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * Place of Issue (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     */
                    std::string m_issuePlace;
                    bool m_issuePlaceHasBeenSet;

                    /**
                     * Issuing Authority (Passport Information Page Recognition Result)

This field is only supported for Chinese mainland passports and not available for Hong Kong (China), Macao (China), and Taiwan (China) passports or foreign passports.
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
