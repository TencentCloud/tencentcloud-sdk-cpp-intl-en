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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_WIDGETLISTVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_WIDGETLISTVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/WidgetVO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Page component information
                */
                class WidgetListVO : public AbstractModel
                {
                public:
                    WidgetListVO();
                    ~WidgetListVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取uin
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CorpId uin
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置uin
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _corpId uin
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageId Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageId Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Component array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WidgetList Component array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WidgetVO> GetWidgetList() const;

                    /**
                     * 设置Component array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _widgetList Component array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWidgetList(const std::vector<WidgetVO>& _widgetList);

                    /**
                     * 判断参数 WidgetList 是否已赋值
                     * @return WidgetList 是否已赋值
                     * 
                     */
                    bool WidgetListHasBeenSet() const;

                private:

                    /**
                     * uin
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Component array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WidgetVO> m_widgetList;
                    bool m_widgetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_WIDGETLISTVO_H_
