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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SOURCEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Access source information
                */
                class SourceInfo : public AbstractModel
                {
                public:
                    SourceInfo();
                    ~SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source IP
                     * @return Ip Source IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Source IP
                     * @param _ip Source IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Number of connections
                     * @return Conn Number of connections
                     * 
                     */
                    int64_t GetConn() const;

                    /**
                     * 设置Number of connections
                     * @param _conn Number of connections
                     * 
                     */
                    void SetConn(const int64_t& _conn);

                    /**
                     * 判断参数 Conn 是否已赋值
                     * @return Conn 是否已赋值
                     * 
                     */
                    bool ConnHasBeenSet() const;

                    /**
                     * 获取Command
                     * @return Cmd Command
                     * 
                     */
                    int64_t GetCmd() const;

                    /**
                     * 设置Command
                     * @param _cmd Command
                     * 
                     */
                    void SetCmd(const int64_t& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                private:

                    /**
                     * Source IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Number of connections
                     */
                    int64_t m_conn;
                    bool m_connHasBeenSet;

                    /**
                     * Command
                     */
                    int64_t m_cmd;
                    bool m_cmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SOURCEINFO_H_
