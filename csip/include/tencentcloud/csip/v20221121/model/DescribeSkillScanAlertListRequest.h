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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanAlertList request structure.
                */
                class DescribeSkillScanAlertListRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertListRequest();
                    ~DescribeSkillScanAlertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * @return Offset Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * @param _offset Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page
Valid values: [1, 200]
Default value: 10
                     * @return Limit Number of results per page
Valid values: [1, 200]
Default value: 10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page
Valid values: [1, 200]
Default value: 10
                     * @param _limit Number of results per page
Valid values: [1, 200]
Default value: 10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter criteria list. Supported filter fields: BelongAssetType (asset type ownership: HOST/CONTAINER, defaults to HOST if not specified), ContainerId (container ID, takes effect only for container alarms), RiskLevel (risk level, exact match), Status (processing status, exact match), SkillName (Skill name, fuzzy matching), UUID (host UUID, exact match), Level (alarm level, exact match), ContentHash (file SHA256, exact match), InstanceID (instance ID, exact match), InstanceName (instance name, fuzzy matching), SkillPath (Skill path, fuzzy matching)
                     * @return Filters Filter criteria list. Supported filter fields: BelongAssetType (asset type ownership: HOST/CONTAINER, defaults to HOST if not specified), ContainerId (container ID, takes effect only for container alarms), RiskLevel (risk level, exact match), Status (processing status, exact match), SkillName (Skill name, fuzzy matching), UUID (host UUID, exact match), Level (alarm level, exact match), ContentHash (file SHA256, exact match), InstanceID (instance ID, exact match), InstanceName (instance name, fuzzy matching), SkillPath (Skill path, fuzzy matching)
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria list. Supported filter fields: BelongAssetType (asset type ownership: HOST/CONTAINER, defaults to HOST if not specified), ContainerId (container ID, takes effect only for container alarms), RiskLevel (risk level, exact match), Status (processing status, exact match), SkillName (Skill name, fuzzy matching), UUID (host UUID, exact match), Level (alarm level, exact match), ContentHash (file SHA256, exact match), InstanceID (instance ID, exact match), InstanceName (instance name, fuzzy matching), SkillPath (Skill path, fuzzy matching)
                     * @param _filters Filter criteria list. Supported filter fields: BelongAssetType (asset type ownership: HOST/CONTAINER, defaults to HOST if not specified), ContainerId (container ID, takes effect only for container alarms), RiskLevel (risk level, exact match), Status (processing status, exact match), SkillName (Skill name, fuzzy matching), UUID (host UUID, exact match), Level (alarm level, exact match), ContentHash (file SHA256, exact match), InstanceID (instance ID, exact match), InstanceName (instance name, fuzzy matching), SkillPath (Skill path, fuzzy matching)
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
                     * 获取Sorting method.
Enumeration values:
ASC: Ascending
DESC: descending order
Default value: DESC
                     * @return Order Sorting method.
Enumeration values:
ASC: Ascending
DESC: descending order
Default value: DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method.
Enumeration values:
ASC: Ascending
DESC: descending order
Default value: DESC
                     * @param _order Sorting method.
Enumeration values:
ASC: Ascending
DESC: descending order
Default value: DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field.
Enumeration values:
CreateTime: first detection time
SecurityScore: Security score
UpdateTime: Update time
Default value: CreateTime
                     * @return By Sorting field.
Enumeration values:
CreateTime: first detection time
SecurityScore: Security score
UpdateTime: Update time
Default value: CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field.
Enumeration values:
CreateTime: first detection time
SecurityScore: Security score
UpdateTime: Update time
Default value: CreateTime
                     * @param _by Sorting field.
Enumeration values:
CreateTime: first detection time
SecurityScore: Security score
UpdateTime: Update time
Default value: CreateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Group account member id
                     * @return MemberId Group account member id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group account member id
                     * @param _memberId Group account member id
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
                     * Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page
Valid values: [1, 200]
Default value: 10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria list. Supported filter fields: BelongAssetType (asset type ownership: HOST/CONTAINER, defaults to HOST if not specified), ContainerId (container ID, takes effect only for container alarms), RiskLevel (risk level, exact match), Status (processing status, exact match), SkillName (Skill name, fuzzy matching), UUID (host UUID, exact match), Level (alarm level, exact match), ContentHash (file SHA256, exact match), InstanceID (instance ID, exact match), InstanceName (instance name, fuzzy matching), SkillPath (Skill path, fuzzy matching)
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method.
Enumeration values:
ASC: Ascending
DESC: descending order
Default value: DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field.
Enumeration values:
CreateTime: first detection time
SecurityScore: Security score
UpdateTime: Update time
Default value: CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Group account member id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTREQUEST_H_
