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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PORNCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PORNCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PornImgReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/PornAsrReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/PornOcrReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Parameters for recognition of pornographic content
                */
                class PornConfigureInfo : public AbstractModel
                {
                public:
                    PornConfigureInfo();
                    ~PornConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image recognition involves control parameters for offensive information.
                     * @return ImgReviewInfo Image recognition involves control parameters for offensive information.
                     * 
                     */
                    PornImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置Image recognition involves control parameters for offensive information.
                     * @param _imgReviewInfo Image recognition involves control parameters for offensive information.
                     * 
                     */
                    void SetImgReviewInfo(const PornImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取ASR-based recognition involves control parameters for offensive information.
                     * @return AsrReviewInfo ASR-based recognition involves control parameters for offensive information.
                     * 
                     */
                    PornAsrReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置ASR-based recognition involves control parameters for offensive information.
                     * @param _asrReviewInfo ASR-based recognition involves control parameters for offensive information.
                     * 
                     */
                    void SetAsrReviewInfo(const PornAsrReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Text recognition involves control parameters for offensive information.
                     * @return OcrReviewInfo Text recognition involves control parameters for offensive information.
                     * 
                     */
                    PornOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置Text recognition involves control parameters for offensive information.
                     * @param _ocrReviewInfo Text recognition involves control parameters for offensive information.
                     * 
                     */
                    void SetOcrReviewInfo(const PornOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Image recognition involves control parameters for offensive information.
                     */
                    PornImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * ASR-based recognition involves control parameters for offensive information.
                     */
                    PornAsrReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Text recognition involves control parameters for offensive information.
                     */
                    PornOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PORNCONFIGUREINFO_H_
