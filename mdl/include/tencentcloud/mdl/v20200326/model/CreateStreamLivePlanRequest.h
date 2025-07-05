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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEPLANREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/PlanReq.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateStreamLivePlan request structure.
                */
                class CreateStreamLivePlanRequest : public AbstractModel
                {
                public:
                    CreateStreamLivePlanRequest();
                    ~CreateStreamLivePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the channel for which you want to configure an event
                     * @return ChannelId ID of the channel for which you want to configure an event
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置ID of the channel for which you want to configure an event
                     * @param _channelId ID of the channel for which you want to configure an event
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Event configuration
                     * @return Plan Event configuration
                     * 
                     */
                    PlanReq GetPlan() const;

                    /**
                     * 设置Event configuration
                     * @param _plan Event configuration
                     * 
                     */
                    void SetPlan(const PlanReq& _plan);

                    /**
                     * 判断参数 Plan 是否已赋值
                     * @return Plan 是否已赋值
                     * 
                     */
                    bool PlanHasBeenSet() const;

                private:

                    /**
                     * ID of the channel for which you want to configure an event
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Event configuration
                     */
                    PlanReq m_plan;
                    bool m_planHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEPLANREQUEST_H_
