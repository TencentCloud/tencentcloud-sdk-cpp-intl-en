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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_FLOWPARAM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_FLOWPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * FlowParam process parameters.
                */
                class FlowParam : public AbstractModel
                {
                public:
                    FlowParam();
                    ~FlowParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process parameter key.
TraceId: Query by TraceId.
FlowId: Query by FlowId.
                     * @return FKey Process parameter key.
TraceId: Query by TraceId.
FlowId: Query by FlowId.
                     * 
                     */
                    std::string GetFKey() const;

                    /**
                     * 设置Process parameter key.
TraceId: Query by TraceId.
FlowId: Query by FlowId.
                     * @param _fKey Process parameter key.
TraceId: Query by TraceId.
FlowId: Query by FlowId.
                     * 
                     */
                    void SetFKey(const std::string& _fKey);

                    /**
                     * 判断参数 FKey 是否已赋值
                     * @return FKey 是否已赋值
                     * 
                     */
                    bool FKeyHasBeenSet() const;

                    /**
                     * 获取Parameter value
                     * @return FValue Parameter value
                     * 
                     */
                    std::string GetFValue() const;

                    /**
                     * 设置Parameter value
                     * @param _fValue Parameter value
                     * 
                     */
                    void SetFValue(const std::string& _fValue);

                    /**
                     * 判断参数 FValue 是否已赋值
                     * @return FValue 是否已赋值
                     * 
                     */
                    bool FValueHasBeenSet() const;

                private:

                    /**
                     * Process parameter key.
TraceId: Query by TraceId.
FlowId: Query by FlowId.
                     */
                    std::string m_fKey;
                    bool m_fKeyHasBeenSet;

                    /**
                     * Parameter value
                     */
                    std::string m_fValue;
                    bool m_fValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_FLOWPARAM_H_
