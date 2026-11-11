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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteLoginWhiteLearnEDR request structure.
                */
                class DeleteLoginWhiteLearnEDRRequest : public AbstractModel
                {
                public:
                    DeleteLoginWhiteLearnEDRRequest();
                    ~DeleteLoginWhiteLearnEDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Explicitly selected rule ID list, up to 1000; choose either this or SelectAll</p>
                     * @return Ids <p>Explicitly selected rule ID list, up to 1000; choose either this or SelectAll</p>
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置<p>Explicitly selected rule ID list, up to 1000; choose either this or SelectAll</p>
                     * @param _ids <p>Explicitly selected rule ID list, up to 1000; choose either this or SelectAll</p>
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
                     * 获取<p>Select all across pages: true - Delete all rules that meet Filters (Filters is required at this point). false - Delete only Ids</p>
                     * @return SelectAll <p>Select all across pages: true - Delete all rules that meet Filters (Filters is required at this point). false - Delete only Ids</p>
                     * 
                     */
                    bool GetSelectAll() const;

                    /**
                     * 设置<p>Select all across pages: true - Delete all rules that meet Filters (Filters is required at this point). false - Delete only Ids</p>
                     * @param _selectAll <p>Select all across pages: true - Delete all rules that meet Filters (Filters is required at this point). false - Delete only Ids</p>
                     * 
                     */
                    void SetSelectAll(const bool& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取<p>List of target account AppIds for multi-account, up to 1000; being empty indicates only the current account; returns InvalidParameter when input but no permissions at all</p>
                     * @return TargetAppIDs <p>List of target account AppIds for multi-account, up to 1000; being empty indicates only the current account; returns InvalidParameter when input but no permissions at all</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>List of target account AppIds for multi-account, up to 1000; being empty indicates only the current account; returns InvalidParameter when input but no permissions at all</p>
                     * @param _targetAppIDs <p>List of target account AppIds for multi-account, up to 1000; being empty indicates only the current account; returns InvalidParameter when input but no permissions at all</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>List of excluded rule IDs</p>
                     * @return ExcludeIds <p>List of excluded rule IDs</p>
                     * 
                     */
                    std::vector<int64_t> GetExcludeIds() const;

                    /**
                     * 设置<p>List of excluded rule IDs</p>
                     * @param _excludeIds <p>List of excluded rule IDs</p>
                     * 
                     */
                    void SetExcludeIds(const std::vector<int64_t>& _excludeIds);

                    /**
                     * 判断参数 ExcludeIds 是否已赋值
                     * @return ExcludeIds 是否已赋值
                     * 
                     */
                    bool ExcludeIdsHasBeenSet() const;

                    /**
                     * 获取<p>Filtering criteria under select all</p>
                     * @return Filters <p>Filtering criteria under select all</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>Filtering criteria under select all</p>
                     * @param _filters <p>Filtering criteria under select all</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Explicitly selected rule ID list, up to 1000; choose either this or SelectAll</p>
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * <p>Select all across pages: true - Delete all rules that meet Filters (Filters is required at this point). false - Delete only Ids</p>
                     */
                    bool m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * <p>List of target account AppIds for multi-account, up to 1000; being empty indicates only the current account; returns InvalidParameter when input but no permissions at all</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>List of excluded rule IDs</p>
                     */
                    std::vector<int64_t> m_excludeIds;
                    bool m_excludeIdsHasBeenSet;

                    /**
                     * <p>Filtering criteria under select all</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRREQUEST_H_
