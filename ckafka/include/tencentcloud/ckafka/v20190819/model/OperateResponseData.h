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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_OPERATERESPONSEDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_OPERATERESPONSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/RouteDTO.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Data structure returned by operation
                */
                class OperateResponseData : public AbstractModel
                {
                public:
                    OperateResponseData();
                    ~OperateResponseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取FlowId11
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FlowId FlowId11
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置FlowId11
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _flowId FlowId11
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取RouteIdDto Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteDTO RouteIdDto Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RouteDTO GetRouteDTO() const;

                    /**
                     * 设置RouteIdDto Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeDTO RouteIdDto Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteDTO(const RouteDTO& _routeDTO);

                    /**
                     * 判断参数 RouteDTO 是否已赋值
                     * @return RouteDTO 是否已赋值
                     * 
                     */
                    bool RouteDTOHasBeenSet() const;

                private:

                    /**
                     * FlowId11
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * RouteIdDto Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RouteDTO m_routeDTO;
                    bool m_routeDTOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_OPERATERESPONSEDATA_H_
