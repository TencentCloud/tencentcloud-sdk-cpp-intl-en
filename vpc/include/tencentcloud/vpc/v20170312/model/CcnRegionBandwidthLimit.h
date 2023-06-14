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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMIT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The outbound bandwidth cap of the CCN region
                */
                class CcnRegionBandwidthLimit : public AbstractModel
                {
                public:
                    CcnRegionBandwidthLimit();
                    ~CcnRegionBandwidthLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region, such as `ap-guangzhou`
                     * @return Region Region, such as `ap-guangzhou`
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region, such as `ap-guangzhou`
                     * @param _region Region, such as `ap-guangzhou`
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The outbound bandwidth cap. Units: Mbps
                     * @return BandwidthLimit The outbound bandwidth cap. Units: Mbps
                     * 
                     */
                    uint64_t GetBandwidthLimit() const;

                    /**
                     * 设置The outbound bandwidth cap. Units: Mbps
                     * @param _bandwidthLimit The outbound bandwidth cap. Units: Mbps
                     * 
                     */
                    void SetBandwidthLimit(const uint64_t& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取Whether it is a BM region. The default is `false`.
                     * @return IsBm Whether it is a BM region. The default is `false`.
                     * 
                     */
                    bool GetIsBm() const;

                    /**
                     * 设置Whether it is a BM region. The default is `false`.
                     * @param _isBm Whether it is a BM region. The default is `false`.
                     * 
                     */
                    void SetIsBm(const bool& _isBm);

                    /**
                     * 判断参数 IsBm 是否已赋值
                     * @return IsBm 是否已赋值
                     * 
                     */
                    bool IsBmHasBeenSet() const;

                    /**
                     * 获取The target region, such as `ap-shanghai`
Note: This field may return null, indicating no valid value.
                     * @return DstRegion The target region, such as `ap-shanghai`
Note: This field may return null, indicating no valid value.
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置The target region, such as `ap-shanghai`
Note: This field may return null, indicating no valid value.
                     * @param _dstRegion The target region, such as `ap-shanghai`
Note: This field may return null, indicating no valid value.
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取Whether the target region is a BM region. The default is `false`.
                     * @return DstIsBm Whether the target region is a BM region. The default is `false`.
                     * 
                     */
                    bool GetDstIsBm() const;

                    /**
                     * 设置Whether the target region is a BM region. The default is `false`.
                     * @param _dstIsBm Whether the target region is a BM region. The default is `false`.
                     * 
                     */
                    void SetDstIsBm(const bool& _dstIsBm);

                    /**
                     * 判断参数 DstIsBm 是否已赋值
                     * @return DstIsBm 是否已赋值
                     * 
                     */
                    bool DstIsBmHasBeenSet() const;

                private:

                    /**
                     * Region, such as `ap-guangzhou`
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The outbound bandwidth cap. Units: Mbps
                     */
                    uint64_t m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * Whether it is a BM region. The default is `false`.
                     */
                    bool m_isBm;
                    bool m_isBmHasBeenSet;

                    /**
                     * The target region, such as `ap-shanghai`
Note: This field may return null, indicating no valid value.
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * Whether the target region is a BM region. The default is `false`.
                     */
                    bool m_dstIsBm;
                    bool m_dstIsBmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMIT_H_
