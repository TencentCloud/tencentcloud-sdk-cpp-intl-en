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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETWATERMARKRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETWATERMARKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/WatermarkConfig.h>
#include <tencentcloud/lcic/v20220817/model/BackgroundPictureConfig.h>
#include <tencentcloud/lcic/v20220817/model/TextMarkConfig.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetWatermark response structure.
                */
                class GetWatermarkResponse : public AbstractModel
                {
                public:
                    GetWatermarkResponse();
                    ~GetWatermarkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The watermark settings for the teacher’s video. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeacherLogo The watermark settings for the teacher’s video. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WatermarkConfig GetTeacherLogo() const;

                    /**
                     * 判断参数 TeacherLogo 是否已赋值
                     * @return TeacherLogo 是否已赋值
                     * 
                     */
                    bool TeacherLogoHasBeenSet() const;

                    /**
                     * 获取The watermark settings for the whiteboard. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BoardLogo The watermark settings for the whiteboard. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WatermarkConfig GetBoardLogo() const;

                    /**
                     * 判断参数 BoardLogo 是否已赋值
                     * @return BoardLogo 是否已赋值
                     * 
                     */
                    bool BoardLogoHasBeenSet() const;

                    /**
                     * 获取The background image. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackgroundPicture The background image. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BackgroundPictureConfig GetBackgroundPicture() const;

                    /**
                     * 判断参数 BackgroundPicture 是否已赋值
                     * @return BackgroundPicture 是否已赋值
                     * 
                     */
                    bool BackgroundPictureHasBeenSet() const;

                    /**
                     * 获取The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TextMarkConfig GetText() const;

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * The watermark settings for the teacher’s video. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WatermarkConfig m_teacherLogo;
                    bool m_teacherLogoHasBeenSet;

                    /**
                     * The watermark settings for the whiteboard. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WatermarkConfig m_boardLogo;
                    bool m_boardLogoHasBeenSet;

                    /**
                     * The background image. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackgroundPictureConfig m_backgroundPicture;
                    bool m_backgroundPictureHasBeenSet;

                    /**
                     * The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TextMarkConfig m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETWATERMARKRESPONSE_H_
