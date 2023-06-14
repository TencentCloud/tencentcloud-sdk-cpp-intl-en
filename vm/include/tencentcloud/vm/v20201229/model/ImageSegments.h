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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_IMAGESEGMENTS_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_IMAGESEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/ImageResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Image segment information
                */
                class ImageSegments : public AbstractModel
                {
                public:
                    ImageSegments();
                    ~ImageSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the frame capturing time of a video segment in seconds. For video on demand files, this parameter indicates the time offset of the captured image from the video, such as 0 (no offset), 5 (5 seconds after the start of the video), and 10 (10 seconds after the start of the video). For live video stream files, this parameter returns the Unix timestamp of the image, such as `1594650717`.
                     * @return OffsetTime This field is used to return the frame capturing time of a video segment in seconds. For video on demand files, this parameter indicates the time offset of the captured image from the video, such as 0 (no offset), 5 (5 seconds after the start of the video), and 10 (10 seconds after the start of the video). For live video stream files, this parameter returns the Unix timestamp of the image, such as `1594650717`.
                     * 
                     */
                    std::string GetOffsetTime() const;

                    /**
                     * 设置This field is used to return the frame capturing time of a video segment in seconds. For video on demand files, this parameter indicates the time offset of the captured image from the video, such as 0 (no offset), 5 (5 seconds after the start of the video), and 10 (10 seconds after the start of the video). For live video stream files, this parameter returns the Unix timestamp of the image, such as `1594650717`.
                     * @param _offsetTime This field is used to return the frame capturing time of a video segment in seconds. For video on demand files, this parameter indicates the time offset of the captured image from the video, such as 0 (no offset), 5 (5 seconds after the start of the video), and 10 (10 seconds after the start of the video). For live video stream files, this parameter returns the Unix timestamp of the image, such as `1594650717`.
                     * 
                     */
                    void SetOffsetTime(const std::string& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取This field is used to return the specific moderation result of a frame captured from a video segment. For details, see the description of the `ImageResult` data structure.
                     * @return Result This field is used to return the specific moderation result of a frame captured from a video segment. For details, see the description of the `ImageResult` data structure.
                     * 
                     */
                    ImageResult GetResult() const;

                    /**
                     * 设置This field is used to return the specific moderation result of a frame captured from a video segment. For details, see the description of the `ImageResult` data structure.
                     * @param _result This field is used to return the specific moderation result of a frame captured from a video segment. For details, see the description of the `ImageResult` data structure.
                     * 
                     */
                    void SetResult(const ImageResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the frame capturing time of a video segment in seconds. For video on demand files, this parameter indicates the time offset of the captured image from the video, such as 0 (no offset), 5 (5 seconds after the start of the video), and 10 (10 seconds after the start of the video). For live video stream files, this parameter returns the Unix timestamp of the image, such as `1594650717`.
                     */
                    std::string m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * This field is used to return the specific moderation result of a frame captured from a video segment. For details, see the description of the `ImageResult` data structure.
                     */
                    ImageResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_IMAGESEGMENTS_H_
