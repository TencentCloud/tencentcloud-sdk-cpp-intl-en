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
                     * 获取Media review information\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     * @return MediaReviewInfo Media review information\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     * 
                     */
                    ReviewInfo GetMediaReviewInfo() const;

                    /**
                     * 设置Media review information\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     * @param _mediaReviewInfo Media review information\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
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
                     * 获取Media cover review info\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     * @return CoverReviewInfo Media cover review info\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     * 
                     */
                    ReviewInfo GetCoverReviewInfo() const;

                    /**
                     * 设置Media cover review info\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     * @param _coverReviewInfo Media cover review info\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
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
                     * Media review information\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     */
                    ReviewInfo m_mediaReviewInfo;
                    bool m_mediaReviewInfoHasBeenSet;

                    /**
                     * Media cover review info\*.

\* Only show the review result info initiated by [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1).
                     */
                    ReviewInfo m_coverReviewInfo;
                    bool m_coverReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_
