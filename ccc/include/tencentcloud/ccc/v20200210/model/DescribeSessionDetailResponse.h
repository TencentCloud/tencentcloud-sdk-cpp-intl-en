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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h>
#include <tencentcloud/ccc/v20200210/model/SessionEvent.h>
#include <tencentcloud/ccc/v20200210/model/ServeParticipant.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeSessionDetail response structure.
                */
                class DescribeSessionDetailResponse : public AbstractModel
                {
                public:
                    DescribeSessionDetailResponse();
                    ~DescribeSessionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Calling number.
                     * @return Caller Calling number.
                     * 
                     */
                    std::string GetCaller() const;

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
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Call type. valid values: 1 (outgoing call), 2 (incoming call), 3 (audio dial-in), 5 (predictive outbound call), 6 (internal call).
                     * @return CallType Call type. valid values: 1 (outgoing call), 2 (incoming call), 3 (audio dial-in), 5 (predictive outbound call), 6 (internal call).
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取Start timestamp. Unix second-level timestamp.
                     * @return StartTimeStamp Start timestamp. Unix second-level timestamp.
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取Ring timestamp. UNIX second-level timestamp.
                     * @return RingTimestamp Ring timestamp. UNIX second-level timestamp.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 判断参数 RingTimestamp 是否已赋值
                     * @return RingTimestamp 是否已赋值
                     * 
                     */
                    bool RingTimestampHasBeenSet() const;

                    /**
                     * 获取Answer timestamp. UNIX second-level timestamp.
                     * @return AcceptTimestamp Answer timestamp. UNIX second-level timestamp.
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 判断参数 AcceptTimestamp 是否已赋值
                     * @return AcceptTimestamp 是否已赋值
                     * 
                     */
                    bool AcceptTimestampHasBeenSet() const;

                    /**
                     * 获取End timestamp, UNIX second-level timestamp.
                     * @return EndedTimestamp End timestamp, UNIX second-level timestamp.
                     * 
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     * 
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取Queue entry time. Unix second-level timestamp.
                     * @return QueuedTimestamp Queue entry time. Unix second-level timestamp.
                     * 
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 判断参数 QueuedTimestamp 是否已赋值
                     * @return QueuedTimestamp 是否已赋值
                     * 
                     */
                    bool QueuedTimestampHasBeenSet() const;

                    /**
                     * 获取Agent account.
                     * @return StaffUserId Agent account.
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取Refers to the EndStatus field in the DescribeTelCdr api.
                     * @return EndStatus Refers to the EndStatus field in the DescribeTelCdr api.
                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     * 
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取Queue skill group ID.
                     * @return QueuedSkillGroupId Queue skill group ID.
                     * 
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 判断参数 QueuedSkillGroupId 是否已赋值
                     * @return QueuedSkillGroupId 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Queue skill group name.
                     * @return QueuedSkillGroupName Queue skill group name.
                     * 
                     */
                    std::string GetQueuedSkillGroupName() const;

                    /**
                     * 判断参数 QueuedSkillGroupName 是否已赋值
                     * @return QueuedSkillGroupName 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupNameHasBeenSet() const;

                    /**
                     * 获取Recording url with authentication and valid period. obtain and pull within a short time frame. do not persist this link.
                     * @return RecordURL Recording url with authentication and valid period. obtain and pull within a short time frame. do not persist this link.
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     * 
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取Specifies the COS link for recording transfer to a third party.
                     * @return CustomRecordURL Specifies the COS link for recording transfer to a third party.
                     * 
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 判断参数 CustomRecordURL 是否已赋值
                     * @return CustomRecordURL 是否已赋值
                     * 
                     */
                    bool CustomRecordURLHasBeenSet() const;

                    /**
                     * 获取Recording text information link with authentication and valid period. retrieve it within a short time frame. do not persist this link.
                     * @return AsrURL Recording text information link with authentication and valid period. retrieve it within a short time frame. do not persist this link.
                     * 
                     */
                    std::string GetAsrURL() const;

                    /**
                     * 判断参数 AsrURL 是否已赋值
                     * @return AsrURL 是否已赋值
                     * 
                     */
                    bool AsrURLHasBeenSet() const;

                    /**
                     * 获取Voicemail recording url.
                     * @return VoicemailRecordURL Voicemail recording url.
                     * 
                     */
                    std::vector<std::string> GetVoicemailRecordURL() const;

                    /**
                     * 判断参数 VoicemailRecordURL 是否已赋值
                     * @return VoicemailRecordURL 是否已赋值
                     * 
                     */
                    bool VoicemailRecordURLHasBeenSet() const;

                    /**
                     * 获取Voicemail recording text information url. purchase the offline speech recognition package through the console and enable the offline speech recognition switch.
                     * @return VoicemailAsrURL Voicemail recording text information url. purchase the offline speech recognition package through the console and enable the offline speech recognition switch.
                     * 
                     */
                    std::vector<std::string> GetVoicemailAsrURL() const;

                    /**
                     * 判断参数 VoicemailAsrURL 是否已赋值
                     * @return VoicemailAsrURL 是否已赋值
                     * 
                     */
                    bool VoicemailAsrURLHasBeenSet() const;

                    /**
                     * 获取IVR key information.
                     * @return IVRKeyPressed IVR key information.
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetIVRKeyPressed() const;

                    /**
                     * 判断参数 IVRKeyPressed 是否已赋值
                     * @return IVRKeyPressed 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取Satisfaction rate keystroke information.
                     * @return PostIVRKeyPressed Satisfaction rate keystroke information.
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 判断参数 PostIVRKeyPressed 是否已赋值
                     * @return PostIVRKeyPressed 是否已赋值
                     * 
                     */
                    bool PostIVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取Hang-Up side. valid values: seat, user, system.
                     * @return HungUpSide Hang-Up side. valid values: seat, user, system.
                     * 
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 判断参数 HungUpSide 是否已赋值
                     * @return HungUpSide 是否已赋值
                     * 
                     */
                    bool HungUpSideHasBeenSet() const;

                    /**
                     * 获取Customer custom data (User-to-User Interface).
                     * @return UUI Customer custom data (User-to-User Interface).
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取List of events during a call.
                     * @return Events List of events during a call.
                     * 
                     */
                    std::vector<SessionEvent> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取List of service participants.
                     * @return ServeParticipants List of service participants.
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

                private:

                    /**
                     * Calling number.
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * Called number.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Call type. valid values: 1 (outgoing call), 2 (incoming call), 3 (audio dial-in), 5 (predictive outbound call), 6 (internal call).
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Start timestamp. Unix second-level timestamp.
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * Ring timestamp. UNIX second-level timestamp.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * Answer timestamp. UNIX second-level timestamp.
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * End timestamp, UNIX second-level timestamp.
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * Queue entry time. Unix second-level timestamp.
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * Agent account.
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * Refers to the EndStatus field in the DescribeTelCdr api.
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * Queue skill group ID.
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * Queue skill group name.
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * Recording url with authentication and valid period. obtain and pull within a short time frame. do not persist this link.
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * Specifies the COS link for recording transfer to a third party.
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * Recording text information link with authentication and valid period. retrieve it within a short time frame. do not persist this link.
                     */
                    std::string m_asrURL;
                    bool m_asrURLHasBeenSet;

                    /**
                     * Voicemail recording url.
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * Voicemail recording text information url. purchase the offline speech recognition package through the console and enable the offline speech recognition switch.
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                    /**
                     * IVR key information.
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * Satisfaction rate keystroke information.
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * Hang-Up side. valid values: seat, user, system.
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * Customer custom data (User-to-User Interface).
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * List of events during a call.
                     */
                    std::vector<SessionEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * List of service participants.
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_
