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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECONFIGRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/NetworkStorageRange.h>
#include <tencentcloud/ecm/v20190719/model/InstanceNetworkLimitConfig.h>
#include <tencentcloud/ecm/v20190719/model/ImageLimitConfig.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeConfig response structure.
                */
                class DescribeConfigResponse : public AbstractModel
                {
                public:
                    DescribeConfigResponse();
                    ~DescribeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Range of the network bandwidth disk size.
                     * @return NetworkStorageRange Range of the network bandwidth disk size.
                     * 
                     */
                    NetworkStorageRange GetNetworkStorageRange() const;

                    /**
                     * 判断参数 NetworkStorageRange 是否已赋值
                     * @return NetworkStorageRange 是否已赋值
                     * 
                     */
                    bool NetworkStorageRangeHasBeenSet() const;

                    /**
                     * 获取Image OS allowlist.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageWhiteSet Image OS allowlist.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetImageWhiteSet() const;

                    /**
                     * 判断参数 ImageWhiteSet 是否已赋值
                     * @return ImageWhiteSet 是否已赋值
                     * 
                     */
                    bool ImageWhiteSetHasBeenSet() const;

                    /**
                     * 获取Network quota information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceNetworkLimitConfigs Network quota information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceNetworkLimitConfig> GetInstanceNetworkLimitConfigs() const;

                    /**
                     * 判断参数 InstanceNetworkLimitConfigs 是否已赋值
                     * @return InstanceNetworkLimitConfigs 是否已赋值
                     * 
                     */
                    bool InstanceNetworkLimitConfigsHasBeenSet() const;

                    /**
                     * 获取Image quota information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageLimits Image quota information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageLimitConfig GetImageLimits() const;

                    /**
                     * 判断参数 ImageLimits 是否已赋值
                     * @return ImageLimits 是否已赋值
                     * 
                     */
                    bool ImageLimitsHasBeenSet() const;

                    /**
                     * 获取Default IP direct access, used in scenarios with direct access parameters such as module creation and virtual machine purchase.
                     * @return DefaultIPDirect Default IP direct access, used in scenarios with direct access parameters such as module creation and virtual machine purchase.
                     * 
                     */
                    bool GetDefaultIPDirect() const;

                    /**
                     * 判断参数 DefaultIPDirect 是否已赋值
                     * @return DefaultIPDirect 是否已赋值
                     * 
                     */
                    bool DefaultIPDirectHasBeenSet() const;

                private:

                    /**
                     * Range of the network bandwidth disk size.
                     */
                    NetworkStorageRange m_networkStorageRange;
                    bool m_networkStorageRangeHasBeenSet;

                    /**
                     * Image OS allowlist.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_imageWhiteSet;
                    bool m_imageWhiteSetHasBeenSet;

                    /**
                     * Network quota information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceNetworkLimitConfig> m_instanceNetworkLimitConfigs;
                    bool m_instanceNetworkLimitConfigsHasBeenSet;

                    /**
                     * Image quota information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ImageLimitConfig m_imageLimits;
                    bool m_imageLimitsHasBeenSet;

                    /**
                     * Default IP direct access, used in scenarios with direct access parameters such as module creation and virtual machine purchase.
                     */
                    bool m_defaultIPDirect;
                    bool m_defaultIPDirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECONFIGRESPONSE_H_
