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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICRETENTIONTIME_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICRETENTIONTIME_H_

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
                * Dynamic message retention time configuration
                */
                class DynamicRetentionTime : public AbstractModel
                {
                public:
                    DynamicRetentionTime();
                    ~DynamicRetentionTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the dynamic message retention time configuration is enabled. 0: disabled; 1: enabled
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Enable Whether the dynamic message retention time configuration is enabled. 0: disabled; 1: enabled
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether the dynamic message retention time configuration is enabled. 0: disabled; 1: enabled
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _enable Whether the dynamic message retention time configuration is enabled. 0: disabled; 1: enabled
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Disk quota threshold (in percentage) for triggering the message retention time change event
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return DiskQuotaPercentage Disk quota threshold (in percentage) for triggering the message retention time change event
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskQuotaPercentage() const;

                    /**
                     * 设置Disk quota threshold (in percentage) for triggering the message retention time change event
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _diskQuotaPercentage Disk quota threshold (in percentage) for triggering the message retention time change event
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskQuotaPercentage(const int64_t& _diskQuotaPercentage);

                    /**
                     * 判断参数 DiskQuotaPercentage 是否已赋值
                     * @return DiskQuotaPercentage 是否已赋值
                     * 
                     */
                    bool DiskQuotaPercentageHasBeenSet() const;

                    /**
                     * 获取Percentage by which the message retention time is shortened each time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return StepForwardPercentage Percentage by which the message retention time is shortened each time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStepForwardPercentage() const;

                    /**
                     * 设置Percentage by which the message retention time is shortened each time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _stepForwardPercentage Percentage by which the message retention time is shortened each time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepForwardPercentage(const int64_t& _stepForwardPercentage);

                    /**
                     * 判断参数 StepForwardPercentage 是否已赋值
                     * @return StepForwardPercentage 是否已赋值
                     * 
                     */
                    bool StepForwardPercentageHasBeenSet() const;

                    /**
                     * 获取Minimum retention time, in minutes
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return BottomRetention Minimum retention time, in minutes
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBottomRetention() const;

                    /**
                     * 设置Minimum retention time, in minutes
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _bottomRetention Minimum retention time, in minutes
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBottomRetention(const int64_t& _bottomRetention);

                    /**
                     * 判断参数 BottomRetention 是否已赋值
                     * @return BottomRetention 是否已赋值
                     * 
                     */
                    bool BottomRetentionHasBeenSet() const;

                private:

                    /**
                     * Whether the dynamic message retention time configuration is enabled. 0: disabled; 1: enabled
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Disk quota threshold (in percentage) for triggering the message retention time change event
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskQuotaPercentage;
                    bool m_diskQuotaPercentageHasBeenSet;

                    /**
                     * Percentage by which the message retention time is shortened each time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_stepForwardPercentage;
                    bool m_stepForwardPercentageHasBeenSet;

                    /**
                     * Minimum retention time, in minutes
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_bottomRetention;
                    bool m_bottomRetentionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DYNAMICRETENTIONTIME_H_
