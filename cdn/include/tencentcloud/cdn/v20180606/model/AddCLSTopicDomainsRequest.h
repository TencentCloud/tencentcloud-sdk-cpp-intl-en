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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADDCLSTOPICDOMAINSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADDCLSTOPICDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DomainAreaConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * AddCLSTopicDomains request structure.
                */
                class AddCLSTopicDomainsRequest : public AbstractModel
                {
                public:
                    AddCLSTopicDomainsRequest();
                    ~AddCLSTopicDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetId Logset ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Region configuration for domains
                     * @return DomainAreaConfigs Region configuration for domains
                     */
                    std::vector<DomainAreaConfig> GetDomainAreaConfigs() const;

                    /**
                     * 设置Region configuration for domains
                     * @param DomainAreaConfigs Region configuration for domains
                     */
                    void SetDomainAreaConfigs(const std::vector<DomainAreaConfig>& _domainAreaConfigs);

                    /**
                     * 判断参数 DomainAreaConfigs 是否已赋值
                     * @return DomainAreaConfigs 是否已赋值
                     */
                    bool DomainAreaConfigsHasBeenSet() const;

                    /**
                     * 获取Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     * @return Channel Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     * @param Channel Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Region configuration for domains
                     */
                    std::vector<DomainAreaConfig> m_domainAreaConfigs;
                    bool m_domainAreaConfigsHasBeenSet;

                    /**
                     * Specifies whether to access CDN or ECDN. Valid values: `cdn` (default) and `ecdn`.
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADDCLSTOPICDOMAINSREQUEST_H_
