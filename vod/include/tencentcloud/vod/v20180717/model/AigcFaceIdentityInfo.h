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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Human face identity information.
                */
                class AigcFaceIdentityInfo : public AbstractModel
                {
                public:
                    AigcFaceIdentityInfo();
                    ~AigcFaceIdentityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Face ID in the video. The same human face is treated as a different ID if it appears more than 1s apart in the middle of the video.
                     * @return FaceId Face ID in the video. The same human face is treated as a different ID if it appears more than 1s apart in the middle of the video.
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置Face ID in the video. The same human face is treated as a different ID if it appears more than 1s apart in the middle of the video.
                     * @param _faceId Face ID in the video. The same human face is treated as a different ID if it appears more than 1s apart in the middle of the video.
                     * 
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取Schematic diagram of a human face captured from the video.
                     * @return FaceImage Schematic diagram of a human face captured from the video.
                     * 
                     */
                    std::string GetFaceImage() const;

                    /**
                     * 设置Schematic diagram of a human face captured from the video.
                     * @param _faceImage Schematic diagram of a human face captured from the video.
                     * 
                     */
                    void SetFaceImage(const std::string& _faceImage);

                    /**
                     * 判断参数 FaceImage 是否已赋值
                     * @return FaceImage 是否已赋值
                     * 
                     */
                    bool FaceImageHasBeenSet() const;

                    /**
                     * 获取Starting time of the lip-sync interval for this face, which can be used as the best start time for lip-sync. Unit: ms.
                     * @return StartTime Starting time of the lip-sync interval for this face, which can be used as the best start time for lip-sync. Unit: ms.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Starting time of the lip-sync interval for this face, which can be used as the best start time for lip-sync. Unit: ms.
                     * @param _startTime Starting time of the lip-sync interval for this face, which can be used as the best start time for lip-sync. Unit: ms.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the lip-sync interval for the face. Note: This result has a millisecond-level error and will be later than the actual interval end. Unit: ms.
                     * @return EndTime End time of the lip-sync interval for the face. Note: This result has a millisecond-level error and will be later than the actual interval end. Unit: ms.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of the lip-sync interval for the face. Note: This result has a millisecond-level error and will be later than the actual interval end. Unit: ms.
                     * @param _endTime End time of the lip-sync interval for the face. Note: This result has a millisecond-level error and will be later than the actual interval end. Unit: ms.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Face ID in the video. The same human face is treated as a different ID if it appears more than 1s apart in the middle of the video.
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * Schematic diagram of a human face captured from the video.
                     */
                    std::string m_faceImage;
                    bool m_faceImageHasBeenSet;

                    /**
                     * Starting time of the lip-sync interval for this face, which can be used as the best start time for lip-sync. Unit: ms.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the lip-sync interval for the face. Note: This result has a millisecond-level error and will be later than the actual interval end. Unit: ms.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_
