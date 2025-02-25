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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * APM agent information.
                */
                class ApmAgentInfo : public AbstractModel
                {
                public:
                    ApmAgentInfo();
                    ~ApmAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent download address.
                     * @return AgentDownloadURL Agent download address.
                     * 
                     */
                    std::string GetAgentDownloadURL() const;

                    /**
                     * 设置Agent download address.
                     * @param _agentDownloadURL Agent download address.
                     * 
                     */
                    void SetAgentDownloadURL(const std::string& _agentDownloadURL);

                    /**
                     * 判断参数 AgentDownloadURL 是否已赋值
                     * @return AgentDownloadURL 是否已赋值
                     * 
                     */
                    bool AgentDownloadURLHasBeenSet() const;

                    /**
                     * 获取Collector reporting address.
                     * @return CollectorURL Collector reporting address.
                     * 
                     */
                    std::string GetCollectorURL() const;

                    /**
                     * 设置Collector reporting address.
                     * @param _collectorURL Collector reporting address.
                     * 
                     */
                    void SetCollectorURL(const std::string& _collectorURL);

                    /**
                     * 判断参数 CollectorURL 是否已赋值
                     * @return CollectorURL 是否已赋值
                     * 
                     */
                    bool CollectorURLHasBeenSet() const;

                    /**
                     * 获取Token information.
                     * @return Token Token information.
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token information.
                     * @param _token Token information.
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Public network reporting address.
                     * @return PublicCollectorURL Public network reporting address.
                     * 
                     */
                    std::string GetPublicCollectorURL() const;

                    /**
                     * 设置Public network reporting address.
                     * @param _publicCollectorURL Public network reporting address.
                     * 
                     */
                    void SetPublicCollectorURL(const std::string& _publicCollectorURL);

                    /**
                     * 判断参数 PublicCollectorURL 是否已赋值
                     * @return PublicCollectorURL 是否已赋值
                     * 
                     */
                    bool PublicCollectorURLHasBeenSet() const;

                    /**
                     * 获取Self-Developed vpc report address.
                     * @return InnerCollectorURL Self-Developed vpc report address.
                     * 
                     */
                    std::string GetInnerCollectorURL() const;

                    /**
                     * 设置Self-Developed vpc report address.
                     * @param _innerCollectorURL Self-Developed vpc report address.
                     * 
                     */
                    void SetInnerCollectorURL(const std::string& _innerCollectorURL);

                    /**
                     * 判断参数 InnerCollectorURL 是否已赋值
                     * @return InnerCollectorURL 是否已赋值
                     * 
                     */
                    bool InnerCollectorURLHasBeenSet() const;

                    /**
                     * 获取Private link reporting address.
                     * @return PrivateLinkCollectorURL Private link reporting address.
                     * 
                     */
                    std::string GetPrivateLinkCollectorURL() const;

                    /**
                     * 设置Private link reporting address.
                     * @param _privateLinkCollectorURL Private link reporting address.
                     * 
                     */
                    void SetPrivateLinkCollectorURL(const std::string& _privateLinkCollectorURL);

                    /**
                     * 判断参数 PrivateLinkCollectorURL 是否已赋值
                     * @return PrivateLinkCollectorURL 是否已赋值
                     * 
                     */
                    bool PrivateLinkCollectorURLHasBeenSet() const;

                private:

                    /**
                     * Agent download address.
                     */
                    std::string m_agentDownloadURL;
                    bool m_agentDownloadURLHasBeenSet;

                    /**
                     * Collector reporting address.
                     */
                    std::string m_collectorURL;
                    bool m_collectorURLHasBeenSet;

                    /**
                     * Token information.
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Public network reporting address.
                     */
                    std::string m_publicCollectorURL;
                    bool m_publicCollectorURLHasBeenSet;

                    /**
                     * Self-Developed vpc report address.
                     */
                    std::string m_innerCollectorURL;
                    bool m_innerCollectorURLHasBeenSet;

                    /**
                     * Private link reporting address.
                     */
                    std::string m_privateLinkCollectorURL;
                    bool m_privateLinkCollectorURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_
