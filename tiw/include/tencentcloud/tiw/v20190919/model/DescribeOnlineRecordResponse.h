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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEONLINERECORDRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEONLINERECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/OmittedDuration.h>
#include <tencentcloud/tiw/v20190919/model/VideoInfo.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeOnlineRecord response structure.
                */
                class DescribeOnlineRecordResponse : public AbstractModel
                {
                public:
                    DescribeOnlineRecordResponse();
                    ~DescribeOnlineRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Recording stop reason
- AUTO: recording automatically stops because no upstream audio/video or whiteboard operation occurs in the room for a long time.
- USER_CALL: the API for stopping recording is called.
- EXCEPTION: an exception occurred during recording.
                     * @return FinishReason Recording stop reason
- AUTO: recording automatically stops because no upstream audio/video or whiteboard operation occurs in the room for a long time.
- USER_CALL: the API for stopping recording is called.
- EXCEPTION: an exception occurred during recording.
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取ID of the recording task to be queried.
                     * @return TaskId ID of the recording task to be queried.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Recording task status
- PREPARED: preparing
- RECORDING: recording
- PAUSED: recording is paused.
- STOPPED: recording is stopped, and the recorded video is being processed and uploaded.
- FINISHED: the recorded video has been processed and uploaded, and the recording result is generated.
                     * @return Status Recording task status
- PREPARED: preparing
- RECORDING: recording
- PAUSED: recording is paused.
- STOPPED: recording is stopped, and the recorded video is being processed and uploaded.
- FINISHED: the recorded video has been processed and uploaded, and the recording result is generated.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Room ID
                     * @return RoomId Room ID
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Group ID of the whiteboard
                     * @return GroupId Group ID of the whiteboard
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取ID of the recording user
                     * @return RecordUserId ID of the recording user
                     */
                    std::string GetRecordUserId() const;

                    /**
                     * 判断参数 RecordUserId 是否已赋值
                     * @return RecordUserId 是否已赋值
                     */
                    bool RecordUserIdHasBeenSet() const;

                    /**
                     * 获取Actual recording start time, which is a UNIX timestamp in seconds
                     * @return RecordStartTime Actual recording start time, which is a UNIX timestamp in seconds
                     */
                    int64_t GetRecordStartTime() const;

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取Actual recording stop time, which is a UNIX timestamp in seconds
                     * @return RecordStopTime Actual recording stop time, which is a UNIX timestamp in seconds
                     */
                    int64_t GetRecordStopTime() const;

                    /**
                     * 判断参数 RecordStopTime 是否已赋值
                     * @return RecordStopTime 是否已赋值
                     */
                    bool RecordStopTimeHasBeenSet() const;

                    /**
                     * 获取Total video playback duration, in milliseconds
                     * @return TotalTime Total video playback duration, in milliseconds
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取Number of exceptions during recording
                     * @return ExceptionCnt Number of exceptions during recording
                     */
                    int64_t GetExceptionCnt() const;

                    /**
                     * 判断参数 ExceptionCnt 是否已赋值
                     * @return ExceptionCnt 是否已赋值
                     */
                    bool ExceptionCntHasBeenSet() const;

                    /**
                     * 获取Duration to be deleted in the spliced video. This parameter is valid only when the video splicing feature is enabled.
                     * @return OmittedDurations Duration to be deleted in the spliced video. This parameter is valid only when the video splicing feature is enabled.
                     */
                    std::vector<OmittedDuration> GetOmittedDurations() const;

                    /**
                     * 判断参数 OmittedDurations 是否已赋值
                     * @return OmittedDurations 是否已赋值
                     */
                    bool OmittedDurationsHasBeenSet() const;

                    /**
                     * 获取List of recorded videos
                     * @return VideoInfos List of recorded videos
                     */
                    std::vector<VideoInfo> GetVideoInfos() const;

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     */
                    bool VideoInfosHasBeenSet() const;

                private:

                    /**
                     * Recording stop reason
- AUTO: recording automatically stops because no upstream audio/video or whiteboard operation occurs in the room for a long time.
- USER_CALL: the API for stopping recording is called.
- EXCEPTION: an exception occurred during recording.
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * ID of the recording task to be queried.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Recording task status
- PREPARED: preparing
- RECORDING: recording
- PAUSED: recording is paused.
- STOPPED: recording is stopped, and the recorded video is being processed and uploaded.
- FINISHED: the recorded video has been processed and uploaded, and the recording result is generated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Room ID
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Group ID of the whiteboard
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * ID of the recording user
                     */
                    std::string m_recordUserId;
                    bool m_recordUserIdHasBeenSet;

                    /**
                     * Actual recording start time, which is a UNIX timestamp in seconds
                     */
                    int64_t m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * Actual recording stop time, which is a UNIX timestamp in seconds
                     */
                    int64_t m_recordStopTime;
                    bool m_recordStopTimeHasBeenSet;

                    /**
                     * Total video playback duration, in milliseconds
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * Number of exceptions during recording
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * Duration to be deleted in the spliced video. This parameter is valid only when the video splicing feature is enabled.
                     */
                    std::vector<OmittedDuration> m_omittedDurations;
                    bool m_omittedDurationsHasBeenSet;

                    /**
                     * List of recorded videos
                     */
                    std::vector<VideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEONLINERECORDRESPONSE_H_
