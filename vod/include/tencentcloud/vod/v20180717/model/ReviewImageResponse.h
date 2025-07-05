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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ContentReviewResult.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ReviewImage response structure.
                */
                class ReviewImageResponse : public AbstractModel
                {
                public:
                    ReviewImageResponse();
                    ~ReviewImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The image moderation result. <font color=red>Note: This parameter is no longer used. Please use `MediaReviewResult` instead.</font>
                     * @return ReviewResultSet The image moderation result. <font color=red>Note: This parameter is no longer used. Please use `MediaReviewResult` instead.</font>
                     * 
                     */
                    std::vector<ContentReviewResult> GetReviewResultSet() const;

                    /**
                     * 判断参数 ReviewResultSet 是否已赋值
                     * @return ReviewResultSet 是否已赋值
                     * 
                     */
                    bool ReviewResultSetHasBeenSet() const;

                    /**
                     * 获取The image moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MediaReviewResult The image moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReviewImageResult GetMediaReviewResult() const;

                    /**
                     * 判断参数 MediaReviewResult 是否已赋值
                     * @return MediaReviewResult 是否已赋值
                     * 
                     */
                    bool MediaReviewResultHasBeenSet() const;

                private:

                    /**
                     * The image moderation result. <font color=red>Note: This parameter is no longer used. Please use `MediaReviewResult` instead.</font>
                     */
                    std::vector<ContentReviewResult> m_reviewResultSet;
                    bool m_reviewResultSetHasBeenSet;

                    /**
                     * The image moderation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReviewImageResult m_mediaReviewResult;
                    bool m_mediaReviewResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESPONSE_H_
