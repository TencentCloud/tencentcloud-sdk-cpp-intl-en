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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_BASESTATEACTION_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_BASESTATEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Operation attributes of every record returned by a list query
                */
                class BaseStateAction : public AbstractModel
                {
                public:
                    BaseStateAction();
                    ~BaseStateAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the edit button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowEdit Whether the edit button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetShowEdit() const;

                    /**
                     * 设置Whether the edit button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showEdit Whether the edit button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShowEdit(const bool& _showEdit);

                    /**
                     * 判断参数 ShowEdit 是否已赋值
                     * @return ShowEdit 是否已赋值
                     * 
                     */
                    bool ShowEditHasBeenSet() const;

                    /**
                     * 获取Whether the edit button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsEdit Whether the edit button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsEdit() const;

                    /**
                     * 设置Whether the edit button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isEdit Whether the edit button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsEdit(const bool& _isEdit);

                    /**
                     * 判断参数 IsEdit 是否已赋值
                     * @return IsEdit 是否已赋值
                     * 
                     */
                    bool IsEditHasBeenSet() const;

                    /**
                     * 获取Edit button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EditText Edit button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEditText() const;

                    /**
                     * 设置Edit button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _editText Edit button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEditText(const std::string& _editText);

                    /**
                     * 判断参数 EditText 是否已赋值
                     * @return EditText 是否已赋值
                     * 
                     */
                    bool EditTextHasBeenSet() const;

                    /**
                     * 获取Edit-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EditTips Edit-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEditTips() const;

                    /**
                     * 设置Edit-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _editTips Edit-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEditTips(const std::string& _editTips);

                    /**
                     * 判断参数 EditTips 是否已赋值
                     * @return EditTips 是否已赋值
                     * 
                     */
                    bool EditTipsHasBeenSet() const;

                    /**
                     * 获取Whether the deletion button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowDel Whether the deletion button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetShowDel() const;

                    /**
                     * 设置Whether the deletion button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showDel Whether the deletion button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShowDel(const bool& _showDel);

                    /**
                     * 判断参数 ShowDel 是否已赋值
                     * @return ShowDel 是否已赋值
                     * 
                     */
                    bool ShowDelHasBeenSet() const;

                    /**
                     * 获取Whether the deletion button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDel Whether the deletion button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDel() const;

                    /**
                     * 设置Whether the deletion button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDel Whether the deletion button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDel(const bool& _isDel);

                    /**
                     * 判断参数 IsDel 是否已赋值
                     * @return IsDel 是否已赋值
                     * 
                     */
                    bool IsDelHasBeenSet() const;

                    /**
                     * 获取Delete button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DelText Delete button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDelText() const;

                    /**
                     * 设置Delete button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _delText Delete button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDelText(const std::string& _delText);

                    /**
                     * 判断参数 DelText 是否已赋值
                     * @return DelText 是否已赋值
                     * 
                     */
                    bool DelTextHasBeenSet() const;

                    /**
                     * 获取Delete-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DelTips Delete-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDelTips() const;

                    /**
                     * 设置Delete-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _delTips Delete-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDelTips(const std::string& _delTips);

                    /**
                     * 判断参数 DelTips 是否已赋值
                     * @return DelTips 是否已赋值
                     * 
                     */
                    bool DelTipsHasBeenSet() const;

                    /**
                     * 获取Whether the copy button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowCopy Whether the copy button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetShowCopy() const;

                    /**
                     * 设置Whether the copy button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showCopy Whether the copy button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShowCopy(const bool& _showCopy);

                    /**
                     * 判断参数 ShowCopy 是否已赋值
                     * @return ShowCopy 是否已赋值
                     * 
                     */
                    bool ShowCopyHasBeenSet() const;

                    /**
                     * 获取Whether it is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowView Whether it is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetShowView() const;

                    /**
                     * 设置Whether it is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showView Whether it is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShowView(const bool& _showView);

                    /**
                     * 判断参数 ShowView 是否已赋值
                     * @return ShowView 是否已赋值
                     * 
                     */
                    bool ShowViewHasBeenSet() const;

                    /**
                     * 获取Whether renaming is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowRename Whether renaming is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetShowRename() const;

                    /**
                     * 设置Whether renaming is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showRename Whether renaming is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShowRename(const bool& _showRename);

                    /**
                     * 判断参数 ShowRename 是否已赋值
                     * @return ShowRename 是否已赋值
                     * 
                     */
                    bool ShowRenameHasBeenSet() const;

                private:

                    /**
                     * Whether the edit button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_showEdit;
                    bool m_showEditHasBeenSet;

                    /**
                     * Whether the edit button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isEdit;
                    bool m_isEditHasBeenSet;

                    /**
                     * Edit button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_editText;
                    bool m_editTextHasBeenSet;

                    /**
                     * Edit-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_editTips;
                    bool m_editTipsHasBeenSet;

                    /**
                     * Whether the deletion button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_showDel;
                    bool m_showDelHasBeenSet;

                    /**
                     * Whether the deletion button is clickable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDel;
                    bool m_isDelHasBeenSet;

                    /**
                     * Delete button text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_delText;
                    bool m_delTextHasBeenSet;

                    /**
                     * Delete-disabled hint.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_delTips;
                    bool m_delTipsHasBeenSet;

                    /**
                     * Whether the copy button is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_showCopy;
                    bool m_showCopyHasBeenSet;

                    /**
                     * Whether it is visible.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_showView;
                    bool m_showViewHasBeenSet;

                    /**
                     * Whether renaming is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_showRename;
                    bool m_showRenameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_BASESTATEACTION_H_
