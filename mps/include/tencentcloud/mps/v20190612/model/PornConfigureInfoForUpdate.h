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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PORNCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PORNCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PornImgReviewTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/PornAsrReviewTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/PornOcrReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Control parameter of a porn information detection task.
                */
                class PornConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    PornConfigureInfoForUpdate();
                    ~PornConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of porn information detection in image.
                     * @return ImgReviewInfo Control parameter of porn information detection in image.
                     * 
                     */
                    PornImgReviewTemplateInfoForUpdate GetImgReviewInfo() const;

                    /**
                     * 设置Control parameter of porn information detection in image.
                     * @param _imgReviewInfo Control parameter of porn information detection in image.
                     * 
                     */
                    void SetImgReviewInfo(const PornImgReviewTemplateInfoForUpdate& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     * 
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of porn information detection in speech.
                     * @return AsrReviewInfo Control parameter of porn information detection in speech.
                     * 
                     */
                    PornAsrReviewTemplateInfoForUpdate GetAsrReviewInfo() const;

                    /**
                     * 设置Control parameter of porn information detection in speech.
                     * @param _asrReviewInfo Control parameter of porn information detection in speech.
                     * 
                     */
                    void SetAsrReviewInfo(const PornAsrReviewTemplateInfoForUpdate& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of porn information detection in text.
                     * @return OcrReviewInfo Control parameter of porn information detection in text.
                     * 
                     */
                    PornOcrReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of porn information detection in text.
                     * @param _ocrReviewInfo Control parameter of porn information detection in text.
                     * 
                     */
                    void SetOcrReviewInfo(const PornOcrReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of porn information detection in image.
                     */
                    PornImgReviewTemplateInfoForUpdate m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * Control parameter of porn information detection in speech.
                     */
                    PornAsrReviewTemplateInfoForUpdate m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Control parameter of porn information detection in text.
                     */
                    PornOcrReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PORNCONFIGUREINFOFORUPDATE_H_
