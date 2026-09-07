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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSTORAGEAUTOEXPANDRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSTORAGEAUTOEXPANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterStorageAutoExpand response structure.
                */
                class DescribeClusterStorageAutoExpandResponse : public AbstractModel
                {
                public:
                    DescribeClusterStorageAutoExpandResponse();
                    ~DescribeClusterStorageAutoExpandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Storage utilization threshold</p>
                     * @return StorageUsageThreshold <p>Storage utilization threshold</p>
                     * 
                     */
                    int64_t GetStorageUsageThreshold() const;

                    /**
                     * 判断参数 StorageUsageThreshold 是否已赋值
                     * @return StorageUsageThreshold 是否已赋值
                     * 
                     */
                    bool StorageUsageThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Scaling increment</p>
                     * @return ExpandStep <p>Scaling increment</p>
                     * 
                     */
                    int64_t GetExpandStep() const;

                    /**
                     * 判断参数 ExpandStep 是否已赋值
                     * @return ExpandStep 是否已赋值
                     * 
                     */
                    bool ExpandStepHasBeenSet() const;

                    /**
                     * 获取<p>Maximum storage capacity limit</p>
                     * @return MaxStorageLimit <p>Maximum storage capacity limit</p>
                     * 
                     */
                    int64_t GetMaxStorageLimit() const;

                    /**
                     * 判断参数 MaxStorageLimit 是否已赋值
                     * @return MaxStorageLimit 是否已赋值
                     * 
                     */
                    bool MaxStorageLimitHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable: yes-enabled, no-disabled</p>
                     * @return StorageAutoExpand <p>Whether to enable: yes-enabled, no-disabled</p>
                     * 
                     */
                    std::string GetStorageAutoExpand() const;

                    /**
                     * 判断参数 StorageAutoExpand 是否已赋值
                     * @return StorageAutoExpand 是否已赋值
                     * 
                     */
                    bool StorageAutoExpandHasBeenSet() const;

                private:

                    /**
                     * <p>Storage utilization threshold</p>
                     */
                    int64_t m_storageUsageThreshold;
                    bool m_storageUsageThresholdHasBeenSet;

                    /**
                     * <p>Scaling increment</p>
                     */
                    int64_t m_expandStep;
                    bool m_expandStepHasBeenSet;

                    /**
                     * <p>Maximum storage capacity limit</p>
                     */
                    int64_t m_maxStorageLimit;
                    bool m_maxStorageLimitHasBeenSet;

                    /**
                     * <p>Whether to enable: yes-enabled, no-disabled</p>
                     */
                    std::string m_storageAutoExpand;
                    bool m_storageAutoExpandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSTORAGEAUTOEXPANDRESPONSE_H_
