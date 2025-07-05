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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYEVENTATTACKSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYEVENTATTACKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyEventAttackStatus request structure.
                */
                class ModifyEventAttackStatusRequest : public AbstractModel
                {
                public:
                    ModifyEventAttackStatusRequest();
                    ~ModifyEventAttackStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取An array of event IDs that need to be modified, and batch operation is supported.
                     * @return Ids An array of event IDs that need to be modified, and batch operation is supported.
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置An array of event IDs that need to be modified, and batch operation is supported.
                     * @param _ids An array of event IDs that need to be modified, and batch operation is supported.
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * @return All Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * @param _all Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取0: Pending 1: Processed 2: Allowlisted 3: Ignored 4: Deleted 
                     * @return Status 0: Pending 1: Processed 2: Allowlisted 3: Ignored 4: Deleted 
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: Pending 1: Processed 2: Allowlisted 3: Ignored 4: Deleted 
                     * @param _status 0: Pending 1: Processed 2: Allowlisted 3: Ignored 4: Deleted 
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>Type: String attack status: 0: attempted attack; 1: attack succeeded: required: no</li>
<li>Status: String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted: required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>Quuids - String host CVM UUID - required: no</li>

                     * @return Filters Filter criteria
<li>Type: String attack status: 0: attempted attack; 1: attack succeeded: required: no</li>
<li>Status: String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted: required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>Quuids - String host CVM UUID - required: no</li>

                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Type: String attack status: 0: attempted attack; 1: attack succeeded: required: no</li>
<li>Status: String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted: required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>Quuids - String host CVM UUID - required: no</li>

                     * @param _filters Filter criteria
<li>Type: String attack status: 0: attempted attack; 1: attack succeeded: required: no</li>
<li>Status: String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted: required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>Quuids - String host CVM UUID - required: no</li>

                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Excluded IDs
                     * @return ExcludeId Excluded IDs
                     * 
                     */
                    std::vector<uint64_t> GetExcludeId() const;

                    /**
                     * 设置Excluded IDs
                     * @param _excludeId Excluded IDs
                     * 
                     */
                    void SetExcludeId(const std::vector<uint64_t>& _excludeId);

                    /**
                     * 判断参数 ExcludeId 是否已赋值
                     * @return ExcludeId 是否已赋值
                     * 
                     */
                    bool ExcludeIdHasBeenSet() const;

                private:

                    /**
                     * An array of event IDs that need to be modified, and batch operation is supported.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 0: Pending 1: Processed 2: Allowlisted 3: Ignored 4: Deleted 
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Filter criteria
<li>Type: String attack status: 0: attempted attack; 1: attack succeeded: required: no</li>
<li>Status: String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted: required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>Quuids - String host CVM UUID - required: no</li>

                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Excluded IDs
                     */
                    std::vector<uint64_t> m_excludeId;
                    bool m_excludeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYEVENTATTACKSTATUSREQUEST_H_
