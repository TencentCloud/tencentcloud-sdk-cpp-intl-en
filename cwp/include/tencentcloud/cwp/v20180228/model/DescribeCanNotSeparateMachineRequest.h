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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANNOTSEPARATEMACHINEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANNOTSEPARATEMACHINEREQUEST_H_

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
                * DescribeCanNotSeparateMachine request structure.
                */
                class DescribeCanNotSeparateMachineRequest : public AbstractModel
                {
                public:
                    DescribeCanNotSeparateMachineRequest();
                    ~DescribeCanNotSeparateMachineRequest() = default;
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
                     * @return UpdateAll Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * 
                     */
                    bool GetUpdateAll() const;

                    /**
                     * 设置Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * @param _updateAll Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * 
                     */
                    void SetUpdateAll(const bool& _updateAll);

                    /**
                     * 判断参数 UpdateAll 是否已赋值
                     * @return UpdateAll 是否已赋值
                     * 
                     */
                    bool UpdateAllHasBeenSet() const;

                    /**
                     * 获取Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * @return ExcludeId Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * 
                     */
                    std::vector<uint64_t> GetExcludeId() const;

                    /**
                     * 设置Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * @param _excludeId Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * 
                     */
                    void SetExcludeId(const std::vector<uint64_t>& _excludeId);

                    /**
                     * 判断参数 ExcludeId 是否已赋值
                     * @return ExcludeId 是否已赋值
                     * 
                     */
                    bool ExcludeIdHasBeenSet() const;

                    /**
                     * 获取<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - status for filtering: 4: pending; 5: trusted; 6: isolated; 10: isolating; 11: canceling isolation</li>
                     * @return Filters <li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - status for filtering: 4: pending; 5: trusted; 6: isolated; 10: isolating; 11: canceling isolation</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - status for filtering: 4: pending; 5: trusted; 6: isolated; 10: isolating; 11: canceling isolation</li>
                     * @param _filters <li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - status for filtering: 4: pending; 5: trusted; 6: isolated; 10: isolating; 11: canceling isolation</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * An array of event IDs that need to be modified, and batch operation is supported.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     */
                    bool m_updateAll;
                    bool m_updateAllHasBeenSet;

                    /**
                     * Excluded event ID: When operating on all events, this ID needs to be excluded.
                     */
                    std::vector<uint64_t> m_excludeId;
                    bool m_excludeIdHasBeenSet;

                    /**
                     * <li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - status for filtering: 4: pending; 5: trusted; 6: isolated; 10: isolating; 11: canceling isolation</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANNOTSEPARATEMACHINEREQUEST_H_
