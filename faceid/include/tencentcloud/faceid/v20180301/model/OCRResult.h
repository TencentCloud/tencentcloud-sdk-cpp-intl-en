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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_OCRRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_OCRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/CardInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * The content of a single license in the license information.
                */
                class OCRResult : public AbstractModel
                {
                public:
                    OCRResult();
                    ~OCRResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Is the indentity verification or OCR process passed
                     * @return IsPass Is the indentity verification or OCR process passed
                     * 
                     */
                    bool GetIsPass() const;

                    /**
                     * 设置Is the indentity verification or OCR process passed
                     * @param _isPass Is the indentity verification or OCR process passed
                     * 
                     */
                    void SetIsPass(const bool& _isPass);

                    /**
                     * 判断参数 IsPass 是否已赋值
                     * @return IsPass 是否已赋值
                     * 
                     */
                    bool IsPassHasBeenSet() const;

                    /**
                     * 获取The Base64 of ID card image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardImageBase64 The Base64 of ID card image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCardImageBase64() const;

                    /**
                     * 设置The Base64 of ID card image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cardImageBase64 The Base64 of ID card image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCardImageBase64(const std::string& _cardImageBase64);

                    /**
                     * 判断参数 CardImageBase64 是否已赋值
                     * @return CardImageBase64 是否已赋值
                     * 
                     */
                    bool CardImageBase64HasBeenSet() const;

                    /**
                     * 获取OCR result of the ID card.
                     * @return CardInfo OCR result of the ID card.
                     * 
                     */
                    CardInfo GetCardInfo() const;

                    /**
                     * 设置OCR result of the ID card.
                     * @param _cardInfo OCR result of the ID card.
                     * 
                     */
                    void SetCardInfo(const CardInfo& _cardInfo);

                    /**
                     * 判断参数 CardInfo 是否已赋值
                     * @return CardInfo 是否已赋值
                     * 
                     */
                    bool CardInfoHasBeenSet() const;

                    /**
                     * 获取The request id
                     * @return RequestId The request id
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置The request id
                     * @param _requestId The request id
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取Base64 of cropped image of ID card
                     * @return CardCutImageBase64 Base64 of cropped image of ID card
                     * 
                     */
                    std::string GetCardCutImageBase64() const;

                    /**
                     * 设置Base64 of cropped image of ID card
                     * @param _cardCutImageBase64 Base64 of cropped image of ID card
                     * 
                     */
                    void SetCardCutImageBase64(const std::string& _cardCutImageBase64);

                    /**
                     * 判断参数 CardCutImageBase64 是否已赋值
                     * @return CardCutImageBase64 是否已赋值
                     * 
                     */
                    bool CardCutImageBase64HasBeenSet() const;

                    /**
                     * 获取Base64 of the cropped image on the reverse side of the ID card
                     * @return CardBackCutImageBase64 Base64 of the cropped image on the reverse side of the ID card
                     * 
                     */
                    std::string GetCardBackCutImageBase64() const;

                    /**
                     * 设置Base64 of the cropped image on the reverse side of the ID card
                     * @param _cardBackCutImageBase64 Base64 of the cropped image on the reverse side of the ID card
                     * 
                     */
                    void SetCardBackCutImageBase64(const std::string& _cardBackCutImageBase64);

                    /**
                     * 判断参数 CardBackCutImageBase64 是否已赋值
                     * @return CardBackCutImageBase64 是否已赋值
                     * 
                     */
                    bool CardBackCutImageBase64HasBeenSet() const;

                private:

                    /**
                     * Is the indentity verification or OCR process passed
                     */
                    bool m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * The Base64 of ID card image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cardImageBase64;
                    bool m_cardImageBase64HasBeenSet;

                    /**
                     * OCR result of the ID card.
                     */
                    CardInfo m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * The request id
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Base64 of cropped image of ID card
                     */
                    std::string m_cardCutImageBase64;
                    bool m_cardCutImageBase64HasBeenSet;

                    /**
                     * Base64 of the cropped image on the reverse side of the ID card
                     */
                    std::string m_cardBackCutImageBase64;
                    bool m_cardBackCutImageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_OCRRESULT_H_
