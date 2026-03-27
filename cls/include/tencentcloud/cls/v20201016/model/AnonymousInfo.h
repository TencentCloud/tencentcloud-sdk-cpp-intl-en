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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConditionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Authentication-free information
                */
                class AnonymousInfo : public AbstractModel
                {
                public:
                    AnonymousInfo();
                    ~AnonymousInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation list supports trackLog (JS/HTTP log upload) and realtimeProducer (kafka protocol log upload).
                     * @return Operations Operation list supports trackLog (JS/HTTP log upload) and realtimeProducer (kafka protocol log upload).
                     * 
                     */
                    std::vector<std::string> GetOperations() const;

                    /**
                     * 设置Operation list supports trackLog (JS/HTTP log upload) and realtimeProducer (kafka protocol log upload).
                     * @param _operations Operation list supports trackLog (JS/HTTP log upload) and realtimeProducer (kafka protocol log upload).
                     * 
                     */
                    void SetOperations(const std::vector<std::string>& _operations);

                    /**
                     * 判断参数 Operations 是否已赋值
                     * @return Operations 是否已赋值
                     * 
                     */
                    bool OperationsHasBeenSet() const;

                    /**
                     * 获取Condition list
                     * @return Conditions Condition list
                     * 
                     */
                    std::vector<ConditionInfo> GetConditions() const;

                    /**
                     * 设置Condition list
                     * @param _conditions Condition list
                     * 
                     */
                    void SetConditions(const std::vector<ConditionInfo>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * Operation list supports trackLog (JS/HTTP log upload) and realtimeProducer (kafka protocol log upload).
                     */
                    std::vector<std::string> m_operations;
                    bool m_operationsHasBeenSet;

                    /**
                     * Condition list
                     */
                    std::vector<ConditionInfo> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSINFO_H_
