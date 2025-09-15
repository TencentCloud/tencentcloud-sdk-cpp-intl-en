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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TABLESCHEMAITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TABLESCHEMAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Table schema information
                */
                class TableSchemaItem : public AbstractModel
                {
                public:
                    TableSchemaItem();
                    ~TableSchemaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column identifier
                     * @return Name Column identifier
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Column identifier
                     * @param _name Column identifier
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether it is sortable by this column
                     * @return Sortable Whether it is sortable by this column
                     * 
                     */
                    bool GetSortable() const;

                    /**
                     * 设置Whether it is sortable by this column
                     * @param _sortable Whether it is sortable by this column
                     * 
                     */
                    void SetSortable(const bool& _sortable);

                    /**
                     * 判断参数 Sortable 是否已赋值
                     * @return Sortable 是否已赋值
                     * 
                     */
                    bool SortableHasBeenSet() const;

                    /**
                     * 获取Whether it is filterable
                     * @return WithFilter Whether it is filterable
                     * 
                     */
                    bool GetWithFilter() const;

                    /**
                     * 设置Whether it is filterable
                     * @param _withFilter Whether it is filterable
                     * 
                     */
                    void SetWithFilter(const bool& _withFilter);

                    /**
                     * 判断参数 WithFilter 是否已赋值
                     * @return WithFilter 是否已赋值
                     * 
                     */
                    bool WithFilterHasBeenSet() const;

                    /**
                     * 获取Filtered candidate set

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Candidates Filtered candidate set

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCandidates() const;

                    /**
                     * 设置Filtered candidate set

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _candidates Filtered candidate set

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCandidates(const std::vector<std::string>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                    /**
                     * 获取Whether it is clickable.
                     * @return Clickable Whether it is clickable.
                     * 
                     */
                    bool GetClickable() const;

                    /**
                     * 设置Whether it is clickable.
                     * @param _clickable Whether it is clickable.
                     * 
                     */
                    void SetClickable(const bool& _clickable);

                    /**
                     * 判断参数 Clickable 是否已赋值
                     * @return Clickable 是否已赋值
                     * 
                     */
                    bool ClickableHasBeenSet() const;

                    /**
                     * 获取Display name.
                     * @return Title Display name.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Display name.
                     * @param _title Display name.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * Column identifier
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether it is sortable by this column
                     */
                    bool m_sortable;
                    bool m_sortableHasBeenSet;

                    /**
                     * Whether it is filterable
                     */
                    bool m_withFilter;
                    bool m_withFilterHasBeenSet;

                    /**
                     * Filtered candidate set

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_candidates;
                    bool m_candidatesHasBeenSet;

                    /**
                     * Whether it is clickable.
                     */
                    bool m_clickable;
                    bool m_clickableHasBeenSet;

                    /**
                     * Display name.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TABLESCHEMAITEM_H_
