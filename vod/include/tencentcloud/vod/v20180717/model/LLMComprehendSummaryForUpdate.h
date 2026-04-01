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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDSUMMARYFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDSUMMARYFORUPDATE_H_

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
                * Large model parsing segment summary parse configuration
                */
                class LLMComprehendSummaryForUpdate : public AbstractModel
                {
                public:
                    LLMComprehendSummaryForUpdate();
                    ~LLMComprehendSummaryForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment summary task switch, available values:
-ON: Enable segment summary task.
-OFF: Disable segment summary.
                     * @return Switch Segment summary task switch, available values:
-ON: Enable segment summary task.
-OFF: Disable segment summary.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Segment summary task switch, available values:
-ON: Enable segment summary task.
-OFF: Disable segment summary.
                     * @param _switch Segment summary task switch, available values:
-ON: Enable segment summary task.
-OFF: Disable segment summary.
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
                     * 获取Extended parameter, which is a serialized json string. See [Extended Parameter description](https://www.tencentcloud.com/document/product/862/104493?from_cn_redirect=1#note).
                     * @return ExtendedParameter Extended parameter, which is a serialized json string. See [Extended Parameter description](https://www.tencentcloud.com/document/product/862/104493?from_cn_redirect=1#note).
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置Extended parameter, which is a serialized json string. See [Extended Parameter description](https://www.tencentcloud.com/document/product/862/104493?from_cn_redirect=1#note).
                     * @param _extendedParameter Extended parameter, which is a serialized json string. See [Extended Parameter description](https://www.tencentcloud.com/document/product/862/104493?from_cn_redirect=1#note).
                     * 
                     */
                    void SetExtendedParameter(const std::string& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                private:

                    /**
                     * Segment summary task switch, available values:
-ON: Enable segment summary task.
-OFF: Disable segment summary.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Extended parameter, which is a serialized json string. See [Extended Parameter description](https://www.tencentcloud.com/document/product/862/104493?from_cn_redirect=1#note).
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDSUMMARYFORUPDATE_H_
