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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMALERTINFOS_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMALERTINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel linear assembly program alarm information details.
                */
                class ProgramAlertInfos : public AbstractModel
                {
                public:
                    ProgramAlertInfos();
                    ~ProgramAlertInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel ID.
                     * @return ChannelId Channel ID.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID.
                     * @param _channelId Channel ID.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Channel name.

                     * @return ChannelName Channel name.

                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name.

                     * @param _channelName Channel name.

                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取ProgramID.
                     * @return ProgramId ProgramID.
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置ProgramID.
                     * @param _programId ProgramID.
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取ProgramName.
                     * @return ProgramName ProgramName.
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置ProgramName.
                     * @param _programName ProgramName.
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取Alarm event code.
                     * @return Code Alarm event code.
                     * 
                     */
                    uint64_t GetCode() const;

                    /**
                     * 设置Alarm event code.
                     * @param _code Alarm event code.
                     * 
                     */
                    void SetCode(const uint64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Alarm classification.
                     * @return Category Alarm classification.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Alarm classification.
                     * @param _category Alarm classification.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Alarm message.
                     * @return Message Alarm message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Alarm message.
                     * @param _message Alarm message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return LastModifiedTime Update time.
                     * 
                     */
                    uint64_t GetLastModifiedTime() const;

                    /**
                     * 设置Update time.
                     * @param _lastModifiedTime Update time.
                     * 
                     */
                    void SetLastModifiedTime(const uint64_t& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * Channel ID.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Channel name.

                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * ProgramID.
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * ProgramName.
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * Alarm event code.
                     */
                    uint64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Alarm classification.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Alarm message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Update time.
                     */
                    uint64_t m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMALERTINFOS_H_
