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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONFLICTQAREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONFLICTQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyConflictQA request structure.
                */
                class ModifyConflictQARequest : public AbstractModel
                {
                public:
                    ModifyConflictQARequest();
                    ~ModifyConflictQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Knowledge base ID</p>
                     * @return KbId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _kbId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Conflict group ID (optional if ignored globally)</p>
                     * @return ConflictGroupId <p>Conflict group ID (optional if ignored globally)</p>
                     * 
                     */
                    std::string GetConflictGroupId() const;

                    /**
                     * 设置<p>Conflict group ID (optional if ignored globally)</p>
                     * @param _conflictGroupId <p>Conflict group ID (optional if ignored globally)</p>
                     * 
                     */
                    void SetConflictGroupId(const std::string& _conflictGroupId);

                    /**
                     * 判断参数 ConflictGroupId 是否已赋值
                     * @return ConflictGroupId 是否已赋值
                     * 
                     */
                    bool ConflictGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether to ignore globally (ignore all pending conflict issues under the current KB)</p>
                     * @return IsIgnoreAll <p>Whether to ignore globally (ignore all pending conflict issues under the current KB)</p>
                     * 
                     */
                    bool GetIsIgnoreAll() const;

                    /**
                     * 设置<p>Whether to ignore globally (ignore all pending conflict issues under the current KB)</p>
                     * @param _isIgnoreAll <p>Whether to ignore globally (ignore all pending conflict issues under the current KB)</p>
                     * 
                     */
                    void SetIsIgnoreAll(const bool& _isIgnoreAll);

                    /**
                     * 判断参数 IsIgnoreAll 是否已赋值
                     * @return IsIgnoreAll 是否已赋值
                     * 
                     */
                    bool IsIgnoreAllHasBeenSet() const;

                    /**
                     * 获取<p>QA ID list involved in decision-making (required for KEEP and DELETE)</p>
                     * @return QaIdList <p>QA ID list involved in decision-making (required for KEEP and DELETE)</p>
                     * 
                     */
                    std::vector<std::string> GetQaIdList() const;

                    /**
                     * 设置<p>QA ID list involved in decision-making (required for KEEP and DELETE)</p>
                     * @param _qaIdList <p>QA ID list involved in decision-making (required for KEEP and DELETE)</p>
                     * 
                     */
                    void SetQaIdList(const std::vector<std::string>& _qaIdList);

                    /**
                     * 判断参数 QaIdList 是否已赋值
                     * @return QaIdList 是否已赋值
                     * 
                     */
                    bool QaIdListHasBeenSet() const;

                    /**
                     * 获取<p>Conflict resolution policy: 1=reserve, 2=ignore, 3=delete (can be omitted when ignored globally)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td>-</td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>Reserve</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>Ignore</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * @return Resolution <p>Conflict resolution policy: 1=reserve, 2=ignore, 3=delete (can be omitted when ignored globally)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td>-</td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>Reserve</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>Ignore</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetResolution() const;

                    /**
                     * 设置<p>Conflict resolution policy: 1=reserve, 2=ignore, 3=delete (can be omitted when ignored globally)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td>-</td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>Reserve</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>Ignore</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * @param _resolution <p>Conflict resolution policy: 1=reserve, 2=ignore, 3=delete (can be omitted when ignored globally)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td>-</td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>Reserve</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>Ignore</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     * 
                     */
                    void SetResolution(const int64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Conflict group ID (optional if ignored globally)</p>
                     */
                    std::string m_conflictGroupId;
                    bool m_conflictGroupIdHasBeenSet;

                    /**
                     * <p>Whether to ignore globally (ignore all pending conflict issues under the current KB)</p>
                     */
                    bool m_isIgnoreAll;
                    bool m_isIgnoreAllHasBeenSet;

                    /**
                     * <p>QA ID list involved in decision-making (required for KEEP and DELETE)</p>
                     */
                    std::vector<std::string> m_qaIdList;
                    bool m_qaIdListHasBeenSet;

                    /**
                     * <p>Conflict resolution policy: 1=reserve, 2=ignore, 3=delete (can be omitted when ignored globally)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td>-</td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>Reserve</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>Ignore</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>Delete</td></tr></tbody></table></p>
                     */
                    int64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONFLICTQAREQUEST_H_
