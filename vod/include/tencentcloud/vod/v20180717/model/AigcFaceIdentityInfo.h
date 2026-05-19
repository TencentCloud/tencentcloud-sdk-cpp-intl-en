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
                     * 获取Face ID in the video. The same human face is considered a different ID when the interval in the middle of the video exceeds 1s.
                     * @return FaceId Face ID in the video. The same human face is considered a different ID when the interval in the middle of the video exceeds 1s.
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置Face ID in the video. The same human face is considered a different ID when the interval in the middle of the video exceeds 1s.
                     * @param _faceId Face ID in the video. The same human face is considered a different ID when the interval in the middle of the video exceeds 1s.
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
                     * 获取Schematic diagram of human face extracted from the video.
                     * @return FaceImage Schematic diagram of human face extracted from the video.
                     * 
                     */
                    std::string GetFaceImage() const;

                    /**
                     * 设置Schematic diagram of human face extracted from the video.
                     * @param _faceImage Schematic diagram of human face extracted from the video.
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
                     * 获取The starting time of the lip-sync interval can be used as the best start time for lip-sync. Unit: ms.
                     * @return StartTime The starting time of the lip-sync interval can be used as the best start time for lip-sync. Unit: ms.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The starting time of the lip-sync interval can be used as the best start time for lip-sync. Unit: ms.
                     * @param _startTime The starting time of the lip-sync interval can be used as the best start time for lip-sync. Unit: ms.
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
                     * 获取The end time of the lip-sync interval for this face. Note: This result may have millisecond-level deviation and could be longer than the actual interval end. Unit: ms.
                     * @return EndTime The end time of the lip-sync interval for this face. Note: This result may have millisecond-level deviation and could be longer than the actual interval end. Unit: ms.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The end time of the lip-sync interval for this face. Note: This result may have millisecond-level deviation and could be longer than the actual interval end. Unit: ms.
                     * @param _endTime The end time of the lip-sync interval for this face. Note: This result may have millisecond-level deviation and could be longer than the actual interval end. Unit: ms.
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
                     * Face ID in the video. The same human face is considered a different ID when the interval in the middle of the video exceeds 1s.
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * Schematic diagram of human face extracted from the video.
                     */
                    std::string m_faceImage;
                    bool m_faceImageHasBeenSet;

                    /**
                     * The starting time of the lip-sync interval can be used as the best start time for lip-sync. Unit: ms.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the lip-sync interval for this face. Note: This result may have millisecond-level deviation and could be longer than the actual interval end. Unit: ms.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_
