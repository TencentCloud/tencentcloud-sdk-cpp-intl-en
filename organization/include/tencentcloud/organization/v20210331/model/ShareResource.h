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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Shared resources
                */
                class ShareResource : public AbstractModel
                {
                public:
                    ShareResource();
                    ~ShareResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared resource ID.
                     * @return ResourceId Shared resource ID.
                     * @deprecated
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Shared resource ID.
                     * @param _resourceId Shared resource ID.
                     * @deprecated
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * @deprecated
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Product resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductResourceId Product resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductResourceId() const;

                    /**
                     * 设置Product resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productResourceId Product resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductResourceId(const std::string& _productResourceId);

                    /**
                     * 判断参数 ProductResourceId 是否已赋值
                     * @return ProductResourceId 是否已赋值
                     * 
                     */
                    bool ProductResourceIdHasBeenSet() const;

                private:

                    /**
                     * Shared resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Product resource ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productResourceId;
                    bool m_productResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCE_H_
