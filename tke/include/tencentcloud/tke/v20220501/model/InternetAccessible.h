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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Public network bandwidth
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bandwidth
                     * @return MaxBandwidthOut Bandwidth
                     * 
                     */
                    int64_t GetMaxBandwidthOut() const;

                    /**
                     * 设置Bandwidth
                     * @param _maxBandwidthOut Bandwidth
                     * 
                     */
                    void SetMaxBandwidthOut(const int64_t& _maxBandwidthOut);

                    /**
                     * 判断参数 MaxBandwidthOut 是否已赋值
                     * @return MaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool MaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Network billing method
                     * @return ChargeType Network billing method
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Network billing method
                     * @param _chargeType Network billing method
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID
                     * @return BandwidthPackageId Bandwidth package ID
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID
                     * @param _bandwidthPackageId Bandwidth package ID
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
                     * Bandwidth
                     */
                    int64_t m_maxBandwidthOut;
                    bool m_maxBandwidthOutHasBeenSet;

                    /**
                     * Network billing method
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Bandwidth package ID
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INTERNETACCESSIBLE_H_
