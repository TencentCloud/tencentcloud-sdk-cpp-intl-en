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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERBEHAVIOR_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERBEHAVIOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AutoScalerRules.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Metric scaling behavior
                */
                class AutoScalerBehavior : public AbstractModel
                {
                public:
                    AutoScalerBehavior();
                    ~AutoScalerBehavior() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scale-out behavior configuration
                     * @return ScaleUp Scale-out behavior configuration
                     * 
                     */
                    AutoScalerRules GetScaleUp() const;

                    /**
                     * 设置Scale-out behavior configuration
                     * @param _scaleUp Scale-out behavior configuration
                     * 
                     */
                    void SetScaleUp(const AutoScalerRules& _scaleUp);

                    /**
                     * 判断参数 ScaleUp 是否已赋值
                     * @return ScaleUp 是否已赋值
                     * 
                     */
                    bool ScaleUpHasBeenSet() const;

                    /**
                     * 获取Behavior configuration for scale-in
                     * @return ScaleDown Behavior configuration for scale-in
                     * 
                     */
                    AutoScalerRules GetScaleDown() const;

                    /**
                     * 设置Behavior configuration for scale-in
                     * @param _scaleDown Behavior configuration for scale-in
                     * 
                     */
                    void SetScaleDown(const AutoScalerRules& _scaleDown);

                    /**
                     * 判断参数 ScaleDown 是否已赋值
                     * @return ScaleDown 是否已赋值
                     * 
                     */
                    bool ScaleDownHasBeenSet() const;

                private:

                    /**
                     * Scale-out behavior configuration
                     */
                    AutoScalerRules m_scaleUp;
                    bool m_scaleUpHasBeenSet;

                    /**
                     * Behavior configuration for scale-in
                     */
                    AutoScalerRules m_scaleDown;
                    bool m_scaleDownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERBEHAVIOR_H_
