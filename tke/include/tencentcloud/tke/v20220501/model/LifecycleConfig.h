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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_LIFECYCLECONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_LIFECYCLECONFIG_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Custom script for node pools
                */
                class LifecycleConfig : public AbstractModel
                {
                public:
                    LifecycleConfig();
                    ~LifecycleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom script before node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return PreInit Custom script before node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPreInit() const;

                    /**
                     * 设置Custom script before node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _preInit Custom script before node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPreInit(const std::string& _preInit);

                    /**
                     * 判断参数 PreInit 是否已赋值
                     * @return PreInit 是否已赋值
                     * 
                     */
                    bool PreInitHasBeenSet() const;

                    /**
                     * 获取Custom script after node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return PostInit Custom script after node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPostInit() const;

                    /**
                     * 设置Custom script after node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _postInit Custom script after node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPostInit(const std::string& _postInit);

                    /**
                     * 判断参数 PostInit 是否已赋值
                     * @return PostInit 是否已赋值
                     * 
                     */
                    bool PostInitHasBeenSet() const;

                private:

                    /**
                     * Custom script before node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_preInit;
                    bool m_preInitHasBeenSet;

                    /**
                     * Custom script after node initialization
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_postInit;
                    bool m_postInitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_LIFECYCLECONFIG_H_
