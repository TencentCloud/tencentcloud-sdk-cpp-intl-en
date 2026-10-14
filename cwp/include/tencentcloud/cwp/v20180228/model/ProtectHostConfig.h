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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_

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
                * Machine protection information
                */
                class ProtectHostConfig : public AbstractModel
                {
                public:
                    ProtectHostConfig();
                    ~ProtectHostConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique host ID.
                     * @return Quuid Unique host ID.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Unique host ID.
                     * @param _quuid Unique host ID.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Protection switch: 0 - off; 1 - on
                     * @return ProtectSwitch Protection switch: 0 - off; 1 - on
                     * 
                     */
                    uint64_t GetProtectSwitch() const;

                    /**
                     * 设置Protection switch: 0 - off; 1 - on
                     * @param _protectSwitch Protection switch: 0 - off; 1 - on
                     * 
                     */
                    void SetProtectSwitch(const uint64_t& _protectSwitch);

                    /**
                     * 判断参数 ProtectSwitch 是否已赋值
                     * @return ProtectSwitch 是否已赋值
                     * 
                     */
                    bool ProtectSwitchHasBeenSet() const;

                    /**
                     * 获取Auto recovery switch. 0: disabled. 1: enabled.
                     * @return AutoRecovery Auto recovery switch. 0: disabled. 1: enabled.
                     * 
                     */
                    uint64_t GetAutoRecovery() const;

                    /**
                     * 设置Auto recovery switch. 0: disabled. 1: enabled.
                     * @param _autoRecovery Auto recovery switch. 0: disabled. 1: enabled.
                     * 
                     */
                    void SetAutoRecovery(const uint64_t& _autoRecovery);

                    /**
                     * 判断参数 AutoRecovery 是否已赋值
                     * @return AutoRecovery 是否已赋值
                     * 
                     */
                    bool AutoRecoveryHasBeenSet() const;

                private:

                    /**
                     * Unique host ID.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Protection switch: 0 - off; 1 - on
                     */
                    uint64_t m_protectSwitch;
                    bool m_protectSwitchHasBeenSet;

                    /**
                     * Auto recovery switch. 0: disabled. 1: enabled.
                     */
                    uint64_t m_autoRecovery;
                    bool m_autoRecoveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_
