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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RENEWDBINSTANCEREQUEST_H_

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
                * RenewDBInstance request structure.
                */
                class RenewDBInstanceRequest : public AbstractModel
                {
                public:
                    RenewDBInstanceRequest();
                    ~RenewDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be renewed in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed in the TencentDB console. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the ID.
                     * @return InstanceId ID of the instance to be renewed in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed in the TencentDB console. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be renewed in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed in the TencentDB console. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the ID.
                     * @param InstanceId ID of the instance to be renewed in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed in the TencentDB console. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Renewal period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     * @return TimeSpan Renewal period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Renewal period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     * @param TimeSpan Renewal period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取To renew a pay-as-you-go instance to a monthly subscribed one, you need to set this parameter to `PREPAID`.
                     * @return ModifyPayType To renew a pay-as-you-go instance to a monthly subscribed one, you need to set this parameter to `PREPAID`.
                     */
                    std::string GetModifyPayType() const;

                    /**
                     * 设置To renew a pay-as-you-go instance to a monthly subscribed one, you need to set this parameter to `PREPAID`.
                     * @param ModifyPayType To renew a pay-as-you-go instance to a monthly subscribed one, you need to set this parameter to `PREPAID`.
                     */
                    void SetModifyPayType(const std::string& _modifyPayType);

                    /**
                     * 判断参数 ModifyPayType 是否已赋值
                     * @return ModifyPayType 是否已赋值
                     */
                    bool ModifyPayTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be renewed in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed in the TencentDB console. You can use the [DescribeDBInstances](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Renewal period in months. Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * To renew a pay-as-you-go instance to a monthly subscribed one, you need to set this parameter to `PREPAID`.
                     */
                    std::string m_modifyPayType;
                    bool m_modifyPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RENEWDBINSTANCEREQUEST_H_
