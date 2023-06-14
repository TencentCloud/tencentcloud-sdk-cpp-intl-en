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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_RESOURCECREATIONLIMITPOLICY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_RESOURCECREATIONLIMITPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Resource creation policy
                */
                class ResourceCreationLimitPolicy : public AbstractModel
                {
                public:
                    ResourceCreationLimitPolicy();
                    ~ResourceCreationLimitPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation quantity. Minimum value: 1. Default value: 2.
                     * @return NewGameServerSessionsPerCreator Creation quantity. Minimum value: 1. Default value: 2.
                     * 
                     */
                    uint64_t GetNewGameServerSessionsPerCreator() const;

                    /**
                     * 设置Creation quantity. Minimum value: 1. Default value: 2.
                     * @param _newGameServerSessionsPerCreator Creation quantity. Minimum value: 1. Default value: 2.
                     * 
                     */
                    void SetNewGameServerSessionsPerCreator(const uint64_t& _newGameServerSessionsPerCreator);

                    /**
                     * 判断参数 NewGameServerSessionsPerCreator 是否已赋值
                     * @return NewGameServerSessionsPerCreator 是否已赋值
                     * 
                     */
                    bool NewGameServerSessionsPerCreatorHasBeenSet() const;

                    /**
                     * 获取Unit time. Minimum value: 1. Default value: 3. Unit: minute.
                     * @return PolicyPeriodInMinutes Unit time. Minimum value: 1. Default value: 3. Unit: minute.
                     * 
                     */
                    uint64_t GetPolicyPeriodInMinutes() const;

                    /**
                     * 设置Unit time. Minimum value: 1. Default value: 3. Unit: minute.
                     * @param _policyPeriodInMinutes Unit time. Minimum value: 1. Default value: 3. Unit: minute.
                     * 
                     */
                    void SetPolicyPeriodInMinutes(const uint64_t& _policyPeriodInMinutes);

                    /**
                     * 判断参数 PolicyPeriodInMinutes 是否已赋值
                     * @return PolicyPeriodInMinutes 是否已赋值
                     * 
                     */
                    bool PolicyPeriodInMinutesHasBeenSet() const;

                private:

                    /**
                     * Creation quantity. Minimum value: 1. Default value: 2.
                     */
                    uint64_t m_newGameServerSessionsPerCreator;
                    bool m_newGameServerSessionsPerCreatorHasBeenSet;

                    /**
                     * Unit time. Minimum value: 1. Default value: 3. Unit: minute.
                     */
                    uint64_t m_policyPeriodInMinutes;
                    bool m_policyPeriodInMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_RESOURCECREATIONLIMITPOLICY_H_
