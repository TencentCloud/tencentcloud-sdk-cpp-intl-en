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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDPUSHRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDPUSHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeWhiteboardPush response structure.
                */
                class DescribeWhiteboardPushResponse : public AbstractModel
                {
                public:
                    DescribeWhiteboardPushResponse();
                    ~DescribeWhiteboardPushResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Reason for push stop.
- AUTO: Pushing automatically stops because no upstream audio/video or whiteboard operation occurs in the room for a long time.
- USER_CALL: The API for stopping pushing is called.
- EXCEPTION: An exception occurred.
                     * @return FinishReason Reason for push stop.
- AUTO: Pushing automatically stops because no upstream audio/video or whiteboard operation occurs in the room for a long time.
- USER_CALL: The API for stopping pushing is called.
- EXCEPTION: An exception occurred.
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     * 
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取ID of the whiteboard push task.
                     * @return TaskId ID of the whiteboard push task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Status of the push task.
- PREPARED: Push in preparation (including entering the room and starting the push service).
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     * @return Status Status of the push task.
- PREPARED: Push in preparation (including entering the room and starting the push service).
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Room ID.
                     * @return RoomId Room ID.
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Group ID of the whiteboard.
                     * @return GroupId Group ID of the whiteboard.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取User ID of the push task.
                     * @return PushUserId User ID of the push task.
                     * 
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     * 
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取Actual push start time, which is a Unix timestamp in seconds.
                     * @return PushStartTime Actual push start time, which is a Unix timestamp in seconds.
                     * 
                     */
                    int64_t GetPushStartTime() const;

                    /**
                     * 判断参数 PushStartTime 是否已赋值
                     * @return PushStartTime 是否已赋值
                     * 
                     */
                    bool PushStartTimeHasBeenSet() const;

                    /**
                     * 获取Actual push stop time, which is a Unix timestamp in seconds.
                     * @return PushStopTime Actual push stop time, which is a Unix timestamp in seconds.
                     * 
                     */
                    int64_t GetPushStopTime() const;

                    /**
                     * 判断参数 PushStopTime 是否已赋值
                     * @return PushStopTime 是否已赋值
                     * 
                     */
                    bool PushStopTimeHasBeenSet() const;

                    /**
                     * 获取Number of exceptions during push.
                     * @return ExceptionCnt Number of exceptions during push.
                     * 
                     */
                    int64_t GetExceptionCnt() const;

                    /**
                     * 判断参数 ExceptionCnt 是否已赋值
                     * @return ExceptionCnt 是否已赋值
                     * 
                     */
                    bool ExceptionCntHasBeenSet() const;

                    /**
                     * 获取IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     * @return IMSyncTime IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     * 
                     */
                    int64_t GetIMSyncTime() const;

                    /**
                     * 判断参数 IMSyncTime 是否已赋值
                     * @return IMSyncTime 是否已赋值
                     * 
                     */
                    bool IMSyncTimeHasBeenSet() const;

                    /**
                     * 获取Result information of the backup push task.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Backup Result information of the backup push task.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackup() const;

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     * 
                     */
                    bool BackupHasBeenSet() const;

                private:

                    /**
                     * Reason for push stop.
- AUTO: Pushing automatically stops because no upstream audio/video or whiteboard operation occurs in the room for a long time.
- USER_CALL: The API for stopping pushing is called.
- EXCEPTION: An exception occurred.
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * ID of the whiteboard push task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Status of the push task.
- PREPARED: Push in preparation (including entering the room and starting the push service).
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Room ID.
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Group ID of the whiteboard.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * User ID of the push task.
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * Actual push start time, which is a Unix timestamp in seconds.
                     */
                    int64_t m_pushStartTime;
                    bool m_pushStartTimeHasBeenSet;

                    /**
                     * Actual push stop time, which is a Unix timestamp in seconds.
                     */
                    int64_t m_pushStopTime;
                    bool m_pushStopTimeHasBeenSet;

                    /**
                     * Number of exceptions during push.
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     */
                    int64_t m_iMSyncTime;
                    bool m_iMSyncTimeHasBeenSet;

                    /**
                     * Result information of the backup push task.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backup;
                    bool m_backupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDPUSHRESPONSE_H_
