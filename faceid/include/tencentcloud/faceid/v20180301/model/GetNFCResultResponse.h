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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETNFCRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETNFCRESULTRESPONSE_H_

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
                * GetNFCResult response structure.
                */
                class GetNFCResultResponse : public AbstractModel
                {
                public:
                    GetNFCResultResponse();
                    ~GetNFCResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing result code. Each successful NFC read is billed once. Permissible range: 

0: Read successful, billed. 
-1: Read failed, not billed.
                     * @return ChargeCode Billing result code. Each successful NFC read is billed once. Permissible range: 

0: Read successful, billed. 
-1: Read failed, not billed.
                     * 
                     */
                    std::string GetChargeCode() const;

                    /**
                     * 判断参数 ChargeCode 是否已赋值
                     * @return ChargeCode 是否已赋值
                     * 
                     */
                    bool ChargeCodeHasBeenSet() const;

                    /**
                     * 获取Document type. Value range: 

01: ID card. 
02: Chinese passport. 
03: Hong Kong, China and Macao, China travel permit. 
99: Other document. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IdType Document type. Value range: 

01: ID card. 
02: Chinese passport. 
03: Hong Kong, China and Macao, China travel permit. 
99: Other document. 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Document verification result. The items for NFC verification are as follows:
{"result_issuer ":"Issuer certificate legitimacy verification result ","result_paper":"Document security object legitimacy verification result ","result_data" :"Data tampering prevention verification result ","result_chip" :"Document chip replication prevention verification result"} 
Value range: 0: verification passed 1: verification failed 2: unverified 3: partially passed 
When all four verification results are 0, the document is genuine.
                     * @return CheckMRTD Document verification result. The items for NFC verification are as follows:
{"result_issuer ":"Issuer certificate legitimacy verification result ","result_paper":"Document security object legitimacy verification result ","result_data" :"Data tampering prevention verification result ","result_chip" :"Document chip replication prevention verification result"} 
Value range: 0: verification passed 1: verification failed 2: unverified 3: partially passed 
When all four verification results are 0, the document is genuine.
                     * 
                     */
                    std::string GetCheckMRTD() const;

                    /**
                     * 判断参数 CheckMRTD 是否已赋值
                     * @return CheckMRTD 是否已赋值
                     * 
                     */
                    bool CheckMRTDHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in identity card number, passport number, or Hong Kong, China and Macao, China travel permit with the identity card number recognized by NFC. 

0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return IdNumCompareResult Comparison result of the passed-in identity card number, passport number, or Hong Kong, China and Macao, China travel permit with the identity card number recognized by NFC. 

0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetIdNumCompareResult() const;

                    /**
                     * 判断参数 IdNumCompareResult 是否已赋值
                     * @return IdNumCompareResult 是否已赋值
                     * 
                     */
                    bool IdNumCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in name and the name recognized by NFC.
0: Consistent
-1: Not the same
-2: NFC recognition failed, unable to compare
                     * @return NameCompareResult Comparison result of the passed-in name and the name recognized by NFC.
0: Consistent
-1: Not the same
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetNameCompareResult() const;

                    /**
                     * 判断参数 NameCompareResult 是否已赋值
                     * @return NameCompareResult 是否已赋值
                     * 
                     */
                    bool NameCompareResultHasBeenSet() const;

                    /**
                     * 获取Similarity score between the passed-in face image and the portrait photo recognized by NFC.
- Value range: [0.00, 100.00].
- It is recommended to determine the same person when the similarity is equal to or greater than 70. Customers can also self-adjust the threshold based on specific scenarios (with a threshold of 70, the false pass rate is one in a thousand; with a threshold of 80, the false pass rate is one in ten thousand).
                     * @return PictureCompareSim Similarity score between the passed-in face image and the portrait photo recognized by NFC.
- Value range: [0.00, 100.00].
- It is recommended to determine the same person when the similarity is equal to or greater than 70. Customers can also self-adjust the threshold based on specific scenarios (with a threshold of 70, the false pass rate is one in a thousand; with a threshold of 80, the false pass rate is one in ten thousand).
                     * 
                     */
                    double GetPictureCompareSim() const;

                    /**
                     * 判断参数 PictureCompareSim 是否已赋值
                     * @return PictureCompareSim 是否已赋值
                     * 
                     */
                    bool PictureCompareSimHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in face image and the portrait photo recognized by NFC. 

0: Same person (similarity equal to or greater than 70 points) 
1: Not the same person (similarity less than 70 points) 
2: Comparison failed (the input image quality is too low) 
3: Comparison failed (the input image contains no human face, an incomplete face, or multiple faces) 
4: Comparison failed (input image too large or too small) 
5: Comparison failed (NFC cannot read the portrait photo) 
6: Comparison failed (no input image data) 
7: Comparison failed (other reason)
                     * @return PictureCompareResult Comparison result of the passed-in face image and the portrait photo recognized by NFC. 

0: Same person (similarity equal to or greater than 70 points) 
1: Not the same person (similarity less than 70 points) 
2: Comparison failed (the input image quality is too low) 
3: Comparison failed (the input image contains no human face, an incomplete face, or multiple faces) 
4: Comparison failed (input image too large or too small) 
5: Comparison failed (NFC cannot read the portrait photo) 
6: Comparison failed (no input image data) 
7: Comparison failed (other reason)
                     * 
                     */
                    std::string GetPictureCompareResult() const;

                    /**
                     * 判断参数 PictureCompareResult 是否已赋值
                     * @return PictureCompareResult 是否已赋值
                     * 
                     */
                    bool PictureCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in date of birth and the date of birth recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return BirthDateCompareResult Comparison result of the passed-in date of birth and the date of birth recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetBirthDateCompareResult() const;

                    /**
                     * 判断参数 BirthDateCompareResult 是否已赋值
                     * @return BirthDateCompareResult 是否已赋值
                     * 
                     */
                    bool BirthDateCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in validity start time and the validity start time recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return BeginTimeCompareResult Comparison result of the passed-in validity start time and the validity start time recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetBeginTimeCompareResult() const;

                    /**
                     * 判断参数 BeginTimeCompareResult 是否已赋值
                     * @return BeginTimeCompareResult 是否已赋值
                     * 
                     */
                    bool BeginTimeCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in validity end time and the validity end time recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return EndTimeCompareResult Comparison result of the passed-in validity end time and the validity end time recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetEndTimeCompareResult() const;

                    /**
                     * 判断参数 EndTimeCompareResult 是否已赋值
                     * @return EndTimeCompareResult 是否已赋值
                     * 
                     */
                    bool EndTimeCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in address and the address recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return AddressCompareResult Comparison result of the passed-in address and the address recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetAddressCompareResult() const;

                    /**
                     * 判断参数 AddressCompareResult 是否已赋值
                     * @return AddressCompareResult 是否已赋值
                     * 
                     */
                    bool AddressCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in ethnicity and the ethnicity recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return NationCompareResult Comparison result of the passed-in ethnicity and the ethnicity recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetNationCompareResult() const;

                    /**
                     * 判断参数 NationCompareResult 是否已赋值
                     * @return NationCompareResult 是否已赋值
                     * 
                     */
                    bool NationCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in sex and the sex recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return SexCompareResult Comparison result of the passed-in sex and the sex recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetSexCompareResult() const;

                    /**
                     * 判断参数 SexCompareResult 是否已赋值
                     * @return SexCompareResult 是否已赋值
                     * 
                     */
                    bool SexCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in English name and the English name recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return EnNameCompareResult Comparison result of the passed-in English name and the English name recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetEnNameCompareResult() const;

                    /**
                     * 判断参数 EnNameCompareResult 是否已赋值
                     * @return EnNameCompareResult 是否已赋值
                     * 
                     */
                    bool EnNameCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in issuing authority and the issuing authority recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return SigningOrganizationCompareResult Comparison result of the passed-in issuing authority and the issuing authority recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetSigningOrganizationCompareResult() const;

                    /**
                     * 判断参数 SigningOrganizationCompareResult 是否已赋值
                     * @return SigningOrganizationCompareResult 是否已赋值
                     * 
                     */
                    bool SigningOrganizationCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in nationality and the nationality recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return NationalityCompareResult Comparison result of the passed-in nationality and the nationality recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetNationalityCompareResult() const;

                    /**
                     * 判断参数 NationalityCompareResult 是否已赋值
                     * @return NationalityCompareResult 是否已赋值
                     * 
                     */
                    bool NationalityCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in country code and the country code recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return CountryCodeCompareResult Comparison result of the passed-in country code and the country code recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetCountryCodeCompareResult() const;

                    /**
                     * 判断参数 CountryCodeCompareResult 是否已赋值
                     * @return CountryCodeCompareResult 是否已赋值
                     * 
                     */
                    bool CountryCodeCompareResultHasBeenSet() const;

                    /**
                     * 获取Comparison result of the passed-in machine-readable code and the machine-readable code recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * @return MachineReadCodeCompareResult Comparison result of the passed-in machine-readable code and the machine-readable code recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     * 
                     */
                    std::string GetMachineReadCodeCompareResult() const;

                    /**
                     * 判断参数 MachineReadCodeCompareResult 是否已赋值
                     * @return MachineReadCodeCompareResult 是否已赋值
                     * 
                     */
                    bool MachineReadCodeCompareResultHasBeenSet() const;

                private:

                    /**
                     * Billing result code. Each successful NFC read is billed once. Permissible range: 

0: Read successful, billed. 
-1: Read failed, not billed.
                     */
                    std::string m_chargeCode;
                    bool m_chargeCodeHasBeenSet;

                    /**
                     * Document type. Value range: 

01: ID card. 
02: Chinese passport. 
03: Hong Kong, China and Macao, China travel permit. 
99: Other document. 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * Document verification result. The items for NFC verification are as follows:
{"result_issuer ":"Issuer certificate legitimacy verification result ","result_paper":"Document security object legitimacy verification result ","result_data" :"Data tampering prevention verification result ","result_chip" :"Document chip replication prevention verification result"} 
Value range: 0: verification passed 1: verification failed 2: unverified 3: partially passed 
When all four verification results are 0, the document is genuine.
                     */
                    std::string m_checkMRTD;
                    bool m_checkMRTDHasBeenSet;

                    /**
                     * Comparison result of the passed-in identity card number, passport number, or Hong Kong, China and Macao, China travel permit with the identity card number recognized by NFC. 

0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_idNumCompareResult;
                    bool m_idNumCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in name and the name recognized by NFC.
0: Consistent
-1: Not the same
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_nameCompareResult;
                    bool m_nameCompareResultHasBeenSet;

                    /**
                     * Similarity score between the passed-in face image and the portrait photo recognized by NFC.
- Value range: [0.00, 100.00].
- It is recommended to determine the same person when the similarity is equal to or greater than 70. Customers can also self-adjust the threshold based on specific scenarios (with a threshold of 70, the false pass rate is one in a thousand; with a threshold of 80, the false pass rate is one in ten thousand).
                     */
                    double m_pictureCompareSim;
                    bool m_pictureCompareSimHasBeenSet;

                    /**
                     * Comparison result of the passed-in face image and the portrait photo recognized by NFC. 

0: Same person (similarity equal to or greater than 70 points) 
1: Not the same person (similarity less than 70 points) 
2: Comparison failed (the input image quality is too low) 
3: Comparison failed (the input image contains no human face, an incomplete face, or multiple faces) 
4: Comparison failed (input image too large or too small) 
5: Comparison failed (NFC cannot read the portrait photo) 
6: Comparison failed (no input image data) 
7: Comparison failed (other reason)
                     */
                    std::string m_pictureCompareResult;
                    bool m_pictureCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in date of birth and the date of birth recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_birthDateCompareResult;
                    bool m_birthDateCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in validity start time and the validity start time recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_beginTimeCompareResult;
                    bool m_beginTimeCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in validity end time and the validity end time recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_endTimeCompareResult;
                    bool m_endTimeCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in address and the address recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_addressCompareResult;
                    bool m_addressCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in ethnicity and the ethnicity recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_nationCompareResult;
                    bool m_nationCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in sex and the sex recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_sexCompareResult;
                    bool m_sexCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in English name and the English name recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_enNameCompareResult;
                    bool m_enNameCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in issuing authority and the issuing authority recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_signingOrganizationCompareResult;
                    bool m_signingOrganizationCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in nationality and the nationality recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_nationalityCompareResult;
                    bool m_nationalityCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in country code and the country code recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_countryCodeCompareResult;
                    bool m_countryCodeCompareResultHasBeenSet;

                    /**
                     * Comparison result of the passed-in machine-readable code and the machine-readable code recognized by NFC. 
0: Consistent 
-1: Not the same 
-2: NFC recognition failed, unable to compare
                     */
                    std::string m_machineReadCodeCompareResult;
                    bool m_machineReadCodeCompareResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETNFCRESULTRESPONSE_H_
