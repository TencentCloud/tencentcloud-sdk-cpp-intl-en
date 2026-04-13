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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTCOMPRESSIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTCOMPRESSIONPARAMETERS_H_

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
                * Content compression configuration.
                */
                class ContentCompressionParameters : public AbstractModel
                {
                public:
                    ContentCompressionParameters();
                    ~ContentCompressionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the content compression configuration switch. valid values:.
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Specifies whether to simultaneously support brotli and gzip compression algorithms when Switch is on.
                     * @return Switch Specifies the content compression configuration switch. valid values:.
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Specifies whether to simultaneously support brotli and gzip compression algorithms when Switch is on.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Specifies the content compression configuration switch. valid values:.
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Specifies whether to simultaneously support brotli and gzip compression algorithms when Switch is on.
                     * @param _switch Specifies the content compression configuration switch. valid values:.
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Specifies whether to simultaneously support brotli and gzip compression algorithms when Switch is on.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * Specifies the content compression configuration switch. valid values:.
<li>`on`: Enable;</li>
<li>off: Disable.</li>
Specifies whether to simultaneously support brotli and gzip compression algorithms when Switch is on.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTCOMPRESSIONPARAMETERS_H_
