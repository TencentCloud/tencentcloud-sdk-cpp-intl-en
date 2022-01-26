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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECLIENTCONNECTIONSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECLIENTCONNECTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeClientConnections request structure.
                */
                class DescribeClientConnectionsRequest : public AbstractModel
                {
                public:
                    DescribeClientConnectionsRequest();
                    ~DescribeClientConnectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * @return InstanceId Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * @param InstanceId Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The number of records that will be returned. Default value: 10,000.
                     * @return Limit The number of records that will be returned. Default value: 10,000.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of records that will be returned. Default value: 10,000.
                     * @param Limit The number of records that will be returned. Default value: 10,000.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The number of records that will be returned. Default value: 10,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECLIENTCONNECTIONSREQUEST_H_
