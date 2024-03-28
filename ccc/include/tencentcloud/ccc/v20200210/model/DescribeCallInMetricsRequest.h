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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeCallInMetrics request structure.
                */
                class DescribeCallInMetricsRequest : public AbstractModel
                {
                public:
                    DescribeCallInMetricsRequest();
                    ~DescribeCallInMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Whether to return skill group dimension information or not (the default is "Yes").
                     * @return EnabledSkillGroup Whether to return skill group dimension information or not (the default is "Yes").
                     * 
                     */
                    bool GetEnabledSkillGroup() const;

                    /**
                     * 设置Whether to return skill group dimension information or not (the default is "Yes").
                     * @param _enabledSkillGroup Whether to return skill group dimension information or not (the default is "Yes").
                     * 
                     */
                    void SetEnabledSkillGroup(const bool& _enabledSkillGroup);

                    /**
                     * 判断参数 EnabledSkillGroup 是否已赋值
                     * @return EnabledSkillGroup 是否已赋值
                     * 
                     */
                    bool EnabledSkillGroupHasBeenSet() const;

                    /**
                     * 获取Whether to return line dimension information or not (the default is "No").
                     * @return EnabledNumber Whether to return line dimension information or not (the default is "No").
                     * 
                     */
                    bool GetEnabledNumber() const;

                    /**
                     * 设置Whether to return line dimension information or not (the default is "No").
                     * @param _enabledNumber Whether to return line dimension information or not (the default is "No").
                     * 
                     */
                    void SetEnabledNumber(const bool& _enabledNumber);

                    /**
                     * 判断参数 EnabledNumber 是否已赋值
                     * @return EnabledNumber 是否已赋值
                     * 
                     */
                    bool EnabledNumberHasBeenSet() const;

                    /**
                     * 获取Filter skill group list.
                     * @return GroupIdList Filter skill group list.
                     * 
                     */
                    std::vector<int64_t> GetGroupIdList() const;

                    /**
                     * 设置Filter skill group list.
                     * @param _groupIdList Filter skill group list.
                     * 
                     */
                    void SetGroupIdList(const std::vector<int64_t>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                private:

                    /**
                     * Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Whether to return skill group dimension information or not (the default is "Yes").
                     */
                    bool m_enabledSkillGroup;
                    bool m_enabledSkillGroupHasBeenSet;

                    /**
                     * Whether to return line dimension information or not (the default is "No").
                     */
                    bool m_enabledNumber;
                    bool m_enabledNumberHasBeenSet;

                    /**
                     * Filter skill group list.
                     */
                    std::vector<int64_t> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECALLINMETRICSREQUEST_H_
