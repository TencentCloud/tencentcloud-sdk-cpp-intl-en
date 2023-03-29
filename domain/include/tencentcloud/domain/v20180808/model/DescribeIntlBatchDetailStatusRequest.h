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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLBATCHDETAILSTATUSREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLBATCHDETAILSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlBatchDetailStatus request structure.
                */
                class DescribeIntlBatchDetailStatusRequest : public AbstractModel
                {
                public:
                    DescribeIntlBatchDetailStatusRequest();
                    ~DescribeIntlBatchDetailStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The IDs of the logs to be queried.
                     * @return LogIds The IDs of the logs to be queried.
                     */
                    std::vector<int64_t> GetLogIds() const;

                    /**
                     * 设置The IDs of the logs to be queried.
                     * @param LogIds The IDs of the logs to be queried.
                     */
                    void SetLogIds(const std::vector<int64_t>& _logIds);

                    /**
                     * 判断参数 LogIds 是否已赋值
                     * @return LogIds 是否已赋值
                     */
                    bool LogIdsHasBeenSet() const;

                private:

                    /**
                     * The IDs of the logs to be queried.
                     */
                    std::vector<int64_t> m_logIds;
                    bool m_logIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLBATCHDETAILSTATUSREQUEST_H_
