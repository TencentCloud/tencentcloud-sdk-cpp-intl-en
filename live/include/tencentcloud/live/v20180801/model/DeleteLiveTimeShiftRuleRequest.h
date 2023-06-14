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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETIMESHIFTRULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETIMESHIFTRULEREQUEST_H_

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
                * DeleteLiveTimeShiftRule request structure.
                */
                class DeleteLiveTimeShiftRuleRequest : public AbstractModel
                {
                public:
                    DeleteLiveTimeShiftRuleRequest();
                    ~DeleteLiveTimeShiftRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The push domain.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * @return DomainName The push domain.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The push domain.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * @param _domainName The push domain.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
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
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * @return AppName The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * @param _appName The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
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
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * @return StreamName The stream name.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     * @param _streamName The stream name.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
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
                     * The push domain.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The push path, which should be the same as `AppName` in the push and playback URLs. The default value is `live`.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The stream name.
`Domain name+AppName+StreamName` uniquely identifies a time shifting rule. To delete a time shifting rule, exact match is required. This means if the `AppName` of a time shifting rule is empty, to delete the rule, you need to pass in an empty string for `AppName`.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETIMESHIFTRULEREQUEST_H_
