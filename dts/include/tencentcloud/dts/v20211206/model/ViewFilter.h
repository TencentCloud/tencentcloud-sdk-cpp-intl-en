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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_VIEWFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_VIEWFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/OpFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * View-level DDL/DML filtering information
                */
                class ViewFilter : public AbstractModel
                {
                public:
                    ViewFilter();
                    ~ViewFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取View name for rule effectiveness
                     * @return ViewName View name for rule effectiveness
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View name for rule effectiveness
                     * @param _viewName View name for rule effectiveness
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取View-level DDL/DML Filter Rule
                     * @return OpFilter View-level DDL/DML Filter Rule
                     * 
                     */
                    OpFilter GetOpFilter() const;

                    /**
                     * 设置View-level DDL/DML Filter Rule
                     * @param _opFilter View-level DDL/DML Filter Rule
                     * 
                     */
                    void SetOpFilter(const OpFilter& _opFilter);

                    /**
                     * 判断参数 OpFilter 是否已赋值
                     * @return OpFilter 是否已赋值
                     * 
                     */
                    bool OpFilterHasBeenSet() const;

                private:

                    /**
                     * View name for rule effectiveness
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * View-level DDL/DML Filter Rule
                     */
                    OpFilter m_opFilter;
                    bool m_opFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_VIEWFILTER_H_
