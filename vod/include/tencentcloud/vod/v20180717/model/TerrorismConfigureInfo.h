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
                * Control parameter of terrorism information detection task
                */
                class TerrorismConfigureInfo : public AbstractModel
                {
                public:
                    TerrorismConfigureInfo();
                    ~TerrorismConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter of terrorism information detection in video image task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImgReviewInfo Control parameter of terrorism information detection in video image task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TerrorismImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置Control parameter of terrorism information detection in video image task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ImgReviewInfo Control parameter of terrorism information detection in video image task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetImgReviewInfo(const TerrorismImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                    /**
                     * 获取Control parameter of terrorism information detection in text task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OcrReviewInfo Control parameter of terrorism information detection in text task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TerrorismOcrReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置Control parameter of terrorism information detection in text task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OcrReviewInfo Control parameter of terrorism information detection in text task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrReviewInfo(const TerrorismOcrReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter of terrorism information detection in video image task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TerrorismImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                    /**
                     * Control parameter of terrorism information detection in text task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TerrorismOcrReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_
