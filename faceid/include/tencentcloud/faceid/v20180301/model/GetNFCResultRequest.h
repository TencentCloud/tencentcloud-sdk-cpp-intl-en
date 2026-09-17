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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETNFCRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETNFCRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GetNFCResult request structure.
                */
                class GetNFCResultRequest : public AbstractModel
                {
                public:
                    GetNFCResultRequest();
                    ~GetNFCResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID returned by the frontend NFC SDK
                     * @return NFCToken Unique ID returned by the frontend NFC SDK
                     * 
                     */
                    std::string GetNFCToken() const;

                    /**
                     * 设置Unique ID returned by the frontend NFC SDK
                     * @param _nFCToken Unique ID returned by the frontend NFC SDK
                     * 
                     */
                    void SetNFCToken(const std::string& _nFCToken);

                    /**
                     * 判断参数 NFCToken 是否已赋值
                     * @return NFCToken 是否已赋值
                     * 
                     */
                    bool NFCTokenHasBeenSet() const;

                    /**
                     * 获取Identity card number / passport number / Hong Kong, China and Macao, China travel permit
                     * @return IdNum Identity card number / passport number / Hong Kong, China and Macao, China travel permit
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 设置Identity card number / passport number / Hong Kong, China and Macao, China travel permit
                     * @param _idNum Identity card number / passport number / Hong Kong, China and Macao, China travel permit
                     * 
                     */
                    void SetIdNum(const std::string& _idNum);

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Base64 value of the portrait photo
                     * @return Picture Base64 value of the portrait photo
                     * 
                     */
                    std::string GetPicture() const;

                    /**
                     * 设置Base64 value of the portrait photo
                     * @param _picture Base64 value of the portrait photo
                     * 
                     */
                    void SetPicture(const std::string& _picture);

                    /**
                     * 判断参数 Picture 是否已赋值
                     * @return Picture 是否已赋值
                     * 
                     */
                    bool PictureHasBeenSet() const;

                    /**
                     * 获取Date of birth (format: YYYYMMDD)
                     * @return BirthDate Date of birth (format: YYYYMMDD)
                     * 
                     */
                    std::string GetBirthDate() const;

                    /**
                     * 设置Date of birth (format: YYYYMMDD)
                     * @param _birthDate Date of birth (format: YYYYMMDD)
                     * 
                     */
                    void SetBirthDate(const std::string& _birthDate);

                    /**
                     * 判断参数 BirthDate 是否已赋值
                     * @return BirthDate 是否已赋值
                     * 
                     */
                    bool BirthDateHasBeenSet() const;

                    /**
                     * 获取Validity start time of the document (format: YYYYMMDD)
                     * @return BeginTime Validity start time of the document (format: YYYYMMDD)
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Validity start time of the document (format: YYYYMMDD)
                     * @param _beginTime Validity start time of the document (format: YYYYMMDD)
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Document validity end time (format: YYYYMMDD)
                     * @return EndTime Document validity end time (format: YYYYMMDD)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Document validity end time (format: YYYYMMDD)
                     * @param _endTime Document validity end time (format: YYYYMMDD)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
                     * @param _address Address
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Ethnicity
                     * @return Nation Ethnicity
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 设置Ethnicity
                     * @param _nation Ethnicity
                     * 
                     */
                    void SetNation(const std::string& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

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
                     * 获取English name
                     * @return EnName English name
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置English name
                     * @param _enName English name
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取Issuing authority
                     * @return SigningOrganization Issuing authority
                     * 
                     */
                    std::string GetSigningOrganization() const;

                    /**
                     * 设置Issuing authority
                     * @param _signingOrganization Issuing authority
                     * 
                     */
                    void SetSigningOrganization(const std::string& _signingOrganization);

                    /**
                     * 判断参数 SigningOrganization 是否已赋值
                     * @return SigningOrganization 是否已赋值
                     * 
                     */
                    bool SigningOrganizationHasBeenSet() const;

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
                     * 获取Country code
                     * @return CountryCode Country code
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Country code
                     * @param _countryCode Country code
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Machine-readable code of the passport
                     * @return MachineReadCode Machine-readable code of the passport
                     * 
                     */
                    std::string GetMachineReadCode() const;

                    /**
                     * 设置Machine-readable code of the passport
                     * @param _machineReadCode Machine-readable code of the passport
                     * 
                     */
                    void SetMachineReadCode(const std::string& _machineReadCode);

                    /**
                     * 判断参数 MachineReadCode 是否已赋值
                     * @return MachineReadCode 是否已赋值
                     * 
                     */
                    bool MachineReadCodeHasBeenSet() const;

                private:

                    /**
                     * Unique ID returned by the frontend NFC SDK
                     */
                    std::string m_nFCToken;
                    bool m_nFCTokenHasBeenSet;

                    /**
                     * Identity card number / passport number / Hong Kong, China and Macao, China travel permit
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Base64 value of the portrait photo
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * Date of birth (format: YYYYMMDD)
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * Validity start time of the document (format: YYYYMMDD)
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Document validity end time (format: YYYYMMDD)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Ethnicity
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Issuing authority
                     */
                    std::string m_signingOrganization;
                    bool m_signingOrganizationHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Country code
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Machine-readable code of the passport
                     */
                    std::string m_machineReadCode;
                    bool m_machineReadCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETNFCRESULTREQUEST_H_
