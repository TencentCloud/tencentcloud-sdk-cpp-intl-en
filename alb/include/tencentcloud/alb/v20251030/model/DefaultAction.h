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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DEFAULTACTION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DEFAULTACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Default rule action of the listener
                */
                class DefaultAction : public AbstractModel
                {
                public:
                    DefaultAction();
                    ~DefaultAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding target group configuration. When a listener is created, the target group configuration in the forwarding action enables only a single target group.
                     * @return TargetGroupConfig Forwarding target group configuration. When a listener is created, the target group configuration in the forwarding action enables only a single target group.
                     * 
                     */
                    TargetGroupConfig GetTargetGroupConfig() const;

                    /**
                     * 设置Forwarding target group configuration. When a listener is created, the target group configuration in the forwarding action enables only a single target group.
                     * @param _targetGroupConfig Forwarding target group configuration. When a listener is created, the target group configuration in the forwarding action enables only a single target group.
                     * 
                     */
                    void SetTargetGroupConfig(const TargetGroupConfig& _targetGroupConfig);

                    /**
                     * 判断参数 TargetGroupConfig 是否已赋值
                     * @return TargetGroupConfig 是否已赋值
                     * 
                     */
                    bool TargetGroupConfigHasBeenSet() const;

                    /**
                     * 获取Forward action type. When a listener is created, the default forward action type only supports forwarding to a target group.
                     * @return Type Forward action type. When a listener is created, the default forward action type only supports forwarding to a target group.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Forward action type. When a listener is created, the default forward action type only supports forwarding to a target group.
                     * @param _type Forward action type. When a listener is created, the default forward action type only supports forwarding to a target group.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Forwarding target group configuration. When a listener is created, the target group configuration in the forwarding action enables only a single target group.
                     */
                    TargetGroupConfig m_targetGroupConfig;
                    bool m_targetGroupConfigHasBeenSet;

                    /**
                     * Forward action type. When a listener is created, the default forward action type only supports forwarding to a target group.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DEFAULTACTION_H_
