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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RELEASECONFIGS_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RELEASECONFIGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Release configuration items.
                */
                class ReleaseConfigs : public AbstractModel
                {
                public:
                    ReleaseConfigs();
                    ~ReleaseConfigs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration item description.
                     * @return ConfigItem Configuration item description.
                     * 
                     */
                    std::string GetConfigItem() const;

                    /**
                     * 设置Configuration item description.
                     * @param _configItem Configuration item description.
                     * 
                     */
                    void SetConfigItem(const std::string& _configItem);

                    /**
                     * 判断参数 ConfigItem 是否已赋值
                     * @return ConfigItem 是否已赋值
                     * 
                     */
                    bool ConfigItemHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Action Status.
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置Status.
                     * @param _action Status.
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Content after modification.
                     * @return Value Content after modification.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Content after modification.
                     * @param _value Content after modification.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Content before modification.
                     * @return LastValue Content before modification.
                     * 
                     */
                    std::string GetLastValue() const;

                    /**
                     * 设置Content before modification.
                     * @param _lastValue Content before modification.
                     * 
                     */
                    void SetLastValue(const std::string& _lastValue);

                    /**
                     * 判断参数 LastValue 是否已赋值
                     * @return LastValue 是否已赋值
                     * 
                     */
                    bool LastValueHasBeenSet() const;

                    /**
                     * 获取Modified content (display "content" with priority. If "content" is empty, take "value").
                     * @return Content Modified content (display "content" with priority. If "content" is empty, take "value").
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Modified content (display "content" with priority. If "content" is empty, take "value").
                     * @param _content Modified content (display "content" with priority. If "content" is empty, take "value").
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Reason for failure.
                     * @return Message Reason for failure.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Reason for failure.
                     * @param _message Reason for failure.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Configuration item description.
                     */
                    std::string m_configItem;
                    bool m_configItemHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Content after modification.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Content before modification.
                     */
                    std::string m_lastValue;
                    bool m_lastValueHasBeenSet;

                    /**
                     * Modified content (display "content" with priority. If "content" is empty, take "value").
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Reason for failure.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RELEASECONFIGS_H_
