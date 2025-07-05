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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPEREVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPEREVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportFileTamperEvents request structure.
                */
                class ExportFileTamperEventsRequest : public AbstractModel
                {
                public:
                    ExportFileTamperEventsRequest();
                    ~ExportFileTamperEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering criteria
<li>Status - String - required: no - processing status: 0: pending; 1: added to allowlist; 2: deleted; 3: ignored</li><li>ModifyTime - string - required: no - last occurrence time</li>
<li>Uuid - String - required: no - host UUID for querying</li>
<li>RuleCategory - string - required: no - rule category: 0: system rule; 1: custom rule</li>
                     * @return Filters Filtering criteria
<li>Status - String - required: no - processing status: 0: pending; 1: added to allowlist; 2: deleted; 3: ignored</li><li>ModifyTime - string - required: no - last occurrence time</li>
<li>Uuid - String - required: no - host UUID for querying</li>
<li>RuleCategory - string - required: no - rule category: 0: system rule; 1: custom rule</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>Status - String - required: no - processing status: 0: pending; 1: added to allowlist; 2: deleted; 3: ignored</li><li>ModifyTime - string - required: no - last occurrence time</li>
<li>Uuid - String - required: no - host UUID for querying</li>
<li>RuleCategory - string - required: no - rule category: 0: system rule; 1: custom rule</li>
                     * @param _filters Filtering criteria
<li>Status - String - required: no - processing status: 0: pending; 1: added to allowlist; 2: deleted; 3: ignored</li><li>ModifyTime - string - required: no - last occurrence time</li>
<li>Uuid - String - required: no - host UUID for querying</li>
<li>RuleCategory - string - required: no - rule category: 0: system rule; 1: custom rule</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Fields to be exported
                     * @return Fileds Fields to be exported
                     * @deprecated
                     */
                    std::vector<std::string> GetFileds() const;

                    /**
                     * 设置Fields to be exported
                     * @param _fileds Fields to be exported
                     * @deprecated
                     */
                    void SetFileds(const std::vector<std::string>& _fileds);

                    /**
                     * 判断参数 Fileds 是否已赋值
                     * @return Fileds 是否已赋值
                     * @deprecated
                     */
                    bool FiledsHasBeenSet() const;

                    /**
                     * 获取Fields to be exported
                     * @return Fields Fields to be exported
                     * 
                     */
                    std::string GetFields() const;

                    /**
                     * 设置Fields to be exported
                     * @param _fields Fields to be exported
                     * 
                     */
                    void SetFields(const std::string& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * Filtering criteria
<li>Status - String - required: no - processing status: 0: pending; 1: added to allowlist; 2: deleted; 3: ignored</li><li>ModifyTime - string - required: no - last occurrence time</li>
<li>Uuid - String - required: no - host UUID for querying</li>
<li>RuleCategory - string - required: no - rule category: 0: system rule; 1: custom rule</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Fields to be exported
                     */
                    std::vector<std::string> m_fileds;
                    bool m_filedsHasBeenSet;

                    /**
                     * Fields to be exported
                     */
                    std::string m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPEREVENTSREQUEST_H_
