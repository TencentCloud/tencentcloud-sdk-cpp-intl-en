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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSOBJECTSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSOBJECTSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosObjectScanTask request structure.
                */
                class DescribeCosObjectScanTaskRequest : public AbstractModel
                {
                public:
                    DescribeCosObjectScanTaskRequest();
                    ~DescribeCosObjectScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>1: sensitive data identification 2: malicious file scanning</p>
                     * @return TaskType <p>1: sensitive data identification 2: malicious file scanning</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>1: sensitive data identification 2: malicious file scanning</p>
                     * @param _taskType <p>1: sensitive data identification 2: malicious file scanning</p>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Bucket list</p>
                     * @return BucketSet <p>Bucket list</p>
                     * 
                     */
                    std::vector<std::string> GetBucketSet() const;

                    /**
                     * 设置<p>Bucket list</p>
                     * @param _bucketSet <p>Bucket list</p>
                     * 
                     */
                    void SetBucketSet(const std::vector<std::string>& _bucketSet);

                    /**
                     * 判断参数 BucketSet 是否已赋值
                     * @return BucketSet 是否已赋值
                     * 
                     */
                    bool BucketSetHasBeenSet() const;

                private:

                    /**
                     * <p>1: sensitive data identification 2: malicious file scanning</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Bucket list</p>
                     */
                    std::vector<std::string> m_bucketSet;
                    bool m_bucketSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSOBJECTSCANTASKREQUEST_H_
