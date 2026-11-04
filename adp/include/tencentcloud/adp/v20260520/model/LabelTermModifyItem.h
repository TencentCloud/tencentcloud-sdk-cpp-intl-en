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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMMODIFYITEM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMMODIFYITEM_H_

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
                * Modified items of tag standard words (incremental update)
                */
                class LabelTermModifyItem : public AbstractModel
                {
                public:
                    LabelTermModifyItem();
                    ~LabelTermModifyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Operation type (not allowed to be 0. Value: 1=create, 2=modify, 3=delete)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>Create</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>Modify</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * @return ModifyAction <p>Operation type (not allowed to be 0. Value: 1=create, 2=modify, 3=delete)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>Create</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>Modify</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetModifyAction() const;

                    /**
                     * 设置<p>Operation type (not allowed to be 0. Value: 1=create, 2=modify, 3=delete)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>Create</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>Modify</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * @param _modifyAction <p>Operation type (not allowed to be 0. Value: 1=create, 2=modify, 3=delete)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>Create</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>Modify</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * 
                     */
                    void SetModifyAction(const int64_t& _modifyAction);

                    /**
                     * 判断参数 ModifyAction 是否已赋值
                     * @return ModifyAction 是否已赋值
                     * 
                     */
                    bool ModifyActionHasBeenSet() const;

                    /**
                     * 获取<p>Synonym list (pass the complete synonym collection during CREATE and UPDATE, overriding update)</p>
                     * @return SynonymList <p>Synonym list (pass the complete synonym collection during CREATE and UPDATE, overriding update)</p>
                     * 
                     */
                    std::vector<std::string> GetSynonymList() const;

                    /**
                     * 设置<p>Synonym list (pass the complete synonym collection during CREATE and UPDATE, overriding update)</p>
                     * @param _synonymList <p>Synonym list (pass the complete synonym collection during CREATE and UPDATE, overriding update)</p>
                     * 
                     */
                    void SetSynonymList(const std::vector<std::string>& _synonymList);

                    /**
                     * 判断参数 SynonymList 是否已赋值
                     * @return SynonymList 是否已赋值
                     * 
                     */
                    bool SynonymListHasBeenSet() const;

                    /**
                     * 获取<p>Standard word (required for CREATE and UPDATE, can be left blank for DELETE)</p>
                     * @return Term <p>Standard word (required for CREATE and UPDATE, can be left blank for DELETE)</p>
                     * 
                     */
                    std::string GetTerm() const;

                    /**
                     * 设置<p>Standard word (required for CREATE and UPDATE, can be left blank for DELETE)</p>
                     * @param _term <p>Standard word (required for CREATE and UPDATE, can be left blank for DELETE)</p>
                     * 
                     */
                    void SetTerm(const std::string& _term);

                    /**
                     * 判断参数 Term 是否已赋值
                     * @return Term 是否已赋值
                     * 
                     */
                    bool TermHasBeenSet() const;

                    /**
                     * 获取<p>Standard term ID (required for UPDATE and DELETE; leave blank for CREATE, generated by the backend)</p>
                     * @return TermId <p>Standard term ID (required for UPDATE and DELETE; leave blank for CREATE, generated by the backend)</p>
                     * 
                     */
                    std::string GetTermId() const;

                    /**
                     * 设置<p>Standard term ID (required for UPDATE and DELETE; leave blank for CREATE, generated by the backend)</p>
                     * @param _termId <p>Standard term ID (required for UPDATE and DELETE; leave blank for CREATE, generated by the backend)</p>
                     * 
                     */
                    void SetTermId(const std::string& _termId);

                    /**
                     * 判断参数 TermId 是否已赋值
                     * @return TermId 是否已赋值
                     * 
                     */
                    bool TermIdHasBeenSet() const;

                private:

                    /**
                     * <p>Operation type (not allowed to be 0. Value: 1=create, 2=modify, 3=delete)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>MODIFY_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>MODIFY_ACTION_CREATE</td><td>1</td><td>Create</td></tr><tr><td>MODIFY_ACTION_UPDATE</td><td>2</td><td>Modify</td></tr><tr><td>MODIFY_ACTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     */
                    int64_t m_modifyAction;
                    bool m_modifyActionHasBeenSet;

                    /**
                     * <p>Synonym list (pass the complete synonym collection during CREATE and UPDATE, overriding update)</p>
                     */
                    std::vector<std::string> m_synonymList;
                    bool m_synonymListHasBeenSet;

                    /**
                     * <p>Standard word (required for CREATE and UPDATE, can be left blank for DELETE)</p>
                     */
                    std::string m_term;
                    bool m_termHasBeenSet;

                    /**
                     * <p>Standard term ID (required for UPDATE and DELETE; leave blank for CREATE, generated by the backend)</p>
                     */
                    std::string m_termId;
                    bool m_termIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMMODIFYITEM_H_
