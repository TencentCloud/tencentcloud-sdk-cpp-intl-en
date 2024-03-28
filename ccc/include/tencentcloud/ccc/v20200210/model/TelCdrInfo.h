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
                * Phone call information.
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
                     * 获取Call initiation timestamp, Unix timestamp.
                     * @return Time Call initiation timestamp, Unix timestamp.
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Call initiation timestamp, Unix timestamp.
                     * @param _time Call initiation timestamp, Unix timestamp.
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
                     * 获取Call direction: 0 - Inbound, 1 - Outbound.
                     * @return Direction Call direction: 0 - Inbound, 1 - Outbound.
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置Call direction: 0 - Inbound, 1 - Outbound.
                     * @param _direction Call direction: 0 - Inbound, 1 - Outbound.
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
                     * 获取Recording Information.
                     * @return RecordURL Recording Information.
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置Recording Information.
                     * @param _recordURL Recording Information.
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
                     * 获取Recording ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RecordId Recording ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Recording ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _recordId Recording ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error

                     * @return EndStatus EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error

                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error

                     * @param _endStatus EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error

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
                     * 获取Caller's location.
                     * @return CallerLocation Caller's location.
                     * 
                     */
                    std::string GetCallerLocation() const;

                    /**
                     * 设置Caller's location.
                     * @param _callerLocation Caller's location.
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
                     * 获取Time spent in IVR stage.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IVRDuration Time spent in IVR stage.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIVRDuration() const;

                    /**
                     * 设置Time spent in IVR stage.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _iVRDuration Time spent in IVR stage.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Ring timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RingTimestamp Ring timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置Ring timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ringTimestamp Ring timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Answer timestamp. UNIX second-Level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AcceptTimestamp Answer timestamp. UNIX second-Level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置Answer timestamp. UNIX second-Level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _acceptTimestamp Answer timestamp. UNIX second-Level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取End timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndedTimestamp End timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置End timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endedTimestamp End timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取IVR key information, e.g. ["1","2","3"]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IVRKeyPressed IVR key information, e.g. ["1","2","3"]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIVRKeyPressed() const;

                    /**
                     * 设置IVR key information, e.g. ["1","2","3"]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _iVRKeyPressed IVR key information, e.g. ["1","2","3"]
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Hang-up side, seat, user, system.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HungUpSide Hang-up side, seat, user, system.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 设置Hang-up side, seat, user, system.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hungUpSide Hang-up side, seat, user, system.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of Service Participants
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServeParticipants List of Service Participants
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 设置List of Service Participants
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serveParticipants List of Service Participants
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Skill group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SkillGroupId Skill group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _skillGroupId Skill group ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndStatusString EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endStatusString EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Session start timestamp. UNIX second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTimestamp Session start timestamp. UNIX second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Session start timestamp. UNIX second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTimestamp Session start timestamp. UNIX second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Queue entry time. Unix second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QueuedTimestamp Queue entry time. Unix second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 设置Queue entry time. Unix second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _queuedTimestamp Queue entry time. Unix second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Post-IVR key information (e.g. [{"Key":"1","Label":"Very Satisfied"}])
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PostIVRKeyPressed Post-IVR key information (e.g. [{"Key":"1","Label":"Very Satisfied"}])
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 设置Post-IVR key information (e.g. [{"Key":"1","Label":"Very Satisfied"}])
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _postIVRKeyPressed Post-IVR key information (e.g. [{"Key":"1","Label":"Very Satisfied"}])
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Queue Skill Group ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QueuedSkillGroupId Queue Skill Group ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 设置Queue Skill Group ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _queuedSkillGroupId Queue Skill Group ID.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Session ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SessionId Session ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sessionId Session ID.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Caller number protection ID. (Effective when the number protection map feature is activated, and the Caller field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProtectedCaller Caller number protection ID. (Effective when the number protection map feature is activated, and the Caller field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtectedCaller() const;

                    /**
                     * 设置Caller number protection ID. (Effective when the number protection map feature is activated, and the Caller field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protectedCaller Caller number protection ID. (Effective when the number protection map feature is activated, and the Caller field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Called number protection ID (Effective when the number protection map feature is activated, and the Callee field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProtectedCallee Called number protection ID (Effective when the number protection map feature is activated, and the Callee field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtectedCallee() const;

                    /**
                     * 设置Called number protection ID (Effective when the number protection map feature is activated, and the Callee field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protectedCallee Called number protection ID (Effective when the number protection map feature is activated, and the Callee field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uui Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetUui() const;

                    /**
                     * 设置Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uui Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UUI Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uUI Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取IVR key information (e.g.?[{"Key":"1","Label":"highly satisfied"}])
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IVRKeyPressedEx IVR key information (e.g.?[{"Key":"1","Label":"highly satisfied"}])
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetIVRKeyPressedEx() const;

                    /**
                     * 设置IVR key information (e.g.?[{"Key":"1","Label":"highly satisfied"}])
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iVRKeyPressedEx IVR key information (e.g.?[{"Key":"1","Label":"highly satisfied"}])
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Access to the ASR text information address of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrUrl Access to the ASR text information address of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAsrUrl() const;

                    /**
                     * 设置Access to the ASR text information address of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _asrUrl Access to the ASR text information address of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address of the third party COS for transferring recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomRecordURL Address of the third party COS for transferring recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 设置Address of the third party COS for transferring recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customRecordURL Address of the third party COS for transferring recording.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueuedSkillGroupName Queue skill group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQueuedSkillGroupName() const;

                    /**
                     * 设置Queue skill group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queuedSkillGroupName Queue skill group name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Audio message recording URL during call.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoicemailRecordURL Audio message recording URL during call.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetVoicemailRecordURL() const;

                    /**
                     * 设置Audio message recording URL during call.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voicemailRecordURL Audio message recording URL during call.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Text Information address of ASR audio message during a call.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoicemailAsrURL Text Information address of ASR audio message during a call.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetVoicemailAsrURL() const;

                    /**
                     * 设置Text Information address of ASR audio message during a call.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voicemailAsrURL Text Information address of ASR audio message during a call.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Call initiation timestamp, Unix timestamp.
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Call direction: 0 - Inbound, 1 - Outbound.
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Call duration.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Recording Information.
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * Recording ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Agent information.
                     */
                    SeatUserInfo m_seatUser;
                    bool m_seatUserHasBeenSet;

                    /**
                     * EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error

                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroup;
                    bool m_skillGroupHasBeenSet;

                    /**
                     * Caller's location.
                     */
                    std::string m_callerLocation;
                    bool m_callerLocationHasBeenSet;

                    /**
                     * Time spent in IVR stage.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iVRDuration;
                    bool m_iVRDurationHasBeenSet;

                    /**
                     * Ring timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * Answer timestamp. UNIX second-Level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * End timestamp. UNIX second-level timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * IVR key information, e.g. ["1","2","3"]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * Hang-up side, seat, user, system.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * List of Service Participants
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * Skill group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * EndStatus corresponds one-to-one with EndStatusString, the specific enumeration is as follows:
**Scenario        EndStatus	EndStatusString	Status Description**
Inbound & Outbound Call	1	        ok	                        Successfully ended
Inbound & Outbound Call	0	        error	                System error
Inbound Call	             102	        ivrGiveUp	        User hangs up during IVR
Inbound Call	             103	        waitingGiveUp	        User hangs up while on hold
Inbound Call	             104	        ringingGiveUp	        User hangs up when ringing
Inbound Call	             105	        noSeatOnline	       No agent online
Inbound Call              106	       notWorkTime	       Non-working hours
Inbound Call	            107	       ivrEnd	              Ends after IVR
Inbound Call	            100	      Inbound call blocklist 
Outgoing Call               2	              unconnected	Unanswered
< 10,000 minutesOutgoing Call             201            unknown	Unknown status
Outgoing Call             202            notAnswer	Unanswered
Outgoing Call            203	    userReject	Call declined
Outgoing Call	          204	    powerOff	Phone switched off
Outgoing Call           205            numberNotExist	Nonexistent number
Outgoing Call	         206	           busy	On another call
Outgoing Call   	 207	           outOfCredit	Overdue
Outgoing Call	         208	           operatorError	 ISP channel exception
Outgoing Call         	209	           callerCancel	Caller cancellation
Outgoing Call	        210	           notInService	Not in service area
Inbound & Outbound Calls	211    clientError    Client error
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * Session start timestamp. UNIX second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * Queue entry time. Unix second-level timestamp.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * Post-IVR key information (e.g. [{"Key":"1","Label":"Very Satisfied"}])
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * Queue Skill Group ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * Session ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Caller number protection ID. (Effective when the number protection map feature is activated, and the Caller field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protectedCaller;
                    bool m_protectedCallerHasBeenSet;

                    /**
                     * Called number protection ID (Effective when the number protection map feature is activated, and the Callee field is empty).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protectedCallee;
                    bool m_protectedCalleeHasBeenSet;

                    /**
                     * Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uui;
                    bool m_uuiHasBeenSet;

                    /**
                     * Customer custom data. (User-to-User Interface)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * IVR key information (e.g.?[{"Key":"1","Label":"highly satisfied"}])
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressedEx;
                    bool m_iVRKeyPressedExHasBeenSet;

                    /**
                     * Access to the ASR text information address of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_asrUrl;
                    bool m_asrUrlHasBeenSet;

                    /**
                     * Address of the third party COS for transferring recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Queue skill group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * Audio message recording URL during call.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * Text Information address of ASR audio message during a call.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
