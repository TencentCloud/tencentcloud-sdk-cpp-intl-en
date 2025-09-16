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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICELIMIT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Configurations related to throttling and speed limit of services.
                */
                class ServiceLimit : public AbstractModel
                {
                public:
                    ServiceLimit();
                    ~ServiceLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable throttling and speed limit at the instance level. Valid values: true and false. If the value is true, InstanceRpsLimit is required. If the value is false, InstanceRpsLimit does not take effect.
                     * @return EnableInstanceRpsLimit Whether to enable throttling and speed limit at the instance level. Valid values: true and false. If the value is true, InstanceRpsLimit is required. If the value is false, InstanceRpsLimit does not take effect.
                     * 
                     */
                    bool GetEnableInstanceRpsLimit() const;

                    /**
                     * 设置Whether to enable throttling and speed limit at the instance level. Valid values: true and false. If the value is true, InstanceRpsLimit is required. If the value is false, InstanceRpsLimit does not take effect.
                     * @param _enableInstanceRpsLimit Whether to enable throttling and speed limit at the instance level. Valid values: true and false. If the value is true, InstanceRpsLimit is required. If the value is false, InstanceRpsLimit does not take effect.
                     * 
                     */
                    void SetEnableInstanceRpsLimit(const bool& _enableInstanceRpsLimit);

                    /**
                     * 判断参数 EnableInstanceRpsLimit 是否已赋值
                     * @return EnableInstanceRpsLimit 是否已赋值
                     * 
                     */
                    bool EnableInstanceRpsLimitHasBeenSet() const;

                    /**
                     * 获取Speed limit for the requests per second (RPS) of each service instance. 0 indicates no throttling.
                     * @return InstanceRpsLimit Speed limit for the requests per second (RPS) of each service instance. 0 indicates no throttling.
                     * 
                     */
                    int64_t GetInstanceRpsLimit() const;

                    /**
                     * 设置Speed limit for the requests per second (RPS) of each service instance. 0 indicates no throttling.
                     * @param _instanceRpsLimit Speed limit for the requests per second (RPS) of each service instance. 0 indicates no throttling.
                     * 
                     */
                    void SetInstanceRpsLimit(const int64_t& _instanceRpsLimit);

                    /**
                     * 判断参数 InstanceRpsLimit 是否已赋值
                     * @return InstanceRpsLimit 是否已赋值
                     * 
                     */
                    bool InstanceRpsLimitHasBeenSet() const;

                    /**
                     * 获取Whether to enable the maximum concurrency quantity limit for a single instance. Valid values: true and false. If the value is true, InstanceReqLimit is required. If the value is false, InstanceReqLimit does not take effect.
                     * @return EnableInstanceReqLimit Whether to enable the maximum concurrency quantity limit for a single instance. Valid values: true and false. If the value is true, InstanceReqLimit is required. If the value is false, InstanceReqLimit does not take effect.
                     * 
                     */
                    bool GetEnableInstanceReqLimit() const;

                    /**
                     * 设置Whether to enable the maximum concurrency quantity limit for a single instance. Valid values: true and false. If the value is true, InstanceReqLimit is required. If the value is false, InstanceReqLimit does not take effect.
                     * @param _enableInstanceReqLimit Whether to enable the maximum concurrency quantity limit for a single instance. Valid values: true and false. If the value is true, InstanceReqLimit is required. If the value is false, InstanceReqLimit does not take effect.
                     * 
                     */
                    void SetEnableInstanceReqLimit(const bool& _enableInstanceReqLimit);

                    /**
                     * 判断参数 EnableInstanceReqLimit 是否已赋值
                     * @return EnableInstanceReqLimit 是否已赋值
                     * 
                     */
                    bool EnableInstanceReqLimitHasBeenSet() const;

                    /**
                     * 获取Maximum concurrency for each service instance.
                     * @return InstanceReqLimit Maximum concurrency for each service instance.
                     * 
                     */
                    int64_t GetInstanceReqLimit() const;

                    /**
                     * 设置Maximum concurrency for each service instance.
                     * @param _instanceReqLimit Maximum concurrency for each service instance.
                     * 
                     */
                    void SetInstanceReqLimit(const int64_t& _instanceReqLimit);

                    /**
                     * 判断参数 InstanceReqLimit 是否已赋值
                     * @return InstanceReqLimit 是否已赋值
                     * 
                     */
                    bool InstanceReqLimitHasBeenSet() const;

                private:

                    /**
                     * Whether to enable throttling and speed limit at the instance level. Valid values: true and false. If the value is true, InstanceRpsLimit is required. If the value is false, InstanceRpsLimit does not take effect.
                     */
                    bool m_enableInstanceRpsLimit;
                    bool m_enableInstanceRpsLimitHasBeenSet;

                    /**
                     * Speed limit for the requests per second (RPS) of each service instance. 0 indicates no throttling.
                     */
                    int64_t m_instanceRpsLimit;
                    bool m_instanceRpsLimitHasBeenSet;

                    /**
                     * Whether to enable the maximum concurrency quantity limit for a single instance. Valid values: true and false. If the value is true, InstanceReqLimit is required. If the value is false, InstanceReqLimit does not take effect.
                     */
                    bool m_enableInstanceReqLimit;
                    bool m_enableInstanceReqLimitHasBeenSet;

                    /**
                     * Maximum concurrency for each service instance.
                     */
                    int64_t m_instanceReqLimit;
                    bool m_instanceReqLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICELIMIT_H_
