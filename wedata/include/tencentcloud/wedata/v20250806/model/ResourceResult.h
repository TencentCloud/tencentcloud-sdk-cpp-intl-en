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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCERESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Operation result of the resource group.
                */
                class ResourceResult : public AbstractModel
                {
                public:
                    ResourceResult();
                    ~ResourceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Success status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Success status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Success status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Success status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Resource group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupId Resource group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置Resource group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupId Resource group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                private:

                    /**
                     * Success status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Resource group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCERESULT_H_
