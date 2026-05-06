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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_NETWORKACCESSCONTROL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_NETWORKACCESSCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Network access policy
                */
                class NetworkAccessControl : public AbstractModel
                {
                public:
                    NetworkAccessControl();
                    ~NetworkAccessControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access mode: Whitelist|Blacklist
                     * @return Mode Access mode: Whitelist|Blacklist
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Access mode: Whitelist|Blacklist
                     * @param _mode Access mode: Whitelist|Blacklist
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取List of allowlist
                     * @return CidrWhiteList List of allowlist
                     * 
                     */
                    std::vector<std::string> GetCidrWhiteList() const;

                    /**
                     * 设置List of allowlist
                     * @param _cidrWhiteList List of allowlist
                     * 
                     */
                    void SetCidrWhiteList(const std::vector<std::string>& _cidrWhiteList);

                    /**
                     * 判断参数 CidrWhiteList 是否已赋值
                     * @return CidrWhiteList 是否已赋值
                     * 
                     */
                    bool CidrWhiteListHasBeenSet() const;

                    /**
                     * 获取blocklist
                     * @return CidrBlackList blocklist
                     * 
                     */
                    std::vector<std::string> GetCidrBlackList() const;

                    /**
                     * 设置blocklist
                     * @param _cidrBlackList blocklist
                     * 
                     */
                    void SetCidrBlackList(const std::vector<std::string>& _cidrBlackList);

                    /**
                     * 判断参数 CidrBlackList 是否已赋值
                     * @return CidrBlackList 是否已赋值
                     * 
                     */
                    bool CidrBlackListHasBeenSet() const;

                private:

                    /**
                     * Access mode: Whitelist|Blacklist
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * List of allowlist
                     */
                    std::vector<std::string> m_cidrWhiteList;
                    bool m_cidrWhiteListHasBeenSet;

                    /**
                     * blocklist
                     */
                    std::vector<std::string> m_cidrBlackList;
                    bool m_cidrBlackListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_NETWORKACCESSCONTROL_H_
