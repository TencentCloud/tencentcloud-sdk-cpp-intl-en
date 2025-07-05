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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_POINTINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_POINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/InputInfo.h>
#include <tencentcloud/mdp/v20200527/model/EndpointInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel input and output.
                */
                class PointInfo : public AbstractModel
                {
                public:
                    PointInfo();
                    ~PointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel input list.
                     * @return Inputs Channel input list.
                     * 
                     */
                    std::vector<InputInfo> GetInputs() const;

                    /**
                     * 设置Channel input list.
                     * @param _inputs Channel input list.
                     * 
                     */
                    void SetInputs(const std::vector<InputInfo>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取Channel output list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Endpoints Channel output list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EndpointInfo> GetEndpoints() const;

                    /**
                     * 设置Channel output list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endpoints Channel output list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndpoints(const std::vector<EndpointInfo>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                private:

                    /**
                     * Channel input list.
                     */
                    std::vector<InputInfo> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * Channel output list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EndpointInfo> m_endpoints;
                    bool m_endpointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_POINTINFO_H_
