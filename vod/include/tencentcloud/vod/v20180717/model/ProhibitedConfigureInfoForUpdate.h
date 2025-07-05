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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROHIBITEDCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROHIBITEDCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedAsrReviewTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedOcrReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Control parameter of prohibited information detection task
                */
                class ProhibitedConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    ProhibitedConfigureInfoForUpdate();
                    ~ProhibitedConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of prohibited information detection in speech.
                     * @return AsrReviewInfo Control parameter of prohibited information detection in speech.
                     * 
                     */
                    ProhibitedAsrReviewTemplateInfoForUpdate GetAsrReviewInfo() const;

                    /**
                     * 设置Control parameter of prohibited information detection in speech.
                     * @param _asrReviewInfo Control parameter of prohibited information detection in speech.
                     * 
                     */
                    void SetAsrReviewInfo(const ProhibitedAsrReviewTemplateInfoForUpdate& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of prohibited information detection in text.
                     * @return OcrReviewInfo Control parameter of prohibited information detection in text.
                     * 
                     */
                    ProhibitedOcrReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of prohibited information detection in text.
                     * @param _ocrReviewInfo Control parameter of prohibited information detection in text.
                     * 
                     */
                    void SetOcrReviewInfo(const ProhibitedOcrReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of prohibited information detection in speech.
                     */
                    ProhibitedAsrReviewTemplateInfoForUpdate m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Control parameter of prohibited information detection in text.
                     */
                    ProhibitedOcrReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROHIBITEDCONFIGUREINFOFORUPDATE_H_
