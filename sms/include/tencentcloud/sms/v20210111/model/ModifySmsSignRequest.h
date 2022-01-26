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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNREQUEST_H_

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
                * ModifySmsSign request structure.
                */
                class ModifySmsSignRequest : public AbstractModel
                {
                public:
                    ModifySmsSignRequest();
                    ~ModifySmsSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the signature to be modified.
                     * @return SignId ID of the signature to be modified.
                     */
                    uint64_t GetSignId() const;

                    /**
                     * 设置ID of the signature to be modified.
                     * @param SignId ID of the signature to be modified.
                     */
                    void SetSignId(const uint64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取Signature name.
                     * @return SignName Signature name.
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置Signature name.
                     * @param SignName Signature name.
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
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
                     * @param SignType Signature type. Each of these types is followed by their `DocumentType` (identity certificate type) option:
0: company. Valid values of `DocumentType` include 0 and 1.
1: app. Valid values of `DocumentType` include 0, 1, 2, 3, and 4.
2: website. Valid values of `DocumentType` include 0, 1, 2, 3, and 5.
3: WeChat Official Account. Valid values of `DocumentType` include 0, 1, 2, 3, and 8.
4: trademark. Valid values of `DocumentType` include 7.
5: government/public institution/other. Valid values of `DocumentType` include 2 and 3.
6: WeChat Mini Program. Valid values of `DocumentType` include 0, 1, 2, 3, and 6.
Note: the identity certificate type must be selected according to the correspondence; otherwise, the review will fail.
                     */
                    void SetSignType(const uint64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取Identity certificate type:
0: three-in-one.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     * @return DocumentType Identity certificate type:
0: three-in-one.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     */
                    uint64_t GetDocumentType() const;

                    /**
                     * 设置Identity certificate type:
0: three-in-one.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     * @param DocumentType Identity certificate type:
0: three-in-one.
1: business license.
2: organization code certificate.
3: social credit code certificate.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
8: screenshot of WeChat Official Account settings page (for personal WeChat Official Account).
                     */
                    void SetDocumentType(const uint64_t& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取A parameter used to specify whether it is Global SMS:
`0`: Chinese mainland SMS.
`1`: Global SMS.
Note: the value of this parameter must be consistent with the `International` value of the signature to be modified. This parameter cannot be used to directly change a Chinese mainland signature to an international signature.
                     * @return International A parameter used to specify whether it is Global SMS:
`0`: Chinese mainland SMS.
`1`: Global SMS.
Note: the value of this parameter must be consistent with the `International` value of the signature to be modified. This parameter cannot be used to directly change a Chinese mainland signature to an international signature.
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置A parameter used to specify whether it is Global SMS:
`0`: Chinese mainland SMS.
`1`: Global SMS.
Note: the value of this parameter must be consistent with the `International` value of the signature to be modified. This parameter cannot be used to directly change a Chinese mainland signature to an international signature.
                     * @param International A parameter used to specify whether it is Global SMS:
`0`: Chinese mainland SMS.
`1`: Global SMS.
Note: the value of this parameter must be consistent with the `International` value of the signature to be modified. This parameter cannot be used to directly change a Chinese mainland signature to an international signature.
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Signature purpose:
0: for personal use.
1: for others.
                     * @return SignPurpose Signature purpose:
0: for personal use.
1: for others.
                     */
                    uint64_t GetSignPurpose() const;

                    /**
                     * 设置Signature purpose:
0: for personal use.
1: for others.
                     * @param SignPurpose Signature purpose:
0: for personal use.
1: for others.
                     */
                    void SetSignPurpose(const uint64_t& _signPurpose);

                    /**
                     * 判断参数 SignPurpose 是否已赋值
                     * @return SignPurpose 是否已赋值
                     */
                    bool SignPurposeHasBeenSet() const;

                    /**
                     * 获取You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * @return ProofImage You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     */
                    std::string GetProofImage() const;

                    /**
                     * 设置You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * @param ProofImage You should Base64-encode the image of the identity certificate corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     */
                    void SetProofImage(const std::string& _proofImage);

                    /**
                     * 判断参数 ProofImage 是否已赋值
                     * @return ProofImage 是否已赋值
                     */
                    bool ProofImageHasBeenSet() const;

                    /**
                     * 获取Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     * @return CommissionImage Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     */
                    std::string GetCommissionImage() const;

                    /**
                     * 设置Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     * @param CommissionImage Power of attorney, which should be submitted if `SignPurpose` is for use by others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `SignPurpose` is 1 (for user by others).
                     */
                    void SetCommissionImage(const std::string& _commissionImage);

                    /**
                     * 判断参数 CommissionImage 是否已赋值
                     * @return CommissionImage 是否已赋值
                     */
                    bool CommissionImageHasBeenSet() const;

                    /**
                     * 获取Signature application remarks.
                     * @return Remark Signature application remarks.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Signature application remarks.
                     * @param Remark Signature application remarks.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * ID of the signature to be modified.
                     */
                    uint64_t m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * Signature name.
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
0: three-in-one.
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
                     * A parameter used to specify whether it is Global SMS:
`0`: Chinese mainland SMS.
`1`: Global SMS.
Note: the value of this parameter must be consistent with the `International` value of the signature to be modified. This parameter cannot be used to directly change a Chinese mainland signature to an international signature.
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

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNREQUEST_H_
