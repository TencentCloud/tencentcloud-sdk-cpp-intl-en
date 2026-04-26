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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONRESPONSE_H_

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
                * IdCardOCRVerification response structure.
                */
                class IdCardOCRVerificationResponse : public AbstractModel
                {
                public:
                    IdCardOCRVerificationResponse();
                    ~IdCardOCRVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code. Billing is as follows.
-Result code for charges
The name and identity card number match.
-Name and ID card number mismatch.
-Result code with no charge
-2: Invalid ID number (incorrect length or check digit).
-3: Invalid name (incorrect length or format).
-4: Document library service exception.
-5: No ID card record found in the document library.
-6: The authoritative comparison system is being upgraded. Try again later.
-7: Authentication attempts exceeded the daily limit.
                     * @return Result Verification result code. Billing is as follows.
-Result code for charges
The name and identity card number match.
-Name and ID card number mismatch.
-Result code with no charge
-2: Invalid ID number (incorrect length or check digit).
-3: Invalid name (incorrect length or format).
-4: Document library service exception.
-5: No ID card record found in the document library.
-6: The authoritative comparison system is being upgraded. Try again later.
-7: Authentication attempts exceeded the daily limit.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Business result description.
                     * @return Description Business result description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Name to verify.
                     * @return Name Name to verify.
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
                     * 获取Identity card number to verify.
                     * @return IdCard Identity card number to verify.
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取Gender obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender obtained by OCR.
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
                     * 获取Ethnicity obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nation Ethnicity obtained by OCR.
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
                     * 获取Birthday obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birth Birthday obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取Address obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address obtained by OCR.
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

                private:

                    /**
                     * Verification result code. Billing is as follows.
-Result code for charges
The name and identity card number match.
-Name and ID card number mismatch.
-Result code with no charge
-2: Invalid ID number (incorrect length or check digit).
-3: Invalid name (incorrect length or format).
-4: Document library service exception.
-5: No ID card record found in the document library.
-6: The authoritative comparison system is being upgraded. Try again later.
-7: Authentication attempts exceeded the daily limit.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Business result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Name to verify.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Identity card number to verify.
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * Gender obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Ethnicity obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * Birthday obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * Address obtained by OCR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONRESPONSE_H_
