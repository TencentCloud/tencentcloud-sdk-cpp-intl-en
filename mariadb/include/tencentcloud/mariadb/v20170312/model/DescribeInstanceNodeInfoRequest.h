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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEINSTANCENODEINFOREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEINSTANCENODEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodeInfo request structure.
                */
                class DescribeInstanceNodeInfoRequest : public AbstractModel
                {
                public:
                    DescribeInstanceNodeInfoRequest();
                    ~DescribeInstanceNodeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as tdsql-6ltok4u9
                     * @return InstanceId Instance ID, such as tdsql-6ltok4u9
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as tdsql-6ltok4u9
                     * @param _instanceId Instance ID, such as tdsql-6ltok4u9
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
                     * 获取The maximum number of results returned at a time. By default, there is no upper limit to this value, that is, all results can be returned.
                     * @return Limit The maximum number of results returned at a time. By default, there is no upper limit to this value, that is, all results can be returned.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned at a time. By default, there is no upper limit to this value, that is, all results can be returned.
                     * @param _limit The maximum number of results returned at a time. By default, there is no upper limit to this value, that is, all results can be returned.
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
                     * 获取Offset of the returned results. Default value: `0`.
                     * @return Offset Offset of the returned results. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset of the returned results. Default value: `0`.
                     * @param _offset Offset of the returned results. Default value: `0`.
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
                     * Instance ID, such as tdsql-6ltok4u9
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The maximum number of results returned at a time. By default, there is no upper limit to this value, that is, all results can be returned.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset of the returned results. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEINSTANCENODEINFOREQUEST_H_
