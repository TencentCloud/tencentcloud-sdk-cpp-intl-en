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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditInstanceFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAuditInstanceList request structure.
                */
                class DescribeAuditInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeAuditInstanceListRequest();
                    ~DescribeAuditInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enabling status of instance audit. 1 - enabled; 0 - not enabled.
                     * @return AuditSwitch Enabling status of instance audit. 1 - enabled; 0 - not enabled.
                     * 
                     */
                    int64_t GetAuditSwitch() const;

                    /**
                     * 设置Enabling status of instance audit. 1 - enabled; 0 - not enabled.
                     * @param _auditSwitch Enabling status of instance audit. 1 - enabled; 0 - not enabled.
                     * 
                     */
                    void SetAuditSwitch(const int64_t& _auditSwitch);

                    /**
                     * 判断参数 AuditSwitch 是否已赋值
                     * @return AuditSwitch 是否已赋值
                     * 
                     */
                    bool AuditSwitchHasBeenSet() const;

                    /**
                     * 获取Filtering conditions for querying the instance list.
                     * @return Filters Filtering conditions for querying the instance list.
                     * 
                     */
                    std::vector<AuditInstanceFilters> GetFilters() const;

                    /**
                     * 设置Filtering conditions for querying the instance list.
                     * @param _filters Filtering conditions for querying the instance list.
                     * 
                     */
                    void SetFilters(const std::vector<AuditInstanceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Instance audit rule mode. 1 - rule-based audit; 0 - full audit.
                     * @return AuditMode Instance audit rule mode. 1 - rule-based audit; 0 - full audit.
                     * 
                     */
                    int64_t GetAuditMode() const;

                    /**
                     * 设置Instance audit rule mode. 1 - rule-based audit; 0 - full audit.
                     * @param _auditMode Instance audit rule mode. 1 - rule-based audit; 0 - full audit.
                     * 
                     */
                    void SetAuditMode(const int64_t& _auditMode);

                    /**
                     * 判断参数 AuditMode 是否已赋值
                     * @return AuditMode 是否已赋值
                     * 
                     */
                    bool AuditModeHasBeenSet() const;

                    /**
                     * 获取Number of entries returned per request. The default value is 30, and the maximum value is 100.
                     * @return Limit Number of entries returned per request. The default value is 30, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries returned per request. The default value is 30, and the maximum value is 100.
                     * @param _limit Number of entries returned per request. The default value is 30, and the maximum value is 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is 0.
                     * @return Offset Offset. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0.
                     * @param _offset Offset. The default value is 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Enabling status of instance audit. 1 - enabled; 0 - not enabled.
                     */
                    int64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * Filtering conditions for querying the instance list.
                     */
                    std::vector<AuditInstanceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Instance audit rule mode. 1 - rule-based audit; 0 - full audit.
                     */
                    int64_t m_auditMode;
                    bool m_auditModeHasBeenSet;

                    /**
                     * Number of entries returned per request. The default value is 30, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
