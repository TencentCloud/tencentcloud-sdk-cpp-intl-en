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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSALLOWBLOCK_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSALLOWBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSUserAllowBlockIP.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS blocklist/allowlist
                */
                class DdosAllowBlock : public AbstractModel
                {
                public:
                    DdosAllowBlock();
                    ~DdosAllowBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * @return Switch Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * @param _switch Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
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
                     * 获取Array of objects in blocklist/allowlist configuration
                     * @return UserAllowBlockIp Array of objects in blocklist/allowlist configuration
                     * 
                     */
                    std::vector<DDoSUserAllowBlockIP> GetUserAllowBlockIp() const;

                    /**
                     * 设置Array of objects in blocklist/allowlist configuration
                     * @param _userAllowBlockIp Array of objects in blocklist/allowlist configuration
                     * 
                     */
                    void SetUserAllowBlockIp(const std::vector<DDoSUserAllowBlockIP>& _userAllowBlockIp);

                    /**
                     * 判断参数 UserAllowBlockIp 是否已赋值
                     * @return UserAllowBlockIp 是否已赋值
                     * 
                     */
                    bool UserAllowBlockIpHasBeenSet() const;

                private:

                    /**
                     * Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Array of objects in blocklist/allowlist configuration
                     */
                    std::vector<DDoSUserAllowBlockIP> m_userAllowBlockIp;
                    bool m_userAllowBlockIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSALLOWBLOCK_H_
