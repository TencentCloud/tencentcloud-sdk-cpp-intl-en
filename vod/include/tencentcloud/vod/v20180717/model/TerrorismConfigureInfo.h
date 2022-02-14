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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImgReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/TerrorismOcrReviewTemplateInfo.h>


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
                class TerrorismConfigureInfo : public AbstractModel
                {
                public:
                    TerrorismConfigureInfo();
                    ~TerrorismConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameters for recognition of terrorism content in images
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return ImgReviewInfo Parameters for recognition of terrorism content in images
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    TerrorismImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置Parameters for recognition of terrorism content in images
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param ImgReviewInfo Parameters for recognition of terrorism content in images
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetImgReviewInfo(const TerrorismImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取Parameters for OCR-based recognition of terrorism content
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return OcrReviewInfo Parameters for OCR-based recognition of terrorism content
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    TerrorismOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置Parameters for OCR-based recognition of terrorism content
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param OcrReviewInfo Parameters for OCR-based recognition of terrorism content
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetOcrReviewInfo(const TerrorismOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Parameters for recognition of terrorism content in images
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    TerrorismImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * Parameters for OCR-based recognition of terrorism content
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    TerrorismOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_
