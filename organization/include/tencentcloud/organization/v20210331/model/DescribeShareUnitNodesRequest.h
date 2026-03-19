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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITNODESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITNODESREQUEST_H_

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
                * DescribeShareUnitNodes request structure.
                */
                class DescribeShareUnitNodesRequest : public AbstractModel
                {
                public:
                    DescribeShareUnitNodesRequest();
                    ~DescribeShareUnitNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Shared unit ID.</p>.
                     * @return UnitId <p>Shared unit ID.</p>.
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置<p>Shared unit ID.</p>.
                     * @param _unitId <p>Shared unit ID.</p>.
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
                     * 获取<P>Offset. its value must be an integer multiple of the limit. default value: 0.</p>.
                     * @return Offset <P>Offset. its value must be an integer multiple of the limit. default value: 0.</p>.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<P>Offset. its value must be an integer multiple of the limit. default value: 0.</p>.
                     * @param _offset <P>Offset. its value must be an integer multiple of the limit. default value: 0.</p>.
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
                     * 获取<P>Limit. value range: 1–50.</p>.
                     * @return Limit <P>Limit. value range: 1–50.</p>.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<P>Limit. value range: 1–50.</p>.
                     * @param _limit <P>Limit. value range: 1–50.</p>.
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
                     * 获取<p>Search keywords. supports department ID search.</p>.
                     * @return SearchKey <p>Search keywords. supports department ID search.</p>.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>Search keywords. supports department ID search.</p>.
                     * @param _searchKey <p>Search keywords. supports department ID search.</p>.
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
                     * <p>Shared unit ID.</p>.
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * <P>Offset. its value must be an integer multiple of the limit. default value: 0.</p>.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <P>Limit. value range: 1–50.</p>.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Search keywords. supports department ID search.</p>.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREUNITNODESREQUEST_H_
