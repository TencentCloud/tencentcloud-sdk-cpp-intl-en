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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_AUTOSCALINGGROUPRANGE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_AUTOSCALINGGROUPRANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Maximum and minimum number of pods in cluster-associated scaling groups
                */
                class AutoScalingGroupRange : public AbstractModel
                {
                public:
                    AutoScalingGroupRange();
                    ~AutoScalingGroupRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum number of pods in a scaling group
                     * @return MinSize Minimum number of pods in a scaling group
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of pods in a scaling group
                     * @param _minSize Minimum number of pods in a scaling group
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Maximum number of pods in a scaling group
                     * @return MaxSize Maximum number of pods in a scaling group
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of pods in a scaling group
                     * @param _maxSize Maximum number of pods in a scaling group
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Minimum number of pods in a scaling group
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Maximum number of pods in a scaling group
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_AUTOSCALINGGROUPRANGE_H_
