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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImgReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TerrorismOcrReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Parameters for recognition of terrorism content
                */
                class TerrorismConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    TerrorismConfigureInfoForUpdate();
                    ~TerrorismConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameters for recognition of terrorism content in images
                     * @return ImgReviewInfo Parameters for recognition of terrorism content in images
                     * 
                     */
                    TerrorismImgReviewTemplateInfoForUpdate GetImgReviewInfo() const;

                    /**
                     * 设置Parameters for recognition of terrorism content in images
                     * @param _imgReviewInfo Parameters for recognition of terrorism content in images
                     * 
                     */
                    void SetImgReviewInfo(const TerrorismImgReviewTemplateInfoForUpdate& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取Parameters for OCR-based recognition of terrorism content
                     * @return OcrReviewInfo Parameters for OCR-based recognition of terrorism content
                     * 
                     */
                    TerrorismOcrReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置Parameters for OCR-based recognition of terrorism content
                     * @param _ocrReviewInfo Parameters for OCR-based recognition of terrorism content
                     * 
                     */
                    void SetOcrReviewInfo(const TerrorismOcrReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Parameters for recognition of terrorism content in images
                     */
                    TerrorismImgReviewTemplateInfoForUpdate m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * Parameters for OCR-based recognition of terrorism content
                     */
                    TerrorismOcrReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFOFORUPDATE_H_
