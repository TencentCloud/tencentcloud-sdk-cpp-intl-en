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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * File moderation information.
                */
                class FileReviewInfo : public AbstractModel
                {
                public:
                    FileReviewInfo();
                    ~FileReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio/Video moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MediaReviewInfo Audio/Video moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReviewInfo GetMediaReviewInfo() const;

                    /**
                     * 设置Audio/Video moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mediaReviewInfo Audio/Video moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMediaReviewInfo(const ReviewInfo& _mediaReviewInfo);

                    /**
                     * 判断参数 MediaReviewInfo 是否已赋值
                     * @return MediaReviewInfo 是否已赋值
                     * 
                     */
                    bool MediaReviewInfoHasBeenSet() const;

                    /**
                     * 获取Thumbnail moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoverReviewInfo Thumbnail moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReviewInfo GetCoverReviewInfo() const;

                    /**
                     * 设置Thumbnail moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coverReviewInfo Thumbnail moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCoverReviewInfo(const ReviewInfo& _coverReviewInfo);

                    /**
                     * 判断参数 CoverReviewInfo 是否已赋值
                     * @return CoverReviewInfo 是否已赋值
                     * 
                     */
                    bool CoverReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Audio/Video moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReviewInfo m_mediaReviewInfo;
                    bool m_mediaReviewInfoHasBeenSet;

                    /**
                     * Thumbnail moderation details\*.

\* This parameter only contains the information of moderation tasks initiated by the [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) or [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1) API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReviewInfo m_coverReviewInfo;
                    bool m_coverReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_
