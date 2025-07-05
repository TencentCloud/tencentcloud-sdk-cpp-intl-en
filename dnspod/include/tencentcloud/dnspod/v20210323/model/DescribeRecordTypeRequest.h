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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDTYPEREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeRecordType request structure.
                */
                class DescribeRecordTypeRequest : public AbstractModel
                {
                public:
                    DescribeRecordTypeRequest();
                    ~DescribeRecordTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain level.
+ Original plan. Valid values: `D_FREE` (Free Plan); `D_PLUS` (Individual Plus Plan); `D_EXTRA` (Enterprise 1 Plan); `D_EXPERT` (Enterprise 2 Plan); `D_ULTRA` (Enterprise 3 Plan).
+ New plan. Valid values: `DP_FREE` (Free Version); `DP_PLUS` (Professional); `DP_EXTRA` (Enterprise Basic); `DP_EXPERT` (Enterprise); `DP_ULTRA` (Ultimate).
                     * @return DomainGrade Domain level.
+ Original plan. Valid values: `D_FREE` (Free Plan); `D_PLUS` (Individual Plus Plan); `D_EXTRA` (Enterprise 1 Plan); `D_EXPERT` (Enterprise 2 Plan); `D_ULTRA` (Enterprise 3 Plan).
+ New plan. Valid values: `DP_FREE` (Free Version); `DP_PLUS` (Professional); `DP_EXTRA` (Enterprise Basic); `DP_EXPERT` (Enterprise); `DP_ULTRA` (Ultimate).
                     * 
                     */
                    std::string GetDomainGrade() const;

                    /**
                     * 设置Domain level.
+ Original plan. Valid values: `D_FREE` (Free Plan); `D_PLUS` (Individual Plus Plan); `D_EXTRA` (Enterprise 1 Plan); `D_EXPERT` (Enterprise 2 Plan); `D_ULTRA` (Enterprise 3 Plan).
+ New plan. Valid values: `DP_FREE` (Free Version); `DP_PLUS` (Professional); `DP_EXTRA` (Enterprise Basic); `DP_EXPERT` (Enterprise); `DP_ULTRA` (Ultimate).
                     * @param _domainGrade Domain level.
+ Original plan. Valid values: `D_FREE` (Free Plan); `D_PLUS` (Individual Plus Plan); `D_EXTRA` (Enterprise 1 Plan); `D_EXPERT` (Enterprise 2 Plan); `D_ULTRA` (Enterprise 3 Plan).
+ New plan. Valid values: `DP_FREE` (Free Version); `DP_PLUS` (Professional); `DP_EXTRA` (Enterprise Basic); `DP_EXPERT` (Enterprise); `DP_ULTRA` (Ultimate).
                     * 
                     */
                    void SetDomainGrade(const std::string& _domainGrade);

                    /**
                     * 判断参数 DomainGrade 是否已赋值
                     * @return DomainGrade 是否已赋值
                     * 
                     */
                    bool DomainGradeHasBeenSet() const;

                private:

                    /**
                     * Domain level.
+ Original plan. Valid values: `D_FREE` (Free Plan); `D_PLUS` (Individual Plus Plan); `D_EXTRA` (Enterprise 1 Plan); `D_EXPERT` (Enterprise 2 Plan); `D_ULTRA` (Enterprise 3 Plan).
+ New plan. Valid values: `DP_FREE` (Free Version); `DP_PLUS` (Professional); `DP_EXTRA` (Enterprise Basic); `DP_EXPERT` (Enterprise); `DP_ULTRA` (Ultimate).
                     */
                    std::string m_domainGrade;
                    bool m_domainGradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDTYPEREQUEST_H_
