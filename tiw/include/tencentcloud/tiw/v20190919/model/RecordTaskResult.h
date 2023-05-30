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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/VideoInfo.h>
#include <tencentcloud/tiw/v20190919/model/OmittedDuration.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Real-time recording result.
                */
                class RecordTaskResult : public AbstractModel
                {
                public:
                    RecordTaskResult();
                    ~RecordTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`AUTO`: Recording automatically stops. `USER_CALL`: The API for stopping recording is called.
                     * @return FinishReason `AUTO`: Recording automatically stops. `USER_CALL`: The API for stopping recording is called.
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置`AUTO`: Recording automatically stops. `USER_CALL`: The API for stopping recording is called.
                     * @param FinishReason `AUTO`: Recording automatically stops. `USER_CALL`: The API for stopping recording is called.
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
                     * 获取Group ID.
                     * @return GroupId Group ID.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID.
                     * @param GroupId Group ID.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Actual recording start time.
                     * @return RecordStartTime Actual recording start time.
                     */
                    int64_t GetRecordStartTime() const;

                    /**
                     * 设置Actual recording start time.
                     * @param RecordStartTime Actual recording start time.
                     */
                    void SetRecordStartTime(const int64_t& _recordStartTime);

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取Recording end time.
                     * @return RecordStopTime Recording end time.
                     */
                    int64_t GetRecordStopTime() const;

                    /**
                     * 设置Recording end time.
                     * @param RecordStopTime Recording end time.
                     */
                    void SetRecordStopTime(const int64_t& _recordStopTime);

                    /**
                     * 判断参数 RecordStopTime 是否已赋值
                     * @return RecordStopTime 是否已赋值
                     */
                    bool RecordStopTimeHasBeenSet() const;

                    /**
                     * 获取Recording duration.
                     * @return TotalTime Recording duration.
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置Recording duration.
                     * @param TotalTime Recording duration.
                     */
                    void SetTotalTime(const int64_t& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取List of video information.
                     * @return VideoInfos List of video information.
                     */
                    std::vector<VideoInfo> GetVideoInfos() const;

                    /**
                     * 设置List of video information.
                     * @param VideoInfos List of video information.
                     */
                    void SetVideoInfos(const std::vector<VideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取Omitted video durations.
                     * @return OmittedDurations Omitted video durations.
                     */
                    std::vector<OmittedDuration> GetOmittedDurations() const;

                    /**
                     * 设置Omitted video durations.
                     * @param OmittedDurations Omitted video durations.
                     */
                    void SetOmittedDurations(const std::vector<OmittedDuration>& _omittedDurations);

                    /**
                     * 判断参数 OmittedDurations 是否已赋值
                     * @return OmittedDurations 是否已赋值
                     */
                    bool OmittedDurationsHasBeenSet() const;

                    /**
                     * 获取Details.
                     * @return Details Details.
                     */
                    std::string GetDetails() const;

                    /**
                     * 设置Details.
                     * @param Details Details.
                     */
                    void SetDetails(const std::string& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

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
                     * `AUTO`: Recording automatically stops. `USER_CALL`: The API for stopping recording is called.
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
                     * Group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Actual recording start time.
                     */
                    int64_t m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * Recording end time.
                     */
                    int64_t m_recordStopTime;
                    bool m_recordStopTimeHasBeenSet;

                    /**
                     * Recording duration.
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * List of video information.
                     */
                    std::vector<VideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * Omitted video durations.
                     */
                    std::vector<OmittedDuration> m_omittedDurations;
                    bool m_omittedDurationsHasBeenSet;

                    /**
                     * Details.
                     */
                    std::string m_details;
                    bool m_detailsHasBeenSet;

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

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKRESULT_H_
