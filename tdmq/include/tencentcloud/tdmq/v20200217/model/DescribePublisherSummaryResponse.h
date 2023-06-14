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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPUBLISHERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPUBLISHERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribePublisherSummary response structure.
                */
                class DescribePublisherSummaryResponse : public AbstractModel
                {
                public:
                    DescribePublisherSummaryResponse();
                    ~DescribePublisherSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Production rate (messages/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MsgRateIn Production rate (messages/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMsgRateIn() const;

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     * 
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取Production rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MsgThroughputIn Production rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMsgThroughputIn() const;

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     * 
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取The number of producers.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublisherCount The number of producers.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPublisherCount() const;

                    /**
                     * 判断参数 PublisherCount 是否已赋值
                     * @return PublisherCount 是否已赋值
                     * 
                     */
                    bool PublisherCountHasBeenSet() const;

                    /**
                     * 获取Message storage size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StorageSize Message storage size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                private:

                    /**
                     * Production rate (messages/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * Production rate (byte/sec).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * The number of producers.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_publisherCount;
                    bool m_publisherCountHasBeenSet;

                    /**
                     * Message storage size in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPUBLISHERSUMMARYRESPONSE_H_
