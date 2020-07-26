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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROHIBITEDCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROHIBITEDCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedAsrReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedOcrReviewTemplateInfo.h>


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
                class ProhibitedConfigureInfo : public AbstractModel
                {
                public:
                    ProhibitedConfigureInfo();
                    ~ProhibitedConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of prohibited information detection in speech.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AsrReviewInfo Control parameter of prohibited information detection in speech.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedAsrReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置Control parameter of prohibited information detection in speech.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AsrReviewInfo Control parameter of prohibited information detection in speech.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrReviewInfo(const ProhibitedAsrReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of prohibited information detection in text.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OcrReviewInfo Control parameter of prohibited information detection in text.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of prohibited information detection in text.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OcrReviewInfo Control parameter of prohibited information detection in text.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrReviewInfo(const ProhibitedOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of prohibited information detection in speech.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedAsrReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * Control parameter of prohibited information detection in text.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROHIBITEDCONFIGUREINFO_H_
