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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPADRULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPADRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLivePadRule request structure.
                */
                class CreateLivePadRuleRequest : public AbstractModel
                {
                public:
                    CreateLivePadRuleRequest();
                    ~CreateLivePadRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name for streaming.
                     * @return DomainName Domain name for streaming.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name for streaming.
                     * @param _domainName Domain name for streaming.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The template ID.
                     * @return TemplateId The template ID.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置The template ID.
                     * @param _templateId The template ID.
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取The streaming path is consistent with the AppName in the streaming and playback address. The default value is live.
                     * @return AppName The streaming path is consistent with the AppName in the streaming and playback address. The default value is live.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The streaming path is consistent with the AppName in the streaming and playback address. The default value is live.
                     * @param _appName The streaming path is consistent with the AppName in the streaming and playback address. The default value is live.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name. Note: If this parameter is set to a non-empty string, the rule will only work on this push stream.
                     * @return StreamName Stream name. Note: If this parameter is set to a non-empty string, the rule will only work on this push stream.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name. Note: If this parameter is set to a non-empty string, the rule will only work on this push stream.
                     * @param _streamName Stream name. Note: If this parameter is set to a non-empty string, the rule will only work on this push stream.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * Domain name for streaming.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The streaming path is consistent with the AppName in the streaming and playback address. The default value is live.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name. Note: If this parameter is set to a non-empty string, the rule will only work on this push stream.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPADRULEREQUEST_H_
