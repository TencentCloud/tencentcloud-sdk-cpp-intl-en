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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The server controls the AI conversation robot to broadcast the specified text
                */
                class ServerPushText : public AbstractModel
                {
                public:
                    ServerPushText();
                    ~ServerPushText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server push broadcast text
                     * @return Text Server push broadcast text
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Server push broadcast text
                     * @param _text Server push broadcast text
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Allow this text to interrupt the robot
                     * @return Interrupt Allow this text to interrupt the robot
                     * 
                     */
                    bool GetInterrupt() const;

                    /**
                     * 设置Allow this text to interrupt the robot
                     * @param _interrupt Allow this text to interrupt the robot
                     * 
                     */
                    void SetInterrupt(const bool& _interrupt);

                    /**
                     * 判断参数 Interrupt 是否已赋值
                     * @return Interrupt 是否已赋值
                     * 
                     */
                    bool InterruptHasBeenSet() const;

                    /**
                     * 获取After the text is finished, whether to automatically close the conversation task
                     * @return StopAfterPlay After the text is finished, whether to automatically close the conversation task
                     * 
                     */
                    bool GetStopAfterPlay() const;

                    /**
                     * 设置After the text is finished, whether to automatically close the conversation task
                     * @param _stopAfterPlay After the text is finished, whether to automatically close the conversation task
                     * 
                     */
                    void SetStopAfterPlay(const bool& _stopAfterPlay);

                    /**
                     * 判断参数 StopAfterPlay 是否已赋值
                     * @return StopAfterPlay 是否已赋值
                     * 
                     */
                    bool StopAfterPlayHasBeenSet() const;

                private:

                    /**
                     * Server push broadcast text
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Allow this text to interrupt the robot
                     */
                    bool m_interrupt;
                    bool m_interruptHasBeenSet;

                    /**
                     * After the text is finished, whether to automatically close the conversation task
                     */
                    bool m_stopAfterPlay;
                    bool m_stopAfterPlayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
