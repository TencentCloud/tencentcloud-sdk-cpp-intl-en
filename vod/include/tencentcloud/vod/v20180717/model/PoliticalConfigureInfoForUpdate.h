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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PoliticalImgReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PoliticalAsrReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PoliticalOcrReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Parameters for recognition of politically sensitive content
                */
                class PoliticalConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    PoliticalConfigureInfoForUpdate();
                    ~PoliticalConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameters for recognition of politically sensitive content in images
                     * @return ImgReviewInfo Parameters for recognition of politically sensitive content in images
                     * 
                     */
                    PoliticalImgReviewTemplateInfoForUpdate GetImgReviewInfo() const;

                    /**
                     * 设置Parameters for recognition of politically sensitive content in images
                     * @param _imgReviewInfo Parameters for recognition of politically sensitive content in images
                     * 
                     */
                    void SetImgReviewInfo(const PoliticalImgReviewTemplateInfoForUpdate& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取Parameters for ASR-based recognition of politically sensitive content
                     * @return AsrReviewInfo Parameters for ASR-based recognition of politically sensitive content
                     * 
                     */
                    PoliticalAsrReviewTemplateInfoForUpdate GetAsrReviewInfo() const;

                    /**
                     * 设置Parameters for ASR-based recognition of politically sensitive content
                     * @param _asrReviewInfo Parameters for ASR-based recognition of politically sensitive content
                     * 
                     */
                    void SetAsrReviewInfo(const PoliticalAsrReviewTemplateInfoForUpdate& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Parameters for OCR-based recognition of politically sensitive content
                     * @return OcrReviewInfo Parameters for OCR-based recognition of politically sensitive content
                     * 
                     */
                    PoliticalOcrReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置Parameters for OCR-based recognition of politically sensitive content
                     * @param _ocrReviewInfo Parameters for OCR-based recognition of politically sensitive content
                     * 
                     */
                    void SetOcrReviewInfo(const PoliticalOcrReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Parameters for recognition of politically sensitive content in images
                     */
                    PoliticalImgReviewTemplateInfoForUpdate m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * Parameters for ASR-based recognition of politically sensitive content
                     */
                    PoliticalAsrReviewTemplateInfoForUpdate m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Parameters for OCR-based recognition of politically sensitive content
                     */
                    PoliticalOcrReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALCONFIGUREINFOFORUPDATE_H_
