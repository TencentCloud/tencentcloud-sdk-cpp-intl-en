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
#include <tencentcloud/faceid/v20180301/model/NormalCardInfo.h>


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
                     * 获取<p>Whether the identity authentication or OCR process is successful.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPass <p>Whether the identity authentication or OCR process is successful.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPass() const;

                    /**
                     * 设置<p>Whether the identity authentication or OCR process is successful.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPass <p>Whether the identity authentication or OCR process is successful.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Base64 of the ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardImageBase64 <p>Base64 of the ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCardImageBase64() const;

                    /**
                     * 设置<p>Base64 of the ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cardImageBase64 <p>Base64 of the ID image</p>
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
                     * 获取<p>ID card recognition result</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardInfo <p>ID card recognition result</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    CardInfo GetCardInfo() const;

                    /**
                     * 设置<p>ID card recognition result</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cardInfo <p>ID card recognition result</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetCardInfo(const CardInfo& _cardInfo);

                    /**
                     * 判断参数 CardInfo 是否已赋值
                     * @return CardInfo 是否已赋值
                     * @deprecated
                     */
                    bool CardInfoHasBeenSet() const;

                    /**
                     * 获取<p>Document recognition result (when CheckMode value is 4, return the OriginalCardInfo field; other scenarios return the current field)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NormalCardInfo <p>Document recognition result (when CheckMode value is 4, return the OriginalCardInfo field; other scenarios return the current field)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NormalCardInfo GetNormalCardInfo() const;

                    /**
                     * 设置<p>Document recognition result (when CheckMode value is 4, return the OriginalCardInfo field; other scenarios return the current field)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _normalCardInfo <p>Document recognition result (when CheckMode value is 4, return the OriginalCardInfo field; other scenarios return the current field)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNormalCardInfo(const NormalCardInfo& _normalCardInfo);

                    /**
                     * 判断参数 NormalCardInfo 是否已赋值
                     * @return NormalCardInfo 是否已赋值
                     * 
                     */
                    bool NormalCardInfoHasBeenSet() const;

                    /**
                     * 获取<p>Request id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestId <p>Request id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>Request id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestId <p>Request id</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Base64 of the cropped ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardCutImageBase64 <p>Base64 of the cropped ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCardCutImageBase64() const;

                    /**
                     * 设置<p>Base64 of the cropped ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cardCutImageBase64 <p>Base64 of the cropped ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Base64 of the cropped image of the back side of the ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardBackCutImageBase64 <p>Base64 of the cropped image of the back side of the ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCardBackCutImageBase64() const;

                    /**
                     * 设置<p>Base64 of the cropped image of the back side of the ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cardBackCutImageBase64 <p>Base64 of the cropped image of the back side of the ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCardBackCutImageBase64(const std::string& _cardBackCutImageBase64);

                    /**
                     * 判断参数 CardBackCutImageBase64 是否已赋值
                     * @return CardBackCutImageBase64 是否已赋值
                     * 
                     */
                    bool CardBackCutImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: Alarm for incomplete document border</li><li>-9102: Alarm for document photocopy</li><li>-9103: Alarm for rephotographing</li><li>-9104: PS alarm</li><li>-9107: Reflective alarm</li><li>-9108: Blurry alarm</li><li>-9109: Alarm capability not enabled</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarnCardInfos <p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: Alarm for incomplete document border</li><li>-9102: Alarm for document photocopy</li><li>-9103: Alarm for rephotographing</li><li>-9104: PS alarm</li><li>-9107: Reflective alarm</li><li>-9108: Blurry alarm</li><li>-9109: Alarm capability not enabled</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 设置<p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: Alarm for incomplete document border</li><li>-9102: Alarm for document photocopy</li><li>-9103: Alarm for rephotographing</li><li>-9104: PS alarm</li><li>-9107: Reflective alarm</li><li>-9108: Blurry alarm</li><li>-9109: Alarm capability not enabled</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _warnCardInfos <p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: Alarm for incomplete document border</li><li>-9102: Alarm for document photocopy</li><li>-9103: Alarm for rephotographing</li><li>-9104: PS alarm</li><li>-9107: Reflective alarm</li><li>-9108: Blurry alarm</li><li>-9109: Alarm capability not enabled</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWarnCardInfos(const std::vector<int64_t>& _warnCardInfos);

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                    /**
                     * 获取<p>Original document recognition information (the current field will be returned when CheckMode value is 4)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCardInfo <p>Original document recognition information (the current field will be returned when CheckMode value is 4)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginalCardInfo() const;

                    /**
                     * 设置<p>Original document recognition information (the current field will be returned when CheckMode value is 4)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originalCardInfo <p>Original document recognition information (the current field will be returned when CheckMode value is 4)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginalCardInfo(const std::string& _originalCardInfo);

                    /**
                     * 判断参数 OriginalCardInfo 是否已赋值
                     * @return OriginalCardInfo 是否已赋值
                     * 
                     */
                    bool OriginalCardInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Whether the identity authentication or OCR process is successful.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * <p>Base64 of the ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cardImageBase64;
                    bool m_cardImageBase64HasBeenSet;

                    /**
                     * <p>ID card recognition result</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CardInfo m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * <p>Document recognition result (when CheckMode value is 4, return the OriginalCardInfo field; other scenarios return the current field)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NormalCardInfo m_normalCardInfo;
                    bool m_normalCardInfoHasBeenSet;

                    /**
                     * <p>Request id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>Base64 of the cropped ID image</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cardCutImageBase64;
                    bool m_cardCutImageBase64HasBeenSet;

                    /**
                     * <p>Base64 of the cropped image of the back side of the ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cardBackCutImageBase64;
                    bool m_cardBackCutImageBase64HasBeenSet;

                    /**
                     * <p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: Alarm for incomplete document border</li><li>-9102: Alarm for document photocopy</li><li>-9103: Alarm for rephotographing</li><li>-9104: PS alarm</li><li>-9107: Reflective alarm</li><li>-9108: Blurry alarm</li><li>-9109: Alarm capability not enabled</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * <p>Original document recognition information (the current field will be returned when CheckMode value is 4)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalCardInfo;
                    bool m_originalCardInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_OCRRESULT_H_
