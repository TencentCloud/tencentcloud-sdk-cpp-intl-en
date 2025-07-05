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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREQUESTHEADERPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREQUESTHEADERPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HeaderAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Modify HTTP request header configuration parameters.
                */
                class ModifyRequestHeaderParameters : public AbstractModel
                {
                public:
                    ModifyRequestHeaderParameters();
                    ~ModifyRequestHeaderParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of http header setting rules.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HeaderActions List of http header setting rules.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<HeaderAction> GetHeaderActions() const;

                    /**
                     * 设置List of http header setting rules.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _headerActions List of http header setting rules.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHeaderActions(const std::vector<HeaderAction>& _headerActions);

                    /**
                     * 判断参数 HeaderActions 是否已赋值
                     * @return HeaderActions 是否已赋值
                     * 
                     */
                    bool HeaderActionsHasBeenSet() const;

                private:

                    /**
                     * List of http header setting rules.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<HeaderAction> m_headerActions;
                    bool m_headerActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYREQUESTHEADERPARAMETERS_H_
