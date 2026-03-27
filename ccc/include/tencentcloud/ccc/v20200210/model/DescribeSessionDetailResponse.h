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
                     * 获取<P>Calling number</p>.
                     * @return Caller <P>Calling number</p>.
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
                     * 获取<P>Called number</p>.
                     * @return Callee <P>Called number</p>.
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
                     * 获取<P>Call type 1 outgoing call 2 incoming call 3 audio dial-in 5 predictive outbound call 6 extension call</p>.
                     * @return CallType <P>Call type 1 outgoing call 2 incoming call 3 audio dial-in 5 predictive outbound call 6 extension call</p>.
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
                     * 获取<p>Start timestamp, Unix second-level timestamp</p>.
                     * @return StartTimeStamp <p>Start timestamp, Unix second-level timestamp</p>.
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
                     * 获取<p>Ring timestamp, UNIX second-level timestamp</p>.
                     * @return RingTimestamp <p>Ring timestamp, UNIX second-level timestamp</p>.
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
                     * 获取<p>Answer timestamp, UNIX second-level timestamp</p>.
                     * @return AcceptTimestamp <p>Answer timestamp, UNIX second-level timestamp</p>.
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
                     * 获取<p>End timestamp, UNIX second-level timestamp</p>.
                     * @return EndedTimestamp <p>End timestamp, UNIX second-level timestamp</p>.
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
                     * 获取<p>Queue entry time, Unix second-level timestamp</p>.
                     * @return QueuedTimestamp <p>Queue entry time, Unix second-level timestamp</p>.
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
                     * 获取<P>Agent account</p>.
                     * @return StaffUserId <P>Agent account</p>.
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
                     * 获取<p>Refer to the EndStatus field in the DescribeTelCdr api.</p>.
                     * @return EndStatus <p>Refer to the EndStatus field in the DescribeTelCdr api.</p>.
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
                     * 获取<p>Queue skill group ID</p>.
                     * @return QueuedSkillGroupId <p>Queue skill group ID</p>.
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
                     * 获取<P>Queue skill group name</p>.
                     * @return QueuedSkillGroupName <P>Queue skill group name</p>.
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
                     * 获取<P>The recording link comes with authentication and a valid period. after obtaining it, please retrieve the content within 24 hours. do not persist this link. if the link has expired, call this api again to get a new link.</p>.
                     * @return RecordURL <P>The recording link comes with authentication and a valid period. after obtaining it, please retrieve the content within 24 hours. do not persist this link. if the link has expired, call this api again to get a new link.</p>.
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
                     * 获取<p>Recording transfer to external COS link</p>.
                     * @return CustomRecordURL <p>Recording transfer to external COS link</p>.
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
                     * 获取<P>Text information link of the voice recording, with authentication and valid period. please retrieve it within 24 hr after obtaining. do not persist this link. if the link has expired, call this api again to get a new link.</p>.
                     * @return AsrURL <P>Text information link of the voice recording, with authentication and valid period. please retrieve it within 24 hr after obtaining. do not persist this link. if the link has expired, call this api again to get a new link.</p>.
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
                     * 获取<P>Voicemail recording link</p>.
                     * @return VoicemailRecordURL <P>Voicemail recording link</p>.
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
                     * 获取<P>Voicemail voice recording text information link. you need to purchase an offline speech recognition package through the console and enable the offline speech recognition switch.</p>.
                     * @return VoicemailAsrURL <P>Voicemail voice recording text information link. you need to purchase an offline speech recognition package through the console and enable the offline speech recognition switch.</p>.
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
                     * 获取<P>IVR key information</p>.
                     * @return IVRKeyPressed <P>IVR key information</p>.
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
                     * 获取<P>Key information of satisfaction rate</p>.
                     * @return PostIVRKeyPressed <P>Key information of satisfaction rate</p>.
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
                     * 获取<P>Hang-Up side seat agent user system</p>.
                     * @return HungUpSide <P>Hang-Up side seat agent user system</p>.
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
                     * 获取<p>Customer custom data (User-to-User Interface)</p>.
                     * @return UUI <p>Customer custom data (User-to-User Interface)</p>.
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
                     * 获取<P>Event list for calls in progress</p>.
                     * @return Events <P>Event list for calls in progress</p>.
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
                     * 获取<P>Service participant list</p>.
                     * @return ServeParticipants <P>Service participant list</p>.
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

                    /**
                     * 获取<P>Status code for reason of system hang-up after connect.</p><p><a href="https://www.tencentcloud.com/document/product/679/123938?from_cn_redirect=1">details</a></p>.
                     * @return SysHangupReason <P>Status code for reason of system hang-up after connect.</p><p><a href="https://www.tencentcloud.com/document/product/679/123938?from_cn_redirect=1">details</a></p>.
                     * 
                     */
                    int64_t GetSysHangupReason() const;

                    /**
                     * 判断参数 SysHangupReason 是否已赋值
                     * @return SysHangupReason 是否已赋值
                     * 
                     */
                    bool SysHangupReasonHasBeenSet() const;

                    /**
                     * 获取<P>Reason for system hang up after connect.</p><p><a href="https://www.tencentcloud.com/document/product/679/123938?from_cn_redirect=1">details</a></p>.
                     * @return SysHangupReasonString <P>Reason for system hang up after connect.</p><p><a href="https://www.tencentcloud.com/document/product/679/123938?from_cn_redirect=1">details</a></p>.
                     * 
                     */
                    std::string GetSysHangupReasonString() const;

                    /**
                     * 判断参数 SysHangupReasonString 是否已赋值
                     * @return SysHangupReasonString 是否已赋值
                     * 
                     */
                    bool SysHangupReasonStringHasBeenSet() const;

                private:

                    /**
                     * <P>Calling number</p>.
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * <P>Called number</p>.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * <P>Call type 1 outgoing call 2 incoming call 3 audio dial-in 5 predictive outbound call 6 extension call</p>.
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * <p>Start timestamp, Unix second-level timestamp</p>.
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * <p>Ring timestamp, UNIX second-level timestamp</p>.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * <p>Answer timestamp, UNIX second-level timestamp</p>.
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * <p>End timestamp, UNIX second-level timestamp</p>.
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * <p>Queue entry time, Unix second-level timestamp</p>.
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * <P>Agent account</p>.
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * <p>Refer to the EndStatus field in the DescribeTelCdr api.</p>.
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * <p>Queue skill group ID</p>.
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * <P>Queue skill group name</p>.
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * <P>The recording link comes with authentication and a valid period. after obtaining it, please retrieve the content within 24 hours. do not persist this link. if the link has expired, call this api again to get a new link.</p>.
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * <p>Recording transfer to external COS link</p>.
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * <P>Text information link of the voice recording, with authentication and valid period. please retrieve it within 24 hr after obtaining. do not persist this link. if the link has expired, call this api again to get a new link.</p>.
                     */
                    std::string m_asrURL;
                    bool m_asrURLHasBeenSet;

                    /**
                     * <P>Voicemail recording link</p>.
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * <P>Voicemail voice recording text information link. you need to purchase an offline speech recognition package through the console and enable the offline speech recognition switch.</p>.
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                    /**
                     * <P>IVR key information</p>.
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * <P>Key information of satisfaction rate</p>.
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * <P>Hang-Up side seat agent user system</p>.
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * <p>Customer custom data (User-to-User Interface)</p>.
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * <P>Event list for calls in progress</p>.
                     */
                    std::vector<SessionEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <P>Service participant list</p>.
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * <P>Status code for reason of system hang-up after connect.</p><p><a href="https://www.tencentcloud.com/document/product/679/123938?from_cn_redirect=1">details</a></p>.
                     */
                    int64_t m_sysHangupReason;
                    bool m_sysHangupReasonHasBeenSet;

                    /**
                     * <P>Reason for system hang up after connect.</p><p><a href="https://www.tencentcloud.com/document/product/679/123938?from_cn_redirect=1">details</a></p>.
                     */
                    std::string m_sysHangupReasonString;
                    bool m_sysHangupReasonStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_
