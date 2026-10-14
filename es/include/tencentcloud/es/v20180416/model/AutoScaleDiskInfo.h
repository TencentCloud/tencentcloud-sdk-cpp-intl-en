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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_AUTOSCALEDISKINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_AUTOSCALEDISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Auto capacity expansion parameter for cvm
                */
                class AutoScaleDiskInfo : public AbstractModel
                {
                public:
                    AutoScaleDiskInfo();
                    ~AutoScaleDiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type. Valid values: `hotData`, `warmData`.
                     * @return NodeType Node type. Valid values: `hotData`, `warmData`.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Valid values: `hotData`, `warmData`.
                     * @param _nodeType Node type. Valid values: `hotData`, `warmData`.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取0: Percentage-based scale-out; 1: Absolute value-based scale-out
                     * @return ScaleType 0: Percentage-based scale-out; 1: Absolute value-based scale-out
                     * 
                     */
                    uint64_t GetScaleType() const;

                    /**
                     * 设置0: Percentage-based scale-out; 1: Absolute value-based scale-out
                     * @param _scaleType 0: Percentage-based scale-out; 1: Absolute value-based scale-out
                     * 
                     */
                    void SetScaleType(const uint64_t& _scaleType);

                    /**
                     * 判断参数 ScaleType 是否已赋值
                     * @return ScaleType 是否已赋值
                     * 
                     */
                    bool ScaleTypeHasBeenSet() const;

                    /**
                     * 获取Trigger threshold. Unit: %. For example, 80%.
                     * @return Threshold Trigger threshold. Unit: %. For example, 80%.
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置Trigger threshold. Unit: %. For example, 80%.
                     * @param _threshold Trigger threshold. Unit: %. For example, 80%.
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Trigger duration in minutes, for example, 60
                     * @return Duration Trigger duration in minutes, for example, 60
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Trigger duration in minutes, for example, 60
                     * @param _duration Trigger duration in minutes, for example, 60
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Expansion ratio per time, unit: %, for example, 20%
                     * @return PercentSize Expansion ratio per time, unit: %, for example, 20%
                     * 
                     */
                    uint64_t GetPercentSize() const;

                    /**
                     * 设置Expansion ratio per time, unit: %, for example, 20%
                     * @param _percentSize Expansion ratio per time, unit: %, for example, 20%
                     * 
                     */
                    void SetPercentSize(const uint64_t& _percentSize);

                    /**
                     * 判断参数 PercentSize 是否已赋值
                     * @return PercentSize 是否已赋值
                     * 
                     */
                    bool PercentSizeHasBeenSet() const;

                    /**
                     * 获取Absolute value-based scale-out, in GB, for example, 100 GB
                     * @return FixSize Absolute value-based scale-out, in GB, for example, 100 GB
                     * 
                     */
                    uint64_t GetFixSize() const;

                    /**
                     * 设置Absolute value-based scale-out, in GB, for example, 100 GB
                     * @param _fixSize Absolute value-based scale-out, in GB, for example, 100 GB
                     * 
                     */
                    void SetFixSize(const uint64_t& _fixSize);

                    /**
                     * 判断参数 FixSize 是否已赋值
                     * @return FixSize 是否已赋值
                     * 
                     */
                    bool FixSizeHasBeenSet() const;

                    /**
                     * 获取Capacity limit for scale-out, in GB, for example, 500 GB
                     * @return MaxSize Capacity limit for scale-out, in GB, for example, 500 GB
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Capacity limit for scale-out, in GB, for example, 500 GB
                     * @param _maxSize Capacity limit for scale-out, in GB, for example, 500 GB
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Node type. Valid values: `hotData`, `warmData`.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 0: Percentage-based scale-out; 1: Absolute value-based scale-out
                     */
                    uint64_t m_scaleType;
                    bool m_scaleTypeHasBeenSet;

                    /**
                     * Trigger threshold. Unit: %. For example, 80%.
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Trigger duration in minutes, for example, 60
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Expansion ratio per time, unit: %, for example, 20%
                     */
                    uint64_t m_percentSize;
                    bool m_percentSizeHasBeenSet;

                    /**
                     * Absolute value-based scale-out, in GB, for example, 100 GB
                     */
                    uint64_t m_fixSize;
                    bool m_fixSizeHasBeenSet;

                    /**
                     * Capacity limit for scale-out, in GB, for example, 500 GB
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_AUTOSCALEDISKINFO_H_
