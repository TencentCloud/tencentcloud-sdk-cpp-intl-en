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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateInput.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * CreateStreamLinkFlow request structure.
                */
                class CreateStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkFlowRequest();
                    ~CreateStreamLinkFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Flow name
                     * @return FlowName Flow name
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置Flow name
                     * @param _flowName Flow name
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth in bps. Valid values: `10000000`, `20000000`, `50000000`
                     * @return MaxBandwidth Maximum bandwidth in bps. Valid values: `10000000`, `20000000`, `50000000`
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth in bps. Valid values: `10000000`, `20000000`, `50000000`
                     * @param _maxBandwidth Maximum bandwidth in bps. Valid values: `10000000`, `20000000`, `50000000`
                     * 
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取Flow input group
                     * @return InputGroup Flow input group
                     * 
                     */
                    std::vector<CreateInput> GetInputGroup() const;

                    /**
                     * 设置Flow input group
                     * @param _inputGroup Flow input group
                     * 
                     */
                    void SetInputGroup(const std::vector<CreateInput>& _inputGroup);

                    /**
                     * 判断参数 InputGroup 是否已赋值
                     * @return InputGroup 是否已赋值
                     * 
                     */
                    bool InputGroupHasBeenSet() const;

                    /**
                     * 获取The media transmission event ID associated with the Flow. Each flow can only be associated with one event.
                     * @return EventId The media transmission event ID associated with the Flow. Each flow can only be associated with one event.
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置The media transmission event ID associated with the Flow. Each flow can only be associated with one event.
                     * @param _eventId The media transmission event ID associated with the Flow. Each flow can only be associated with one event.
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * Flow name
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Maximum bandwidth in bps. Valid values: `10000000`, `20000000`, `50000000`
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * Flow input group
                     */
                    std::vector<CreateInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                    /**
                     * The media transmission event ID associated with the Flow. Each flow can only be associated with one event.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKFLOWREQUEST_H_
