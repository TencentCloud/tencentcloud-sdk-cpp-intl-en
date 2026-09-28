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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULEACTION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/FixedResponseInfo.h>
#include <tencentcloud/alb/v20251030/model/InsertHTTPHeaderInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPRedirectInfo.h>
#include <tencentcloud/alb/v20251030/model/RemoveHTTPHeaderInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPRewriteInfo.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Rule action for forwarding
                */
                class RuleAction : public AbstractModel
                {
                public:
                    RuleAction();
                    ~RuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forward action execution sequence. Must be unique and in ascending order. Value range: 1-50000.
                     * @return Order Forward action execution sequence. Must be unique and in ascending order. Value range: 1-50000.
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Forward action execution sequence. Must be unique and in ascending order. Value range: 1-50000.
                     * @param _order Forward action execution sequence. Must be unique and in ascending order. Value range: 1-50000.
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Forwarding action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to HTTP Header.
RemoveHeader: Delete HTTP Header.
The forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order must be placed last.
                     * @return Type Forwarding action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to HTTP Header.
RemoveHeader: Delete HTTP Header.
The forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order must be placed last.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Forwarding action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to HTTP Header.
RemoveHeader: Delete HTTP Header.
The forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order must be placed last.
                     * @param _type Forwarding action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to HTTP Header.
RemoveHeader: Delete HTTP Header.
The forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order must be placed last.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Fixed response content configuration.
                     * @return FixedResponseConfig Fixed response content configuration.
                     * 
                     */
                    FixedResponseInfo GetFixedResponseConfig() const;

                    /**
                     * 设置Fixed response content configuration.
                     * @param _fixedResponseConfig Fixed response content configuration.
                     * 
                     */
                    void SetFixedResponseConfig(const FixedResponseInfo& _fixedResponseConfig);

                    /**
                     * 判断参数 FixedResponseConfig 是否已赋值
                     * @return FixedResponseConfig 是否已赋值
                     * 
                     */
                    bool FixedResponseConfigHasBeenSet() const;

                    /**
                     * 获取Insert HTTP Header configuration.
                     * @return InsertHeaderConfig Insert HTTP Header configuration.
                     * 
                     */
                    InsertHTTPHeaderInfo GetInsertHeaderConfig() const;

                    /**
                     * 设置Insert HTTP Header configuration.
                     * @param _insertHeaderConfig Insert HTTP Header configuration.
                     * 
                     */
                    void SetInsertHeaderConfig(const InsertHTTPHeaderInfo& _insertHeaderConfig);

                    /**
                     * 判断参数 InsertHeaderConfig 是否已赋值
                     * @return InsertHeaderConfig 是否已赋值
                     * 
                     */
                    bool InsertHeaderConfigHasBeenSet() const;

                    /**
                     * 获取Redirection configuration. Except for HttpCode, other configuration cannot all use default values.
                     * @return RedirectConfig Redirection configuration. Except for HttpCode, other configuration cannot all use default values.
                     * 
                     */
                    HTTPRedirectInfo GetRedirectConfig() const;

                    /**
                     * 设置Redirection configuration. Except for HttpCode, other configuration cannot all use default values.
                     * @param _redirectConfig Redirection configuration. Except for HttpCode, other configuration cannot all use default values.
                     * 
                     */
                    void SetRedirectConfig(const HTTPRedirectInfo& _redirectConfig);

                    /**
                     * 判断参数 RedirectConfig 是否已赋值
                     * @return RedirectConfig 是否已赋值
                     * 
                     */
                    bool RedirectConfigHasBeenSet() const;

                    /**
                     * 获取Delete HTTP Header configuration.
                     * @return RemoveHeaderConfig Delete HTTP Header configuration.
                     * 
                     */
                    RemoveHTTPHeaderInfo GetRemoveHeaderConfig() const;

                    /**
                     * 设置Delete HTTP Header configuration.
                     * @param _removeHeaderConfig Delete HTTP Header configuration.
                     * 
                     */
                    void SetRemoveHeaderConfig(const RemoveHTTPHeaderInfo& _removeHeaderConfig);

                    /**
                     * 判断参数 RemoveHeaderConfig 是否已赋值
                     * @return RemoveHeaderConfig 是否已赋值
                     * 
                     */
                    bool RemoveHeaderConfigHasBeenSet() const;

                    /**
                     * 获取Rewrite the configuration.
                     * @return RewriteConfig Rewrite the configuration.
                     * 
                     */
                    HTTPRewriteInfo GetRewriteConfig() const;

                    /**
                     * 设置Rewrite the configuration.
                     * @param _rewriteConfig Rewrite the configuration.
                     * 
                     */
                    void SetRewriteConfig(const HTTPRewriteInfo& _rewriteConfig);

                    /**
                     * 判断参数 RewriteConfig 是否已赋值
                     * @return RewriteConfig 是否已赋值
                     * 
                     */
                    bool RewriteConfigHasBeenSet() const;

                    /**
                     * 获取Forwarding target group configuration.
                     * @return TargetGroupConfig Forwarding target group configuration.
                     * 
                     */
                    TargetGroupConfig GetTargetGroupConfig() const;

                    /**
                     * 设置Forwarding target group configuration.
                     * @param _targetGroupConfig Forwarding target group configuration.
                     * 
                     */
                    void SetTargetGroupConfig(const TargetGroupConfig& _targetGroupConfig);

                    /**
                     * 判断参数 TargetGroupConfig 是否已赋值
                     * @return TargetGroupConfig 是否已赋值
                     * 
                     */
                    bool TargetGroupConfigHasBeenSet() const;

                private:

                    /**
                     * Forward action execution sequence. Must be unique and in ascending order. Value range: 1-50000.
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Forwarding action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to HTTP Header.
RemoveHeader: Delete HTTP Header.
The forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order must be placed last.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Fixed response content configuration.
                     */
                    FixedResponseInfo m_fixedResponseConfig;
                    bool m_fixedResponseConfigHasBeenSet;

                    /**
                     * Insert HTTP Header configuration.
                     */
                    InsertHTTPHeaderInfo m_insertHeaderConfig;
                    bool m_insertHeaderConfigHasBeenSet;

                    /**
                     * Redirection configuration. Except for HttpCode, other configuration cannot all use default values.
                     */
                    HTTPRedirectInfo m_redirectConfig;
                    bool m_redirectConfigHasBeenSet;

                    /**
                     * Delete HTTP Header configuration.
                     */
                    RemoveHTTPHeaderInfo m_removeHeaderConfig;
                    bool m_removeHeaderConfigHasBeenSet;

                    /**
                     * Rewrite the configuration.
                     */
                    HTTPRewriteInfo m_rewriteConfig;
                    bool m_rewriteConfigHasBeenSet;

                    /**
                     * Forwarding target group configuration.
                     */
                    TargetGroupConfig m_targetGroupConfig;
                    bool m_targetGroupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULEACTION_H_
