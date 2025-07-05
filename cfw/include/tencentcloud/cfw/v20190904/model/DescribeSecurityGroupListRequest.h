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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupList request structure.
                */
                class DescribeSecurityGroupListRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupListRequest();
                    ~DescribeSecurityGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: outbound rule; 1: inbound rule
                     * @return Direction 0: outbound rule; 1: inbound rule
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置0: outbound rule; 1: inbound rule
                     * @param _direction 0: outbound rule; 1: inbound rule
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Region code (e.g. ap-guangzhou ). All Tencent Cloud regions are supported.
                     * @return Area Region code (e.g. ap-guangzhou ). All Tencent Cloud regions are supported.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region code (e.g. ap-guangzhou ). All Tencent Cloud regions are supported.
                     * @param _area Region code (e.g. ap-guangzhou ). All Tencent Cloud regions are supported.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Search value
                     * @return SearchValue Search value
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Search value
                     * @param _searchValue Search value
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Default: 10
                     * @return Limit Number of entries per page. Default: 10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default: 10
                     * @param _limit Number of entries per page. Default: 10
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
                     * 获取Offset. Default: 0
                     * @return Offset Offset. Default: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default: 0
                     * @param _offset Offset. Default: 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Status. Null: all; '0': filter disabled rules; '1': filter enabled rules
                     * @return Status Status. Null: all; '0': filter disabled rules; '1': filter enabled rules
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Null: all; '0': filter disabled rules; '1': filter enabled rules
                     * @param _status Status. Null: all; '0': filter disabled rules; '1': filter enabled rules
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0: not filter; 1: filter out normal rules to retain abnormal rules
                     * @return Filter 0: not filter; 1: filter out normal rules to retain abnormal rules
                     * 
                     */
                    uint64_t GetFilter() const;

                    /**
                     * 设置0: not filter; 1: filter out normal rules to retain abnormal rules
                     * @param _filter 0: not filter; 1: filter out normal rules to retain abnormal rules
                     * 
                     */
                    void SetFilter(const uint64_t& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 0: outbound rule; 1: inbound rule
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Region code (e.g. ap-guangzhou ). All Tencent Cloud regions are supported.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Search value
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * Number of entries per page. Default: 10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Status. Null: all; '0': filter disabled rules; '1': filter enabled rules
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0: not filter; 1: filter out normal rules to retain abnormal rules
                     */
                    uint64_t m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESECURITYGROUPLISTREQUEST_H_
