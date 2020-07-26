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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTRULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTRULEREQUEST_H_

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
                * CreateLiveSnapshotRule request structure.
                */
                class CreateLiveSnapshotRuleRequest : public AbstractModel
                {
                public:
                    CreateLiveSnapshotRuleRequest();
                    ~CreateLiveSnapshotRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Push domain name.
                     * @return DomainName Push domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name.
                     * @param DomainName Push domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param TemplateId Template ID.
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     * @return AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     * @param AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name.
Note: if this parameter is a non-empty string, the rule will take effect only for the particular stream.
                     * @return StreamName Stream name.
Note: if this parameter is a non-empty string, the rule will take effect only for the particular stream.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
Note: if this parameter is a non-empty string, the rule will take effect only for the particular stream.
                     * @param StreamName Stream name.
Note: if this parameter is a non-empty string, the rule will take effect only for the particular stream.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * Push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name.
Note: if this parameter is a non-empty string, the rule will take effect only for the particular stream.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTRULEREQUEST_H_
