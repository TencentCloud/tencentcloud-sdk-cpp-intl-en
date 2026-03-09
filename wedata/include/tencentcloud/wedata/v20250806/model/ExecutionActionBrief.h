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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTIONACTIONBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTIONACTIONBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Operation execution result.
                */
                class ExecutionActionBrief : public AbstractModel
                {
                public:
                    ExecutionActionBrief();
                    ~ExecutionActionBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operate entity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ItemId Operate entity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Operate entity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _itemId Operate entity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Operate the entity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ItemName Operate the entity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置Operate the entity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _itemName Operate the entity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取Operation ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionActionId Operation ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionActionId() const;

                    /**
                     * 设置Operation ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionActionId Operation ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionActionId(const std::string& _executionActionId);

                    /**
                     * 判断参数 ExecutionActionId 是否已赋值
                     * @return ExecutionActionId 是否已赋值
                     * 
                     */
                    bool ExecutionActionIdHasBeenSet() const;

                    /**
                     * 获取Failure information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Failure information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Failure information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage Failure information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Operation status. true: successful, false: unsuccessful.
                     * @return OpStatus Operation status. true: successful, false: unsuccessful.
                     * 
                     */
                    bool GetOpStatus() const;

                    /**
                     * 设置Operation status. true: successful, false: unsuccessful.
                     * @param _opStatus Operation status. true: successful, false: unsuccessful.
                     * 
                     */
                    void SetOpStatus(const bool& _opStatus);

                    /**
                     * 判断参数 OpStatus 是否已赋值
                     * @return OpStatus 是否已赋值
                     * 
                     */
                    bool OpStatusHasBeenSet() const;

                private:

                    /**
                     * Operate entity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Operate the entity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * Operation ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionActionId;
                    bool m_executionActionIdHasBeenSet;

                    /**
                     * Failure information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Operation status. true: successful, false: unsuccessful.
                     */
                    bool m_opStatus;
                    bool m_opStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTIONACTIONBRIEF_H_
