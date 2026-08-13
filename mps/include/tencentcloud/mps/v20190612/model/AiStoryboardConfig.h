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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AISTORYBOARDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AISTORYBOARDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent shot deconstruction configuration.
                */
                class AiStoryboardConfig : public AbstractModel
                {
                public:
                    AiStoryboardConfig();
                    ~AiStoryboardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @return Switch <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @param _switch <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Specify the serial number of the storyboard to extract. Counting begins from 0. If not specified, return all storyboards.</p>
                     * @return ProcessIndex <p>Specify the serial number of the storyboard to extract. Counting begins from 0. If not specified, return all storyboards.</p>
                     * 
                     */
                    int64_t GetProcessIndex() const;

                    /**
                     * 设置<p>Specify the serial number of the storyboard to extract. Counting begins from 0. If not specified, return all storyboards.</p>
                     * @param _processIndex <p>Specify the serial number of the storyboard to extract. Counting begins from 0. If not specified, return all storyboards.</p>
                     * 
                     */
                    void SetProcessIndex(const int64_t& _processIndex);

                    /**
                     * 判断参数 ProcessIndex 是否已赋值
                     * @return ProcessIndex 是否已赋值
                     * 
                     */
                    bool ProcessIndexHasBeenSet() const;

                private:

                    /**
                     * <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Specify the serial number of the storyboard to extract. Counting begins from 0. If not specified, return all storyboards.</p>
                     */
                    int64_t m_processIndex;
                    bool m_processIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AISTORYBOARDCONFIG_H_
