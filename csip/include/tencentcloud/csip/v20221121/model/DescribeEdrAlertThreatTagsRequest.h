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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTTHREATTAGSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTTHREATTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EdrAlertTarget.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertThreatTags request structure.
                */
                class DescribeEdrAlertThreatTagsRequest : public AbstractModel
                {
                public:
                    DescribeEdrAlertThreatTagsRequest();
                    ~DescribeEdrAlertThreatTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Target alarm information</p>
                     * @return Targets <p>Target alarm information</p>
                     * 
                     */
                    std::vector<EdrAlertTarget> GetTargets() const;

                    /**
                     * 设置<p>Target alarm information</p>
                     * @param _targets <p>Target alarm information</p>
                     * 
                     */
                    void SetTargets(const std::vector<EdrAlertTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Target alarm information</p>
                     */
                    std::vector<EdrAlertTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTTHREATTAGSREQUEST_H_
