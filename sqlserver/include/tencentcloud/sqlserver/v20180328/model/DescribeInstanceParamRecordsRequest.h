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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeInstanceParamRecords request structure.
                */
                class DescribeInstanceParamRecordsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceParamRecordsRequest();
                    ~DescribeInstanceParamRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of mssql-dj5i29c5n. It is the same as the instance ID displayed in the TencentDB console and the response parameter `InstanceId` of the `DescribeDBInstances` API.
                     * @return InstanceId Instance ID in the format of mssql-dj5i29c5n. It is the same as the instance ID displayed in the TencentDB console and the response parameter `InstanceId` of the `DescribeDBInstances` API.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-dj5i29c5n. It is the same as the instance ID displayed in the TencentDB console and the response parameter `InstanceId` of the `DescribeDBInstances` API.
                     * @param InstanceId Instance ID in the format of mssql-dj5i29c5n. It is the same as the instance ID displayed in the TencentDB console and the response parameter `InstanceId` of the `DescribeDBInstances` API.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`.
                     * @return Offset Page number. Default value: `0`.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`.
                     * @param Offset Page number. Default value: `0`.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned per page. Maximum value: `100`. Default value: `20`.
                     * @return Limit The maximum number of results returned per page. Maximum value: `100`. Default value: `20`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Maximum value: `100`. Default value: `20`.
                     * @param Limit The maximum number of results returned per page. Maximum value: `100`. Default value: `20`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-dj5i29c5n. It is the same as the instance ID displayed in the TencentDB console and the response parameter `InstanceId` of the `DescribeDBInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Page number. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of results returned per page. Maximum value: `100`. Default value: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_
