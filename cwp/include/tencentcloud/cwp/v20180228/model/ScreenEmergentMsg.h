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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEMERGENTMSG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEMERGENTMSG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Visualized emergency notification on the large screen
                */
                class ScreenEmergentMsg : public AbstractModel
                {
                public:
                    ScreenEmergentMsg();
                    ~ScreenEmergentMsg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification tag/title
                     * @return Title Notification tag/title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Notification tag/title
                     * @param _title Notification tag/title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Notification content
                     * @return Text Notification content
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Notification content
                     * @param _text Notification content
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
                     * 获取Redirection type: 0=vulnerability management
                     * @return Type Redirection type: 0=vulnerability management
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Redirection type: 0=vulnerability management
                     * @param _type Redirection type: 0=vulnerability management
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Notification tag/title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Notification content
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Redirection type: 0=vulnerability management
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEMERGENTMSG_H_
