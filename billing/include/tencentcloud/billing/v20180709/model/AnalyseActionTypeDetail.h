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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEACTIONTYPEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEACTIONTYPEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost analysis transaction type complex type
                */
                class AnalyseActionTypeDetail : public AbstractModel
                {
                public:
                    AnalyseActionTypeDetail();
                    ~AnalyseActionTypeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transaction type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionType Transaction type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Transaction type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionType Transaction type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Transaction type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionTypeName Transaction type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionTypeName Transaction type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     * 
                     */
                    bool ActionTypeNameHasBeenSet() const;

                private:

                    /**
                     * Transaction type codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Transaction type nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEACTIONTYPEDETAIL_H_
