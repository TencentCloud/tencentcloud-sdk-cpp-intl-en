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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskResult request structure.
                */
                class DescribeCertificateBindResourceTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskResultRequest();
                    ~DescribeCertificateBindResourceTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The task IDs, which are used to query the results of associated cloud resources, 100 IDs at most.
                     * @return TaskIds The task IDs, which are used to query the results of associated cloud resources, 100 IDs at most.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置The task IDs, which are used to query the results of associated cloud resources, 100 IDs at most.
                     * @param _taskIds The task IDs, which are used to query the results of associated cloud resources, 100 IDs at most.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * The task IDs, which are used to query the results of associated cloud resources, 100 IDs at most.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTREQUEST_H_
