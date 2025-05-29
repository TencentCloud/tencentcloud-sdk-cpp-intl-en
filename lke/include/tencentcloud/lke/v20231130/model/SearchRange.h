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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHRANGE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHRANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ApiVarAttrInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Retrieval range configuration.
                */
                class SearchRange : public AbstractModel
                {
                public:
                    SearchRange();
                    ~SearchRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Search criteria and/or.
                     * @return Condition Search criteria and/or.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Search criteria and/or.
                     * @param _condition Search criteria and/or.
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Custom variable and label relational data.
                     * @return ApiVarAttrInfos Custom variable and label relational data.
                     * 
                     */
                    std::vector<ApiVarAttrInfo> GetApiVarAttrInfos() const;

                    /**
                     * 设置Custom variable and label relational data.
                     * @param _apiVarAttrInfos Custom variable and label relational data.
                     * 
                     */
                    void SetApiVarAttrInfos(const std::vector<ApiVarAttrInfo>& _apiVarAttrInfos);

                    /**
                     * 判断参数 ApiVarAttrInfos 是否已赋值
                     * @return ApiVarAttrInfos 是否已赋值
                     * 
                     */
                    bool ApiVarAttrInfosHasBeenSet() const;

                private:

                    /**
                     * Search criteria and/or.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Custom variable and label relational data.
                     */
                    std::vector<ApiVarAttrInfo> m_apiVarAttrInfos;
                    bool m_apiVarAttrInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHRANGE_H_
