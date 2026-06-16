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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_RESOURCEITEM_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_RESOURCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * resource
                */
                class ResourceItem : public AbstractModel
                {
                public:
                    ResourceItem();
                    ~ResourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceName Resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceName Resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取resource value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceValue resource value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetResourceValue() const;

                    /**
                     * 设置resource value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceValue resource value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceValue(const bool& _resourceValue);

                    /**
                     * 判断参数 ResourceValue 是否已赋值
                     * @return ResourceValue 是否已赋值
                     * 
                     */
                    bool ResourceValueHasBeenSet() const;

                    /**
                     * 获取Changeable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanChange Changeable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCanChange() const;

                    /**
                     * 设置Changeable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _canChange Changeable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCanChange(const bool& _canChange);

                    /**
                     * 判断参数 CanChange 是否已赋值
                     * @return CanChange 是否已赋值
                     * 
                     */
                    bool CanChangeHasBeenSet() const;

                    /**
                     * 获取Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tips Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tips Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                private:

                    /**
                     * Resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * resource value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_resourceValue;
                    bool m_resourceValueHasBeenSet;

                    /**
                     * Changeable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_canChange;
                    bool m_canChangeHasBeenSet;

                    /**
                     * Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_RESOURCEITEM_H_
