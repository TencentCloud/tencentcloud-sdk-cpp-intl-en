/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFLICTHANDLEOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFLICTHANDLEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Detailed description of conflict processing
                */
                class ConflictHandleOption : public AbstractModel
                {
                public:
                    ConflictHandleOption();
                    ~ConflictHandleOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Conditionally overwritten column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConditionColumn Conditionally overwritten column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConditionColumn() const;

                    /**
                     * 设置Conditionally overwritten column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conditionColumn Conditionally overwritten column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConditionColumn(const std::string& _conditionColumn);

                    /**
                     * 判断参数 ConditionColumn 是否已赋值
                     * @return ConditionColumn 是否已赋值
                     * 
                     */
                    bool ConditionColumnHasBeenSet() const;

                    /**
                     * 获取Conditional overwrite operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConditionOperator Conditional overwrite operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConditionOperator() const;

                    /**
                     * 设置Conditional overwrite operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conditionOperator Conditional overwrite operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConditionOperator(const std::string& _conditionOperator);

                    /**
                     * 判断参数 ConditionOperator 是否已赋值
                     * @return ConditionOperator 是否已赋值
                     * 
                     */
                    bool ConditionOperatorHasBeenSet() const;

                    /**
                     * 获取Conditional overwrite priority configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConditionOrderInSrcAndDst Conditional overwrite priority configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConditionOrderInSrcAndDst() const;

                    /**
                     * 设置Conditional overwrite priority configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conditionOrderInSrcAndDst Conditional overwrite priority configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConditionOrderInSrcAndDst(const std::string& _conditionOrderInSrcAndDst);

                    /**
                     * 判断参数 ConditionOrderInSrcAndDst 是否已赋值
                     * @return ConditionOrderInSrcAndDst 是否已赋值
                     * 
                     */
                    bool ConditionOrderInSrcAndDstHasBeenSet() const;

                private:

                    /**
                     * Conditionally overwritten column
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conditionColumn;
                    bool m_conditionColumnHasBeenSet;

                    /**
                     * Conditional overwrite operation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conditionOperator;
                    bool m_conditionOperatorHasBeenSet;

                    /**
                     * Conditional overwrite priority configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conditionOrderInSrcAndDst;
                    bool m_conditionOrderInSrcAndDstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFLICTHANDLEOPTION_H_
