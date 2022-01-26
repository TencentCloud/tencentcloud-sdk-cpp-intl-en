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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICDISKCONFIG_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICDISKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Dynamic disk expansion configuration
                */
                class DynamicDiskConfig : public AbstractModel
                {
                public:
                    DynamicDiskConfig();
                    ~DynamicDiskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable dynamic disk expansion configuration. `0`: disable, `1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Enable Whether to enable dynamic disk expansion configuration. `0`: disable, `1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable dynamic disk expansion configuration. `0`: disable, `1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Enable Whether to enable dynamic disk expansion configuration. `0`: disable, `1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Percentage of dynamic disk expansion each time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StepForwardPercentage Percentage of dynamic disk expansion each time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetStepForwardPercentage() const;

                    /**
                     * 设置Percentage of dynamic disk expansion each time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param StepForwardPercentage Percentage of dynamic disk expansion each time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStepForwardPercentage(const int64_t& _stepForwardPercentage);

                    /**
                     * 判断参数 StepForwardPercentage 是否已赋值
                     * @return StepForwardPercentage 是否已赋值
                     */
                    bool StepForwardPercentageHasBeenSet() const;

                    /**
                     * 获取Disk quota threshold (in percentage) for triggering the automatic disk expansion event.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DiskQuotaPercentage Disk quota threshold (in percentage) for triggering the automatic disk expansion event.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetDiskQuotaPercentage() const;

                    /**
                     * 设置Disk quota threshold (in percentage) for triggering the automatic disk expansion event.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DiskQuotaPercentage Disk quota threshold (in percentage) for triggering the automatic disk expansion event.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDiskQuotaPercentage(const int64_t& _diskQuotaPercentage);

                    /**
                     * 判断参数 DiskQuotaPercentage 是否已赋值
                     * @return DiskQuotaPercentage 是否已赋值
                     */
                    bool DiskQuotaPercentageHasBeenSet() const;

                    /**
                     * 获取Max disk space in GB.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxDiskSpace Max disk space in GB.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxDiskSpace() const;

                    /**
                     * 设置Max disk space in GB.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MaxDiskSpace Max disk space in GB.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMaxDiskSpace(const int64_t& _maxDiskSpace);

                    /**
                     * 判断参数 MaxDiskSpace 是否已赋值
                     * @return MaxDiskSpace 是否已赋值
                     */
                    bool MaxDiskSpaceHasBeenSet() const;

                private:

                    /**
                     * Whether to enable dynamic disk expansion configuration. `0`: disable, `1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Percentage of dynamic disk expansion each time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_stepForwardPercentage;
                    bool m_stepForwardPercentageHasBeenSet;

                    /**
                     * Disk quota threshold (in percentage) for triggering the automatic disk expansion event.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskQuotaPercentage;
                    bool m_diskQuotaPercentageHasBeenSet;

                    /**
                     * Max disk space in GB.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDiskSpace;
                    bool m_maxDiskSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICDISKCONFIG_H_
