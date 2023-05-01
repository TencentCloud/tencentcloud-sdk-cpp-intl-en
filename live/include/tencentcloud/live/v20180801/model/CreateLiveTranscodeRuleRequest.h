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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODERULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODERULEREQUEST_H_

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
                * CreateLiveTranscodeRule request structure.
                */
                class CreateLiveTranscodeRuleRequest : public AbstractModel
                {
                public:
                    CreateLiveTranscodeRuleRequest();
                    ~CreateLiveTranscodeRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Playback domain name.
                     * @return DomainName Playback domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Playback domain name.
                     * @param DomainName Playback domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The push path, which is the same as `AppName` in the push and playback addresses and is `live` by default. If you only want to bind the template to a domain, pass in an empty string.
                     * @return AppName The push path, which is the same as `AppName` in the push and playback addresses and is `live` by default. If you only want to bind the template to a domain, pass in an empty string.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path, which is the same as `AppName` in the push and playback addresses and is `live` by default. If you only want to bind the template to a domain, pass in an empty string.
                     * @param AppName The push path, which is the same as `AppName` in the push and playback addresses and is `live` by default. If you only want to bind the template to a domain, pass in an empty string.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name. If only the domain name or path is bound, leave this parameter blank.
                     * @return StreamName Stream name. If only the domain name or path is bound, leave this parameter blank.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name. If only the domain name or path is bound, leave this parameter blank.
                     * @param StreamName Stream name. If only the domain name or path is bound, leave this parameter blank.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Designates an existing template ID.
                     * @return TemplateId Designates an existing template ID.
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Designates an existing template ID.
                     * @param TemplateId Designates an existing template ID.
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * Playback domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The push path, which is the same as `AppName` in the push and playback addresses and is `live` by default. If you only want to bind the template to a domain, pass in an empty string.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name. If only the domain name or path is bound, leave this parameter blank.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Designates an existing template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODERULEREQUEST_H_
