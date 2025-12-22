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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>
#include <tencentcloud/ccc/v20200210/model/ServeParticipant.h>
#include <tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Phone call information
                */
                class TelCdrInfo : public AbstractModel
                {
                public:
                    TelCdrInfo();
                    ~TelCdrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Caller number.
                     * @return Caller Caller number.
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置Caller number.
                     * @param _caller Caller number.
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
                     * 获取Called number.
                     * @return Callee Called number.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Called number.
                     * @param _callee Called number.
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
                     * 获取Call initiation timestamp, unix timestamp.
                     * @return Time Call initiation timestamp, unix timestamp.
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Call initiation timestamp, unix timestamp.
                     * @param _time Call initiation timestamp, unix timestamp.
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Call direction: 0 - inbound, 1 - outbound.
                     * @return Direction Call direction: 0 - inbound, 1 - outbound.
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置Call direction: 0 - inbound, 1 - outbound.
                     * @param _direction Call direction: 0 - inbound, 1 - outbound.
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
                     * 获取Call Type: 1. Voice outbound call 2. Voice Inbound call 3. Audio Inbound 5 Predictive Dialing Call 6. Internal Call between Staff
                     * @return CallType Call Type: 1. Voice outbound call 2. Voice Inbound call 3. Audio Inbound 5 Predictive Dialing Call 6. Internal Call between Staff
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置Call Type: 1. Voice outbound call 2. Voice Inbound call 3. Audio Inbound 5 Predictive Dialing Call 6. Internal Call between Staff
                     * @param _callType Call Type: 1. Voice outbound call 2. Voice Inbound call 3. Audio Inbound 5 Predictive Dialing Call 6. Internal Call between Staff
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取Call duration.
                     * @return Duration Call duration.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Call duration.
                     * @param _duration Call duration.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Recording information.
                     * @return RecordURL Recording information.
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置Recording information.
                     * @param _recordURL Recording information.
                     * 
                     */
                    void SetRecordURL(const std::string& _recordURL);

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     * 
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取Recording id.
                     * @return RecordId Recording id.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Recording id.
                     * @param _recordId Recording id.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Agent information.
                     * @return SeatUser Agent information.
                     * 
                     */
                    SeatUserInfo GetSeatUser() const;

                    /**
                     * 设置Agent information.
                     * @param _seatUser Agent information.
                     * 
                     */
                    void SetSeatUser(const SeatUserInfo& _seatUser);

                    /**
                     * 判断参数 SeatUser 是否已赋值
                     * @return SeatUser 是否已赋值
                     * 
                     */
                    bool SeatUserHasBeenSet() const;

                    /**
                     * 获取EndStatus corresponds one-to-one with EndStatusString. the specific enumeration is as follows:.

**Scenario**	EndStatus	EndStatusString	Status description.

Incoming & outgoing calls. 1. ok. normal call.

IVR period user give up.

**User give up while in queue**.

Inbound call 104 ringingGiveUp. specifies the user gives up during ringing.

Inbound call 105. specifies no agent online.

Inbound call notWorkTime **off hours**.   

IVR ends automatically (no manual intervention).

Inbound call. 100. blocklist (system side).

restrictedCallee. specifies the global outbound call risk number interception (system side).

Outbound call 109 tooManyRequest **outbound call frequency control interception (system side)**.

Outbound call 110 restrictedArea **block outgoing calls by region (system side)**.

restrictedTime. specifies the outbound call interception period on the system side.
                         
202 notAnswer **callee unanswered**.

Outbound call 203 userReject **callee reject hangup**.

Power off. **callee powered off**.

205            numberNotExist	**callee nonexistent number**.

Busy. specifies the callee is busy.

Outbound call 207 outOfCredit **callee in arrears**.

208 operatorError indicates operator channel exception.

Outgoing call caller cancellation.

Outgoing call	        210	           notInService	**callee out of service area**.

Phone call in/out 211 clientError **client error**.

Outgoing call 212 carrierBlocked **carrier blocklist**.

Note: call reminder.

Outbound call 215 numberInvalid **called number is invalid**.

Outbound call 216 callRestricted. note: call restricted.

Callee restricted by blocklist.

Outbound call 218 areaRestricted. **callee area restricted**.

Prompt call forwarding.

Caller cancellation during ringing.

Caller cancel without ring.

Audio dial-in 501 call conflict **VoIP user call termination**.

VoIP user client timeout.

Audio dial-in 503 VoIP user client error.

Chinese version please go domestic site (https://cloud.tencent.com/document/product/679/123938).

English version please go international site (https://www.tencentcloud.com/document/product/1229/71847?lang=en).
                     * @return EndStatus EndStatus corresponds one-to-one with EndStatusString. the specific enumeration is as follows:.

**Scenario**	EndStatus	EndStatusString	Status description.

Incoming & outgoing calls. 1. ok. normal call.

IVR period user give up.

**User give up while in queue**.

Inbound call 104 ringingGiveUp. specifies the user gives up during ringing.

Inbound call 105. specifies no agent online.

Inbound call notWorkTime **off hours**.   

IVR ends automatically (no manual intervention).

Inbound call. 100. blocklist (system side).

restrictedCallee. specifies the global outbound call risk number interception (system side).

Outbound call 109 tooManyRequest **outbound call frequency control interception (system side)**.

Outbound call 110 restrictedArea **block outgoing calls by region (system side)**.

restrictedTime. specifies the outbound call interception period on the system side.
                         
202 notAnswer **callee unanswered**.

Outbound call 203 userReject **callee reject hangup**.

Power off. **callee powered off**.

205            numberNotExist	**callee nonexistent number**.

Busy. specifies the callee is busy.

Outbound call 207 outOfCredit **callee in arrears**.

208 operatorError indicates operator channel exception.

Outgoing call caller cancellation.

Outgoing call	        210	           notInService	**callee out of service area**.

Phone call in/out 211 clientError **client error**.

Outgoing call 212 carrierBlocked **carrier blocklist**.

Note: call reminder.

Outbound call 215 numberInvalid **called number is invalid**.

Outbound call 216 callRestricted. note: call restricted.

Callee restricted by blocklist.

Outbound call 218 areaRestricted. **callee area restricted**.

Prompt call forwarding.

Caller cancellation during ringing.

Caller cancel without ring.

Audio dial-in 501 call conflict **VoIP user call termination**.

VoIP user client timeout.

Audio dial-in 503 VoIP user client error.

Chinese version please go domestic site (https://cloud.tencent.com/document/product/679/123938).

English version please go international site (https://www.tencentcloud.com/document/product/1229/71847?lang=en).
                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置EndStatus corresponds one-to-one with EndStatusString. the specific enumeration is as follows:.

**Scenario**	EndStatus	EndStatusString	Status description.

Incoming & outgoing calls. 1. ok. normal call.

IVR period user give up.

**User give up while in queue**.

Inbound call 104 ringingGiveUp. specifies the user gives up during ringing.

Inbound call 105. specifies no agent online.

Inbound call notWorkTime **off hours**.   

IVR ends automatically (no manual intervention).

Inbound call. 100. blocklist (system side).

restrictedCallee. specifies the global outbound call risk number interception (system side).

Outbound call 109 tooManyRequest **outbound call frequency control interception (system side)**.

Outbound call 110 restrictedArea **block outgoing calls by region (system side)**.

restrictedTime. specifies the outbound call interception period on the system side.
                         
202 notAnswer **callee unanswered**.

Outbound call 203 userReject **callee reject hangup**.

Power off. **callee powered off**.

205            numberNotExist	**callee nonexistent number**.

Busy. specifies the callee is busy.

Outbound call 207 outOfCredit **callee in arrears**.

208 operatorError indicates operator channel exception.

Outgoing call caller cancellation.

Outgoing call	        210	           notInService	**callee out of service area**.

Phone call in/out 211 clientError **client error**.

Outgoing call 212 carrierBlocked **carrier blocklist**.

Note: call reminder.

Outbound call 215 numberInvalid **called number is invalid**.

Outbound call 216 callRestricted. note: call restricted.

Callee restricted by blocklist.

Outbound call 218 areaRestricted. **callee area restricted**.

Prompt call forwarding.

Caller cancellation during ringing.

Caller cancel without ring.

Audio dial-in 501 call conflict **VoIP user call termination**.

VoIP user client timeout.

Audio dial-in 503 VoIP user client error.

Chinese version please go domestic site (https://cloud.tencent.com/document/product/679/123938).

English version please go international site (https://www.tencentcloud.com/document/product/1229/71847?lang=en).
                     * @param _endStatus EndStatus corresponds one-to-one with EndStatusString. the specific enumeration is as follows:.

**Scenario**	EndStatus	EndStatusString	Status description.

Incoming & outgoing calls. 1. ok. normal call.

IVR period user give up.

**User give up while in queue**.

Inbound call 104 ringingGiveUp. specifies the user gives up during ringing.

Inbound call 105. specifies no agent online.

Inbound call notWorkTime **off hours**.   

IVR ends automatically (no manual intervention).

Inbound call. 100. blocklist (system side).

restrictedCallee. specifies the global outbound call risk number interception (system side).

Outbound call 109 tooManyRequest **outbound call frequency control interception (system side)**.

Outbound call 110 restrictedArea **block outgoing calls by region (system side)**.

restrictedTime. specifies the outbound call interception period on the system side.
                         
202 notAnswer **callee unanswered**.

Outbound call 203 userReject **callee reject hangup**.

Power off. **callee powered off**.

205            numberNotExist	**callee nonexistent number**.

Busy. specifies the callee is busy.

Outbound call 207 outOfCredit **callee in arrears**.

208 operatorError indicates operator channel exception.

Outgoing call caller cancellation.

Outgoing call	        210	           notInService	**callee out of service area**.

Phone call in/out 211 clientError **client error**.

Outgoing call 212 carrierBlocked **carrier blocklist**.

Note: call reminder.

Outbound call 215 numberInvalid **called number is invalid**.

Outbound call 216 callRestricted. note: call restricted.

Callee restricted by blocklist.

Outbound call 218 areaRestricted. **callee area restricted**.

Prompt call forwarding.

Caller cancellation during ringing.

Caller cancel without ring.

Audio dial-in 501 call conflict **VoIP user call termination**.

VoIP user client timeout.

Audio dial-in 503 VoIP user client error.

Chinese version please go domestic site (https://cloud.tencent.com/document/product/679/123938).

English version please go international site (https://www.tencentcloud.com/document/product/1229/71847?lang=en).
                     * 
                     */
                    void SetEndStatus(const int64_t& _endStatus);

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     * 
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取Skill group name.
                     * @return SkillGroup Skill group name.
                     * 
                     */
                    std::string GetSkillGroup() const;

                    /**
                     * 设置Skill group name.
                     * @param _skillGroup Skill group name.
                     * 
                     */
                    void SetSkillGroup(const std::string& _skillGroup);

                    /**
                     * 判断参数 SkillGroup 是否已赋值
                     * @return SkillGroup 是否已赋值
                     * 
                     */
                    bool SkillGroupHasBeenSet() const;

                    /**
                     * 获取Caller'S location.
                     * @return CallerLocation Caller'S location.
                     * 
                     */
                    std::string GetCallerLocation() const;

                    /**
                     * 设置Caller'S location.
                     * @param _callerLocation Caller'S location.
                     * 
                     */
                    void SetCallerLocation(const std::string& _callerLocation);

                    /**
                     * 判断参数 CallerLocation 是否已赋值
                     * @return CallerLocation 是否已赋值
                     * 
                     */
                    bool CallerLocationHasBeenSet() const;

                    /**
                     * 获取Time spent in ivr stage.
                     * @return IVRDuration Time spent in ivr stage.
                     * 
                     */
                    int64_t GetIVRDuration() const;

                    /**
                     * 设置Time spent in ivr stage.
                     * @param _iVRDuration Time spent in ivr stage.
                     * 
                     */
                    void SetIVRDuration(const int64_t& _iVRDuration);

                    /**
                     * 判断参数 IVRDuration 是否已赋值
                     * @return IVRDuration 是否已赋值
                     * 
                     */
                    bool IVRDurationHasBeenSet() const;

                    /**
                     * 获取Ring timestamp. unix second-level timestamp.
                     * @return RingTimestamp Ring timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置Ring timestamp. unix second-level timestamp.
                     * @param _ringTimestamp Ring timestamp. unix second-level timestamp.
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
                     * 获取Answer timestamp. unix second-level timestamp.
                     * @return AcceptTimestamp Answer timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置Answer timestamp. unix second-level timestamp.
                     * @param _acceptTimestamp Answer timestamp. unix second-level timestamp.
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
                     * 获取End timestamp. unix second-level timestamp.
                     * @return EndedTimestamp End timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置End timestamp. unix second-level timestamp.
                     * @param _endedTimestamp End timestamp. unix second-level timestamp.
                     * 
                     */
                    void SetEndedTimestamp(const int64_t& _endedTimestamp);

                    /**
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     * 
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取IVR key information, e.g. ["1","2","3"].
                     * @return IVRKeyPressed IVR key information, e.g. ["1","2","3"].
                     * 
                     */
                    std::vector<std::string> GetIVRKeyPressed() const;

                    /**
                     * 设置IVR key information, e.g. ["1","2","3"].
                     * @param _iVRKeyPressed IVR key information, e.g. ["1","2","3"].
                     * 
                     */
                    void SetIVRKeyPressed(const std::vector<std::string>& _iVRKeyPressed);

                    /**
                     * 判断参数 IVRKeyPressed 是否已赋值
                     * @return IVRKeyPressed 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取Hang-Up side, seat, user, system.
                     * @return HungUpSide Hang-Up side, seat, user, system.
                     * 
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 设置Hang-Up side, seat, user, system.
                     * @param _hungUpSide Hang-Up side, seat, user, system.
                     * 
                     */
                    void SetHungUpSide(const std::string& _hungUpSide);

                    /**
                     * 判断参数 HungUpSide 是否已赋值
                     * @return HungUpSide 是否已赋值
                     * 
                     */
                    bool HungUpSideHasBeenSet() const;

                    /**
                     * 获取Service participant list.
                     * @return ServeParticipants Service participant list.
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 设置Service participant list.
                     * @param _serveParticipants Service participant list.
                     * 
                     */
                    void SetServeParticipants(const std::vector<ServeParticipant>& _serveParticipants);

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

                    /**
                     * 获取Skill group id.
                     * @return SkillGroupId Skill group id.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group id.
                     * @param _skillGroupId Skill group id.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Refers to the EndStatus field.
                     * @return EndStatusString Refers to the EndStatus field.
                     * 
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置Refers to the EndStatus field.
                     * @param _endStatusString Refers to the EndStatus field.
                     * 
                     */
                    void SetEndStatusString(const std::string& _endStatusString);

                    /**
                     * 判断参数 EndStatusString 是否已赋值
                     * @return EndStatusString 是否已赋值
                     * 
                     */
                    bool EndStatusStringHasBeenSet() const;

                    /**
                     * 获取Session start timestamp. unix second-level timestamp.
                     * @return StartTimestamp Session start timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Session start timestamp. unix second-level timestamp.
                     * @param _startTimestamp Session start timestamp. unix second-level timestamp.
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
                     * 获取Queue entry time. unix second-level timestamp.
                     * @return QueuedTimestamp Queue entry time. unix second-level timestamp.
                     * 
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 设置Queue entry time. unix second-level timestamp.
                     * @param _queuedTimestamp Queue entry time. unix second-level timestamp.
                     * 
                     */
                    void SetQueuedTimestamp(const int64_t& _queuedTimestamp);

                    /**
                     * 判断参数 QueuedTimestamp 是否已赋值
                     * @return QueuedTimestamp 是否已赋值
                     * 
                     */
                    bool QueuedTimestampHasBeenSet() const;

                    /**
                     * 获取Post-IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * @return PostIVRKeyPressed Post-IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 设置Post-IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * @param _postIVRKeyPressed Post-IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * 
                     */
                    void SetPostIVRKeyPressed(const std::vector<IVRKeyPressedElement>& _postIVRKeyPressed);

                    /**
                     * 判断参数 PostIVRKeyPressed 是否已赋值
                     * @return PostIVRKeyPressed 是否已赋值
                     * 
                     */
                    bool PostIVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取Queue skill group id.
                     * @return QueuedSkillGroupId Queue skill group id.
                     * 
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 设置Queue skill group id.
                     * @param _queuedSkillGroupId Queue skill group id.
                     * 
                     */
                    void SetQueuedSkillGroupId(const int64_t& _queuedSkillGroupId);

                    /**
                     * 判断参数 QueuedSkillGroupId 是否已赋值
                     * @return QueuedSkillGroupId 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Session id.
                     * @return SessionId Session id.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session id.
                     * @param _sessionId Session id.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

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

                    /**
                     * 获取Customer custom data. (user - to - user interface).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Uui Customer custom data. (user - to - user interface).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetUui() const;

                    /**
                     * 设置Customer custom data. (user - to - user interface).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _uui Customer custom data. (user - to - user interface).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetUui(const std::string& _uui);

                    /**
                     * 判断参数 Uui 是否已赋值
                     * @return Uui 是否已赋值
                     * @deprecated
                     */
                    bool UuiHasBeenSet() const;

                    /**
                     * 获取Customer custom data. (user - to - user interface).
                     * @return UUI Customer custom data. (user - to - user interface).
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置Customer custom data. (user - to - user interface).
                     * @param _uUI Customer custom data. (user - to - user interface).
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * @return IVRKeyPressedEx IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetIVRKeyPressedEx() const;

                    /**
                     * 设置IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * @param _iVRKeyPressedEx IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     * 
                     */
                    void SetIVRKeyPressedEx(const std::vector<IVRKeyPressedElement>& _iVRKeyPressedEx);

                    /**
                     * 判断参数 IVRKeyPressedEx 是否已赋值
                     * @return IVRKeyPressedEx 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedExHasBeenSet() const;

                    /**
                     * 获取Access to the asr text information address of the recording.
                     * @return AsrUrl Access to the asr text information address of the recording.
                     * 
                     */
                    std::string GetAsrUrl() const;

                    /**
                     * 设置Access to the asr text information address of the recording.
                     * @param _asrUrl Access to the asr text information address of the recording.
                     * 
                     */
                    void SetAsrUrl(const std::string& _asrUrl);

                    /**
                     * 判断参数 AsrUrl 是否已赋值
                     * @return AsrUrl 是否已赋值
                     * 
                     */
                    bool AsrUrlHasBeenSet() const;

                    /**
                     * 获取ASRUrl status: complete.
Completed;.
Processing.
Generating.
NotExists.
No record (offline asr generation is not enabled or no package is available).
                     * @return AsrStatus ASRUrl status: complete.
Completed;.
Processing.
Generating.
NotExists.
No record (offline asr generation is not enabled or no package is available).
                     * 
                     */
                    std::string GetAsrStatus() const;

                    /**
                     * 设置ASRUrl status: complete.
Completed;.
Processing.
Generating.
NotExists.
No record (offline asr generation is not enabled or no package is available).
                     * @param _asrStatus ASRUrl status: complete.
Completed;.
Processing.
Generating.
NotExists.
No record (offline asr generation is not enabled or no package is available).
                     * 
                     */
                    void SetAsrStatus(const std::string& _asrStatus);

                    /**
                     * 判断参数 AsrStatus 是否已赋值
                     * @return AsrStatus 是否已赋值
                     * 
                     */
                    bool AsrStatusHasBeenSet() const;

                    /**
                     * 获取Address of the third-party cos for transferring recording.
                     * @return CustomRecordURL Address of the third-party cos for transferring recording.
                     * 
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 设置Address of the third-party cos for transferring recording.
                     * @param _customRecordURL Address of the third-party cos for transferring recording.
                     * 
                     */
                    void SetCustomRecordURL(const std::string& _customRecordURL);

                    /**
                     * 判断参数 CustomRecordURL 是否已赋值
                     * @return CustomRecordURL 是否已赋值
                     * 
                     */
                    bool CustomRecordURLHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Queue skill group name.
                     * @return QueuedSkillGroupName Queue skill group name.
                     * 
                     */
                    std::string GetQueuedSkillGroupName() const;

                    /**
                     * 设置Queue skill group name.
                     * @param _queuedSkillGroupName Queue skill group name.
                     * 
                     */
                    void SetQueuedSkillGroupName(const std::string& _queuedSkillGroupName);

                    /**
                     * 判断参数 QueuedSkillGroupName 是否已赋值
                     * @return QueuedSkillGroupName 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupNameHasBeenSet() const;

                    /**
                     * 获取Audio message recording url during call.
                     * @return VoicemailRecordURL Audio message recording url during call.
                     * 
                     */
                    std::vector<std::string> GetVoicemailRecordURL() const;

                    /**
                     * 设置Audio message recording url during call.
                     * @param _voicemailRecordURL Audio message recording url during call.
                     * 
                     */
                    void SetVoicemailRecordURL(const std::vector<std::string>& _voicemailRecordURL);

                    /**
                     * 判断参数 VoicemailRecordURL 是否已赋值
                     * @return VoicemailRecordURL 是否已赋值
                     * 
                     */
                    bool VoicemailRecordURLHasBeenSet() const;

                    /**
                     * 获取Text information address of asr audio message during a call.
                     * @return VoicemailAsrURL Text information address of asr audio message during a call.
                     * 
                     */
                    std::vector<std::string> GetVoicemailAsrURL() const;

                    /**
                     * 设置Text information address of asr audio message during a call.
                     * @param _voicemailAsrURL Text information address of asr audio message during a call.
                     * 
                     */
                    void SetVoicemailAsrURL(const std::vector<std::string>& _voicemailAsrURL);

                    /**
                     * 判断参数 VoicemailAsrURL 是否已赋值
                     * @return VoicemailAsrURL 是否已赋值
                     * 
                     */
                    bool VoicemailAsrURLHasBeenSet() const;

                private:

                    /**
                     * Caller number.
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * Called number.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Call initiation timestamp, unix timestamp.
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Call direction: 0 - inbound, 1 - outbound.
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Call Type: 1. Voice outbound call 2. Voice Inbound call 3. Audio Inbound 5 Predictive Dialing Call 6. Internal Call between Staff
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Call duration.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Recording information.
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * Recording id.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Agent information.
                     */
                    SeatUserInfo m_seatUser;
                    bool m_seatUserHasBeenSet;

                    /**
                     * EndStatus corresponds one-to-one with EndStatusString. the specific enumeration is as follows:.

**Scenario**	EndStatus	EndStatusString	Status description.

Incoming & outgoing calls. 1. ok. normal call.

IVR period user give up.

**User give up while in queue**.

Inbound call 104 ringingGiveUp. specifies the user gives up during ringing.

Inbound call 105. specifies no agent online.

Inbound call notWorkTime **off hours**.   

IVR ends automatically (no manual intervention).

Inbound call. 100. blocklist (system side).

restrictedCallee. specifies the global outbound call risk number interception (system side).

Outbound call 109 tooManyRequest **outbound call frequency control interception (system side)**.

Outbound call 110 restrictedArea **block outgoing calls by region (system side)**.

restrictedTime. specifies the outbound call interception period on the system side.
                         
202 notAnswer **callee unanswered**.

Outbound call 203 userReject **callee reject hangup**.

Power off. **callee powered off**.

205            numberNotExist	**callee nonexistent number**.

Busy. specifies the callee is busy.

Outbound call 207 outOfCredit **callee in arrears**.

208 operatorError indicates operator channel exception.

Outgoing call caller cancellation.

Outgoing call	        210	           notInService	**callee out of service area**.

Phone call in/out 211 clientError **client error**.

Outgoing call 212 carrierBlocked **carrier blocklist**.

Note: call reminder.

Outbound call 215 numberInvalid **called number is invalid**.

Outbound call 216 callRestricted. note: call restricted.

Callee restricted by blocklist.

Outbound call 218 areaRestricted. **callee area restricted**.

Prompt call forwarding.

Caller cancellation during ringing.

Caller cancel without ring.

Audio dial-in 501 call conflict **VoIP user call termination**.

VoIP user client timeout.

Audio dial-in 503 VoIP user client error.

Chinese version please go domestic site (https://cloud.tencent.com/document/product/679/123938).

English version please go international site (https://www.tencentcloud.com/document/product/1229/71847?lang=en).
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroup;
                    bool m_skillGroupHasBeenSet;

                    /**
                     * Caller'S location.
                     */
                    std::string m_callerLocation;
                    bool m_callerLocationHasBeenSet;

                    /**
                     * Time spent in ivr stage.
                     */
                    int64_t m_iVRDuration;
                    bool m_iVRDurationHasBeenSet;

                    /**
                     * Ring timestamp. unix second-level timestamp.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * Answer timestamp. unix second-level timestamp.
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * End timestamp. unix second-level timestamp.
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * IVR key information, e.g. ["1","2","3"].
                     */
                    std::vector<std::string> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * Hang-Up side, seat, user, system.
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * Service participant list.
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Refers to the EndStatus field.
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * Session start timestamp. unix second-level timestamp.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * Queue entry time. unix second-level timestamp.
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * Post-IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * Queue skill group id.
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * Session id.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

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

                    /**
                     * Customer custom data. (user - to - user interface).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uui;
                    bool m_uuiHasBeenSet;

                    /**
                     * Customer custom data. (user - to - user interface).
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * IVR key information (e.g. [{"key":"1","label":"very satisfied"}]).
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressedEx;
                    bool m_iVRKeyPressedExHasBeenSet;

                    /**
                     * Access to the asr text information address of the recording.
                     */
                    std::string m_asrUrl;
                    bool m_asrUrlHasBeenSet;

                    /**
                     * ASRUrl status: complete.
Completed;.
Processing.
Generating.
NotExists.
No record (offline asr generation is not enabled or no package is available).
                     */
                    std::string m_asrStatus;
                    bool m_asrStatusHasBeenSet;

                    /**
                     * Address of the third-party cos for transferring recording.
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Queue skill group name.
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * Audio message recording url during call.
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * Text information address of asr audio message during a call.
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
