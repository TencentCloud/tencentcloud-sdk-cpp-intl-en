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
                * 
                */
                class ProtectHostConfig : public AbstractModel
                {
                public:
                    ProtectHostConfig();
                    ~ProtectHostConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Quuid 
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置
                     * @param _quuid 
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
                     * 获取
                     * @return ProtectSwitch 
                     * 
                     */
                    uint64_t GetProtectSwitch() const;

                    /**
                     * 设置
                     * @param _protectSwitch 
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
                     * 获取
                     * @return AutoRecovery 
                     * 
                     */
                    uint64_t GetAutoRecovery() const;

                    /**
                     * 设置
                     * @param _autoRecovery 
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
                     * 
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_protectSwitch;
                    bool m_protectSwitchHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_autoRecovery;
                    bool m_autoRecoveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_
