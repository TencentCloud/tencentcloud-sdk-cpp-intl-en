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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTAUDITSRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTAUDITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/AuditSummary.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * ListAudits response structure.
                */
                class ListAuditsResponse : public AbstractModel
                {
                public:
                    ListAuditsResponse();
                    ~ListAuditsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Set of queried tracking set summaries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditSummarys Set of queried tracking set summaries
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AuditSummary> GetAuditSummarys() const;

                    /**
                     * 判断参数 AuditSummarys 是否已赋值
                     * @return AuditSummarys 是否已赋值
                     * 
                     */
                    bool AuditSummarysHasBeenSet() const;

                private:

                    /**
                     * Set of queried tracking set summaries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AuditSummary> m_auditSummarys;
                    bool m_auditSummarysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTAUDITSRESPONSE_H_
