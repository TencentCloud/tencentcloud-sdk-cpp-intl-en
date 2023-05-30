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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Whiteboard push task result.
                */
                class WhiteboardPushResult : public AbstractModel
                {
                public:
                    WhiteboardPushResult();
                    ~WhiteboardPushResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`AUTO`: Pushing automatically stops. `USER_CALL`: The API for stopping pushing is called.
                     * @return FinishReason `AUTO`: Pushing automatically stops. `USER_CALL`: The API for stopping pushing is called.
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置`AUTO`: Pushing automatically stops. `USER_CALL`: The API for stopping pushing is called.
                     * @param FinishReason `AUTO`: Pushing automatically stops. `USER_CALL`: The API for stopping pushing is called.
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取Number of exceptions.
                     * @return ExceptionCnt Number of exceptions.
                     */
                    int64_t GetExceptionCnt() const;

                    /**
                     * 设置Number of exceptions.
                     * @param ExceptionCnt Number of exceptions.
                     */
                    void SetExceptionCnt(const int64_t& _exceptionCnt);

                    /**
                     * 判断参数 ExceptionCnt 是否已赋值
                     * @return ExceptionCnt 是否已赋值
                     */
                    bool ExceptionCntHasBeenSet() const;

                    /**
                     * 获取Room ID.
                     * @return RoomId Room ID.
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置Room ID.
                     * @param RoomId Room ID.
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取IM group ID.
                     * @return GroupId IM group ID.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置IM group ID.
                     * @param GroupId IM group ID.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Actual push start time.
                     * @return PushStartTime Actual push start time.
                     */
                    int64_t GetPushStartTime() const;

                    /**
                     * 设置Actual push start time.
                     * @param PushStartTime Actual push start time.
                     */
                    void SetPushStartTime(const int64_t& _pushStartTime);

                    /**
                     * 判断参数 PushStartTime 是否已赋值
                     * @return PushStartTime 是否已赋值
                     */
                    bool PushStartTimeHasBeenSet() const;

                    /**
                     * 获取Push end time.
                     * @return PushStopTime Push end time.
                     */
                    int64_t GetPushStopTime() const;

                    /**
                     * 设置Push end time.
                     * @param PushStopTime Push end time.
                     */
                    void SetPushStopTime(const int64_t& _pushStopTime);

                    /**
                     * 判断参数 PushStopTime 是否已赋值
                     * @return PushStopTime 是否已赋值
                     */
                    bool PushStopTimeHasBeenSet() const;

                    /**
                     * 获取IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     * @return IMSyncTime IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     */
                    int64_t GetIMSyncTime() const;

                    /**
                     * 设置IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     * @param IMSyncTime IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     */
                    void SetIMSyncTime(const int64_t& _iMSyncTime);

                    /**
                     * 判断参数 IMSyncTime 是否已赋值
                     * @return IMSyncTime 是否已赋值
                     */
                    bool IMSyncTimeHasBeenSet() const;

                    /**
                     * 获取Task execution error code.
                     * @return ErrorCode Task execution error code.
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Task execution error code.
                     * @param ErrorCode Task execution error code.
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return ErrorMsg Error message.
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Error message.
                     * @param ErrorMsg Error message.
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * `AUTO`: Pushing automatically stops. `USER_CALL`: The API for stopping pushing is called.
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * Number of exceptions.
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * Room ID.
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * IM group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Actual push start time.
                     */
                    int64_t m_pushStartTime;
                    bool m_pushStartTimeHasBeenSet;

                    /**
                     * Push end time.
                     */
                    int64_t m_pushStopTime;
                    bool m_pushStopTimeHasBeenSet;

                    /**
                     * IM timestamp corresponding to the first frame of the whiteboard push video. The timestamp is used for time synchronization between IM messages and the whiteboard push video during playback.
                     */
                    int64_t m_iMSyncTime;
                    bool m_iMSyncTimeHasBeenSet;

                    /**
                     * Task execution error code.
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHRESULT_H_
