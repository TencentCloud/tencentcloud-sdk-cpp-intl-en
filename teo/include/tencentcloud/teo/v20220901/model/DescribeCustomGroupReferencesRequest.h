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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPREFERENCESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPREFERENCESREQUEST_H_

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
                * DescribeCustomGroupReferences request structure.
                */
                class DescribeCustomGroupReferencesRequest : public AbstractModel
                {
                public:
                    DescribeCustomGroupReferencesRequest();
                    ~DescribeCustomGroupReferencesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Custom group ID.</p>
                     * @return GroupId <p>Custom group ID.</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>Custom group ID.</p>
                     * @param _groupId <p>Custom group ID.</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Pagination offset.</p><p>Default value: 0</p>
                     * @return Offset <p>Pagination offset.</p><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset.</p><p>Default value: 0</p>
                     * @param _offset <p>Pagination offset.</p><p>Default value: 0</p>
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
                     * 获取<p>Number of configurations that reference the custom group returned in a paginated query.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * @return Limit <p>Number of configurations that reference the custom group returned in a paginated query.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of configurations that reference the custom group returned in a paginated query.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * @param _limit <p>Number of configurations that reference the custom group returned in a paginated query.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Custom group ID.</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Pagination offset.</p><p>Default value: 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of configurations that reference the custom group returned in a paginated query.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPREFERENCESREQUEST_H_
