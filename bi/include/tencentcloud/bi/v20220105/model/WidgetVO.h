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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_WIDGETVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_WIDGETVO_H_

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
                * Component information
                */
                class WidgetVO : public AbstractModel
                {
                public:
                    WidgetVO();
                    ~WidgetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WidgetId Component ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置Component ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _widgetId Component ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                    /**
                     * 获取Component name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WidgetName Component name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWidgetName() const;

                    /**
                     * 设置Component name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _widgetName Component name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWidgetName(const std::string& _widgetName);

                    /**
                     * 判断参数 WidgetName 是否已赋值
                     * @return WidgetName 是否已赋值
                     * 
                     */
                    bool WidgetNameHasBeenSet() const;

                private:

                    /**
                     * Component ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * Component name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_widgetName;
                    bool m_widgetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_WIDGETVO_H_
