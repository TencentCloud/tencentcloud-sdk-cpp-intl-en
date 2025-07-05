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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGERESPONSE_H_

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
                * CreateBandwidthPackage response structure.
                */
                class CreateBandwidthPackageResponse : public AbstractModel
                {
                public:
                    CreateBandwidthPackageResponse();
                    ~CreateBandwidthPackageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the bandwidth package.
                     * @return BandwidthPackageId The unique ID of the bandwidth package.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取The unique ID list of the bandwidth package (effective only when you apply for more than 1 bandwidth packages).
                     * @return BandwidthPackageIds The unique ID list of the bandwidth package (effective only when you apply for more than 1 bandwidth packages).
                     * 
                     */
                    std::vector<std::string> GetBandwidthPackageIds() const;

                    /**
                     * 判断参数 BandwidthPackageIds 是否已赋值
                     * @return BandwidthPackageIds 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdsHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the bandwidth package.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * The unique ID list of the bandwidth package (effective only when you apply for more than 1 bandwidth packages).
                     */
                    std::vector<std::string> m_bandwidthPackageIds;
                    bool m_bandwidthPackageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGERESPONSE_H_
