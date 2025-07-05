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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLONELISTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLONELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCloneList request structure.
                */
                class DescribeCloneListRequest : public AbstractModel
                {
                public:
                    DescribeCloneListRequest();
                    ~DescribeCloneListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the original instance. This parameter is used to query the clone task list of a specific original instance.
                     * @return InstanceId ID of the original instance. This parameter is used to query the clone task list of a specific original instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the original instance. This parameter is used to query the clone task list of a specific original instance.
                     * @param _instanceId ID of the original instance. This parameter is used to query the clone task list of a specific original instance.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Paginated query offset. Default value: `0`.
                     * @return Offset Paginated query offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paginated query offset. Default value: `0`.
                     * @param _offset Paginated query offset. Default value: `0`.
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
                     * 获取Number of results per page. Default value: `20`.
                     * @return Limit Number of results per page. Default value: `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Default value: `20`.
                     * @param _limit Number of results per page. Default value: `20`.
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
                     * ID of the original instance. This parameter is used to query the clone task list of a specific original instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Paginated query offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page. Default value: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLONELISTREQUEST_H_
