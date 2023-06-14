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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKTASKDETAILREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKTASKDETAILREQUEST_H_

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
                * DescribeRollbackTaskDetail request structure.
                */
                class DescribeRollbackTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeRollbackTaskDetailRequest();
                    ~DescribeRollbackTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which is the same as the instance ID displayed in the TencentDB Console. You can use the [DescribeDBInstances API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID.
                     * @return InstanceId Instance ID, which is the same as the instance ID displayed in the TencentDB Console. You can use the [DescribeDBInstances API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which is the same as the instance ID displayed in the TencentDB Console. You can use the [DescribeDBInstances API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID.
                     * @param _instanceId Instance ID, which is the same as the instance ID displayed in the TencentDB Console. You can use the [DescribeDBInstances API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID.
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
                     * 获取Async task ID.
                     * @return AsyncRequestId Async task ID.
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置Async task ID.
                     * @param _asyncRequestId Async task ID.
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取Pagination parameter, i.e., the number of entries to be returned for a single request. Default value: 20. Maximum value: 100.
                     * @return Limit Pagination parameter, i.e., the number of entries to be returned for a single request. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter, i.e., the number of entries to be returned for a single request. Default value: 20. Maximum value: 100.
                     * @param _limit Pagination parameter, i.e., the number of entries to be returned for a single request. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which is the same as the instance ID displayed in the TencentDB Console. You can use the [DescribeDBInstances API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Async task ID.
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * Pagination parameter, i.e., the number of entries to be returned for a single request. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKTASKDETAILREQUEST_H_
