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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_ENABLEAPPLICATIONAUTOSCALERREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_ENABLEAPPLICATIONAUTOSCALERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * EnableApplicationAutoscaler request structure.
                */
                class EnableApplicationAutoscalerRequest : public AbstractModel
                {
                public:
                    EnableApplicationAutoscalerRequest();
                    ~EnableApplicationAutoscalerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ApplicationId Service ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Service ID
                     * @param ApplicationId Service ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param EnvironmentId Environment ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Source channel. Please keep the default value.
                     * @return SourceChannel Source channel. Please keep the default value.
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel. Please keep the default value.
                     * @param SourceChannel Source channel. Please keep the default value.
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Scaling rule ID
                     * @return AutoscalerId Scaling rule ID
                     */
                    std::string GetAutoscalerId() const;

                    /**
                     * 设置Scaling rule ID
                     * @param AutoscalerId Scaling rule ID
                     */
                    void SetAutoscalerId(const std::string& _autoscalerId);

                    /**
                     * 判断参数 AutoscalerId 是否已赋值
                     * @return AutoscalerId 是否已赋值
                     */
                    bool AutoscalerIdHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Source channel. Please keep the default value.
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Scaling rule ID
                     */
                    std::string m_autoscalerId;
                    bool m_autoscalerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_ENABLEAPPLICATIONAUTOSCALERREQUEST_H_