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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_RESOURCEIDSTRINGINFO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_RESOURCEIDSTRINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * The general parameter for resource ID returned for successful operations
                */
                class ResourceIdStringInfo : public AbstractModel
                {
                public:
                    ResourceIdStringInfo();
                    ~ResourceIdStringInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the resource returned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId The ID of the resource returned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The ID of the resource returned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId The ID of the resource returned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the resource returned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_RESOURCEIDSTRINGINFO_H_
