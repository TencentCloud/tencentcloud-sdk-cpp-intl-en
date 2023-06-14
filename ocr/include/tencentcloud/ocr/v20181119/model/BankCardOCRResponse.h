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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * BankCardOCR response structure.
                */
                class BankCardOCRResponse : public AbstractModel
                {
                public:
                    BankCardOCRResponse();
                    ~BankCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Card number
                     * @return CardNo Card number
                     * 
                     */
                    std::string GetCardNo() const;

                    /**
                     * 判断参数 CardNo 是否已赋值
                     * @return CardNo 是否已赋值
                     * 
                     */
                    bool CardNoHasBeenSet() const;

                    /**
                     * 获取Bank information
                     * @return BankInfo Bank information
                     * 
                     */
                    std::string GetBankInfo() const;

                    /**
                     * 判断参数 BankInfo 是否已赋值
                     * @return BankInfo 是否已赋值
                     * 
                     */
                    bool BankInfoHasBeenSet() const;

                    /**
                     * 获取Expiration date. Format: 07/2023
                     * @return ValidDate Expiration date. Format: 07/2023
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取Card type
                     * @return CardType Card type
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取Card name
                     * @return CardName Card name
                     * 
                     */
                    std::string GetCardName() const;

                    /**
                     * 判断参数 CardName 是否已赋值
                     * @return CardName 是否已赋值
                     * 
                     */
                    bool CardNameHasBeenSet() const;

                    /**
                     * 获取Sliced image data
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BorderCutImage Sliced image data
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBorderCutImage() const;

                    /**
                     * 判断参数 BorderCutImage 是否已赋值
                     * @return BorderCutImage 是否已赋值
                     * 
                     */
                    bool BorderCutImageHasBeenSet() const;

                    /**
                     * 获取Card number image data
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CardNoImage Card number image data
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCardNoImage() const;

                    /**
                     * 判断参数 CardNoImage 是否已赋值
                     * @return CardNoImage 是否已赋值
                     * 
                     */
                    bool CardNoImageHasBeenSet() const;

                    /**
                     * 获取Warning code:
-9110: the bank card date is invalid. 
-9111: the bank card border is incomplete. 
-9112: the bank card image is reflective.
-9113: the bank card image is a photocopy.
-9114: the bank card image is a photograph.
Multiple warning codes may be returned at a time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WarningCode Warning code:
-9110: the bank card date is invalid. 
-9111: the bank card border is incomplete. 
-9112: the bank card image is reflective.
-9113: the bank card image is a photocopy.
-9114: the bank card image is a photograph.
Multiple warning codes may be returned at a time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetWarningCode() const;

                    /**
                     * 判断参数 WarningCode 是否已赋值
                     * @return WarningCode 是否已赋值
                     * 
                     */
                    bool WarningCodeHasBeenSet() const;

                    /**
                     * 获取Image quality value, which is returned when `EnableQualityValue` is set to `true`. The smaller the value, the less clear the image is. Value range: 0−100 (a threshold greater than or equal to 50 is recommended.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return QualityValue Image quality value, which is returned when `EnableQualityValue` is set to `true`. The smaller the value, the less clear the image is. Value range: 0−100 (a threshold greater than or equal to 50 is recommended.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetQualityValue() const;

                    /**
                     * 判断参数 QualityValue 是否已赋值
                     * @return QualityValue 是否已赋值
                     * 
                     */
                    bool QualityValueHasBeenSet() const;

                private:

                    /**
                     * Card number
                     */
                    std::string m_cardNo;
                    bool m_cardNoHasBeenSet;

                    /**
                     * Bank information
                     */
                    std::string m_bankInfo;
                    bool m_bankInfoHasBeenSet;

                    /**
                     * Expiration date. Format: 07/2023
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * Card type
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * Card name
                     */
                    std::string m_cardName;
                    bool m_cardNameHasBeenSet;

                    /**
                     * Sliced image data
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_borderCutImage;
                    bool m_borderCutImageHasBeenSet;

                    /**
                     * Card number image data
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cardNoImage;
                    bool m_cardNoImageHasBeenSet;

                    /**
                     * Warning code:
-9110: the bank card date is invalid. 
-9111: the bank card border is incomplete. 
-9112: the bank card image is reflective.
-9113: the bank card image is a photocopy.
-9114: the bank card image is a photograph.
Multiple warning codes may be returned at a time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_warningCode;
                    bool m_warningCodeHasBeenSet;

                    /**
                     * Image quality value, which is returned when `EnableQualityValue` is set to `true`. The smaller the value, the less clear the image is. Value range: 0−100 (a threshold greater than or equal to 50 is recommended.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_qualityValue;
                    bool m_qualityValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
