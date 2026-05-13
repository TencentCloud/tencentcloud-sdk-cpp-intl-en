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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERWHITELISTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERWHITELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 
                */
                class RabbitMQClusterWhiteListInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterWhiteListInfo();
                    ~RabbitMQClusterWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deprecated.
                     * @return WhiteList Deprecated.
                     * 
                     */
                    std::string GetWhiteList() const;

                    /**
                     * 设置Deprecated.
                     * @param _whiteList Deprecated.
                     * 
                     */
                    void SetWhiteList(const std::string& _whiteList);

                    /**
                     * 判断参数 WhiteList 是否已赋值
                     * @return WhiteList 是否已赋值
                     * 
                     */
                    bool WhiteListHasBeenSet() const;

                    /**
                     * 获取Public network console allowlist.
                     * @return PublicControlConsoleWhiteList Public network console allowlist.
                     * 
                     */
                    std::string GetPublicControlConsoleWhiteList() const;

                    /**
                     * 设置Public network console allowlist.
                     * @param _publicControlConsoleWhiteList Public network console allowlist.
                     * 
                     */
                    void SetPublicControlConsoleWhiteList(const std::string& _publicControlConsoleWhiteList);

                    /**
                     * 判断参数 PublicControlConsoleWhiteList 是否已赋值
                     * @return PublicControlConsoleWhiteList 是否已赋值
                     * 
                     */
                    bool PublicControlConsoleWhiteListHasBeenSet() const;

                    /**
                     * 获取Public network data flow allowlist.
                     * @return PublicDataStreamWhiteList Public network data flow allowlist.
                     * 
                     */
                    std::string GetPublicDataStreamWhiteList() const;

                    /**
                     * 设置Public network data flow allowlist.
                     * @param _publicDataStreamWhiteList Public network data flow allowlist.
                     * 
                     */
                    void SetPublicDataStreamWhiteList(const std::string& _publicDataStreamWhiteList);

                    /**
                     * 判断参数 PublicDataStreamWhiteList 是否已赋值
                     * @return PublicDataStreamWhiteList 是否已赋值
                     * 
                     */
                    bool PublicDataStreamWhiteListHasBeenSet() const;

                    /**
                     * 获取
                     * @return PublicControlConsoleWhiteListStatus 
                     * 
                     */
                    std::string GetPublicControlConsoleWhiteListStatus() const;

                    /**
                     * 设置
                     * @param _publicControlConsoleWhiteListStatus 
                     * 
                     */
                    void SetPublicControlConsoleWhiteListStatus(const std::string& _publicControlConsoleWhiteListStatus);

                    /**
                     * 判断参数 PublicControlConsoleWhiteListStatus 是否已赋值
                     * @return PublicControlConsoleWhiteListStatus 是否已赋值
                     * 
                     */
                    bool PublicControlConsoleWhiteListStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return PublicDataStreamWhiteListStatus 
                     * 
                     */
                    std::string GetPublicDataStreamWhiteListStatus() const;

                    /**
                     * 设置
                     * @param _publicDataStreamWhiteListStatus 
                     * 
                     */
                    void SetPublicDataStreamWhiteListStatus(const std::string& _publicDataStreamWhiteListStatus);

                    /**
                     * 判断参数 PublicDataStreamWhiteListStatus 是否已赋值
                     * @return PublicDataStreamWhiteListStatus 是否已赋值
                     * 
                     */
                    bool PublicDataStreamWhiteListStatusHasBeenSet() const;

                private:

                    /**
                     * Deprecated.
                     */
                    std::string m_whiteList;
                    bool m_whiteListHasBeenSet;

                    /**
                     * Public network console allowlist.
                     */
                    std::string m_publicControlConsoleWhiteList;
                    bool m_publicControlConsoleWhiteListHasBeenSet;

                    /**
                     * Public network data flow allowlist.
                     */
                    std::string m_publicDataStreamWhiteList;
                    bool m_publicDataStreamWhiteListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_publicControlConsoleWhiteListStatus;
                    bool m_publicControlConsoleWhiteListStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_publicDataStreamWhiteListStatus;
                    bool m_publicDataStreamWhiteListStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERWHITELISTINFO_H_
