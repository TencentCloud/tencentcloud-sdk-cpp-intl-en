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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSSIGNREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * AddSmsSign request structure.
                */
                class AddSmsSignRequest : public AbstractModel
                {
                public:
                    AddSmsSignRequest();
                    ~AddSmsSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Signature name.
Note: you cannot apply for an approved or pending signature again.
                     * @return SignName Signature name.
Note: you cannot apply for an approved or pending signature again.
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置Signature name.
Note: you cannot apply for an approved or pending signature again.
                     * @param _signName Signature name.
Note: you cannot apply for an approved or pending signature again.
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取Signature type. Each of these types is followed by their `DocumentType` (identity certificate type) option:
0: company. Valid values of `DocumentType` include 0 and 1.
1: app. Valid values of `DocumentType` include 0, 1, 2, 3, and 4.
2: website. Valid values of `DocumentType` include 0, 1, 2, 3, and 5.
3: WeChat Official Account. Valid values of `DocumentType` include 0, 1, 2, 3, and 8.
4: trademark. Valid values of `DocumentType` include 7.
5: government/public institution/other. Valid values of `DocumentType` include 2 and 3.
6: WeChat Mini Program. Valid values of `DocumentType` include 0, 1, 2, 3, and 6.
Note: the identity certificate type must be selected according to the correspondence; otherwise, the review will fail.
                     * @return SignType Signature type. Each of these types is followed by their `DocumentType` (identity certificate type) option:
0: company. Valid values of `DocumentType` include 0 and 1.
1: app. Valid values of `DocumentType` include 0, 1, 2, 3, and 4.
2: website. Valid values of `DocumentType` include 0, 1, 2, 3, and 5.
3: WeChat Official Account. Valid values of `DocumentType` include 0, 1, 2, 3, and 8.
4: trademark. Valid values of `DocumentType` include 7.
5: government/public institution/other. Valid values of `DocumentType` include 2 and 3.
6: WeChat Mini Program. Valid values of `DocumentType` include 0, 1, 2, 3, and 6.
Note: the identity certificate type must be selected according to the correspondence; otherwise, the review will fail.
                     * 
                     */
                    uint64_t GetSignType() const;

                    /**
                     * 设置Signature type. Each of these types is followed by their `DocumentType` (identity certificate type) option:
0: company. Valid values of `DocumentType` include 0 and 1.
1: app. Valid values of `DocumentType` include 0, 1, 2, 3, and 4.
2: website. Valid values of `DocumentType` include 0, 1, 2, 3, and 5.
3: WeChat Official Account. Valid values of `DocumentType` include 0, 1, 2, 3, and 8.
4: trademark. Valid values of `DocumentType` include 7.
5: government/public institution/other. Valid values of `DocumentType` include 2 and 3.
6: WeChat Mini Program. Valid values of `DocumentType` include 0, 1, 2, 3, and 6.
Note: the identity certificate type must be selected according to the correspondence; otherwise, the review will fail.
                     * @param _signType Signature type. Each of these types is followed by their `DocumentType` (identity certificate type) option:
0: company. Valid values of `DocumentType` include 0 and 1.
1: app. Valid values of `DocumentType` include 0, 1, 2, 3, and 4.
2: website. Valid values of `DocumentType` include 0, 1, 2, 3, and 5.
3: WeChat Official Account. Valid values of `DocumentType` include 0, 1, 2, 3, and 8.
4: trademark. Valid values of `DocumentType` include 7.
5: government/public institution/other. Valid values of `DocumentType` include 2 and 3.
6: WeChat Mini Program. Valid values of `DocumentType` include 0, 1, 2, 3, and 6.
Note: the identity certificate type must be selected according to the correspondence; otherwise, the review will fail.
                     * 
                     */
                    void SetSignType(const uint64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取Identity certificate type:
0: three-in-one licence.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     * @return DocumentType Identity certificate type:
0: three-in-one licence.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     * 
                     */
                    uint64_t GetDocumentType() const;

                    /**
                     * 设置Identity certificate type:
0: three-in-one licence.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     * @param _documentType Identity certificate type:
0: three-in-one licence.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     * 
                     */
                    void SetDocumentType(const uint64_t& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @return International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @param _international Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Signature purpose:
0: for personal use.
1: for others.
                     * @return SignPurpose Signature purpose:
0: for personal use.
1: for others.
                     * 
                     */
                    uint64_t GetSignPurpose() const;

                    /**
                     * 设置Signature purpose:
0: for personal use.
1: for others.
                     * @param _signPurpose Signature purpose:
0: for personal use.
1: for others.
                     * 
                     */
                    void SetSignPurpose(const uint64_t& _signPurpose);

                    /**
                     * 判断参数 SignPurpose 是否已赋值
                     * @return SignPurpose 是否已赋值
                     * 
                     */
                    bool SignPurposeHasBeenSet() const;

                    /**
                     * 获取You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * @return ProofImage You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * 
                     */
                    std::string GetProofImage() const;

                    /**
                     * 设置You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * @param _proofImage You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * 
                     */
                    void SetProofImage(const std::string& _proofImage);

                    /**
                     * 判断参数 ProofImage 是否已赋值
                     * @return ProofImage 是否已赋值
                     * 
                     */
                    bool ProofImageHasBeenSet() const;

                    /**
                     * 获取Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     * @return CommissionImage Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     * 
                     */
                    std::string GetCommissionImage() const;

                    /**
                     * 设置Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     * @param _commissionImage Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     * 
                     */
                    void SetCommissionImage(const std::string& _commissionImage);

                    /**
                     * 判断参数 CommissionImage 是否已赋值
                     * @return CommissionImage 是否已赋值
                     * 
                     */
                    bool CommissionImageHasBeenSet() const;

                    /**
                     * 获取Signature application remarks.
                     * @return Remark Signature application remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Signature application remarks.
                     * @param _remark Signature application remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Signature name.
Note: you cannot apply for an approved or pending signature again.
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * Signature type. Each of these types is followed by their `DocumentType` (identity certificate type) option:
0: company. Valid values of `DocumentType` include 0 and 1.
1: app. Valid values of `DocumentType` include 0, 1, 2, 3, and 4.
2: website. Valid values of `DocumentType` include 0, 1, 2, 3, and 5.
3: WeChat Official Account. Valid values of `DocumentType` include 0, 1, 2, 3, and 8.
4: trademark. Valid values of `DocumentType` include 7.
5: government/public institution/other. Valid values of `DocumentType` include 2 and 3.
6: WeChat Mini Program. Valid values of `DocumentType` include 0, 1, 2, 3, and 6.
Note: the identity certificate type must be selected according to the correspondence; otherwise, the review will fail.
                     */
                    uint64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * Identity certificate type:
0: three-in-one licence.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     */
                    uint64_t m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * Signature purpose:
0: for personal use.
1: for others.
                     */
                    uint64_t m_signPurpose;
                    bool m_signPurposeHasBeenSet;

                    /**
                     * You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     */
                    std::string m_proofImage;
                    bool m_proofImageHasBeenSet;

                    /**
                     * Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     */
                    std::string m_commissionImage;
                    bool m_commissionImageHasBeenSet;

                    /**
                     * Signature application remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSSIGNREQUEST_H_
