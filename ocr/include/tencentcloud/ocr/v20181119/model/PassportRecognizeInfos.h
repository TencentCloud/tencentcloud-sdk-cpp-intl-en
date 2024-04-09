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
                * 
                */
                class PassportRecognizeInfos : public AbstractModel
                {
                public:
                    PassportRecognizeInfos();
                    ~PassportRecognizeInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return IssuingCountry 
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 设置
                     * @param _issuingCountry 
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
                     * 获取
                     * @return PassportID 
                     * 
                     */
                    std::string GetPassportID() const;

                    /**
                     * 设置
                     * @param _passportID 
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
                     * 获取
                     * @return Surname 
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置
                     * @param _surname 
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
                     * 获取
                     * @return GivenName 
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置
                     * @param _givenName 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Nationality 
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置
                     * @param _nationality 
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
                     * 获取
                     * @return DateOfBirth 
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置
                     * @param _dateOfBirth 
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
                     * 获取
                     * @return Sex 
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置
                     * @param _sex 
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
                     * 获取
                     * @return DateOfIssuance 
                     * 
                     */
                    std::string GetDateOfIssuance() const;

                    /**
                     * 设置
                     * @param _dateOfIssuance 
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
                     * 获取
                     * @return DateOfExpiration 
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 设置
                     * @param _dateOfExpiration 
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
                     * 获取
                     * @return Signature 
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置
                     * @param _signature 
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
                     * 获取
                     * @return IssuePlace 
                     * 
                     */
                    std::string GetIssuePlace() const;

                    /**
                     * 设置
                     * @param _issuePlace 
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
                     * 获取
                     * @return IssuingAuthority 
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置
                     * @param _issuingAuthority 
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
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_passportID;
                    bool m_passportIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dateOfIssuance;
                    bool m_dateOfIssuanceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_issuePlace;
                    bool m_issuePlaceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSPORTRECOGNIZEINFOS_H_
