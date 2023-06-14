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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTRULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTRULEREQUEST_H_

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
                * CreateLiveTimeShiftRule request structure.
                */
                class CreateLiveTimeShiftRuleRequest : public AbstractModel
                {
                public:
                    CreateLiveTimeShiftRuleRequest();
                    ~CreateLiveTimeShiftRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The push domain.
                     * @return DomainName The push domain.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The push domain.
                     * @param _domainName The push domain.
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
                     * 获取The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
                     * @return AppName The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
                     * @param _appName The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
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
                     * 获取The stream name.
Note: If you pass in a non-empty string, the rule will only be applied to the specified stream.
                     * @return StreamName The stream name.
Note: If you pass in a non-empty string, the rule will only be applied to the specified stream.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
Note: If you pass in a non-empty string, the rule will only be applied to the specified stream.
                     * @param _streamName The stream name.
Note: If you pass in a non-empty string, the rule will only be applied to the specified stream.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

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

                private:

                    /**
                     * The push domain.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The stream name.
Note: If you pass in a non-empty string, the rule will only be applied to the specified stream.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETIMESHIFTRULEREQUEST_H_
