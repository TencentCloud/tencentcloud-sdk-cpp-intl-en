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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Check item
                */
                class CheckItem : public AbstractModel
                {
                public:
                    CheckItem();
                    ~CheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Item Check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置Check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _item Check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取Verification result of this item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Result Verification result of this item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Verification result of this item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _result Verification result of this item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Detailed explanation of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentValue Detailed explanation of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Detailed explanation of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentValue Detailed explanation of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Details of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpectedValue Details of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpectedValue() const;

                    /**
                     * 设置Details of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expectedValue Details of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpectedValue(const std::string& _expectedValue);

                    /**
                     * 判断参数 ExpectedValue 是否已赋值
                     * @return ExpectedValue 是否已赋值
                     * 
                     */
                    bool ExpectedValueHasBeenSet() const;

                private:

                    /**
                     * Check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * Verification result of this item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Detailed explanation of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Details of validation failure and modification suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expectedValue;
                    bool m_expectedValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKITEM_H_
