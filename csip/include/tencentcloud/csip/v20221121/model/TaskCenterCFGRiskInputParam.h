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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERCFGRISKINPUTPARAM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERCFGRISKINPUTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Advanced configuration risk scan configuration
                */
                class TaskCenterCFGRiskInputParam : public AbstractModel
                {
                public:
                    TaskCenterCFGRiskInputParam();
                    ~TaskCenterCFGRiskInputParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check item ID
                     * @return ItemId Check item ID
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Check item ID
                     * @param _itemId Check item ID
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable. `0`: no, `1`: yes.
                     * @return Enable Whether to enable. `0`: no, `1`: yes.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable. `0`: no, `1`: yes.
                     * @param _enable Whether to enable. `0`: no, `1`: yes.
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
                     * 获取Resource type
                     * @return ResourceType Resource type
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type
                     * @param _resourceType Resource type
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * Check item ID
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Whether to enable. `0`: no, `1`: yes.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Resource type
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERCFGRISKINPUTPARAM_H_
