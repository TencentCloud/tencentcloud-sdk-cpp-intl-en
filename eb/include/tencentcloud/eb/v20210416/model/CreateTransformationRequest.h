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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Transformation.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateTransformation request structure.
                */
                class CreateTransformationRequest : public AbstractModel
                {
                public:
                    CreateTransformationRequest();
                    ~CreateTransformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Transformation rule list (currently, only one is supported)
                     * @return Transformations Transformation rule list (currently, only one is supported)
                     * 
                     */
                    std::vector<Transformation> GetTransformations() const;

                    /**
                     * 设置Transformation rule list (currently, only one is supported)
                     * @param _transformations Transformation rule list (currently, only one is supported)
                     * 
                     */
                    void SetTransformations(const std::vector<Transformation>& _transformations);

                    /**
                     * 判断参数 Transformations 是否已赋值
                     * @return Transformations 是否已赋值
                     * 
                     */
                    bool TransformationsHasBeenSet() const;

                private:

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Transformation rule list (currently, only one is supported)
                     */
                    std::vector<Transformation> m_transformations;
                    bool m_transformationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONREQUEST_H_
