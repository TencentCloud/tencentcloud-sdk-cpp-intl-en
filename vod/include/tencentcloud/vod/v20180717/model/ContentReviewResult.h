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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PornImageResult.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImageResult.h>
#include <tencentcloud/vod/v20180717/model/PoliticalImageResult.h>
#include <tencentcloud/vod/v20180717/model/ContentReviewOcrResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result of the image intelligent content identification task.
                */
                class ContentReviewResult : public AbstractModel
                {
                public:
                    ContentReviewResult();
                    ~ContentReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result type. Valid values:
<li>Porn.Image: authentication result of offensive content in the image;</li>
<li>Terrorism.Image: authentication result of unsafe information in the image;</li>
<li>Political.Image: authentication result of inappropriate information in the image;</li>
<li>Porn.Ocr: authentication result of offensive content in image OCR text;</li>
<li>Terrorism.Ocr: Authentication result of unsafe information in image OCR text;</li>
<li>Political.Ocr: The authentication result of inappropriate information in the image OCR text.</li>
                     * @return Type Result type. Valid values:
<li>Porn.Image: authentication result of offensive content in the image;</li>
<li>Terrorism.Image: authentication result of unsafe information in the image;</li>
<li>Political.Image: authentication result of inappropriate information in the image;</li>
<li>Porn.Ocr: authentication result of offensive content in image OCR text;</li>
<li>Terrorism.Ocr: Authentication result of unsafe information in image OCR text;</li>
<li>Political.Ocr: The authentication result of inappropriate information in the image OCR text.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Result type. Valid values:
<li>Porn.Image: authentication result of offensive content in the image;</li>
<li>Terrorism.Image: authentication result of unsafe information in the image;</li>
<li>Political.Image: authentication result of inappropriate information in the image;</li>
<li>Porn.Ocr: authentication result of offensive content in image OCR text;</li>
<li>Terrorism.Ocr: Authentication result of unsafe information in image OCR text;</li>
<li>Political.Ocr: The authentication result of inappropriate information in the image OCR text.</li>
                     * @param _type Result type. Valid values:
<li>Porn.Image: authentication result of offensive content in the image;</li>
<li>Terrorism.Image: authentication result of unsafe information in the image;</li>
<li>Political.Image: authentication result of inappropriate information in the image;</li>
<li>Porn.Ocr: authentication result of offensive content in image OCR text;</li>
<li>Terrorism.Ocr: Authentication result of unsafe information in image OCR text;</li>
<li>Political.Ocr: The authentication result of inappropriate information in the image OCR text.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Authentication result for offensive content in the image. Valid when Type is Porn.Image.
                     * @return PornImageResult Authentication result for offensive content in the image. Valid when Type is Porn.Image.
                     * 
                     */
                    PornImageResult GetPornImageResult() const;

                    /**
                     * 设置Authentication result for offensive content in the image. Valid when Type is Porn.Image.
                     * @param _pornImageResult Authentication result for offensive content in the image. Valid when Type is Porn.Image.
                     * 
                     */
                    void SetPornImageResult(const PornImageResult& _pornImageResult);

                    /**
                     * 判断参数 PornImageResult 是否已赋值
                     * @return PornImageResult 是否已赋值
                     * 
                     */
                    bool PornImageResultHasBeenSet() const;

                    /**
                     * 获取Authentication result for unsafe information in the image. Valid when Type is Terrorism.Image.
                     * @return TerrorismImageResult Authentication result for unsafe information in the image. Valid when Type is Terrorism.Image.
                     * 
                     */
                    TerrorismImageResult GetTerrorismImageResult() const;

                    /**
                     * 设置Authentication result for unsafe information in the image. Valid when Type is Terrorism.Image.
                     * @param _terrorismImageResult Authentication result for unsafe information in the image. Valid when Type is Terrorism.Image.
                     * 
                     */
                    void SetTerrorismImageResult(const TerrorismImageResult& _terrorismImageResult);

                    /**
                     * 判断参数 TerrorismImageResult 是否已赋值
                     * @return TerrorismImageResult 是否已赋值
                     * 
                     */
                    bool TerrorismImageResultHasBeenSet() const;

                    /**
                     * 获取Authentication of inappropriate information results in the image. Valid when Type is Political.Image.
                     * @return PoliticalImageResult Authentication of inappropriate information results in the image. Valid when Type is Political.Image.
                     * 
                     */
                    PoliticalImageResult GetPoliticalImageResult() const;

                    /**
                     * 设置Authentication of inappropriate information results in the image. Valid when Type is Political.Image.
                     * @param _politicalImageResult Authentication of inappropriate information results in the image. Valid when Type is Political.Image.
                     * 
                     */
                    void SetPoliticalImageResult(const PoliticalImageResult& _politicalImageResult);

                    /**
                     * 判断参数 PoliticalImageResult 是否已赋值
                     * @return PoliticalImageResult 是否已赋值
                     * 
                     */
                    bool PoliticalImageResultHasBeenSet() const;

                    /**
                     * 获取Authentication result for offensive content in image OCR text. Valid when Type is Porn.Ocr.
                     * @return PornOcrResult Authentication result for offensive content in image OCR text. Valid when Type is Porn.Ocr.
                     * 
                     */
                    ContentReviewOcrResult GetPornOcrResult() const;

                    /**
                     * 设置Authentication result for offensive content in image OCR text. Valid when Type is Porn.Ocr.
                     * @param _pornOcrResult Authentication result for offensive content in image OCR text. Valid when Type is Porn.Ocr.
                     * 
                     */
                    void SetPornOcrResult(const ContentReviewOcrResult& _pornOcrResult);

                    /**
                     * 判断参数 PornOcrResult 是否已赋值
                     * @return PornOcrResult 是否已赋值
                     * 
                     */
                    bool PornOcrResultHasBeenSet() const;

                    /**
                     * 获取Authentication result of unsafe information in image OCR. Valid when Type is Terrorism.Ocr.
                     * @return TerrorismOcrResult Authentication result of unsafe information in image OCR. Valid when Type is Terrorism.Ocr.
                     * 
                     */
                    ContentReviewOcrResult GetTerrorismOcrResult() const;

                    /**
                     * 设置Authentication result of unsafe information in image OCR. Valid when Type is Terrorism.Ocr.
                     * @param _terrorismOcrResult Authentication result of unsafe information in image OCR. Valid when Type is Terrorism.Ocr.
                     * 
                     */
                    void SetTerrorismOcrResult(const ContentReviewOcrResult& _terrorismOcrResult);

                    /**
                     * 判断参数 TerrorismOcrResult 是否已赋值
                     * @return TerrorismOcrResult 是否已赋值
                     * 
                     */
                    bool TerrorismOcrResultHasBeenSet() const;

                    /**
                     * 获取The authentication result of inappropriate information in the image OCR text. Valid when Type is Political.Ocr.
                     * @return PoliticalOcrResult The authentication result of inappropriate information in the image OCR text. Valid when Type is Political.Ocr.
                     * 
                     */
                    ContentReviewOcrResult GetPoliticalOcrResult() const;

                    /**
                     * 设置The authentication result of inappropriate information in the image OCR text. Valid when Type is Political.Ocr.
                     * @param _politicalOcrResult The authentication result of inappropriate information in the image OCR text. Valid when Type is Political.Ocr.
                     * 
                     */
                    void SetPoliticalOcrResult(const ContentReviewOcrResult& _politicalOcrResult);

                    /**
                     * 判断参数 PoliticalOcrResult 是否已赋值
                     * @return PoliticalOcrResult 是否已赋值
                     * 
                     */
                    bool PoliticalOcrResultHasBeenSet() const;

                private:

                    /**
                     * Result type. Valid values:
<li>Porn.Image: authentication result of offensive content in the image;</li>
<li>Terrorism.Image: authentication result of unsafe information in the image;</li>
<li>Political.Image: authentication result of inappropriate information in the image;</li>
<li>Porn.Ocr: authentication result of offensive content in image OCR text;</li>
<li>Terrorism.Ocr: Authentication result of unsafe information in image OCR text;</li>
<li>Political.Ocr: The authentication result of inappropriate information in the image OCR text.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Authentication result for offensive content in the image. Valid when Type is Porn.Image.
                     */
                    PornImageResult m_pornImageResult;
                    bool m_pornImageResultHasBeenSet;

                    /**
                     * Authentication result for unsafe information in the image. Valid when Type is Terrorism.Image.
                     */
                    TerrorismImageResult m_terrorismImageResult;
                    bool m_terrorismImageResultHasBeenSet;

                    /**
                     * Authentication of inappropriate information results in the image. Valid when Type is Political.Image.
                     */
                    PoliticalImageResult m_politicalImageResult;
                    bool m_politicalImageResultHasBeenSet;

                    /**
                     * Authentication result for offensive content in image OCR text. Valid when Type is Porn.Ocr.
                     */
                    ContentReviewOcrResult m_pornOcrResult;
                    bool m_pornOcrResultHasBeenSet;

                    /**
                     * Authentication result of unsafe information in image OCR. Valid when Type is Terrorism.Ocr.
                     */
                    ContentReviewOcrResult m_terrorismOcrResult;
                    bool m_terrorismOcrResultHasBeenSet;

                    /**
                     * The authentication result of inappropriate information in the image OCR text. Valid when Type is Political.Ocr.
                     */
                    ContentReviewOcrResult m_politicalOcrResult;
                    bool m_politicalOcrResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
