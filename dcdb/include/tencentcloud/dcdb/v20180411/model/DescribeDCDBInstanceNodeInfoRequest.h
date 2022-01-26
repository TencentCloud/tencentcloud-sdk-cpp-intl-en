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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCENODEINFOREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCENODEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBInstanceNodeInfo request structure.
                */
                class DescribeDCDBInstanceNodeInfoRequest : public AbstractModel
                {
                public:
                    DescribeDCDBInstanceNodeInfoRequest();
                    ~DescribeDCDBInstanceNodeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned at a time. Value range: (0-100]. Default value: `100`.
                     * @return Limit The maximum number of results returned at a time. Value range: (0-100]. Default value: `100`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned at a time. Value range: (0-100]. Default value: `100`.
                     * @param Limit The maximum number of results returned at a time. Value range: (0-100]. Default value: `100`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset of the returned results. Default value: `0`.
                     * @return Offset Offset of the returned results. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset of the returned results. Default value: `0`.
                     * @param Offset Offset of the returned results. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The maximum number of results returned at a time. Value range: (0-100]. Default value: `100`.
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

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCENODEINFOREQUEST_H_
