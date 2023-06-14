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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RUNEIPDIRECTSERVICEENABLED_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RUNEIPDIRECTSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * IP direct access information
                */
                class RunEIPDirectServiceEnabled : public AbstractModel
                {
                public:
                    RunEIPDirectServiceEnabled();
                    ~RunEIPDirectServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable IP direct access. Valid values:
TRUE: yes
FALSE: no
Default value: TRUE.
Currently, Windows images do not support IP direct access.
                     * @return Enabled Whether to enable IP direct access. Valid values:
TRUE: yes
FALSE: no
Default value: TRUE.
Currently, Windows images do not support IP direct access.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable IP direct access. Valid values:
TRUE: yes
FALSE: no
Default value: TRUE.
Currently, Windows images do not support IP direct access.
                     * @param _enabled Whether to enable IP direct access. Valid values:
TRUE: yes
FALSE: no
Default value: TRUE.
Currently, Windows images do not support IP direct access.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Whether to enable IP direct access. Valid values:
TRUE: yes
FALSE: no
Default value: TRUE.
Currently, Windows images do not support IP direct access.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RUNEIPDIRECTSERVICEENABLED_H_
