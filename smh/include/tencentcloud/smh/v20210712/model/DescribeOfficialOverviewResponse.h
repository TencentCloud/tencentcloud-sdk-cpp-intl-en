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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeOfficialOverview response structure.
                */
                class DescribeOfficialOverviewResponse : public AbstractModel
                {
                public:
                    DescribeOfficialOverviewResponse();
                    ~DescribeOfficialOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance count of cloud disks.
                     * @return Quantity Specifies the instance count of cloud disks.
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取Indicates the total storage already used in Bytes. since the number type has precision limitations, this field is a String type.
                     * @return Storage Indicates the total storage already used in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Total number of users already allocated and used.
                     * @return UserCount Total number of users already allocated and used.
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取Public network downstream traffic this month in Bytes. since the number type has precision limitations, this field is a String type.
                     * @return InternetTraffic Public network downstream traffic this month in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    std::string GetInternetTraffic() const;

                    /**
                     * 判断参数 InternetTraffic 是否已赋值
                     * @return InternetTraffic 是否已赋值
                     * 
                     */
                    bool InternetTrafficHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance count of cloud disks.
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * Indicates the total storage already used in Bytes. since the number type has precision limitations, this field is a String type.
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Total number of users already allocated and used.
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * Public network downstream traffic this month in Bytes. since the number type has precision limitations, this field is a String type.
                     */
                    std::string m_internetTraffic;
                    bool m_internetTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALOVERVIEWRESPONSE_H_
