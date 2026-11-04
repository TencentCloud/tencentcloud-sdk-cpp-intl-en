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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCEGROUP_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillReferenceSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Reference groups under the same SkillRefType (including total count + list of reference details). total_count is always based on the unfiltered original total amount. reference_summary_list is affected by the secondary authorization switch.
                */
                class SkillReferenceGroup : public AbstractModel
                {
                public:
                    SkillReferenceGroup();
                    ~SkillReferenceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Reference detail list under this type</p>
                     * @return ReferenceSummaryList <p>Reference detail list under this type</p>
                     * 
                     */
                    std::vector<SkillReferenceSummary> GetReferenceSummaryList() const;

                    /**
                     * 设置<p>Reference detail list under this type</p>
                     * @param _referenceSummaryList <p>Reference detail list under this type</p>
                     * 
                     */
                    void SetReferenceSummaryList(const std::vector<SkillReferenceSummary>& _referenceSummaryList);

                    /**
                     * 判断参数 ReferenceSummaryList 是否已赋值
                     * @return ReferenceSummaryList 是否已赋值
                     * 
                     */
                    bool ReferenceSummaryListHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SKILL_REF_UNKNOWN</td> <td>0</td> <td>Placeholder</td> </tr> <tr> <td>SKILL_REF_OPENCLAW</td> <td>1</td> <td>openclaw</td> </tr> <tr> <td>SKILL_REF_AGENT</td> <td>2</td> <td>agent</td> </tr> <tr> <td>SKILL_REF_CORP_ASSISTANT</td> <td>3</td> <td>Business assistant</td> </tr> </tbody> </table>
                     * @return ReferenceType <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SKILL_REF_UNKNOWN</td> <td>0</td> <td>Placeholder</td> </tr> <tr> <td>SKILL_REF_OPENCLAW</td> <td>1</td> <td>openclaw</td> </tr> <tr> <td>SKILL_REF_AGENT</td> <td>2</td> <td>agent</td> </tr> <tr> <td>SKILL_REF_CORP_ASSISTANT</td> <td>3</td> <td>Business assistant</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetReferenceType() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SKILL_REF_UNKNOWN</td> <td>0</td> <td>Placeholder</td> </tr> <tr> <td>SKILL_REF_OPENCLAW</td> <td>1</td> <td>openclaw</td> </tr> <tr> <td>SKILL_REF_AGENT</td> <td>2</td> <td>agent</td> </tr> <tr> <td>SKILL_REF_CORP_ASSISTANT</td> <td>3</td> <td>Business assistant</td> </tr> </tbody> </table>
                     * @param _referenceType <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SKILL_REF_UNKNOWN</td> <td>0</td> <td>Placeholder</td> </tr> <tr> <td>SKILL_REF_OPENCLAW</td> <td>1</td> <td>openclaw</td> </tr> <tr> <td>SKILL_REF_AGENT</td> <td>2</td> <td>agent</td> </tr> <tr> <td>SKILL_REF_CORP_ASSISTANT</td> <td>3</td> <td>Business assistant</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetReferenceType(const int64_t& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of references of this type</p>
                     * @return TotalCount <p>Total number of references of this type</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of references of this type</p>
                     * @param _totalCount <p>Total number of references of this type</p>
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Reference detail list under this type</p>
                     */
                    std::vector<SkillReferenceSummary> m_referenceSummaryList;
                    bool m_referenceSummaryListHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>SKILL_REF_UNKNOWN</td> <td>0</td> <td>Placeholder</td> </tr> <tr> <td>SKILL_REF_OPENCLAW</td> <td>1</td> <td>openclaw</td> </tr> <tr> <td>SKILL_REF_AGENT</td> <td>2</td> <td>agent</td> </tr> <tr> <td>SKILL_REF_CORP_ASSISTANT</td> <td>3</td> <td>Business assistant</td> </tr> </tbody> </table>
                     */
                    int64_t m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>Total number of references of this type</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCEGROUP_H_
