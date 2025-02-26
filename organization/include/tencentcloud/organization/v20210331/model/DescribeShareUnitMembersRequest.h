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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeShareUnitMembers request structure.
                */
                class DescribeShareUnitMembersRequest : public AbstractModel
                {
                public:
                    DescribeShareUnitMembersRequest();
                    ~DescribeShareUnitMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shared unit ID.
                     * @return UnitId Shared unit ID.
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置Shared unit ID.
                     * @param _unitId Shared unit ID.
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取Shared unit region.
                     * @return Area Shared unit region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Shared unit region.
                     * @param _area Shared unit region.
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
                     * 获取Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @return Offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @param _offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
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
                     * 获取Limit. Value range: 1–50.
                     * @return Limit Limit. Value range: 1–50.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit. Value range: 1–50.
                     * @param _limit Limit. Value range: 1–50.
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
                     * 获取Search keyword. Member UIN search is supported.
                     * @return SearchKey Search keyword. Member UIN search is supported.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keyword. Member UIN search is supported.
                     * @param _searchKey Search keyword. Member UIN search is supported.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Shared unit ID.
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * Shared unit region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit. Value range: 1–50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keyword. Member UIN search is supported.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITMEMBERSREQUEST_H_
