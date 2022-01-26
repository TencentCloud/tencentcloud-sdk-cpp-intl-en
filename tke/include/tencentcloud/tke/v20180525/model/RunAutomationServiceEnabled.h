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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RUNAUTOMATIONSERVICEENABLED_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RUNAUTOMATIONSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Describes the TAT service information.
                */
                class RunAutomationServiceEnabled : public AbstractModel
                {
                public:
                    RunAutomationServiceEnabled();
                    ~RunAutomationServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the TAT service. Valid values: <br><li>`TRUE`: yes;<br><li>`FALSE`: no<br><br>Default: `FALSE`.
                     * @return Enabled Whether to enable the TAT service. Valid values: <br><li>`TRUE`: yes;<br><li>`FALSE`: no<br><br>Default: `FALSE`.
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable the TAT service. Valid values: <br><li>`TRUE`: yes;<br><li>`FALSE`: no<br><br>Default: `FALSE`.
                     * @param Enabled Whether to enable the TAT service. Valid values: <br><li>`TRUE`: yes;<br><li>`FALSE`: no<br><br>Default: `FALSE`.
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the TAT service. Valid values: <br><li>`TRUE`: yes;<br><li>`FALSE`: no<br><br>Default: `FALSE`.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RUNAUTOMATIONSERVICEENABLED_H_
