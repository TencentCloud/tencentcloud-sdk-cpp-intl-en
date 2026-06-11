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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeContentInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Detailed configuration of a notification content template.
                */
                class NoticeContent : public AbstractModel
                {
                public:
                    NoticeContent();
                    ~NoticeContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel type

Email: mail; Sms: Sms; WeChat: WeChat; Phone: call; WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback
                     * @return Type Channel type

Email: mail; Sms: Sms; WeChat: WeChat; Phone: call; WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Channel type

Email: mail; Sms: Sms; WeChat: WeChat; Phone: call; WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback
                     * @param _type Channel type

Email: mail; Sms: Sms; WeChat: WeChat; Phone: call; WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback
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
                     * 获取Alarm trigger notification content template.
                     * @return TriggerContent Alarm trigger notification content template.
                     * 
                     */
                    NoticeContentInfo GetTriggerContent() const;

                    /**
                     * 设置Alarm trigger notification content template.
                     * @param _triggerContent Alarm trigger notification content template.
                     * 
                     */
                    void SetTriggerContent(const NoticeContentInfo& _triggerContent);

                    /**
                     * 判断参数 TriggerContent 是否已赋值
                     * @return TriggerContent 是否已赋值
                     * 
                     */
                    bool TriggerContentHasBeenSet() const;

                    /**
                     * 获取Alarm clearing notification content template.
                     * @return RecoveryContent Alarm clearing notification content template.
                     * 
                     */
                    NoticeContentInfo GetRecoveryContent() const;

                    /**
                     * 设置Alarm clearing notification content template.
                     * @param _recoveryContent Alarm clearing notification content template.
                     * 
                     */
                    void SetRecoveryContent(const NoticeContentInfo& _recoveryContent);

                    /**
                     * 判断参数 RecoveryContent 是否已赋值
                     * @return RecoveryContent 是否已赋值
                     * 
                     */
                    bool RecoveryContentHasBeenSet() const;

                private:

                    /**
                     * Channel type

Email: mail; Sms: Sms; WeChat: WeChat; Phone: call; WeCom: WeCom; DingTalk: DingTalk; Lark: Lark; Http: Custom Callback
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm trigger notification content template.
                     */
                    NoticeContentInfo m_triggerContent;
                    bool m_triggerContentHasBeenSet;

                    /**
                     * Alarm clearing notification content template.
                     */
                    NoticeContentInfo m_recoveryContent;
                    bool m_recoveryContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENT_H_
