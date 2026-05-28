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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTRESPONSE_H_

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
                * GetWxNFCResult response structure.
                */
                class GetWxNFCResultResponse : public AbstractModel
                {
                public:
                    GetWxNFCResultResponse();
                    ~GetWxNFCResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NFC billing result code. Each successful NFC read is billed once (duplicate billing does not occur for repeated pull of the same NFC request). Permissible range of billing result codes:<br>  0: Read successful, billed<br>-1: Read fail, free of charge</p>
                     * @return ResultCode <p>NFC billing result code. Each successful NFC read is billed once (duplicate billing does not occur for repeated pull of the same NFC request). Permissible range of billing result codes:<br>  0: Read successful, billed<br>-1: Read fail, free of charge</p>
                     * 
                     */
                    std::string GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdNum <p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取<p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name <p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Portrait photo in the document</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Picture <p>Portrait photo in the document</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPicture() const;

                    /**
                     * 判断参数 Picture 是否已赋值
                     * @return Picture 是否已赋值
                     * 
                     */
                    bool PictureHasBeenSet() const;

                    /**
                     * 获取<p>Front photo of the identity document (portrait side)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdCardFrontImg <p>Front photo of the identity document (portrait side)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdCardFrontImg() const;

                    /**
                     * 判断参数 IdCardFrontImg 是否已赋值
                     * @return IdCardFrontImg 是否已赋值
                     * 
                     */
                    bool IdCardFrontImgHasBeenSet() const;

                    /**
                     * 获取<p>Photo of the back of an identity document (national emblem side)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdCardBackImg <p>Photo of the back of an identity document (national emblem side)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdCardBackImg() const;

                    /**
                     * 判断参数 IdCardBackImg 是否已赋值
                     * @return IdCardBackImg 是否已赋值
                     * 
                     */
                    bool IdCardBackImgHasBeenSet() const;

                    /**
                     * 获取<p>Date of birth</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BirthDate <p>Date of birth</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthDate() const;

                    /**
                     * 判断参数 BirthDate 是否已赋值
                     * @return BirthDate 是否已赋值
                     * 
                     */
                    bool BirthDateHasBeenSet() const;

                    /**
                     * 获取<p>Validity start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginTime <p>Validity start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Validity end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime <p>Validity end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nation <p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取<p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex <p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取<p>Document type</p><p>Enumeration value:</p><ul><li>01: ID card</li><li>03: Chinese passport</li><li>06: Hong Kong and Macau travel permit</li><li>07: Taiwan travel permit</li><li>08: Foreign passport</li><li>13: Permanent residence permit for foreigners</li><li>14: Residence Permit for Hong Kong (China), Macao (China), and Taiwan (China) residents</li><li>15: Return Home Permit</li><li>16: Travel permit for Chinese mainland residents to Taiwan (China)</li><li>99: Other documents</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdType <p>Document type</p><p>Enumeration value:</p><ul><li>01: ID card</li><li>03: Chinese passport</li><li>06: Hong Kong and Macau travel permit</li><li>07: Taiwan travel permit</li><li>08: Foreign passport</li><li>13: Permanent residence permit for foreigners</li><li>14: Residence Permit for Hong Kong (China), Macao (China), and Taiwan (China) residents</li><li>15: Return Home Permit</li><li>16: Travel permit for Chinese mainland residents to Taiwan (China)</li><li>99: Other documents</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取<p>English name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnName <p>English name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取<p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SigningOrganization <p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSigningOrganization() const;

                    /**
                     * 判断参数 SigningOrganization 是否已赋值
                     * @return SigningOrganization 是否已赋值
                     * 
                     */
                    bool SigningOrganizationHasBeenSet() const;

                    /**
                     * 获取<p>Residence Permit for residents of Hong Kong (China), Macao (China) and Taiwan (China), passport number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OtherIdNum <p>Residence Permit for residents of Hong Kong (China), Macao (China) and Taiwan (China), passport number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOtherIdNum() const;

                    /**
                     * 判断参数 OtherIdNum 是否已赋值
                     * @return OtherIdNum 是否已赋值
                     * 
                     */
                    bool OtherIdNumHasBeenSet() const;

                    /**
                     * 获取<p>Travel document nationality</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality <p>Travel document nationality</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取<p>Characters 29 to 42 in the second line of the machine-readable zone of the travel document</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PersonalNumber <p>Characters 29 to 42 in the second line of the machine-readable zone of the travel document</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 判断参数 PersonalNumber 是否已赋值
                     * @return PersonalNumber 是否已赋值
                     * 
                     */
                    bool PersonalNumberHasBeenSet() const;

                    /**
                     * 获取<p>Verification result of the document</p><ul><li>JSON format as follows: {"result_issuer":"issuer certificate legitimacy verification result","result_paper":"Document security object legitimacy verification result","result_data":"data tampering prevention verification result","result_chip":"chip replication prevention verification result"}. - Value ranges from 0 to 3: 0: verified, 1: verification failed, 2: unverified, 3: partially passed. When all four verification results are 0, it means the document is genuine.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckMRTD <p>Verification result of the document</p><ul><li>JSON format as follows: {"result_issuer":"issuer certificate legitimacy verification result","result_paper":"Document security object legitimacy verification result","result_data":"data tampering prevention verification result","result_chip":"chip replication prevention verification result"}. - Value ranges from 0 to 3: 0: verified, 1: verification failed, 2: unverified, 3: partially passed. When all four verification results are 0, it means the document is genuine.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCheckMRTD() const;

                    /**
                     * 判断参数 CheckMRTD 是否已赋值
                     * @return CheckMRTD 是否已赋值
                     * 
                     */
                    bool CheckMRTDHasBeenSet() const;

                private:

                    /**
                     * <p>NFC billing result code. Each successful NFC read is billed once (duplicate billing does not occur for repeated pull of the same NFC request). Permissible range of billing result codes:<br>  0: Read successful, billed<br>-1: Read fail, free of charge</p>
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * <p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * <p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Portrait photo in the document</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * <p>Front photo of the identity document (portrait side)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idCardFrontImg;
                    bool m_idCardFrontImgHasBeenSet;

                    /**
                     * <p>Photo of the back of an identity document (national emblem side)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idCardBackImg;
                    bool m_idCardBackImgHasBeenSet;

                    /**
                     * <p>Date of birth</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * <p>Validity start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Validity end time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>Document type</p><p>Enumeration value:</p><ul><li>01: ID card</li><li>03: Chinese passport</li><li>06: Hong Kong and Macau travel permit</li><li>07: Taiwan travel permit</li><li>08: Foreign passport</li><li>13: Permanent residence permit for foreigners</li><li>14: Residence Permit for Hong Kong (China), Macao (China), and Taiwan (China) residents</li><li>15: Return Home Permit</li><li>16: Travel permit for Chinese mainland residents to Taiwan (China)</li><li>99: Other documents</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * <p>English name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * <p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_signingOrganization;
                    bool m_signingOrganizationHasBeenSet;

                    /**
                     * <p>Residence Permit for residents of Hong Kong (China), Macao (China) and Taiwan (China), passport number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_otherIdNum;
                    bool m_otherIdNumHasBeenSet;

                    /**
                     * <p>Travel document nationality</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>Characters 29 to 42 in the second line of the machine-readable zone of the travel document</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * <p>Verification result of the document</p><ul><li>JSON format as follows: {"result_issuer":"issuer certificate legitimacy verification result","result_paper":"Document security object legitimacy verification result","result_data":"data tampering prevention verification result","result_chip":"chip replication prevention verification result"}. - Value ranges from 0 to 3: 0: verified, 1: verification failed, 2: unverified, 3: partially passed. When all four verification results are 0, it means the document is genuine.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkMRTD;
                    bool m_checkMRTDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTRESPONSE_H_
