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
                * Control parameter of a politically sensitive information detection task
                */
                class PoliticalConfigureInfo : public AbstractModel
                {
                public:
                    PoliticalConfigureInfo();
                    ~PoliticalConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of politically sensitive information detection in image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImgReviewInfo Control parameter of politically sensitive information detection in image.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置Control parameter of politically sensitive information detection in image.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ImgReviewInfo Control parameter of politically sensitive information detection in image.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetImgReviewInfo(const PoliticalImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of politically sensitive information detection in speech.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrReviewInfo Control parameter of politically sensitive information detection in speech.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalAsrReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置Control parameter of politically sensitive information detection in speech.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AsrReviewInfo Control parameter of politically sensitive information detection in speech.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrReviewInfo(const PoliticalAsrReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of politically sensitive information detection in text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrReviewInfo Control parameter of politically sensitive information detection in text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of politically sensitive information detection in text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OcrReviewInfo Control parameter of politically sensitive information detection in text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrReviewInfo(const PoliticalOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of politically sensitive information detection in image.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * Control parameter of politically sensitive information detection in speech.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalAsrReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Control parameter of politically sensitive information detection in text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALCONFIGUREINFO_H_
