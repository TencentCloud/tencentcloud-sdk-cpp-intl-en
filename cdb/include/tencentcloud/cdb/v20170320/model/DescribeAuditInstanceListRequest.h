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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditInstanceFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Whether audit is enabled for the instance. Valid values: 1 - Enabled; 0 - Disabled.
                     * @return AuditSwitch Whether audit is enabled for the instance. Valid values: 1 - Enabled; 0 - Disabled.
                     * 
                     */
                    int64_t GetAuditSwitch() const;

                    /**
                     * 设置Whether audit is enabled for the instance. Valid values: 1 - Enabled; 0 - Disabled.
                     * @param _auditSwitch Whether audit is enabled for the instance. Valid values: 1 - Enabled; 0 - Disabled.
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
                     * 获取Filter conditions for querying the instance list.
                     * @return Filters Filter conditions for querying the instance list.
                     * 
                     */
                    std::vector<AuditInstanceFilters> GetFilters() const;

                    /**
                     * 设置Filter conditions for querying the instance list.
                     * @param _filters Filter conditions for querying the instance list.
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
                     * 获取Audit rule mode for the instance. Valid values: 1 - Rule-based audit; 0 - Full audit.
                     * @return AuditMode Audit rule mode for the instance. Valid values: 1 - Rule-based audit; 0 - Full audit.
                     * 
                     */
                    int64_t GetAuditMode() const;

                    /**
                     * 设置Audit rule mode for the instance. Valid values: 1 - Rule-based audit; 0 - Full audit.
                     * @param _auditMode Audit rule mode for the instance. Valid values: 1 - Rule-based audit; 0 - Full audit.
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
                     * 获取Number of entries to return per request. Default value: 30. Maximum value: 20000.
                     * @return Limit Number of entries to return per request. Default value: 30. Maximum value: 20000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries to return per request. Default value: 30. Maximum value: 20000.
                     * @param _limit Number of entries to return per request. Default value: 30. Maximum value: 20000.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * Whether audit is enabled for the instance. Valid values: 1 - Enabled; 0 - Disabled.
                     */
                    int64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * Filter conditions for querying the instance list.
                     */
                    std::vector<AuditInstanceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Audit rule mode for the instance. Valid values: 1 - Rule-based audit; 0 - Full audit.
                     */
                    int64_t m_auditMode;
                    bool m_auditModeHasBeenSet;

                    /**
                     * Number of entries to return per request. Default value: 30. Maximum value: 20000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
