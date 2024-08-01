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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceInfo.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerWrittenPolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerLifecyclePolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerIndexPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartOptimizerPolicy
                */
                class SmartOptimizerPolicy : public AbstractModel
                {
                public:
                    SmartOptimizerPolicy();
                    ~SmartOptimizerPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to inherit it
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Inherit Whether to inherit it
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInherit() const;

                    /**
                     * 设置Whether to inherit it
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inherit Whether to inherit it
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInherit(const std::string& _inherit);

                    /**
                     * 判断参数 Inherit 是否已赋值
                     * @return Inherit 是否已赋值
                     * 
                     */
                    bool InheritHasBeenSet() const;

                    /**
                     * 获取ResourceInfo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resources ResourceInfo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourceInfo> GetResources() const;

                    /**
                     * 设置ResourceInfo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resources ResourceInfo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResources(const std::vector<ResourceInfo>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerWrittenPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Written SmartOptimizerWrittenPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartOptimizerWrittenPolicy GetWritten() const;

                    /**
                     * 设置SmartOptimizerWrittenPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _written SmartOptimizerWrittenPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWritten(const SmartOptimizerWrittenPolicy& _written);

                    /**
                     * 判断参数 Written 是否已赋值
                     * @return Written 是否已赋值
                     * 
                     */
                    bool WrittenHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerLifecyclePolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Lifecycle SmartOptimizerLifecyclePolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartOptimizerLifecyclePolicy GetLifecycle() const;

                    /**
                     * 设置SmartOptimizerLifecyclePolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifecycle SmartOptimizerLifecyclePolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLifecycle(const SmartOptimizerLifecyclePolicy& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerIndexPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Index SmartOptimizerIndexPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartOptimizerIndexPolicy GetIndex() const;

                    /**
                     * 设置SmartOptimizerIndexPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _index SmartOptimizerIndexPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIndex(const SmartOptimizerIndexPolicy& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * Whether to inherit it
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inherit;
                    bool m_inheritHasBeenSet;

                    /**
                     * ResourceInfo
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceInfo> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * SmartOptimizerWrittenPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartOptimizerWrittenPolicy m_written;
                    bool m_writtenHasBeenSet;

                    /**
                     * SmartOptimizerLifecyclePolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartOptimizerLifecyclePolicy m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * SmartOptimizerIndexPolicy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartOptimizerIndexPolicy m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERPOLICY_H_
