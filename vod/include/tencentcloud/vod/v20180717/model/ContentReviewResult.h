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
                * The result for intelligent image moderation.
                */
                class ContentReviewResult : public AbstractModel
                {
                public:
                    ContentReviewResult();
                    ~ContentReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The result type. Valid values:
<li>Porn.Image: Pornographic content in the image</li>
<li>Terrorism.Image: Terrorist content in the image</li>
<li>Political.Image: Politically sensitive content in the image</li>
<li>Porn.Ocr: Pornographic content in the image based on OCR</li>
<li>Terrorism.Ocr: Terrorist content in the image based on OCR</li>
<li>Political.Ocr: Politically sensitive content in the image based on OCR</li>
                     * @return Type The result type. Valid values:
<li>Porn.Image: Pornographic content in the image</li>
<li>Terrorism.Image: Terrorist content in the image</li>
<li>Political.Image: Politically sensitive content in the image</li>
<li>Porn.Ocr: Pornographic content in the image based on OCR</li>
<li>Terrorism.Ocr: Terrorist content in the image based on OCR</li>
<li>Political.Ocr: Politically sensitive content in the image based on OCR</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The result type. Valid values:
<li>Porn.Image: Pornographic content in the image</li>
<li>Terrorism.Image: Terrorist content in the image</li>
<li>Political.Image: Politically sensitive content in the image</li>
<li>Porn.Ocr: Pornographic content in the image based on OCR</li>
<li>Terrorism.Ocr: Terrorist content in the image based on OCR</li>
<li>Political.Ocr: Politically sensitive content in the image based on OCR</li>
                     * @param _type The result type. Valid values:
<li>Porn.Image: Pornographic content in the image</li>
<li>Terrorism.Image: Terrorist content in the image</li>
<li>Political.Image: Politically sensitive content in the image</li>
<li>Porn.Ocr: Pornographic content in the image based on OCR</li>
<li>Terrorism.Ocr: Terrorist content in the image based on OCR</li>
<li>Political.Ocr: Politically sensitive content in the image based on OCR</li>
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
                     * 获取The pornographic content detected in the image. This parameter is valid if `Type` is `Porn.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PornImageResult The pornographic content detected in the image. This parameter is valid if `Type` is `Porn.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    PornImageResult GetPornImageResult() const;

                    /**
                     * 设置The pornographic content detected in the image. This parameter is valid if `Type` is `Porn.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _pornImageResult The pornographic content detected in the image. This parameter is valid if `Type` is `Porn.Image`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取The terrorist content detected in the image. This parameter is valid if `Type` is `Terrorism.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TerrorismImageResult The terrorist content detected in the image. This parameter is valid if `Type` is `Terrorism.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    TerrorismImageResult GetTerrorismImageResult() const;

                    /**
                     * 设置The terrorist content detected in the image. This parameter is valid if `Type` is `Terrorism.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _terrorismImageResult The terrorist content detected in the image. This parameter is valid if `Type` is `Terrorism.Image`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取The politically sensitive content detected in the image. This parameter is valid if `Type` is `Political.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PoliticalImageResult The politically sensitive content detected in the image. This parameter is valid if `Type` is `Political.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    PoliticalImageResult GetPoliticalImageResult() const;

                    /**
                     * 设置The politically sensitive content detected in the image. This parameter is valid if `Type` is `Political.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _politicalImageResult The politically sensitive content detected in the image. This parameter is valid if `Type` is `Political.Image`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取The pornographic content detected in the image based on OCR. This parameter is valid if `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PornOcrResult The pornographic content detected in the image based on OCR. This parameter is valid if `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ContentReviewOcrResult GetPornOcrResult() const;

                    /**
                     * 设置The pornographic content detected in the image based on OCR. This parameter is valid if `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _pornOcrResult The pornographic content detected in the image based on OCR. This parameter is valid if `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取The terrorist content detected in the image based on OCR. This parameter is valid if `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TerrorismOcrResult The terrorist content detected in the image based on OCR. This parameter is valid if `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ContentReviewOcrResult GetTerrorismOcrResult() const;

                    /**
                     * 设置The terrorist content detected in the image based on OCR. This parameter is valid if `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _terrorismOcrResult The terrorist content detected in the image based on OCR. This parameter is valid if `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取The politically sensitive content detected in the image based on OCR. This parameter is valid if `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PoliticalOcrResult The politically sensitive content detected in the image based on OCR. This parameter is valid if `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ContentReviewOcrResult GetPoliticalOcrResult() const;

                    /**
                     * 设置The politically sensitive content detected in the image based on OCR. This parameter is valid if `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _politicalOcrResult The politically sensitive content detected in the image based on OCR. This parameter is valid if `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * The result type. Valid values:
<li>Porn.Image: Pornographic content in the image</li>
<li>Terrorism.Image: Terrorist content in the image</li>
<li>Political.Image: Politically sensitive content in the image</li>
<li>Porn.Ocr: Pornographic content in the image based on OCR</li>
<li>Terrorism.Ocr: Terrorist content in the image based on OCR</li>
<li>Political.Ocr: Politically sensitive content in the image based on OCR</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The pornographic content detected in the image. This parameter is valid if `Type` is `Porn.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    PornImageResult m_pornImageResult;
                    bool m_pornImageResultHasBeenSet;

                    /**
                     * The terrorist content detected in the image. This parameter is valid if `Type` is `Terrorism.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    TerrorismImageResult m_terrorismImageResult;
                    bool m_terrorismImageResultHasBeenSet;

                    /**
                     * The politically sensitive content detected in the image. This parameter is valid if `Type` is `Political.Image`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    PoliticalImageResult m_politicalImageResult;
                    bool m_politicalImageResultHasBeenSet;

                    /**
                     * The pornographic content detected in the image based on OCR. This parameter is valid if `Type` is `Porn.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ContentReviewOcrResult m_pornOcrResult;
                    bool m_pornOcrResultHasBeenSet;

                    /**
                     * The terrorist content detected in the image based on OCR. This parameter is valid if `Type` is `Terrorism.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ContentReviewOcrResult m_terrorismOcrResult;
                    bool m_terrorismOcrResultHasBeenSet;

                    /**
                     * The politically sensitive content detected in the image based on OCR. This parameter is valid if `Type` is `Political.Ocr`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ContentReviewOcrResult m_politicalOcrResult;
                    bool m_politicalOcrResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
