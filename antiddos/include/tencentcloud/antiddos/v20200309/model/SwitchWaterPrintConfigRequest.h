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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SWITCHWATERPRINTCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SWITCHWATERPRINTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * SwitchWaterPrintConfig request structure.
                */
                class SwitchWaterPrintConfigRequest : public AbstractModel
                {
                public:
                    SwitchWaterPrintConfigRequest();
                    ~SwitchWaterPrintConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS instance ID
                     * @return InstanceId Anti-DDoS instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param InstanceId Anti-DDoS instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Watermark status. `1`: enabled; `0`: disabled.
                     * @return OpenStatus Watermark status. `1`: enabled; `0`: disabled.
                     */
                    int64_t GetOpenStatus() const;

                    /**
                     * 设置Watermark status. `1`: enabled; `0`: disabled.
                     * @param OpenStatus Watermark status. `1`: enabled; `0`: disabled.
                     */
                    void SetOpenStatus(const int64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     */
                    bool OpenStatusHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Watermark status. `1`: enabled; `0`: disabled.
                     */
                    int64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SWITCHWATERPRINTCONFIGREQUEST_H_
