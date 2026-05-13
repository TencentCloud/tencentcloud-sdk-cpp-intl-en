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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TRIGGERSTRATEGYITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TRIGGERSTRATEGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/HttpCallbackConfig.h>
#include <tencentcloud/ccc/v20200210/model/RetryTagItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 
                */
                class TriggerStrategyItem : public AbstractModel
                {
                public:
                    TriggerStrategyItem();
                    ~TriggerStrategyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return InterfaceConfig 
                     * 
                     */
                    HttpCallbackConfig GetInterfaceConfig() const;

                    /**
                     * 设置
                     * @param _interfaceConfig 
                     * 
                     */
                    void SetInterfaceConfig(const HttpCallbackConfig& _interfaceConfig);

                    /**
                     * 判断参数 InterfaceConfig 是否已赋值
                     * @return InterfaceConfig 是否已赋值
                     * 
                     */
                    bool InterfaceConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return HangupTypes 
                     * 
                     */
                    std::vector<std::string> GetHangupTypes() const;

                    /**
                     * 设置
                     * @param _hangupTypes 
                     * 
                     */
                    void SetHangupTypes(const std::vector<std::string>& _hangupTypes);

                    /**
                     * 判断参数 HangupTypes 是否已赋值
                     * @return HangupTypes 是否已赋值
                     * 
                     */
                    bool HangupTypesHasBeenSet() const;

                    /**
                     * 获取
                     * @return CallTags 
                     * 
                     */
                    std::vector<RetryTagItem> GetCallTags() const;

                    /**
                     * 设置
                     * @param _callTags 
                     * 
                     */
                    void SetCallTags(const std::vector<RetryTagItem>& _callTags);

                    /**
                     * 判断参数 CallTags 是否已赋值
                     * @return CallTags 是否已赋值
                     * 
                     */
                    bool CallTagsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TriggerMode 
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置
                     * @param _triggerMode 
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    HttpCallbackConfig m_interfaceConfig;
                    bool m_interfaceConfigHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_hangupTypes;
                    bool m_hangupTypesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<RetryTagItem> m_callTags;
                    bool m_callTagsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TRIGGERSTRATEGYITEM_H_
