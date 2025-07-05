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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AIRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AIRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * AI rule engine
                */
                class AiRule : public AbstractModel
                {
                public:
                    AiRule();
                    ~AiRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The status of the AI rule engine. Values:
<li>`smart_status_close`: Disabled</li>
<li>`smart_status_open`: Block</li>
<li>`smart_status_observe`: Observe</li>
                     * @return Mode The status of the AI rule engine. Values:
<li>`smart_status_close`: Disabled</li>
<li>`smart_status_open`: Block</li>
<li>`smart_status_observe`: Observe</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The status of the AI rule engine. Values:
<li>`smart_status_close`: Disabled</li>
<li>`smart_status_open`: Block</li>
<li>`smart_status_observe`: Observe</li>
                     * @param _mode The status of the AI rule engine. Values:
<li>`smart_status_close`: Disabled</li>
<li>`smart_status_open`: Block</li>
<li>`smart_status_observe`: Observe</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * The status of the AI rule engine. Values:
<li>`smart_status_close`: Disabled</li>
<li>`smart_status_open`: Block</li>
<li>`smart_status_observe`: Observe</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AIRULE_H_
