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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFOREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityIPGroupInfo request structure.
                */
                class DescribeSecurityIPGroupInfoRequest : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupInfoRequest();
                    ~DescribeSecurityIPGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID, used to specify the query scope.
                     * @return ZoneId Site ID, used to specify the query scope.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID, used to specify the query scope.
                     * @param _zoneId Site ID, used to specify the query scope.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries returned in a single response. Default value: 20. Maximum query entries: 1000.
                     * @return Limit Maximum number of entries returned in a single response. Default value: 20. Maximum query entries: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries returned in a single response. Default value: 20. Maximum query entries: 1000.
                     * @param _limit Maximum number of entries returned in a single response. Default value: 20. Maximum query entries: 1000.
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
                     * 获取The starting entry offset for pagination queries. The default value is 0.
                     * @return Offset The starting entry offset for pagination queries. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The starting entry offset for pagination queries. The default value is 0.
                     * @param _offset The starting entry offset for pagination queries. The default value is 0.
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
                     * Site ID, used to specify the query scope.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Maximum number of entries returned in a single response. Default value: 20. Maximum query entries: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The starting entry offset for pagination queries. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFOREQUEST_H_
