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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRACEWATERMARKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRACEWATERMARKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Watermark parameters for source tracing
                */
                class TraceWatermarkInput : public AbstractModel
                {
                public:
                    TraceWatermarkInput();
                    ~TraceWatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Traceability watermark task switch. Required. Available values:
<li>ON: enable traceability watermark</li>
<li>OFF: disables traceability watermark.</li>
                     * @return Switch Traceability watermark task switch. Required. Available values:
<li>ON: enable traceability watermark</li>
<li>OFF: disables traceability watermark.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Traceability watermark task switch. Required. Available values:
<li>ON: enable traceability watermark</li>
<li>OFF: disables traceability watermark.</li>
                     * @param _switch Traceability watermark task switch. Required. Available values:
<li>ON: enable traceability watermark</li>
<li>OFF: disables traceability watermark.</li>
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
                     * 获取Deprecated. Do not use.
                     * @return Definition Deprecated. Do not use.
                     * @deprecated
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Deprecated. Do not use.
                     * @param _definition Deprecated. Do not use.
                     * @deprecated
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * @deprecated
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * Traceability watermark task switch. Required. Available values:
<li>ON: enable traceability watermark</li>
<li>OFF: disables traceability watermark.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Deprecated. Do not use.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRACEWATERMARKINPUT_H_
