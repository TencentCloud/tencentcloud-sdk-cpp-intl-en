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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MetaValue.h>
#include <tencentcloud/adp/v20260520/model/LabelTerm.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Tag abstract
                */
                class LabelSummary : public AbstractModel
                {
                public:
                    LabelSummary();
                    ~LabelSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag ID.</p>
                     * @return LabelId <p>Tag ID.</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>Tag ID.</p>
                     * @param _labelId <p>Tag ID.</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>Metadata configuration (configuration message when the tag is set to metadata)</p>
                     * @return MetaValue <p>Metadata configuration (configuration message when the tag is set to metadata)</p>
                     * 
                     */
                    MetaValue GetMetaValue() const;

                    /**
                     * 设置<p>Metadata configuration (configuration message when the tag is set to metadata)</p>
                     * @param _metaValue <p>Metadata configuration (configuration message when the tag is set to metadata)</p>
                     * 
                     */
                    void SetMetaValue(const MetaValue& _metaValue);

                    /**
                     * 判断参数 MetaValue 是否已赋值
                     * @return MetaValue 是否已赋值
                     * 
                     */
                    bool MetaValueHasBeenSet() const;

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
                     * 获取<p>Number of resources referring to the tag</p>
                     * @return RefCount <p>Number of resources referring to the tag</p>
                     * 
                     */
                    uint64_t GetRefCount() const;

                    /**
                     * 设置<p>Number of resources referring to the tag</p>
                     * @param _refCount <p>Number of resources referring to the tag</p>
                     * 
                     */
                    void SetRefCount(const uint64_t& _refCount);

                    /**
                     * 判断参数 RefCount 是否已赋值
                     * @return RefCount 是否已赋值
                     * 
                     */
                    bool RefCountHasBeenSet() const;

                    /**
                     * 获取<p>Tag value (standard word + synonym list)</p>
                     * @return TermList <p>Tag value (standard word + synonym list)</p>
                     * 
                     */
                    std::vector<LabelTerm> GetTermList() const;

                    /**
                     * 设置<p>Tag value (standard word + synonym list)</p>
                     * @param _termList <p>Tag value (standard word + synonym list)</p>
                     * 
                     */
                    void SetTermList(const std::vector<LabelTerm>& _termList);

                    /**
                     * 判断参数 TermList 是否已赋值
                     * @return TermList 是否已赋值
                     * 
                     */
                    bool TermListHasBeenSet() const;

                    /**
                     * 获取<p>Total number of tag values.</p>
                     * @return TermTotalCount <p>Total number of tag values.</p>
                     * 
                     */
                    uint64_t GetTermTotalCount() const;

                    /**
                     * 设置<p>Total number of tag values.</p>
                     * @param _termTotalCount <p>Total number of tag values.</p>
                     * 
                     */
                    void SetTermTotalCount(const uint64_t& _termTotalCount);

                    /**
                     * 判断参数 TermTotalCount 是否已赋值
                     * @return TermTotalCount 是否已赋值
                     * 
                     */
                    bool TermTotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Tag ID.</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>Metadata configuration (configuration message when the tag is set to metadata)</p>
                     */
                    MetaValue m_metaValue;
                    bool m_metaValueHasBeenSet;

                    /**
                     * <p>Tag name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Number of resources referring to the tag</p>
                     */
                    uint64_t m_refCount;
                    bool m_refCountHasBeenSet;

                    /**
                     * <p>Tag value (standard word + synonym list)</p>
                     */
                    std::vector<LabelTerm> m_termList;
                    bool m_termListHasBeenSet;

                    /**
                     * <p>Total number of tag values.</p>
                     */
                    uint64_t m_termTotalCount;
                    bool m_termTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELSUMMARY_H_
