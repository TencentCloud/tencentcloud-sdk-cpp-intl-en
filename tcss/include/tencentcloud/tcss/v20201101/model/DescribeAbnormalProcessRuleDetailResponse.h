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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAbnormalProcessRuleDetail response structure.
                */
                class DescribeAbnormalProcessRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeAbnormalProcessRuleDetailResponse();
                    ~DescribeAbnormalProcessRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of the abnormal process policy
                     * @return RuleDetail Details of the abnormal process policy
                     * 
                     */
                    AbnormalProcessRuleInfo GetRuleDetail() const;

                    /**
                     * 判断参数 RuleDetail 是否已赋值
                     * @return RuleDetail 是否已赋值
                     * 
                     */
                    bool RuleDetailHasBeenSet() const;

                private:

                    /**
                     * Details of the abnormal process policy
                     */
                    AbnormalProcessRuleInfo m_ruleDetail;
                    bool m_ruleDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSRULEDETAILRESPONSE_H_
