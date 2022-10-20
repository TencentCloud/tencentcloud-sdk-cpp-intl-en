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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSSPEEDLIMIT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSSPEEDLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The DDoS rate limits
                */
                class DDoSSpeedLimit : public AbstractModel
                {
                public:
                    DDoSSpeedLimit();
                    ~DDoSSpeedLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The limit on origin packet rate. Value range: 1 pps - 1000 Gpps. If 0 is passed, the packet rate will not be restricted.
                     * @return PackageLimit The limit on origin packet rate. Value range: 1 pps - 1000 Gpps. If 0 is passed, the packet rate will not be restricted.
                     */
                    std::string GetPackageLimit() const;

                    /**
                     * 设置The limit on origin packet rate. Value range: 1 pps - 1000 Gpps. If 0 is passed, the packet rate will not be restricted.
                     * @param PackageLimit The limit on origin packet rate. Value range: 1 pps - 1000 Gpps. If 0 is passed, the packet rate will not be restricted.
                     */
                    void SetPackageLimit(const std::string& _packageLimit);

                    /**
                     * 判断参数 PackageLimit 是否已赋值
                     * @return PackageLimit 是否已赋值
                     */
                    bool PackageLimitHasBeenSet() const;

                    /**
                     * 获取The limit on origin traffic rate. Value range: 1 bps - 10000 Gbps. If 0 is passed, the traffic rate will not be restricted.
                     * @return FluxLimit The limit on origin traffic rate. Value range: 1 bps - 10000 Gbps. If 0 is passed, the traffic rate will not be restricted.
                     */
                    std::string GetFluxLimit() const;

                    /**
                     * 设置The limit on origin traffic rate. Value range: 1 bps - 10000 Gbps. If 0 is passed, the traffic rate will not be restricted.
                     * @param FluxLimit The limit on origin traffic rate. Value range: 1 bps - 10000 Gbps. If 0 is passed, the traffic rate will not be restricted.
                     */
                    void SetFluxLimit(const std::string& _fluxLimit);

                    /**
                     * 判断参数 FluxLimit 是否已赋值
                     * @return FluxLimit 是否已赋值
                     */
                    bool FluxLimitHasBeenSet() const;

                private:

                    /**
                     * The limit on origin packet rate. Value range: 1 pps - 1000 Gpps. If 0 is passed, the packet rate will not be restricted.
                     */
                    std::string m_packageLimit;
                    bool m_packageLimitHasBeenSet;

                    /**
                     * The limit on origin traffic rate. Value range: 1 bps - 10000 Gbps. If 0 is passed, the traffic rate will not be restricted.
                     */
                    std::string m_fluxLimit;
                    bool m_fluxLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSSPEEDLIMIT_H_
