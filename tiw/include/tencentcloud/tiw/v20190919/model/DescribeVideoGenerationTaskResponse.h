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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEVIDEOGENERATIONTASKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEVIDEOGENERATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeVideoGenerationTask response structure.
                */
                class DescribeVideoGenerationTaskResponse : public AbstractModel
                {
                public:
                    DescribeVideoGenerationTaskResponse();
                    ~DescribeVideoGenerationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Group ID corresponding to the task.
                     * @return GroupId Group ID corresponding to the task.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Room ID corresponding to the task.
                     * @return RoomId Room ID corresponding to the task.
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Disused.
                     * @return Progress Disused.
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Status of the recording video generation task. Valid values:
- QUEUED: Queuing.
- PROCESSING: Video generation in progress.
- FINISHED: Video generation finished. (To determine whether the task succeeded or failed, check the error code and message.)
                     * @return Status Status of the recording video generation task. Valid values:
- QUEUED: Queuing.
- PROCESSING: Video generation in progress.
- FINISHED: Video generation finished. (To determine whether the task succeeded or failed, check the error code and message.)
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Total video playback duration. Unit: milliseconds.
                     * @return TotalTime Total video playback duration. Unit: milliseconds.
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取Disused. Use the `VideoInfoList` parameter.
                     * @return VideoInfos Disused. Use the `VideoInfoList` parameter.
                     */
                    VideoInfo GetVideoInfos() const;

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取List of videos generated by the recording video generation tasks.
                     * @return VideoInfoList List of videos generated by the recording video generation tasks.
                     */
                    std::vector<VideoInfo> GetVideoInfoList() const;

                    /**
                     * 判断参数 VideoInfoList 是否已赋值
                     * @return VideoInfoList 是否已赋值
                     */
                    bool VideoInfoListHasBeenSet() const;

                private:

                    /**
                     * Group ID corresponding to the task.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Room ID corresponding to the task.
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Disused.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Status of the recording video generation task. Valid values:
- QUEUED: Queuing.
- PROCESSING: Video generation in progress.
- FINISHED: Video generation finished. (To determine whether the task succeeded or failed, check the error code and message.)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Total video playback duration. Unit: milliseconds.
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * Disused. Use the `VideoInfoList` parameter.
                     */
                    VideoInfo m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * List of videos generated by the recording video generation tasks.
                     */
                    std::vector<VideoInfo> m_videoInfoList;
                    bool m_videoInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEVIDEOGENERATIONTASKRESPONSE_H_
