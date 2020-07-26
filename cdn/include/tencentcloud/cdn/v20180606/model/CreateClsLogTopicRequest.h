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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATECLSLOGTOPICREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATECLSLOGTOPICREQUEST_H_

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
                * CreateClsLogTopic request structure.
                */
                class CreateClsLogTopicRequest : public AbstractModel
                {
                public:
                    CreateClsLogTopicRequest();
                    ~CreateClsLogTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic name
                     * @return TopicName Log topic name
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param TopicName Log topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

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
                     * 获取Connection channel. Default value: cdn
                     * @return Channel Connection channel. Default value: cdn
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Connection channel. Default value: cdn
                     * @param Channel Connection channel. Default value: cdn
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Domain name region information
                     * @return DomainAreaConfigs Domain name region information
                     */
                    std::vector<DomainAreaConfig> GetDomainAreaConfigs() const;

                    /**
                     * 设置Domain name region information
                     * @param DomainAreaConfigs Domain name region information
                     */
                    void SetDomainAreaConfigs(const std::vector<DomainAreaConfig>& _domainAreaConfigs);

                    /**
                     * 判断参数 DomainAreaConfigs 是否已赋值
                     * @return DomainAreaConfigs 是否已赋值
                     */
                    bool DomainAreaConfigsHasBeenSet() const;

                private:

                    /**
                     * Log topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Connection channel. Default value: cdn
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Domain name region information
                     */
                    std::vector<DomainAreaConfig> m_domainAreaConfigs;
                    bool m_domainAreaConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATECLSLOGTOPICREQUEST_H_
