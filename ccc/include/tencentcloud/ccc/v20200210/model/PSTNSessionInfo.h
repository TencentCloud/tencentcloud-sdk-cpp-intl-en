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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSIONINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSIONINFO_H_

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
                * PSTN Session Information.
                */
                class PSTNSessionInfo : public AbstractModel
                {
                public:
                    PSTNSessionInfo();
                    ~PSTNSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Session ID.
                     * @return SessionID Session ID.
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionID Session ID.
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
                     * 获取Temporary room ID for session.
                     * @return RoomID Temporary room ID for session.
                     * 
                     */
                    std::string GetRoomID() const;

                    /**
                     * 设置Temporary room ID for session.
                     * @param _roomID Temporary room ID for session.
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
                     * 获取Start time. Unix timestamp.
                     * @return StartTimestamp Start time. Unix timestamp.
                     * 
                     */
                    std::string GetStartTimestamp() const;

                    /**
                     * 设置Start time. Unix timestamp.
                     * @param _startTimestamp Start time. Unix timestamp.
                     * 
                     */
                    void SetStartTimestamp(const std::string& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取Answer time. Unix timestamp.
                     * @return AcceptTimestamp Answer time. Unix timestamp.
                     * 
                     */
                    std::string GetAcceptTimestamp() const;

                    /**
                     * 设置Answer time. Unix timestamp.
                     * @param _acceptTimestamp Answer time. Unix timestamp.
                     * 
                     */
                    void SetAcceptTimestamp(const std::string& _acceptTimestamp);

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
                     * 获取Agent ID
                     * @return StaffNumber Agent ID
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置Agent ID
                     * @param _staffNumber Agent ID
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
                     * 获取Agent Status inProgress Ongoing
                     * @return SessionStatus Agent Status inProgress Ongoing
                     * 
                     */
                    std::string GetSessionStatus() const;

                    /**
                     * 设置Agent Status inProgress Ongoing
                     * @param _sessionStatus Agent Status inProgress Ongoing
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
                     * 获取Session call direction, 0 - Inbound | 1 - Outbound.
                     * @return Direction Session call direction, 0 - Inbound | 1 - Outbound.
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置Session call direction, 0 - Inbound | 1 - Outbound.
                     * @param _direction Session call direction, 0 - Inbound | 1 - Outbound.
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
                     * 获取Ring time. Unix timestamp.
                     * @return RingTimestamp Ring time. Unix timestamp.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置Ring time. Unix timestamp.
                     * @param _ringTimestamp Ring time. Unix timestamp.
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
                     * 获取Caller number protection ID. Effective when the number protection map feature is activated, and the Caller field is empty.
                     * @return ProtectedCaller Caller number protection ID. Effective when the number protection map feature is activated, and the Caller field is empty.
                     * 
                     */
                    std::string GetProtectedCaller() const;

                    /**
                     * 设置Caller number protection ID. Effective when the number protection map feature is activated, and the Caller field is empty.
                     * @param _protectedCaller Caller number protection ID. Effective when the number protection map feature is activated, and the Caller field is empty.
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
                     * 获取Called number protection ID. Effective when the number protection map feature is activated, and the Callee field is empty.
                     * @return ProtectedCallee Called number protection ID. Effective when the number protection map feature is activated, and the Callee field is empty.
                     * 
                     */
                    std::string GetProtectedCallee() const;

                    /**
                     * 设置Called number protection ID. Effective when the number protection map feature is activated, and the Callee field is empty.
                     * @param _protectedCallee Called number protection ID. Effective when the number protection map feature is activated, and the Callee field is empty.
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
                     * Session ID.
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * Temporary room ID for session.
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
                     * Start time. Unix timestamp.
                     */
                    std::string m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * Answer time. Unix timestamp.
                     */
                    std::string m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * Agent email.
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * Agent ID
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * Agent Status inProgress Ongoing
                     */
                    std::string m_sessionStatus;
                    bool m_sessionStatusHasBeenSet;

                    /**
                     * Session call direction, 0 - Inbound | 1 - Outbound.
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Ring time. Unix timestamp.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * Caller number protection ID. Effective when the number protection map feature is activated, and the Caller field is empty.
                     */
                    std::string m_protectedCaller;
                    bool m_protectedCallerHasBeenSet;

                    /**
                     * Called number protection ID. Effective when the number protection map feature is activated, and the Callee field is empty.
                     */
                    std::string m_protectedCallee;
                    bool m_protectedCalleeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSIONINFO_H_
