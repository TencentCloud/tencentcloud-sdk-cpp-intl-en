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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBandwidthPackageBandwidth request structure.
                */
                class ModifyBandwidthPackageBandwidthRequest : public AbstractModel
                {
                public:
                    ModifyBandwidthPackageBandwidthRequest();
                    ~ModifyBandwidthPackageBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Maximum bandwidth. Unit: Mbps. 
                     * @return InternetMaxBandwidth Maximum bandwidth. Unit: Mbps. 
                     * 
                     */
                    int64_t GetInternetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth. Unit: Mbps. 
                     * @param _internetMaxBandwidth Maximum bandwidth. Unit: Mbps. 
                     * 
                     */
                    void SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth);

                    /**
                     * 判断参数 InternetMaxBandwidth 是否已赋值
                     * @return InternetMaxBandwidth 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID.
                     * @return BandwidthPackageId Bandwidth package ID.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID.
                     * @param _bandwidthPackageId Bandwidth package ID.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                private:

                    /**
                     * Maximum bandwidth. Unit: Mbps. 
                     */
                    int64_t m_internetMaxBandwidth;
                    bool m_internetMaxBandwidthHasBeenSet;

                    /**
                     * Bandwidth package ID.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEBANDWIDTHREQUEST_H_
