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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTMACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTMACHINE_H_

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
                * Authorization expiration info of the machine
                */
                class ProtectMachine : public AbstractModel
                {
                public:
                    ProtectMachine();
                    ~ProtectMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine name
                     * @return HostName Machine name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Machine name
                     * @param _hostName Machine name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Machine IP address
                     * @return HostIp Machine IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Machine IP address
                     * @param _hostIp Machine IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Number of protection directories
                     * @return SafeguardDirNum Number of protection directories
                     * 
                     */
                    uint64_t GetSafeguardDirNum() const;

                    /**
                     * 设置Number of protection directories
                     * @param _safeguardDirNum Number of protection directories
                     * 
                     */
                    void SetSafeguardDirNum(const uint64_t& _safeguardDirNum);

                    /**
                     * 判断参数 SafeguardDirNum 是否已赋值
                     * @return SafeguardDirNum 是否已赋值
                     * 
                     */
                    bool SafeguardDirNumHasBeenSet() const;

                private:

                    /**
                     * Machine name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Machine IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Number of protection directories
                     */
                    uint64_t m_safeguardDirNum;
                    bool m_safeguardDirNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTMACHINE_H_
