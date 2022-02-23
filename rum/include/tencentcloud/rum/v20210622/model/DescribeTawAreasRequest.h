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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTawAreas request structure.
                */
                class DescribeTawAreasRequest : public AbstractModel
                {
                public:
                    DescribeTawAreasRequest();
                    ~DescribeTawAreasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Region ID
                     * @return AreaIds Region ID
                     */
                    std::vector<int64_t> GetAreaIds() const;

                    /**
                     * 设置Region ID
                     * @param AreaIds Region ID
                     */
                    void SetAreaIds(const std::vector<int64_t>& _areaIds);

                    /**
                     * 判断参数 AreaIds 是否已赋值
                     * @return AreaIds 是否已赋值
                     */
                    bool AreaIdsHasBeenSet() const;

                    /**
                     * 获取Region key
                     * @return AreaKeys Region key
                     */
                    std::vector<std::string> GetAreaKeys() const;

                    /**
                     * 设置Region key
                     * @param AreaKeys Region key
                     */
                    void SetAreaKeys(const std::vector<std::string>& _areaKeys);

                    /**
                     * 判断参数 AreaKeys 是否已赋值
                     * @return AreaKeys 是否已赋值
                     */
                    bool AreaKeysHasBeenSet() const;

                    /**
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param Limit Pagination limit
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Region status (1: valid; 2: invalid)
                     * @return AreaStatuses Region status (1: valid; 2: invalid)
                     */
                    std::vector<int64_t> GetAreaStatuses() const;

                    /**
                     * 设置Region status (1: valid; 2: invalid)
                     * @param AreaStatuses Region status (1: valid; 2: invalid)
                     */
                    void SetAreaStatuses(const std::vector<int64_t>& _areaStatuses);

                    /**
                     * 判断参数 AreaStatuses 是否已赋值
                     * @return AreaStatuses 是否已赋值
                     */
                    bool AreaStatusesHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param Offset Pagination offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    std::vector<int64_t> m_areaIds;
                    bool m_areaIdsHasBeenSet;

                    /**
                     * Region key
                     */
                    std::vector<std::string> m_areaKeys;
                    bool m_areaKeysHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Region status (1: valid; 2: invalid)
                     */
                    std::vector<int64_t> m_areaStatuses;
                    bool m_areaStatusesHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWAREASREQUEST_H_
