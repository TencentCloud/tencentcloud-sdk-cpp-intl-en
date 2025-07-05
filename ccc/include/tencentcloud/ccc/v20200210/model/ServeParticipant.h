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
                     * @return Mail Agent email.
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置Agent email.
                     * @param _mail Agent email.
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
                     * 获取Agent phone number.
                     * @return Phone Agent phone number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent phone number.
                     * @param _phone Agent phone number.
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
                     * 获取Ringing timestamp, unix second-level timestamp.
                     * @return RingTimestamp Ringing timestamp, unix second-level timestamp.
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置Ringing timestamp, unix second-level timestamp.
                     * @param _ringTimestamp Ringing timestamp, unix second-level timestamp.
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
                     * 获取Recording id can be indexed to the agent side recording.
                     * @return RecordId Recording id can be indexed to the agent side recording.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Recording id can be indexed to the agent side recording.
                     * @param _recordId Recording id can be indexed to the agent side recording.
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
                     * 获取Participant type: "staffseat", "outboundseat", "staffphoneseat".
                     * @return Type Participant type: "staffseat", "outboundseat", "staffphoneseat".
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Participant type: "staffseat", "outboundseat", "staffphoneseat".
                     * @param _type Participant type: "staffseat", "outboundseat", "staffphoneseat".
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
                     * 获取Transfer source agent information.
                     * @return TransferFrom Transfer source agent information.
                     * 
                     */
                    std::string GetTransferFrom() const;

                    /**
                     * 设置Transfer source agent information.
                     * @param _transferFrom Transfer source agent information.
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
                     * 获取Transfer source participant type is consistent with the type value.
                     * @return TransferFromType Transfer source participant type is consistent with the type value.
                     * 
                     */
                    std::string GetTransferFromType() const;

                    /**
                     * 设置Transfer source participant type is consistent with the type value.
                     * @param _transferFromType Transfer source participant type is consistent with the type value.
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
                     * 获取Transfer destination agent information.
                     * @return TransferTo Transfer destination agent information.
                     * 
                     */
                    std::string GetTransferTo() const;

                    /**
                     * 设置Transfer destination agent information.
                     * @param _transferTo Transfer destination agent information.
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
                     * 获取Transfer destination participant type, which is consistent with type values.
                     * @return TransferToType Transfer destination participant type, which is consistent with type values.
                     * 
                     */
                    std::string GetTransferToType() const;

                    /**
                     * 设置Transfer destination participant type, which is consistent with type values.
                     * @param _transferToType Transfer destination participant type, which is consistent with type values.
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
                     * 获取Ending status.
                     * @return EndStatusString Ending status.
                     * 
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置Ending status.
                     * @param _endStatusString Ending status.
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
                     * 获取Recording url.
                     * @return RecordURL Recording url.
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置Recording url.
                     * @param _recordURL Recording url.
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
                     * @return Sequence Participant sequence number, starting from 0.
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置Participant sequence number, starting from 0.
                     * @param _sequence Participant sequence number, starting from 0.
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
                     * 获取Start timestamp. unix second-level timestamp.
                     * @return StartTimestamp Start timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Start timestamp. unix second-level timestamp.
                     * @param _startTimestamp Start timestamp. unix second-level timestamp.
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
                     * 获取Skill group name.
                     * @return SkillGroupName Skill group name.
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置Skill group name.
                     * @param _skillGroupName Skill group name.
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

                private:

                    /**
                     * Agent email.
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * Agent phone number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Ringing timestamp, unix second-level timestamp.
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
                     * Recording id can be indexed to the agent side recording.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Participant type: "staffseat", "outboundseat", "staffphoneseat".
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Transfer source agent information.
                     */
                    std::string m_transferFrom;
                    bool m_transferFromHasBeenSet;

                    /**
                     * Transfer source participant type is consistent with the type value.
                     */
                    std::string m_transferFromType;
                    bool m_transferFromTypeHasBeenSet;

                    /**
                     * Transfer destination agent information.
                     */
                    std::string m_transferTo;
                    bool m_transferToHasBeenSet;

                    /**
                     * Transfer destination participant type, which is consistent with type values.
                     */
                    std::string m_transferToType;
                    bool m_transferToTypeHasBeenSet;

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Ending status.
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * Recording url.
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * Participant sequence number, starting from 0.
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * Start timestamp. unix second-level timestamp.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * Address of the third-party cos for transferring recording.
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_
