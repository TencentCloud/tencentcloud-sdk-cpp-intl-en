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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_VIEWSCOPE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_VIEWSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * View scope
                */
                class ViewScope : public AbstractModel
                {
                public:
                    ViewScope();
                    ~ViewScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>View type; enumeration values: VIEW_TYPE_CORP(1) corporate view, VIEW_TYPE_SPACE(2) space view, VIEW_TYPE_APP(3) application view</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Not specified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></table>
                     * @return ViewType <p>View type; enumeration values: VIEW_TYPE_CORP(1) corporate view, VIEW_TYPE_SPACE(2) space view, VIEW_TYPE_APP(3) application view</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Not specified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></table>
                     * 
                     */
                    int64_t GetViewType() const;

                    /**
                     * 设置<p>View type; enumeration values: VIEW_TYPE_CORP(1) corporate view, VIEW_TYPE_SPACE(2) space view, VIEW_TYPE_APP(3) application view</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Not specified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></table>
                     * @param _viewType <p>View type; enumeration values: VIEW_TYPE_CORP(1) corporate view, VIEW_TYPE_SPACE(2) space view, VIEW_TYPE_APP(3) application view</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Not specified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></table>
                     * 
                     */
                    void SetViewType(const int64_t& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                    /**
                     * 获取<p>View scope ID; leave empty for VIEW_TYPE_CORP; enter space_id for VIEW_TYPE_SPACE; enter app_id for VIEW_TYPE_APP (decimal string of uint64 snowflake ID)</p>
                     * @return ScopeId <p>View scope ID; leave empty for VIEW_TYPE_CORP; enter space_id for VIEW_TYPE_SPACE; enter app_id for VIEW_TYPE_APP (decimal string of uint64 snowflake ID)</p>
                     * 
                     */
                    std::string GetScopeId() const;

                    /**
                     * 设置<p>View scope ID; leave empty for VIEW_TYPE_CORP; enter space_id for VIEW_TYPE_SPACE; enter app_id for VIEW_TYPE_APP (decimal string of uint64 snowflake ID)</p>
                     * @param _scopeId <p>View scope ID; leave empty for VIEW_TYPE_CORP; enter space_id for VIEW_TYPE_SPACE; enter app_id for VIEW_TYPE_APP (decimal string of uint64 snowflake ID)</p>
                     * 
                     */
                    void SetScopeId(const std::string& _scopeId);

                    /**
                     * 判断参数 ScopeId 是否已赋值
                     * @return ScopeId 是否已赋值
                     * 
                     */
                    bool ScopeIdHasBeenSet() const;

                private:

                    /**
                     * <p>View type; enumeration values: VIEW_TYPE_CORP(1) corporate view, VIEW_TYPE_SPACE(2) space view, VIEW_TYPE_APP(3) application view</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Not specified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></table>
                     */
                    int64_t m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>View scope ID; leave empty for VIEW_TYPE_CORP; enter space_id for VIEW_TYPE_SPACE; enter app_id for VIEW_TYPE_APP (decimal string of uint64 snowflake ID)</p>
                     */
                    std::string m_scopeId;
                    bool m_scopeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_VIEWSCOPE_H_
