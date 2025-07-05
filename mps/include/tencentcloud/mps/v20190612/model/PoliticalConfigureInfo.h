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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALCONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PoliticalImgReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/PoliticalAsrReviewTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/PoliticalOcrReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The parameters for detecting sensitive information.
                */
                class PoliticalConfigureInfo : public AbstractModel
                {
                public:
                    PoliticalConfigureInfo();
                    ~PoliticalConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The parameters for detecting sensitive information in images.
                     * @return ImgReviewInfo The parameters for detecting sensitive information in images.
                     * 
                     */
                    PoliticalImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置The parameters for detecting sensitive information in images.
                     * @param _imgReviewInfo The parameters for detecting sensitive information in images.
                     * 
                     */
                    void SetImgReviewInfo(const PoliticalImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取The parameters for detecting sensitive information based on ASR.
                     * @return AsrReviewInfo The parameters for detecting sensitive information based on ASR.
                     * 
                     */
                    PoliticalAsrReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置The parameters for detecting sensitive information based on ASR.
                     * @param _asrReviewInfo The parameters for detecting sensitive information based on ASR.
                     * 
                     */
                    void SetAsrReviewInfo(const PoliticalAsrReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取The parameters for detecting sensitive information based on OCR.
                     * @return OcrReviewInfo The parameters for detecting sensitive information based on OCR.
                     * 
                     */
                    PoliticalOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置The parameters for detecting sensitive information based on OCR.
                     * @param _ocrReviewInfo The parameters for detecting sensitive information based on OCR.
                     * 
                     */
                    void SetOcrReviewInfo(const PoliticalOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * The parameters for detecting sensitive information in images.
                     */
                    PoliticalImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * The parameters for detecting sensitive information based on ASR.
                     */
                    PoliticalAsrReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * The parameters for detecting sensitive information based on OCR.
                     */
                    PoliticalOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALCONFIGUREINFO_H_
