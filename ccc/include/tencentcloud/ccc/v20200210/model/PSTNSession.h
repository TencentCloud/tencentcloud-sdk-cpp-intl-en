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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSION_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * PSTN session type.
                */
                class PSTNSession : public AbstractModel
                {
                public:
                    PSTNSession();
                    ~PSTNSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Session id.
                     * @return SessionID Session id.
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置Session id.
                     * @param _sessionID Session id.
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取Temporary room id for session.
                     * @return RoomID Temporary room id for session.
                     * 
                     */
                    std::string GetRoomID() const;

                    /**
                     * 设置Temporary room id for session.
                     * @param _roomID Temporary room id for session.
                     * 
                     */
                    void SetRoomID(const std::string& _roomID);

                    /**
                     * 判断参数 RoomID 是否已赋值
                     * @return RoomID 是否已赋值
                     * 
                     */
                    bool RoomIDHasBeenSet() const;

                    /**
                     * 获取Caller.
                     * @return Caller Caller.
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置Caller.
                     * @param _caller Caller.
                     * 
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取Called.
                     * @return Callee Called.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Called.
                     * @param _callee Called.
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Start time. unix timestamp.
                     * @return StartTimestamp Start time. unix timestamp.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Start time. unix timestamp.
                     * @param _startTimestamp Start time. unix timestamp.
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取Ring time. unix timestamp.
                     * @return RingTimestamp Ring time. unix timestamp.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置Ring time. unix timestamp.
                     * @param _ringTimestamp Ring time. unix timestamp.
                     * 
                     */
                    void SetRingTimestamp(const int64_t& _ringTimestamp);

                    /**
                     * 判断参数 RingTimestamp 是否已赋值
                     * @return RingTimestamp 是否已赋值
                     * 
                     */
                    bool RingTimestampHasBeenSet() const;

                    /**
                     * 获取Answer time. unix timestamp.
                     * @return AcceptTimestamp Answer time. unix timestamp.
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置Answer time. unix timestamp.
                     * @param _acceptTimestamp Answer time. unix timestamp.
                     * 
                     */
                    void SetAcceptTimestamp(const int64_t& _acceptTimestamp);

                    /**
                     * 判断参数 AcceptTimestamp 是否已赋值
                     * @return AcceptTimestamp 是否已赋值
                     * 
                     */
                    bool AcceptTimestampHasBeenSet() const;

                    /**
                     * 获取Agent email.
                     * @return StaffEmail Agent email.
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置Agent email.
                     * @param _staffEmail Agent email.
                     * 
                     */
                    void SetStaffEmail(const std::string& _staffEmail);

                    /**
                     * 判断参数 StaffEmail 是否已赋值
                     * @return StaffEmail 是否已赋值
                     * 
                     */
                    bool StaffEmailHasBeenSet() const;

                    /**
                     * 获取Agent id.
                     * @return StaffNumber Agent id.
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置Agent id.
                     * @param _staffNumber Agent id.
                     * 
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     * 
                     */
                    bool StaffNumberHasBeenSet() const;

                    /**
                     * 获取Session status.
Ringing - in progress.
SeatJoining - waiting for the agent to answer.
InProgress: in progress.
Finished - completed.
                     * @return SessionStatus Session status.
Ringing - in progress.
SeatJoining - waiting for the agent to answer.
InProgress: in progress.
Finished - completed.
                     * 
                     */
                    std::string GetSessionStatus() const;

                    /**
                     * 设置Session status.
Ringing - in progress.
SeatJoining - waiting for the agent to answer.
InProgress: in progress.
Finished - completed.
                     * @param _sessionStatus Session status.
Ringing - in progress.
SeatJoining - waiting for the agent to answer.
InProgress: in progress.
Finished - completed.
                     * 
                     */
                    void SetSessionStatus(const std::string& _sessionStatus);

                    /**
                     * 判断参数 SessionStatus 是否已赋值
                     * @return SessionStatus 是否已赋值
                     * 
                     */
                    bool SessionStatusHasBeenSet() const;

                    /**
                     * 获取Session call direction, 0 - inbound | 1 - outbound.
                     * @return Direction Session call direction, 0 - inbound | 1 - outbound.
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置Session call direction, 0 - inbound | 1 - outbound.
                     * @param _direction Session call direction, 0 - inbound | 1 - outbound.
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取The number used for transferring to the external line (outbound caller).
                     * @return OutBoundCaller The number used for transferring to the external line (outbound caller).
                     * 
                     */
                    std::string GetOutBoundCaller() const;

                    /**
                     * 设置The number used for transferring to the external line (outbound caller).
                     * @param _outBoundCaller The number used for transferring to the external line (outbound caller).
                     * 
                     */
                    void SetOutBoundCaller(const std::string& _outBoundCaller);

                    /**
                     * 判断参数 OutBoundCaller 是否已赋值
                     * @return OutBoundCaller 是否已赋值
                     * 
                     */
                    bool OutBoundCallerHasBeenSet() const;

                    /**
                     * 获取Outbound callee.
                     * @return OutBoundCallee Outbound callee.
                     * 
                     */
                    std::string GetOutBoundCallee() const;

                    /**
                     * 设置Outbound callee.
                     * @param _outBoundCallee Outbound callee.
                     * 
                     */
                    void SetOutBoundCallee(const std::string& _outBoundCallee);

                    /**
                     * 判断参数 OutBoundCallee 是否已赋值
                     * @return OutBoundCallee 是否已赋值
                     * 
                     */
                    bool OutBoundCalleeHasBeenSet() const;

                    /**
                     * 获取Caller number protection id. effective when the number protection map feature is activated, and the caller field is empty.
                     * @return ProtectedCaller Caller number protection id. effective when the number protection map feature is activated, and the caller field is empty.
                     * 
                     */
                    std::string GetProtectedCaller() const;

                    /**
                     * 设置Caller number protection id. effective when the number protection map feature is activated, and the caller field is empty.
                     * @param _protectedCaller Caller number protection id. effective when the number protection map feature is activated, and the caller field is empty.
                     * 
                     */
                    void SetProtectedCaller(const std::string& _protectedCaller);

                    /**
                     * 判断参数 ProtectedCaller 是否已赋值
                     * @return ProtectedCaller 是否已赋值
                     * 
                     */
                    bool ProtectedCallerHasBeenSet() const;

                    /**
                     * 获取Called number protection id. effective when the number protection map feature is activated, and the callee field is empty.
                     * @return ProtectedCallee Called number protection id. effective when the number protection map feature is activated, and the callee field is empty.
                     * 
                     */
                    std::string GetProtectedCallee() const;

                    /**
                     * 设置Called number protection id. effective when the number protection map feature is activated, and the callee field is empty.
                     * @param _protectedCallee Called number protection id. effective when the number protection map feature is activated, and the callee field is empty.
                     * 
                     */
                    void SetProtectedCallee(const std::string& _protectedCallee);

                    /**
                     * 判断参数 ProtectedCallee 是否已赋值
                     * @return ProtectedCallee 是否已赋值
                     * 
                     */
                    bool ProtectedCalleeHasBeenSet() const;

                private:

                    /**
                     * Session id.
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * Temporary room id for session.
                     */
                    std::string m_roomID;
                    bool m_roomIDHasBeenSet;

                    /**
                     * Caller.
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * Called.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Start time. unix timestamp.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * Ring time. unix timestamp.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * Answer time. unix timestamp.
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * Agent email.
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * Agent id.
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * Session status.
Ringing - in progress.
SeatJoining - waiting for the agent to answer.
InProgress: in progress.
Finished - completed.
                     */
                    std::string m_sessionStatus;
                    bool m_sessionStatusHasBeenSet;

                    /**
                     * Session call direction, 0 - inbound | 1 - outbound.
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * The number used for transferring to the external line (outbound caller).
                     */
                    std::string m_outBoundCaller;
                    bool m_outBoundCallerHasBeenSet;

                    /**
                     * Outbound callee.
                     */
                    std::string m_outBoundCallee;
                    bool m_outBoundCalleeHasBeenSet;

                    /**
                     * Caller number protection id. effective when the number protection map feature is activated, and the caller field is empty.
                     */
                    std::string m_protectedCaller;
                    bool m_protectedCallerHasBeenSet;

                    /**
                     * Called number protection id. effective when the number protection map feature is activated, and the callee field is empty.
                     */
                    std::string m_protectedCallee;
                    bool m_protectedCalleeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSION_H_
