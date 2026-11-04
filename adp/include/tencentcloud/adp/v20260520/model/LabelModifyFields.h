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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELMODIFYFIELDS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELMODIFYFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/LabelTermModifyItem.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Collection of modifiable tag fields (used in conjunction with update_mask)
                */
                class LabelModifyFields : public AbstractModel
                {
                public:
                    LabelModifyFields();
                    ~LabelModifyFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag name.</p>
                     * @return Name <p>Tag name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Tag name.</p>
                     * @param _name <p>Tag name.</p>
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
                     * 获取<p>List of incremental modifications to standard words (add/modify/delete)</p>
                     * @return TermModifyList <p>List of incremental modifications to standard words (add/modify/delete)</p>
                     * 
                     */
                    std::vector<LabelTermModifyItem> GetTermModifyList() const;

                    /**
                     * 设置<p>List of incremental modifications to standard words (add/modify/delete)</p>
                     * @param _termModifyList <p>List of incremental modifications to standard words (add/modify/delete)</p>
                     * 
                     */
                    void SetTermModifyList(const std::vector<LabelTermModifyItem>& _termModifyList);

                    /**
                     * 判断参数 TermModifyList 是否已赋值
                     * @return TermModifyList 是否已赋值
                     * 
                     */
                    bool TermModifyListHasBeenSet() const;

                private:

                    /**
                     * <p>Tag name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>List of incremental modifications to standard words (add/modify/delete)</p>
                     */
                    std::vector<LabelTermModifyItem> m_termModifyList;
                    bool m_termModifyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELMODIFYFIELDS_H_
