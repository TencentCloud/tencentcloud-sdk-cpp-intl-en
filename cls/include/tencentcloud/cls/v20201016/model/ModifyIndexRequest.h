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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyIndex request structure.
                */
                class ModifyIndexRequest : public AbstractModel
                {
                public:
                    ModifyIndexRequest();
                    ~ModifyIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取It does not take effect by default
                     * @return Status It does not take effect by default
                     */
                    bool GetStatus() const;

                    /**
                     * 设置It does not take effect by default
                     * @param Status It does not take effect by default
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Index rule. Either `Rule` or `Effective` must exist.
                     * @return Rule Index rule. Either `Rule` or `Effective` must exist.
                     */
                    RuleInfo GetRule() const;

                    /**
                     * 设置Index rule. Either `Rule` or `Effective` must exist.
                     * @param Rule Index rule. Either `Rule` or `Effective` must exist.
                     */
                    void SetRule(const RuleInfo& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * It does not take effect by default
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Index rule. Either `Rule` or `Effective` must exist.
                     */
                    RuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
