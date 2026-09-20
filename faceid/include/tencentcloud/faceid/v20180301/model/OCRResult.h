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
                * Content of a single document in the document information
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
                     * @return IsPass <p>Whether the identity authentication or OCR process is successful.</p>
                     * 
                     */
                    bool GetIsPass() const;

                    /**
                     * 设置<p>Whether the identity authentication or OCR process is successful.</p>
                     * @param _isPass <p>Whether the identity authentication or OCR process is successful.</p>
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
                     * 获取<p>Base64 of the front image of the identity document</p>
                     * @return CardImageBase64 <p>Base64 of the front image of the identity document</p>
                     * 
                     */
                    std::string GetCardImageBase64() const;

                    /**
                     * 设置<p>Base64 of the front image of the identity document</p>
                     * @param _cardImageBase64 <p>Base64 of the front image of the identity document</p>
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
                     * 获取<p>ID document recognition result</p>
                     * @return CardInfo <p>ID document recognition result</p>
                     * @deprecated
                     */
                    CardInfo GetCardInfo() const;

                    /**
                     * 设置<p>ID document recognition result</p>
                     * @param _cardInfo <p>ID document recognition result</p>
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
                     * 获取<p>ID document recognition result (when CheckMode value is 4, the OriginalCardInfo field is returned; in other scenarios, the current field is returned)</p>
                     * @return NormalCardInfo <p>ID document recognition result (when CheckMode value is 4, the OriginalCardInfo field is returned; in other scenarios, the current field is returned)</p>
                     * 
                     */
                    NormalCardInfo GetNormalCardInfo() const;

                    /**
                     * 设置<p>ID document recognition result (when CheckMode value is 4, the OriginalCardInfo field is returned; in other scenarios, the current field is returned)</p>
                     * @param _normalCardInfo <p>ID document recognition result (when CheckMode value is 4, the OriginalCardInfo field is returned; in other scenarios, the current field is returned)</p>
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
                     * @return RequestId <p>Request id</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>Request id</p>
                     * @param _requestId <p>Request id</p>
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
                     * 获取<p>Base64 of the front cropped image of the identity document</p>
                     * @return CardCutImageBase64 <p>Base64 of the front cropped image of the identity document</p>
                     * 
                     */
                    std::string GetCardCutImageBase64() const;

                    /**
                     * 设置<p>Base64 of the front cropped image of the identity document</p>
                     * @param _cardCutImageBase64 <p>Base64 of the front cropped image of the identity document</p>
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
                     * 获取<p>Base64 of the edge-cropped image of the back of an identity document</p>
                     * @return CardBackCutImageBase64 <p>Base64 of the edge-cropped image of the back of an identity document</p>
                     * 
                     */
                    std::string GetCardBackCutImageBase64() const;

                    /**
                     * 设置<p>Base64 of the edge-cropped image of the back of an identity document</p>
                     * @param _cardBackCutImageBase64 <p>Base64 of the edge-cropped image of the back of an identity document</p>
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
                     * 获取<p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: alarm for incomplete document border</li><li>-9102: alarm for document photocopy</li><li>-9103: alarm for document rephotographing</li><li>-9104: document PS alarm</li><li>-9107: document reflective alarm</li><li>-9108: alarm for blurry document</li><li>-9109: alarm capability not enabled</li></ul>
                     * @return WarnCardInfos <p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: alarm for incomplete document border</li><li>-9102: alarm for document photocopy</li><li>-9103: alarm for document rephotographing</li><li>-9104: document PS alarm</li><li>-9107: document reflective alarm</li><li>-9108: alarm for blurry document</li><li>-9109: alarm capability not enabled</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 设置<p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: alarm for incomplete document border</li><li>-9102: alarm for document photocopy</li><li>-9103: alarm for document rephotographing</li><li>-9104: document PS alarm</li><li>-9107: document reflective alarm</li><li>-9108: alarm for blurry document</li><li>-9109: alarm capability not enabled</li></ul>
                     * @param _warnCardInfos <p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: alarm for incomplete document border</li><li>-9102: alarm for document photocopy</li><li>-9103: alarm for document rephotographing</li><li>-9104: document PS alarm</li><li>-9107: document reflective alarm</li><li>-9108: alarm for blurry document</li><li>-9109: alarm capability not enabled</li></ul>
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
                     * 获取<p>Original document recognition information (when CheckMode value is 4, the current field will be returned)</p>
                     * @return OriginalCardInfo <p>Original document recognition information (when CheckMode value is 4, the current field will be returned)</p>
                     * 
                     */
                    std::string GetOriginalCardInfo() const;

                    /**
                     * 设置<p>Original document recognition information (when CheckMode value is 4, the current field will be returned)</p>
                     * @param _originalCardInfo <p>Original document recognition information (when CheckMode value is 4, the current field will be returned)</p>
                     * 
                     */
                    void SetOriginalCardInfo(const std::string& _originalCardInfo);

                    /**
                     * 判断参数 OriginalCardInfo 是否已赋值
                     * @return OriginalCardInfo 是否已赋值
                     * 
                     */
                    bool OriginalCardInfoHasBeenSet() const;

                    /**
                     * 获取<p>Portrait matting in the document</p>
                     * @return HeadImageBase64 <p>Portrait matting in the document</p>
                     * 
                     */
                    std::string GetHeadImageBase64() const;

                    /**
                     * 设置<p>Portrait matting in the document</p>
                     * @param _headImageBase64 <p>Portrait matting in the document</p>
                     * 
                     */
                    void SetHeadImageBase64(const std::string& _headImageBase64);

                    /**
                     * 判断参数 HeadImageBase64 是否已赋值
                     * @return HeadImageBase64 是否已赋值
                     * 
                     */
                    bool HeadImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>Base64 of the back image of the identity document</p>
                     * @return CardBackImageBase64 <p>Base64 of the back image of the identity document</p>
                     * 
                     */
                    std::string GetCardBackImageBase64() const;

                    /**
                     * 设置<p>Base64 of the back image of the identity document</p>
                     * @param _cardBackImageBase64 <p>Base64 of the back image of the identity document</p>
                     * 
                     */
                    void SetCardBackImageBase64(const std::string& _cardBackImageBase64);

                    /**
                     * 判断参数 CardBackImageBase64 是否已赋值
                     * @return CardBackImageBase64 是否已赋值
                     * 
                     */
                    bool CardBackImageBase64HasBeenSet() const;

                private:

                    /**
                     * <p>Whether the identity authentication or OCR process is successful.</p>
                     */
                    bool m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * <p>Base64 of the front image of the identity document</p>
                     */
                    std::string m_cardImageBase64;
                    bool m_cardImageBase64HasBeenSet;

                    /**
                     * <p>ID document recognition result</p>
                     */
                    CardInfo m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * <p>ID document recognition result (when CheckMode value is 4, the OriginalCardInfo field is returned; in other scenarios, the current field is returned)</p>
                     */
                    NormalCardInfo m_normalCardInfo;
                    bool m_normalCardInfoHasBeenSet;

                    /**
                     * <p>Request id</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>Base64 of the front cropped image of the identity document</p>
                     */
                    std::string m_cardCutImageBase64;
                    bool m_cardCutImageBase64HasBeenSet;

                    /**
                     * <p>Base64 of the edge-cropped image of the back of an identity document</p>
                     */
                    std::string m_cardBackCutImageBase64;
                    bool m_cardBackCutImageBase64HasBeenSet;

                    /**
                     * <p>Alarm code</p><p>Enumeration value:</p><ul><li>-9101: alarm for incomplete document border</li><li>-9102: alarm for document photocopy</li><li>-9103: alarm for document rephotographing</li><li>-9104: document PS alarm</li><li>-9107: document reflective alarm</li><li>-9108: alarm for blurry document</li><li>-9109: alarm capability not enabled</li></ul>
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * <p>Original document recognition information (when CheckMode value is 4, the current field will be returned)</p>
                     */
                    std::string m_originalCardInfo;
                    bool m_originalCardInfoHasBeenSet;

                    /**
                     * <p>Portrait matting in the document</p>
                     */
                    std::string m_headImageBase64;
                    bool m_headImageBase64HasBeenSet;

                    /**
                     * <p>Base64 of the back image of the identity document</p>
                     */
                    std::string m_cardBackImageBase64;
                    bool m_cardBackImageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_OCRRESULT_H_
