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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREVIEWITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * View configuration for data consistency check
                */
                class CompareViewItem : public AbstractModel
                {
                public:
                    CompareViewItem();
                    ~CompareViewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ViewName View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _viewName View name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                private:

                    /**
                     * View name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREVIEWITEM_H_
