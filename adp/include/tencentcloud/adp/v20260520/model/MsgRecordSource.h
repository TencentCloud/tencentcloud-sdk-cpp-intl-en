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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDSOURCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MsgRecordSource
                */
                class MsgRecordSource : public AbstractModel
                {
                public:
                    MsgRecordSource();
                    ~MsgRecordSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel type for dialogue message access: 0=not specified, 1=agent, 2=experience page (Tencent Cloud), 3=evaluation dialogue, 4=experience page (phone number), 5=dialogue API connection, 6=evaluation task dialogue, 10=workflow debugging, 10000=WeChat official account, 10001=WeChat service account, 10002=WeCom app, 10003=web components, 10004=WeChat Customer Service, 10005=WeChat mini program, 10006=Yuanqi, 10007=App Treasure, 10008=Yuanbao, 10009=WeCom intelligent bot, 10010=Yuanqi API, 10011=LINE, 10012=Telegram, 10100=PC manager, 20001=honor Intelligent Agent platform, 20002=Xiaomi app store; user_id (string) is the unique ID of the visitor under this channel.
                     * @return ChannelType Channel type for dialogue message access: 0=not specified, 1=agent, 2=experience page (Tencent Cloud), 3=evaluation dialogue, 4=experience page (phone number), 5=dialogue API connection, 6=evaluation task dialogue, 10=workflow debugging, 10000=WeChat official account, 10001=WeChat service account, 10002=WeCom app, 10003=web components, 10004=WeChat Customer Service, 10005=WeChat mini program, 10006=Yuanqi, 10007=App Treasure, 10008=Yuanbao, 10009=WeCom intelligent bot, 10010=Yuanqi API, 10011=LINE, 10012=Telegram, 10100=PC manager, 20001=honor Intelligent Agent platform, 20002=Xiaomi app store; user_id (string) is the unique ID of the visitor under this channel.
                     * 
                     */
                    uint64_t GetChannelType() const;

                    /**
                     * 设置Channel type for dialogue message access: 0=not specified, 1=agent, 2=experience page (Tencent Cloud), 3=evaluation dialogue, 4=experience page (phone number), 5=dialogue API connection, 6=evaluation task dialogue, 10=workflow debugging, 10000=WeChat official account, 10001=WeChat service account, 10002=WeCom app, 10003=web components, 10004=WeChat Customer Service, 10005=WeChat mini program, 10006=Yuanqi, 10007=App Treasure, 10008=Yuanbao, 10009=WeCom intelligent bot, 10010=Yuanqi API, 10011=LINE, 10012=Telegram, 10100=PC manager, 20001=honor Intelligent Agent platform, 20002=Xiaomi app store; user_id (string) is the unique ID of the visitor under this channel.
                     * @param _channelType Channel type for dialogue message access: 0=not specified, 1=agent, 2=experience page (Tencent Cloud), 3=evaluation dialogue, 4=experience page (phone number), 5=dialogue API connection, 6=evaluation task dialogue, 10=workflow debugging, 10000=WeChat official account, 10001=WeChat service account, 10002=WeCom app, 10003=web components, 10004=WeChat Customer Service, 10005=WeChat mini program, 10006=Yuanqi, 10007=App Treasure, 10008=Yuanbao, 10009=WeCom intelligent bot, 10010=Yuanqi API, 10011=LINE, 10012=Telegram, 10100=PC manager, 20001=honor Intelligent Agent platform, 20002=Xiaomi app store; user_id (string) is the unique ID of the visitor under this channel.
                     * 
                     */
                    void SetChannelType(const uint64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取User ID.
                     * @return FromId User ID.
                     * 
                     */
                    std::string GetFromId() const;

                    /**
                     * 设置User ID.
                     * @param _fromId User ID.
                     * 
                     */
                    void SetFromId(const std::string& _fromId);

                    /**
                     * 判断参数 FromId 是否已赋值
                     * @return FromId 是否已赋值
                     * 
                     */
                    bool FromIdHasBeenSet() const;

                    /**
                     * 获取User source type of the message sender: 1=user (visitor/C-end user), 2=robot (AI reply), 3=agent (human customer service); from_id (string) is the unique user ID under this source type.
                     * @return FromType User source type of the message sender: 1=user (visitor/C-end user), 2=robot (AI reply), 3=agent (human customer service); from_id (string) is the unique user ID under this source type.
                     * 
                     */
                    uint64_t GetFromType() const;

                    /**
                     * 设置User source type of the message sender: 1=user (visitor/C-end user), 2=robot (AI reply), 3=agent (human customer service); from_id (string) is the unique user ID under this source type.
                     * @param _fromType User source type of the message sender: 1=user (visitor/C-end user), 2=robot (AI reply), 3=agent (human customer service); from_id (string) is the unique user ID under this source type.
                     * 
                     */
                    void SetFromType(const uint64_t& _fromType);

                    /**
                     * 判断参数 FromType 是否已赋值
                     * @return FromType 是否已赋值
                     * 
                     */
                    bool FromTypeHasBeenSet() const;

                    /**
                     * 获取User profile photo
                     * @return UserAvatar User profile photo
                     * 
                     */
                    std::string GetUserAvatar() const;

                    /**
                     * 设置User profile photo
                     * @param _userAvatar User profile photo
                     * 
                     */
                    void SetUserAvatar(const std::string& _userAvatar);

                    /**
                     * 判断参数 UserAvatar 是否已赋值
                     * @return UserAvatar 是否已赋值
                     * 
                     */
                    bool UserAvatarHasBeenSet() const;

                    /**
                     * 获取Visitor ID.
                     * @return UserId Visitor ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Visitor ID.
                     * @param _userId Visitor ID.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Visitor name
                     * @return UserNickname Visitor name
                     * 
                     */
                    std::string GetUserNickname() const;

                    /**
                     * 设置Visitor name
                     * @param _userNickname Visitor name
                     * 
                     */
                    void SetUserNickname(const std::string& _userNickname);

                    /**
                     * 判断参数 UserNickname 是否已赋值
                     * @return UserNickname 是否已赋值
                     * 
                     */
                    bool UserNicknameHasBeenSet() const;

                private:

                    /**
                     * Channel type for dialogue message access: 0=not specified, 1=agent, 2=experience page (Tencent Cloud), 3=evaluation dialogue, 4=experience page (phone number), 5=dialogue API connection, 6=evaluation task dialogue, 10=workflow debugging, 10000=WeChat official account, 10001=WeChat service account, 10002=WeCom app, 10003=web components, 10004=WeChat Customer Service, 10005=WeChat mini program, 10006=Yuanqi, 10007=App Treasure, 10008=Yuanbao, 10009=WeCom intelligent bot, 10010=Yuanqi API, 10011=LINE, 10012=Telegram, 10100=PC manager, 20001=honor Intelligent Agent platform, 20002=Xiaomi app store; user_id (string) is the unique ID of the visitor under this channel.
                     */
                    uint64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * User ID.
                     */
                    std::string m_fromId;
                    bool m_fromIdHasBeenSet;

                    /**
                     * User source type of the message sender: 1=user (visitor/C-end user), 2=robot (AI reply), 3=agent (human customer service); from_id (string) is the unique user ID under this source type.
                     */
                    uint64_t m_fromType;
                    bool m_fromTypeHasBeenSet;

                    /**
                     * User profile photo
                     */
                    std::string m_userAvatar;
                    bool m_userAvatarHasBeenSet;

                    /**
                     * Visitor ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Visitor name
                     */
                    std::string m_userNickname;
                    bool m_userNicknameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDSOURCE_H_
