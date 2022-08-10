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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONDITION_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Condition that makes up an access control rule
                */
                class ACLCondition : public AbstractModel
                {
                public:
                    ACLCondition();
                    ~ACLCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field to match
                     * @return MatchFrom Field to match
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置Field to match
                     * @param MatchFrom Field to match
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取String to match
                     * @return MatchParam String to match
                     */
                    std::string GetMatchParam() const;

                    /**
                     * 设置String to match
                     * @param MatchParam String to match
                     */
                    void SetMatchParam(const std::string& _matchParam);

                    /**
                     * 判断参数 MatchParam 是否已赋值
                     * @return MatchParam 是否已赋值
                     */
                    bool MatchParamHasBeenSet() const;

                    /**
                     * 获取Relation between the field and content
                     * @return Operator Relation between the field and content
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Relation between the field and content
                     * @param Operator Relation between the field and content
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Content to match
                     * @return MatchContent Content to match
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Content to match
                     * @param MatchContent Content to match
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * Field to match
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * String to match
                     */
                    std::string m_matchParam;
                    bool m_matchParamHasBeenSet;

                    /**
                     * Relation between the field and content
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Content to match
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONDITION_H_
