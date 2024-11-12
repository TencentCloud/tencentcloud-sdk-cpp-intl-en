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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ROLLINGUPDATESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ROLLINGUPDATESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Rolling update settings.
                */
                class RollingUpdateSettings : public AbstractModel
                {
                public:
                    RollingUpdateSettings();
                    ~RollingUpdateSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Batch quantity. The batch quantity should be a positive integer greater than 0, but cannot exceed the total number of instances pending refresh.
                     * @return BatchNumber Batch quantity. The batch quantity should be a positive integer greater than 0, but cannot exceed the total number of instances pending refresh.
                     * 
                     */
                    uint64_t GetBatchNumber() const;

                    /**
                     * 设置Batch quantity. The batch quantity should be a positive integer greater than 0, but cannot exceed the total number of instances pending refresh.
                     * @param _batchNumber Batch quantity. The batch quantity should be a positive integer greater than 0, but cannot exceed the total number of instances pending refresh.
                     * 
                     */
                    void SetBatchNumber(const uint64_t& _batchNumber);

                    /**
                     * 判断参数 BatchNumber 是否已赋值
                     * @return BatchNumber 是否已赋值
                     * 
                     */
                    bool BatchNumberHasBeenSet() const;

                    /**
                     * 获取Pause policy between batches. Default value: Automatic. Valid values:
<li>FIRST_BATCH_PAUSE: Pause after the first batch of updates is completed.</li>
<li>BATCH_INTERVAL_PAUSE: Pause between batches.</li>
<li>AUTOMATIC: Do not pause.</li>
                     * @return BatchPause Pause policy between batches. Default value: Automatic. Valid values:
<li>FIRST_BATCH_PAUSE: Pause after the first batch of updates is completed.</li>
<li>BATCH_INTERVAL_PAUSE: Pause between batches.</li>
<li>AUTOMATIC: Do not pause.</li>
                     * 
                     */
                    std::string GetBatchPause() const;

                    /**
                     * 设置Pause policy between batches. Default value: Automatic. Valid values:
<li>FIRST_BATCH_PAUSE: Pause after the first batch of updates is completed.</li>
<li>BATCH_INTERVAL_PAUSE: Pause between batches.</li>
<li>AUTOMATIC: Do not pause.</li>
                     * @param _batchPause Pause policy between batches. Default value: Automatic. Valid values:
<li>FIRST_BATCH_PAUSE: Pause after the first batch of updates is completed.</li>
<li>BATCH_INTERVAL_PAUSE: Pause between batches.</li>
<li>AUTOMATIC: Do not pause.</li>
                     * 
                     */
                    void SetBatchPause(const std::string& _batchPause);

                    /**
                     * 判断参数 BatchPause 是否已赋值
                     * @return BatchPause 是否已赋值
                     * 
                     */
                    bool BatchPauseHasBeenSet() const;

                    /**
                     * 获取The maximum additional quantity of instances. After this parameter is set, create a batch of additional pay-as-you-go instances according to the launch configuration before the rolling update starts. After the rolling update is completed, the additional instances will be terminated.This parameter is used to ensure a certain number of instances available during the rolling update. The maximum additional quantity of instances cannot exceed the number of refreshing instances in a single batch of the rolling update. The rollback process does not support this parameter currently.
                     * @return MaxSurge The maximum additional quantity of instances. After this parameter is set, create a batch of additional pay-as-you-go instances according to the launch configuration before the rolling update starts. After the rolling update is completed, the additional instances will be terminated.This parameter is used to ensure a certain number of instances available during the rolling update. The maximum additional quantity of instances cannot exceed the number of refreshing instances in a single batch of the rolling update. The rollback process does not support this parameter currently.
                     * 
                     */
                    int64_t GetMaxSurge() const;

                    /**
                     * 设置The maximum additional quantity of instances. After this parameter is set, create a batch of additional pay-as-you-go instances according to the launch configuration before the rolling update starts. After the rolling update is completed, the additional instances will be terminated.This parameter is used to ensure a certain number of instances available during the rolling update. The maximum additional quantity of instances cannot exceed the number of refreshing instances in a single batch of the rolling update. The rollback process does not support this parameter currently.
                     * @param _maxSurge The maximum additional quantity of instances. After this parameter is set, create a batch of additional pay-as-you-go instances according to the launch configuration before the rolling update starts. After the rolling update is completed, the additional instances will be terminated.This parameter is used to ensure a certain number of instances available during the rolling update. The maximum additional quantity of instances cannot exceed the number of refreshing instances in a single batch of the rolling update. The rollback process does not support this parameter currently.
                     * 
                     */
                    void SetMaxSurge(const int64_t& _maxSurge);

                    /**
                     * 判断参数 MaxSurge 是否已赋值
                     * @return MaxSurge 是否已赋值
                     * 
                     */
                    bool MaxSurgeHasBeenSet() const;

                private:

                    /**
                     * Batch quantity. The batch quantity should be a positive integer greater than 0, but cannot exceed the total number of instances pending refresh.
                     */
                    uint64_t m_batchNumber;
                    bool m_batchNumberHasBeenSet;

                    /**
                     * Pause policy between batches. Default value: Automatic. Valid values:
<li>FIRST_BATCH_PAUSE: Pause after the first batch of updates is completed.</li>
<li>BATCH_INTERVAL_PAUSE: Pause between batches.</li>
<li>AUTOMATIC: Do not pause.</li>
                     */
                    std::string m_batchPause;
                    bool m_batchPauseHasBeenSet;

                    /**
                     * The maximum additional quantity of instances. After this parameter is set, create a batch of additional pay-as-you-go instances according to the launch configuration before the rolling update starts. After the rolling update is completed, the additional instances will be terminated.This parameter is used to ensure a certain number of instances available during the rolling update. The maximum additional quantity of instances cannot exceed the number of refreshing instances in a single batch of the rolling update. The rollback process does not support this parameter currently.
                     */
                    int64_t m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ROLLINGUPDATESETTINGS_H_
