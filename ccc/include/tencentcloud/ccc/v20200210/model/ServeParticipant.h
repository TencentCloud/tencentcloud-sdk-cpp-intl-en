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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_

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
                * Participant information.
                */
                class ServeParticipant : public AbstractModel
                {
                public:
                    ServeParticipant();
                    ~ServeParticipant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mail Agent email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置Agent email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mail Agent email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取Agent Telephone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Phone Agent Telephone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent Telephone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phone Agent Telephone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Ring timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RingTimestamp Ring timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置Ring timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ringTimestamp Ring timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Answer timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AcceptTimestamp Answer timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置Answer timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _acceptTimestamp Answer timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndedTimestamp End timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置End timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endedTimestamp End timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Recording ID, which can be used to index the recording on the agent side
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordId Recording ID, which can be used to index the recording on the agent side
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Recording ID, which can be used to index the recording on the agent side
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordId Recording ID, which can be used to index the recording on the agent side
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Participant type: "staffSeat", "outboundSeat", "staffPhoneSeat".
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Participant type: "staffSeat", "outboundSeat", "staffPhoneSeat".
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Participant type: "staffSeat", "outboundSeat", "staffPhoneSeat".
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Participant type: "staffSeat", "outboundSeat", "staffPhoneSeat".
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Transfer Source Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferFrom Transfer Source Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferFrom() const;

                    /**
                     * 设置Transfer Source Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferFrom Transfer Source Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferFrom(const std::string& _transferFrom);

                    /**
                     * 判断参数 TransferFrom 是否已赋值
                     * @return TransferFrom 是否已赋值
                     * 
                     */
                    bool TransferFromHasBeenSet() const;

                    /**
                     * 获取Transfer source participant type is consistent with the Type value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferFromType Transfer source participant type is consistent with the Type value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferFromType() const;

                    /**
                     * 设置Transfer source participant type is consistent with the Type value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferFromType Transfer source participant type is consistent with the Type value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferFromType(const std::string& _transferFromType);

                    /**
                     * 判断参数 TransferFromType 是否已赋值
                     * @return TransferFromType 是否已赋值
                     * 
                     */
                    bool TransferFromTypeHasBeenSet() const;

                    /**
                     * 获取Transfer Destination Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferTo Transfer Destination Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferTo() const;

                    /**
                     * 设置Transfer Destination Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferTo Transfer Destination Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferTo(const std::string& _transferTo);

                    /**
                     * 判断参数 TransferTo 是否已赋值
                     * @return TransferTo 是否已赋值
                     * 
                     */
                    bool TransferToHasBeenSet() const;

                    /**
                     * 获取Transfer destination participant type is consistent with Type values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferToType Transfer destination participant type is consistent with Type values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferToType() const;

                    /**
                     * 设置Transfer destination participant type is consistent with Type values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferToType Transfer destination participant type is consistent with Type values.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferToType(const std::string& _transferToType);

                    /**
                     * 判断参数 TransferToType 是否已赋值
                     * @return TransferToType 是否已赋值
                     * 
                     */
                    bool TransferToTypeHasBeenSet() const;

                    /**
                     * 获取Skill group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SkillGroupId Skill group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _skillGroupId Skill group ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Ending status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndStatusString Ending status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置Ending status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endStatusString Ending status.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Recording URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordURL Recording URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置Recording URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordURL Recording URL.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Participant sequence number, starting from 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sequence Participant sequence number, starting from 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置Participant sequence number, starting from 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sequence Participant sequence number, starting from 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取Start timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTimestamp Start timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Start timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTimestamp Start timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Skill Group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SkillGroupName Skill Group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置Skill Group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _skillGroupName Skill Group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

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

                private:

                    /**
                     * Agent email.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * Agent Telephone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Ring timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * Answer timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * End timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * Recording ID, which can be used to index the recording on the agent side
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Participant type: "staffSeat", "outboundSeat", "staffPhoneSeat".
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Transfer Source Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferFrom;
                    bool m_transferFromHasBeenSet;

                    /**
                     * Transfer source participant type is consistent with the Type value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferFromType;
                    bool m_transferFromTypeHasBeenSet;

                    /**
                     * Transfer Destination Agent Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferTo;
                    bool m_transferToHasBeenSet;

                    /**
                     * Transfer destination participant type is consistent with Type values.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferToType;
                    bool m_transferToTypeHasBeenSet;

                    /**
                     * Skill group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Ending status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * Recording URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * Participant sequence number, starting from 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * Start timestamp. Unix second-level timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * Skill Group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * Address of the third party COS for transferring recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_
